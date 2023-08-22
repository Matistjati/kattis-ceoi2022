#!/usr/bin/env bash

PPATH=$(realpath ..)
. ../../testdata_tools/gen.sh

ulimit -s unlimited

use_solution sol.cpp

samplegroup
limits maxn=10 maxm=10
sample 1

group group1 17
limits maxn=10 maxm=0 maxv=10
tc_manual ../manual_tests/01
tc_manual ../manual_tests/02
tc_manual ../manual_tests/03
tc_manual ../manual_tests/04
tc_manual ../manual_tests/05
tc_manual ../manual_tests/06
tc_manual ../manual_tests/07
tc_manual ../manual_tests/08
tc_manual ../manual_tests/09
tc_manual ../manual_tests/10
tc_manual ../manual_tests/11
tc_manual ../manual_tests/12
tc_manual ../manual_tests/13
tc_manual ../manual_tests/14
tc_manual ../manual_tests/15
tc_manual ../manual_tests/16
tc_manual ../manual_tests/17
tc_manual ../manual_tests/18
tc_manual ../manual_tests/19
tc_manual ../manual_tests/20

group group2 17
include_group group1
limits maxn=1000 maxm=1000
tc 1
tc_manual ../manual_tests/21
tc_manual ../manual_tests/22
tc_manual ../manual_tests/23
tc_manual ../manual_tests/24
tc_manual ../manual_tests/25
tc_manual ../manual_tests/26
tc_manual ../manual_tests/27
tc_manual ../manual_tests/28
tc_manual ../manual_tests/29
tc_manual ../manual_tests/30
tc_manual ../manual_tests/31
tc_manual ../manual_tests/32

group group3 20
limits maxn=500000 maxm=100000 minx=2
tc_manual ../manual_tests/33
tc_manual ../manual_tests/34
tc_manual ../manual_tests/35
tc_manual ../manual_tests/36

group group4 23
include_group group2
limits maxn=500000 maxm=10000
tc_manual ../manual_tests/37
tc_manual ../manual_tests/38
tc_manual ../manual_tests/39
tc_manual ../manual_tests/40
tc_manual ../manual_tests/41
tc_manual ../manual_tests/42
tc_manual ../manual_tests/43
tc_manual ../manual_tests/44
tc_manual ../manual_tests/45
tc_manual ../manual_tests/46
tc_manual ../manual_tests/47
tc_manual ../manual_tests/48

group group5 23
include_group group3
include_group group4
limits maxn=500000 maxm=100000
tc_manual ../manual_tests/49
tc_manual ../manual_tests/50
tc_manual ../manual_tests/51
tc_manual ../manual_tests/52
tc_manual ../manual_tests/53
tc_manual ../manual_tests/54
tc_manual ../manual_tests/55
tc_manual ../manual_tests/56
tc_manual ../manual_tests/57
tc_manual ../manual_tests/58
tc_manual ../manual_tests/59
