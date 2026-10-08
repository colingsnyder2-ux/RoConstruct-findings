// roc 2007-08 0062dfd0  unit: RBX::AdornG3D  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dfd0
//
// 0062dfd0  6aff                 push -1
// 0062dfd2  68f8c37400           push 0x74c3f8
// 0062dfd7  64a100000000         mov eax, dword ptr fs:[0]
// 0062dfdd  50                   push eax
// 0062dfde  64892500000000       mov dword ptr fs:[0], esp
// 0062dfe5  51                   push ecx
// 0062dfe6  56                   push esi
// 0062dfe7  8d442404             lea eax, [esp + 4]
// 0062dfeb  50                   push eax
// 0062dfec  8bf1                 mov esi, ecx
// 0062dfee  e89d1a0000           call 0x62fa90
// 0062dff3  83c404               add esp, 4
// 0062dff6  dd442424             fld qword ptr [esp + 0x24]
// 0062dffa  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0062dffe  8b542438             mov edx, dword ptr [esp + 0x38]
// 0062e002  8b442434             mov eax, dword ptr [esp + 0x34]
// 0062e006  51                   push ecx
// 0062e007  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062e00b  52                   push edx
// 0062e00c  8b542434             mov edx, dword ptr [esp + 0x34]
// 0062e010  50                   push eax
// 0062e011  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062e015  51                   push ecx
// 0062e016  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062e01a  52                   push edx
// 0062e01b  8b5604               mov edx, dword ptr [esi + 4]
// 0062e01e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0062e022  83ec08               sub esp, 8
// 0062e025  dd1c24               fstp qword ptr [esp]
// 0062e028  50                   push eax
// 0062e029  51                   push ecx
// 0062e02a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062e02e  52                   push edx
// 0062e02f  56                   push esi
// 0062e030  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0062e038  e8f3871000           call 0x736830
// 0062e03d  8b442404             mov eax, dword ptr [esp + 4]
// 0062e041  85c0                 test eax, eax
// 0062e043  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062e04b  7427                 je 0x62e074
// 0062e04d  83c004               add eax, 4
// 0062e050  50                   push eax
// 0062e051  ff15e8d27700         call dword ptr [0x77d2e8]
// 0062e057  85c0                 test eax, eax
// 0062e059  7519                 jne 0x62e074
// 0062e05b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062e05f  e86c9de2ff           call 0x457dd0
// 0062e064  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062e068  85c9                 test ecx, ecx
// 0062e06a  7408                 je 0x62e074
// 0062e06c  8b01                 mov eax, dword ptr [ecx]
// 0062e06e  8b10                 mov edx, dword ptr [eax]
// 0062e070  6a01                 push 1
// 0062e072  ffd2                 call edx
// 0062e074  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062e078  8bc6                 mov eax, esi
// 0062e07a  5e                   pop esi
// 0062e07b  64890d00000000       mov dword ptr fs:[0], ecx
// 0062e082  83c410               add esp, 0x10
// 0062e085  c22800               ret 0x28
// library rbxgs-appdraw/AdornG3D.cpp (function ?drawFont2D@AdornG3D@RBX@@UBE?AVVector2@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV34@NABVColor4@4@2W4XAlign@Adorn@2@W4YAlign@92@W4Spacing@92@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
