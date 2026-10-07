// roc 2010-06 00720e50  unit: RBX::UniversalTool  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720e50
//
// 00720e50  8b442408             mov eax, dword ptr [esp + 8]
// 00720e54  3d401f0000           cmp eax, 0x1f40
// 00720e59  53                   push ebx
// 00720e5a  56                   push esi
// 00720e5b  bb01000000           mov ebx, 1
// 00720e60  7f4c                 jg 0x720eae
// 00720e62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00720e66  8b4e08               mov ecx, dword ptr [esi + 8]
// 00720e69  8bd1                 mov edx, ecx
// 00720e6b  2b560c               sub edx, dword ptr [esi + 0xc]
// 00720e6e  c1fa04               sar edx, 4
// 00720e71  03d0                 add edx, eax
// 00720e73  81fa401f0000         cmp edx, 0x1f40
// 00720e79  7f33                 jg 0x720eae
// 00720e7b  85c0                 test eax, eax
// 00720e7d  7e2a                 jle 0x720ea9
// 00720e7f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00720e82  57                   push edi
// 00720e83  8bf8                 mov edi, eax
// 00720e85  c1e704               shl edi, 4
// 00720e88  2bd1                 sub edx, ecx
// 00720e8a  3bd7                 cmp edx, edi
// 00720e8c  7f0a                 jg 0x720e98
// 00720e8e  50                   push eax
// 00720e8f  56                   push esi
// 00720e90  e8fbec0000           call 0x72fb90
// 00720e95  83c408               add esp, 8
// 00720e98  8b4608               mov eax, dword ptr [esi + 8]
// 00720e9b  8b7614               mov esi, dword ptr [esi + 0x14]
// 00720e9e  03c7                 add eax, edi
// 00720ea0  5f                   pop edi
// 00720ea1  394608               cmp dword ptr [esi + 8], eax
// 00720ea4  7303                 jae 0x720ea9
// 00720ea6  894608               mov dword ptr [esi + 8], eax
// 00720ea9  5e                   pop esi
// 00720eaa  8bc3                 mov eax, ebx
// 00720eac  5b                   pop ebx
// 00720ead  c3                   ret 
// 00720eae  5e                   pop esi
// 00720eaf  33c0                 xor eax, eax
// 00720eb1  5b                   pop ebx
// 00720eb2  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
