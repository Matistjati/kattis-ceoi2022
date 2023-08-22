general = {"score_mode": "max", "submission_format": ["horses.%l"]}
sources = ["grader.cpp", "grader.c", "grader.pas", "grader.java", "horses.h"]
validator = ["validator_algiz.cpp", "validator.cpp"]
datasets = {"tests":{"score_type": "GroupMin", "time_limit" : 1.5, "memory_limit" : 1500, "score_type_parameters": [
    {
        "points": 17,
        "testcases": [
            [1, 20]
        ]
    },
    {
        "points": 17,
        "testcases": [
            [1, 32]
        ]
    },
    {
        "points": 20,
        "testcases": [
            [33, 36]
        ]
    },
    {
        "points": 23,
        "testcases": [
            [1, 32],[37, 48]
        ]
    },
    {
    	   "points": 23,
        "testcases": [
            [1, 59]
        ]
    }
]}}