// roc 2009-12 007886a0  unit: RBX::UniversalTool  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007886a0
//
// 007886a0  8b442408             mov eax, dword ptr [esp + 8]
// 007886a4  3d401f0000           cmp eax, 0x1f40
// 007886a9  53                   push ebx
// 007886aa  56                   push esi
// 007886ab  bb01000000           mov ebx, 1
// 007886b0  7f4c                 jg 0x7886fe
// 007886b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007886b6  8b4e08               mov ecx, dword ptr [esi + 8]
// 007886b9  8bd1                 mov edx, ecx
// 007886bb  2b560c               sub edx, dword ptr [esi + 0xc]
// 007886be  c1fa04               sar edx, 4
// 007886c1  03d0                 add edx, eax
// 007886c3  81fa401f0000         cmp edx, 0x1f40
// 007886c9  7f33                 jg 0x7886fe
// 007886cb  85c0                 test eax, eax
// 007886cd  7e2a                 jle 0x7886f9
// 007886cf  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007886d2  57                   push edi
// 007886d3  8bf8                 mov edi, eax
// 007886d5  c1e704               shl edi, 4
// 007886d8  2bd1                 sub edx, ecx
// 007886da  3bd7                 cmp edx, edi
// 007886dc  7f0a                 jg 0x7886e8
// 007886de  50                   push eax
// 007886df  56                   push esi
// 007886e0  e84bec0000           call 0x797330
// 007886e5  83c408               add esp, 8
// 007886e8  8b4608               mov eax, dword ptr [esi + 8]
// 007886eb  8b7614               mov esi, dword ptr [esi + 0x14]
// 007886ee  03c7                 add eax, edi
// 007886f0  5f                   pop edi
// 007886f1  394608               cmp dword ptr [esi + 8], eax
// 007886f4  7303                 jae 0x7886f9
// 007886f6  894608               mov dword ptr [esi + 8], eax
// 007886f9  5e                   pop esi
// 007886fa  8bc3                 mov eax, ebx
// 007886fc  5b                   pop ebx
// 007886fd  c3                   ret 
// 007886fe  5e                   pop esi
// 007886ff  33c0                 xor eax, eax
// 00788701  5b                   pop ebx
// 00788702  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
