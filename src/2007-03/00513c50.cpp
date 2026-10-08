// roc 2007-03 00513c50  unit: seg_00510000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513c50
//
// 00513c50  51                   push ecx
// 00513c51  8b442408             mov eax, dword ptr [esp + 8]
// 00513c55  d9ee                 fldz 
// 00513c57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00513c5b  d95004               fst dword ptr [eax + 4]
// 00513c5e  d95008               fst dword ptr [eax + 8]
// 00513c61  c7042400000000       mov dword ptr [esp], 0
// 00513c68  d9500c               fst dword ptr [eax + 0xc]
// 00513c6b  c70044fd7900         mov dword ptr [eax], 0x79fd44
// 00513c71  d95010               fst dword ptr [eax + 0x10]
// 00513c74  d95014               fst dword ptr [eax + 0x14]
// 00513c77  d95818               fstp dword ptr [eax + 0x18]
// 00513c7a  d901                 fld dword ptr [ecx]
// 00513c7c  d95804               fstp dword ptr [eax + 4]
// 00513c7f  d94104               fld dword ptr [ecx + 4]
// 00513c82  d95808               fstp dword ptr [eax + 8]
// 00513c85  d94108               fld dword ptr [ecx + 8]
// 00513c88  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00513c8c  d9580c               fstp dword ptr [eax + 0xc]
// 00513c8f  d901                 fld dword ptr [ecx]
// 00513c91  d95810               fstp dword ptr [eax + 0x10]
// 00513c94  d94104               fld dword ptr [ecx + 4]
// 00513c97  d95814               fstp dword ptr [eax + 0x14]
// 00513c9a  d94108               fld dword ptr [ecx + 8]
// 00513c9d  d95818               fstp dword ptr [eax + 0x18]
// 00513ca0  59                   pop ecx
// 00513ca1  c3                   ret 
// library rbxgs/v8world\Block.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
