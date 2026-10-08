// roc 2007-03 0051edc0  unit: seg_00510000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051edc0
//
// 0051edc0  83ec24               sub esp, 0x24
// 0051edc3  56                   push esi
// 0051edc4  57                   push edi
// 0051edc5  51                   push ecx
// 0051edc6  8d4c240c             lea ecx, [esp + 0xc]
// 0051edca  e88107feff           call 0x4ff550
// 0051edcf  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0051edd3  b909000000           mov ecx, 9
// 0051edd8  8bf0                 mov esi, eax
// 0051edda  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0051eddc  5f                   pop edi
// 0051eddd  5e                   pop esi
// 0051edde  83c424               add esp, 0x24
// 0051ede1  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBEXAAVMatrix3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
