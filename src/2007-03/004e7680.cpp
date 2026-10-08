// roc 2007-03 004e7680  unit: seg_004e0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7680
//
// 004e7680  56                   push esi
// 004e7681  8bf1                 mov esi, ecx
// 004e7683  8b06                 mov eax, dword ptr [esi]
// 004e7685  50                   push eax
// 004e7686  e8f5bc0000           call 0x4f3380
// 004e768b  33c0                 xor eax, eax
// 004e768d  83c404               add esp, 4
// 004e7690  8906                 mov dword ptr [esi], eax
// 004e7692  894604               mov dword ptr [esi + 4], eax
// 004e7695  894608               mov dword ptr [esi + 8], eax
// 004e7698  5e                   pop esi
// 004e7699  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ??1?$Array@PAVPrimitive@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
