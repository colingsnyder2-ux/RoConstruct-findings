// roc 2008-06 00649920  unit: RBX::Ball  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649920
//
// 00649920  d9ee                 fldz 
// 00649922  56                   push esi
// 00649923  8b742408             mov esi, dword ptr [esp + 8]
// 00649927  d916                 fst dword ptr [esi]
// 00649929  d95604               fst dword ptr [esi + 4]
// 0064992c  8d5624               lea edx, [esi + 0x24]
// 0064992f  d95608               fst dword ptr [esi + 8]
// 00649932  8d460c               lea eax, [esi + 0xc]
// 00649935  d910                 fst dword ptr [eax]
// 00649937  8d4e18               lea ecx, [esi + 0x18]
// 0064993a  d95004               fst dword ptr [eax + 4]
// 0064993d  52                   push edx
// 0064993e  d95008               fst dword ptr [eax + 8]
// 00649941  51                   push ecx
// 00649942  d911                 fst dword ptr [ecx]
// 00649944  50                   push eax
// 00649945  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00649949  d95104               fst dword ptr [ecx + 4]
// 0064994c  d95108               fst dword ptr [ecx + 8]
// 0064994f  56                   push esi
// 00649950  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00649954  d912                 fst dword ptr [edx]
// 00649956  d95204               fst dword ptr [edx + 4]
// 00649959  50                   push eax
// 0064995a  d95a08               fstp dword ptr [edx + 8]
// 0064995d  e87e5bfcff           call 0x60f4e0
// 00649962  8bc6                 mov eax, esi
// 00649964  5e                   pop esi
// 00649965  c3                   ret 
// library rbxgs/util\Face.cpp (function ?fromExtentsSide@Face@RBX@@SA?AV12@ABVExtents@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
