/*
Copyright 2007-2016, Michael R. Hoopmann, Institute for Systems Biology
Michael J. MacCoss, University of Washington

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef _CHARDKLOROUTPUT_H
#define	_CHARDKLOROUTPUT_H

#include "HardklorTypes.h"
#include <iostream>

using namespace std;

class CHardklorOutput {
public:

	bool openFile(char* fileName, hkOutputFormat format);
	bool exportScan();
	bool exportPeptide();
	void closeFile();

private:
	FILE* outFile;
	bool bScanOpen;

};

#endif