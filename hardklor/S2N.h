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
#ifndef _S2N_H
#define _S2N_H

#include "Spectrum.h"
#include "Smooth.h"
#include <algorithm>

using namespace std;

Spectrum signalToNoise(Spectrum& s, int start, int stop, float sig, float* cutoff, bool skipZero=true, bool subtract=false);
Spectrum SNPeaks(Spectrum& s, int start, int stop, float SN, float FWHM, float max, float base);
Spectrum SNSubtracted(Spectrum& s, int start, int stop, float SN, float FWHM, float max, float base);
float findSNCutoff(Spectrum& s, int start, int stop, float sig, bool skipZero=true);
float findSNCutoff2(Spectrum& s, int start, int stop, float sig, double& max, bool skipZero=true);

#endif
