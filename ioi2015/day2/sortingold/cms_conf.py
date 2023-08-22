general = {"score_mode": "max"}
sources = ["grader.pas", "grader.c", "grader.cpp", "grader.java", "sorting.h"]
datasets = {"primary":{"time_limit" : 1.0, "memory_limit": 1500,"score_type": "GroupMin", "score_type_parameters": [
    {
        "points": 8,
        "polygon_testset": "Subtaska"
    },
    {
        "points": 12,
        "polygon_testset": "Subtaskb"
    },
    {
        "points": 16,
        "polygon_testset": "Subtaskc"
    },
    {
        "points": 18,
        "polygon_testset": "Subtaskd",
        "subtasks": [2, 3]
    },
    {
        "points": 20,
        "polygon_testset": "Subtaske"
    },
    {
        "points": 26,
        "polygon_testset": "Subtaskf",
        "subtasks": [5]
    }
]}}
