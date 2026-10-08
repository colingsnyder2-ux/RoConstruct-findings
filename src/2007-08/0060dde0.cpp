// roc 2007-08 0060dde0  unit: RBX::Ball  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060dde0
//
// 0060dde0  d9ee                 fldz 
// 0060dde2  56                   push esi
// 0060dde3  8b742408             mov esi, dword ptr [esp + 8]
// 0060dde7  d916                 fst dword ptr [esi]
// 0060dde9  d95604               fst dword ptr [esi + 4]
// 0060ddec  8d5624               lea edx, [esi + 0x24]
// 0060ddef  d95608               fst dword ptr [esi + 8]
// 0060ddf2  8d460c               lea eax, [esi + 0xc]
// 0060ddf5  d910                 fst dword ptr [eax]
// 0060ddf7  8d4e18               lea ecx, [esi + 0x18]
// 0060ddfa  d95004               fst dword ptr [eax + 4]
// 0060ddfd  52                   push edx
// 0060ddfe  d95008               fst dword ptr [eax + 8]
// 0060de01  51                   push ecx
// 0060de02  d911                 fst dword ptr [ecx]
// 0060de04  50                   push eax
// 0060de05  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060de09  d95104               fst dword ptr [ecx + 4]
// 0060de0c  d95108               fst dword ptr [ecx + 8]
// 0060de0f  56                   push esi
// 0060de10  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060de14  d912                 fst dword ptr [edx]
// 0060de16  d95204               fst dword ptr [edx + 4]
// 0060de19  50                   push eax
// 0060de1a  d95a08               fstp dword ptr [edx + 8]
// 0060de1d  e81ee7faff           call 0x5bc540
// 0060de22  8bc6                 mov eax, esi
// 0060de24  5e                   pop esi
// 0060de25  c3                   ret 
// library rbxgs/util\Face.cpp (function ?fromExtentsSide@Face@RBX@@SA?AV12@ABVExtents@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
