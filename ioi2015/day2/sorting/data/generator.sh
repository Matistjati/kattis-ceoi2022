#!/usr/bin/env bash

REQUIRE_SAMPLE_REUSE=0
PPATH=$(realpath ..)
. ../../testdata_tools/gen.sh

ulimit -s unlimited

use_solution sol.cpp

MAXN=200000


samplegroup
limits maxn=10 subtask=0
sample 1
sample 2


group group1 8
limits maxn=5 subtask=1
tc_manual ../manual_tests/subtaska/01a
tc_manual ../manual_tests/subtaska/02a
tc_manual ../manual_tests/subtaska/03a
tc_manual ../manual_tests/subtaska/04a
tc_manual ../manual_tests/subtaska/05a
tc_manual ../manual_tests/subtaska/06a
tc_manual ../manual_tests/subtaska/07a

group group2 12
limits maxn=100 subtask=1
tc_manual ../manual_tests/subtaskb/01b
tc_manual ../manual_tests/subtaskb/02b
tc_manual ../manual_tests/subtaskb/03b
tc_manual ../manual_tests/subtaskb/04b
tc_manual ../manual_tests/subtaskb/05b

