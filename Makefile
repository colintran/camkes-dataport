TARGETS := $(notdir ${SOURCE_DIR}).cdl
ADL := dataport2.camkes

Master_CFILES := components/Master/src/master.c
Master_HFILES := components/Master/include/mytype.h

Slave_CFILES := components/Slave/src/slave.c
Slave_HFILES := components/Slave/include/mytype.h

include ${SOURCE_DIR}/../../tools/camkes/camkes.mk
