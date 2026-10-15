// roc 2008-06 005cde10  unit: RBX::Camera  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cde10
//
// 005cde10  64a100000000         mov eax, dword ptr fs:[0]
// 005cde16  6aff                 push -1
// 005cde18  6868917d00           push 0x7d9168
// 005cde1d  50                   push eax
// 005cde1e  64892500000000       mov dword ptr fs:[0], esp
// 005cde25  83ec08               sub esp, 8
// 005cde28  56                   push esi
// 005cde29  8bf1                 mov esi, ecx
// 005cde2b  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 005cde31  57                   push edi
// 005cde32  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005cde36  3bf8                 cmp edi, eax
// 005cde38  0f84a8000000         je 0x5cdee6
// 005cde3e  6a00                 push 0
// 005cde40  6804839400           push 0x948304
// 005cde45  687c909200           push 0x92907c
// 005cde4a  6a00                 push 0
// 005cde4c  57                   push edi
// 005cde4d  e874390d00           call 0x6a17c6
// 005cde52  83c414               add esp, 0x14
// 005cde55  85c0                 test eax, eax
// 005cde57  0f8489000000         je 0x5cdee6
// 005cde5d  8d442408             lea eax, [esp + 8]
// 005cde61  57                   push edi
// 005cde62  50                   push eax
// 005cde63  e8d8ab0400           call 0x618a40
// 005cde68  83c408               add esp, 8
// 005cde6b  8b08                 mov ecx, dword ptr [eax]
// 005cde6d  83c004               add eax, 4
// 005cde70  898edc010000         mov dword ptr [esi + 0x1dc], ecx
// 005cde76  50                   push eax
// 005cde77  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 005cde7d  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005cde85  e82647e3ff           call 0x4025b0
// 005cde8a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005cde8e  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005cde96  85c0                 test eax, eax
// 005cde98  742c                 je 0x5cdec6
// 005cde9a  8bf8                 mov edi, eax
// 005cde9c  83c004               add eax, 4
// 005cde9f  83caff               or edx, 0xffffffff
// 005cdea2  f00fc110             lock xadd dword ptr [eax], edx
// 005cdea6  751e                 jne 0x5cdec6
// 005cdea8  8b07                 mov eax, dword ptr [edi]
// 005cdeaa  8b5004               mov edx, dword ptr [eax + 4]
// 005cdead  8bcf                 mov ecx, edi
// 005cdeaf  ffd2                 call edx
// 005cdeb1  8d4708               lea eax, [edi + 8]
// 005cdeb4  83c9ff               or ecx, 0xffffffff
// 005cdeb7  f00fc108             lock xadd dword ptr [eax], ecx
// 005cdebb  7509                 jne 0x5cdec6
// 005cdebd  8b17                 mov edx, dword ptr [edi]
// 005cdebf  8b4208               mov eax, dword ptr [edx + 8]
// 005cdec2  8bcf                 mov ecx, edi
// 005cdec4  ffd0                 call eax
// 005cdec6  68909a9700           push 0x979a90
// 005cdecb  8bce                 mov ecx, esi
// 005cdecd  e82efce3ff           call 0x40db00
// 005cded2  8bce                 mov ecx, esi
// 005cded4  e877e0ffff           call 0x5cbf50
// 005cded9  85c0                 test eax, eax
// 005cdedb  7409                 je 0x5cdee6
// 005cdedd  8b10                 mov edx, dword ptr [eax]
// 005cdedf  8bc8                 mov ecx, eax
// 005cdee1  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cdee4  ffd0                 call eax
// 005cdee6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cdeea  5f                   pop edi
// 005cdeeb  5e                   pop esi
// 005cdeec  64890d00000000       mov dword ptr fs:[0], ecx
// 005cdef3  83c414               add esp, 0x14
// 005cdef6  c20400               ret 4
// library rbxgs/roc_unit_1a769b8435068ad9.cpp (function ?setCameraSubject@Camera@RBX@@QAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1a769b8435068ad9.cpp
