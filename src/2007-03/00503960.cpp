// roc 2007-03 00503960  unit: seg_00500000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503960
//
// 00503960  8b4108               mov eax, dword ptr [ecx + 8]
// 00503963  8b5104               mov edx, dword ptr [ecx + 4]
// 00503966  6bc065               imul eax, eax, 0x65
// 00503969  6bd225               imul edx, edx, 0x25
// 0050396c  03c2                 add eax, edx
// 0050396e  0301                 add eax, dword ptr [ecx]
// 00503970  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?hashCode@Color3@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
