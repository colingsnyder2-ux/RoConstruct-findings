// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_gridboundsinline7588074d4bb74e81.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include "util/Extents.h"
extern int scaleBase;
RBX::Extents makeBounds(int level,const G3D::Vector3& position) { return RBX::Extents(position*float(scaleBase<<level),(position+G3D::Vector3(1,1,1))*float(scaleBase<<level)); }
