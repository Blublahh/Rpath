 
library(Rpath)
 
Ebase <- "data/EBS_andre_base.csv"
Ediet <- "data/EBS_andre_diet.csv"
Eped  <- "data/EBS_andre_ped.csv"
Ejuv  <- "data/EBS_andre_juvs.csv"

EBS   <- ecopath(Ebase, Ediet, Eped, eco.name = 'Eastern Bering')
ERUN  <- ecosim.init(EBS,Ejuv)

require(microbenchmark)
ecotest(ERUN,1,1,1)


microbenchmark(ecotest(ERUN,1,1,1),times=10000L)

#EBS_0 <- ecosim.init(EBS,Ejuv,YEARS=100)
Estate <- ecosim.state(Epar) #optional argument for state  #return Rpath.sim.state
Eforce <- ecosim.forcing(Epar) #optional argument for forcing  #return Rpath.sim.forcing

Erun   <- ecosim.run1(Epar,Estate,Eforce,)
