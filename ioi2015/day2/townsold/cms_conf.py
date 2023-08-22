sources = ["grader.c", "grader.cpp", "graderlib.c", "grader.pas", "graderlib.pas", "towns.h", "grader.java"]
general = {"score_mode": "max", "submission_format": ["towns.%l"]}
datasets = {"tests":{"time_limit" : 1.0, "memory_limit" : 1500, "score_type": "GroupMin", "score_type_parameters": [
    {
        "points": 13,
        "polygon_testset": "Subtask_1",
    },
    {
        "points": 12,
        "polygon_testset": "Subtask_2",
        "subtasks": [1]
    },
    {
        "points": 13,
        "polygon_testset": "Subtask_3",
        "subtasks": [1]
    },
    {
        "points": 10,
        "polygon_testset": "Subtask_4"
    },
    {
        "points": 13,
        "polygon_testset": "Subtask_5",
        "subtasks": [1, 3]
    },
    {
        "points": 39,
        "polygon_testset": "Subtask_6",
        "subtasks": [1, 2, 3, 4, 5]
    }
]}}