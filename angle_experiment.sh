#!/bin/bash
DATADIR="/nfs/02/ksu0236/mvarga/LCEOUT"
[ -d $DATADIR ] || mkdir $DATADIR
cd $DATADIR

for p in 90 85 80 75 70 65 60 55 50
do
	qsub -v datadir=$DATADIR,phi=${p},smax=0,smin=-1.0,sqh=0.1,sql=0.925,out=planartop_phi${p} ~/mvarga/LCEFE/myscript.job
	qsub -v datadir=$DATADIR,flags=--homeotop,phi=${p},smax=0,smin=-1.0,sqh=0.05,sql=0.99,out=homeotop_phi${p} ~/mvarga/LCEFE/myscript.job
done
