// roc 2009-06 006d5210  unit: RBX::Body  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5210
//
// 006d5210  d9ee                 fldz 
// 006d5212  56                   push esi
// 006d5213  8b742408             mov esi, dword ptr [esp + 8]
// 006d5217  d916                 fst dword ptr [esi]
// 006d5219  d95604               fst dword ptr [esi + 4]
// 006d521c  8d5624               lea edx, [esi + 0x24]
// 006d521f  d95608               fst dword ptr [esi + 8]
// 006d5222  8d460c               lea eax, [esi + 0xc]
// 006d5225  d910                 fst dword ptr [eax]
// 006d5227  8d4e18               lea ecx, [esi + 0x18]
// 006d522a  d95004               fst dword ptr [eax + 4]
// 006d522d  52                   push edx
// 006d522e  d95008               fst dword ptr [eax + 8]
// 006d5231  51                   push ecx
// 006d5232  d911                 fst dword ptr [ecx]
// 006d5234  50                   push eax
// 006d5235  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006d5239  d95104               fst dword ptr [ecx + 4]
// 006d523c  d95108               fst dword ptr [ecx + 8]
// 006d523f  56                   push esi
// 006d5240  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5244  d912                 fst dword ptr [edx]
// 006d5246  d95204               fst dword ptr [edx + 4]
// 006d5249  50                   push eax
// 006d524a  d95a08               fstp dword ptr [edx + 8]
// 006d524d  e83edcfdff           call 0x6b2e90
// 006d5252  8bc6                 mov eax, esi
// 006d5254  5e                   pop esi
// 006d5255  c3                   ret 
// library rbxgs/util\Face.cpp (function ?fromExtentsSide@Face@RBX@@SA?AV12@ABVExtents@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
