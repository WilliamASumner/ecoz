file kmeans
set disable-randomization off
set exec-wrapper env 'LD_PRELOAD=$LD_PRELOAD:/home/odroid/ecoz/libcoz/libcoz.so'
set environment COZ_BINARY_SCOPE MAIN
set environment COZ_SOURCE_SCOPE %
set environment COZ_OUTPUT ./profile.coz

set args -d 3 -c 100 -p 100000 -s 1000
