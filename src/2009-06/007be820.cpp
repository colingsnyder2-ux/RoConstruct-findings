// roc 2009-06 007be820  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007be820
//
// 007be820  6aff                 push -1
// 007be822  6818d88700           push 0x87d818
// 007be827  64a100000000         mov eax, dword ptr fs:[0]
// 007be82d  50                   push eax
// 007be82e  83ec10               sub esp, 0x10
// 007be831  56                   push esi
// 007be832  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007be837  33c4                 xor eax, esp
// 007be839  50                   push eax
// 007be83a  8d442418             lea eax, [esp + 0x18]
// 007be83e  64a300000000         mov dword ptr fs:[0], eax
// 007be844  8bf1                 mov esi, ecx
// 007be846  c7460800000000       mov dword ptr [esi + 8], 0
// 007be84d  e8a4a7f5ff           call 0x718ff6
// 007be852  8d4c2408             lea ecx, [esp + 8]
// 007be856  e8e1d90800           call 0x84c23c
// 007be85b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007be85f  6a00                 push 0
// 007be861  6a00                 push 0
// 007be863  50                   push eax
// 007be864  8d4c2414             lea ecx, [esp + 0x14]
// 007be868  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 007be870  e8b5d90800           call 0x84c22a
// 007be875  8d4c2408             lea ecx, [esp + 8]
// 007be879  85c0                 test eax, eax
// 007be87b  7522                 jne 0x7be89f
// 007be87d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007be885  e8acaff5ff           call 0x719836
// 007be88a  33c0                 xor eax, eax
// 007be88c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007be890  64890d00000000       mov dword ptr fs:[0], ecx
// 007be897  59                   pop ecx
// 007be898  5e                   pop esi
// 007be899  83c41c               add esp, 0x1c
// 007be89c  c20400               ret 4
// 007be89f  51                   push ecx
// 007be8a0  8bce                 mov ecx, esi
// 007be8a2  e899feffff           call 0x7be740
// 007be8a7  8d4c2408             lea ecx, [esp + 8]
// 007be8ab  8bf0                 mov esi, eax
// 007be8ad  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007be8b5  e87caff5ff           call 0x719836
// 007be8ba  8bc6                 mov eax, esi
// 007be8bc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007be8c0  64890d00000000       mov dword ptr fs:[0], ecx
// 007be8c7  59                   pop ecx
// 007be8c8  5e                   pop esi
// 007be8c9  83c41c               add esp, 0x1c
// 007be8cc  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp