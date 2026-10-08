// roc 2007-08 0062df30  unit: RBX::AdornG3D  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062df30
//
// 0062df30  6aff                 push -1
// 0062df32  68f8c37400           push 0x74c3f8
// 0062df37  64a100000000         mov eax, dword ptr fs:[0]
// 0062df3d  50                   push eax
// 0062df3e  64892500000000       mov dword ptr fs:[0], esp
// 0062df45  51                   push ecx
// 0062df46  8d0424               lea eax, [esp]
// 0062df49  56                   push esi
// 0062df4a  50                   push eax
// 0062df4b  e8401b0000           call 0x62fa90
// 0062df50  83c404               add esp, 4
// 0062df53  dd442420             fld qword ptr [esp + 0x20]
// 0062df57  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062df5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0062df5f  8b742418             mov esi, dword ptr [esp + 0x18]
// 0062df63  51                   push ecx
// 0062df64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062df68  83ec08               sub esp, 8
// 0062df6b  dd1c24               fstp qword ptr [esp]
// 0062df6e  52                   push edx
// 0062df6f  56                   push esi
// 0062df70  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0062df78  e803841000           call 0x736380
// 0062df7d  8b442404             mov eax, dword ptr [esp + 4]
// 0062df81  85c0                 test eax, eax
// 0062df83  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062df8b  7427                 je 0x62dfb4
// 0062df8d  83c004               add eax, 4
// 0062df90  50                   push eax
// 0062df91  ff15e8d27700         call dword ptr [0x77d2e8]
// 0062df97  85c0                 test eax, eax
// 0062df99  7519                 jne 0x62dfb4
// 0062df9b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062df9f  e82c9ee2ff           call 0x457dd0
// 0062dfa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062dfa8  85c9                 test ecx, ecx
// 0062dfaa  7408                 je 0x62dfb4
// 0062dfac  8b01                 mov eax, dword ptr [ecx]
// 0062dfae  8b10                 mov edx, dword ptr [eax]
// 0062dfb0  6a01                 push 1
// 0062dfb2  ffd2                 call edx
// 0062dfb4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062dfb8  8bc6                 mov eax, esi
// 0062dfba  5e                   pop esi
// 0062dfbb  64890d00000000       mov dword ptr fs:[0], ecx
// 0062dfc2  83c410               add esp, 0x10
// 0062dfc5  c21400               ret 0x14
// library rbxgs-appdraw/AdornG3D.cpp (function ?get2DStringBounds@AdornG3D@RBX@@UBE?AVVector2@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@Adorn@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
