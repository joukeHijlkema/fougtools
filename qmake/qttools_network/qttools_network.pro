include(../config.pri)
CONFIG += dll
include(../../src/qttools/network/build_qttools_network.pri)

qttools_network_include.path  = $$QTTOOLS_INC_PATH/qttools/network
qttools_network_include.files = ../../src/qttools/network/*.h
target.path = $$QTTOOLS_LIB_PATH
INSTALLS += qttools_network_include target
