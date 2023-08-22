#include "validator.h"

void run() {
	int c = (int)Int(1,6);
	assert(c==(int)Arg("case"));
	Space();
	int numcases = Int(1,40);
	Endl();
	for (int tc=0;tc<numcases;tc++)
	{
		int N = Int(6, 110);
		Endl();
		for (int i= 0;i<N;i++)
		{
			for (int j = 0; j<N;j++)
			{
				Int(0,int(1e6));
				if (j!=N-1) Space();
			}
			Endl();
		}

	}
	Eof();
}
