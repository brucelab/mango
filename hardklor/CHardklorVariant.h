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
#ifndef _CHARDKLORVARIANT_H
#define _CHARDKLORVARIANT_H

#include <vector>

#include "HardklorTypes.h"

using namespace std;

class CHardklorVariant {
 public:
  //Constructors & Destructors:
  CHardklorVariant();
  CHardklorVariant(const CHardklorVariant&);
  ~CHardklorVariant();

  //Operators:
  CHardklorVariant& operator=(const CHardklorVariant&);

  //Methods:
  void addAtom(const sInt&);
  void addAtom(const int&, const int&);
  void addEnrich(const sEnrichMercury&);
  void addEnrich(const int&, const int&, const double&);
  sInt& atAtom(int);
  sEnrichMercury& atEnrich(int);
  void clear();
  int sizeAtom();
  int sizeEnrich();

  //Data Members
  int ID;

 protected:

 private:
  //Data Members:
  vector<sInt> *atoms;
  vector<sEnrichMercury> *enrich;

};

#endif
