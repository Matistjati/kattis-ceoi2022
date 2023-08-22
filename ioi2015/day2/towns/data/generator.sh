#!/usr/bin/env bash

PPATH=$(realpath ..)
. ../../testdata_tools/gen.sh

ulimit -s unlimited

use_solution sol.cpp


group group1 13
limits case=1
tc_manual ../manual_tests/subtask_1/01a
tc_manual ../manual_tests/subtask_1/02a
tc_manual ../manual_tests/subtask_1/03a
tc_manual ../manual_tests/subtask_1/04a
tc_manual ../manual_tests/subtask_1/05a

group group2 12
limits case=2
tc_manual ../manual_tests/subtask_2/01b
tc_manual ../manual_tests/subtask_2/02b
tc_manual ../manual_tests/subtask_2/03b
tc_manual ../manual_tests/subtask_2/04b

group group3 13
limits case=3
tc_manual ../manual_tests/subtask_3/01c
tc_manual ../manual_tests/subtask_3/02c
tc_manual ../manual_tests/subtask_3/03c
tc_manual ../manual_tests/subtask_3/04c

group group4 10
limits case=4
tc_manual ../manual_tests/subtask_4/01d

group group5 13
limits case=5
tc_manual ../manual_tests/subtask_5/01e
tc_manual ../manual_tests/subtask_5/02e
tc_manual ../manual_tests/subtask_5/03e

group group6 39
limits case=6
tc_manual ../manual_tests/subtask_6/01f
tc_manual ../manual_tests/subtask_6/02f
tc_manual ../manual_tests/subtask_6/03f
