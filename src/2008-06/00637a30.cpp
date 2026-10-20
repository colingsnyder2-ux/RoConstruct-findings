// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5d855646c3dedd26.cpp

// Candidate translation unit (score above; library headers required).
#include "G3D/Color3.h"
struct ThreeFloatReceiver { void receive(G3D::Color3); };
void relayThreeFloats(ThreeFloatReceiver* receiver, G3D::Color3 value) { receiver->receive(value); }
