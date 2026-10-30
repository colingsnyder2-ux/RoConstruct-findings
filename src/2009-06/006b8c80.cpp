// from server: 100% by auto
// roc 2009-06 006b8c80  unit: RBX::UniversalTool  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8c80
//
// 006b8c80  8b442408             mov eax, dword ptr [esp + 8]
// 006b8c84  3d401f0000           cmp eax, 0x1f40
// 006b8c89  53                   push ebx
// 006b8c8a  56                   push esi
// 006b8c8b  bb01000000           mov ebx, 1
// 006b8c90  7f4c                 jg 0x6b8cde
// 006b8c92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b8c96  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b8c99  8bd1                 mov edx, ecx
// 006b8c9b  2b560c               sub edx, dword ptr [esi + 0xc]
// 006b8c9e  c1fa04               sar edx, 4
// 006b8ca1  03d0                 add edx, eax
// 006b8ca3  81fa401f0000         cmp edx, 0x1f40
// 006b8ca9  7f33                 jg 0x6b8cde
// 006b8cab  85c0                 test eax, eax
// 006b8cad  7e2a                 jle 0x6b8cd9
// 006b8caf  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006b8cb2  57                   push edi
// 006b8cb3  8bf8                 mov edi, eax
// 006b8cb5  c1e704               shl edi, 4
// 006b8cb8  2bd1                 sub edx, ecx
// 006b8cba  3bd7                 cmp edx, edi
// 006b8cbc  7f0a                 jg 0x6b8cc8
// 006b8cbe  50                   push eax
// 006b8cbf  56                   push esi
// 006b8cc0  e8fba00000           call 0x6c2dc0
// 006b8cc5  83c408               add esp, 8
// 006b8cc8  8b4608               mov eax, dword ptr [esi + 8]
// 006b8ccb  8b7614               mov esi, dword ptr [esi + 0x14]
// 006b8cce  03c7                 add eax, edi
// 006b8cd0  5f                   pop edi
// 006b8cd1  394608               cmp dword ptr [esi + 8], eax
// 006b8cd4  7303                 jae 0x6b8cd9
// 006b8cd6  894608               mov dword ptr [esi + 8], eax
// 006b8cd9  5e                   pop esi
// 006b8cda  8bc3                 mov eax, ebx
// 006b8cdc  5b                   pop ebx
// 006b8cdd  c3                   ret 
// 006b8cde  5e                   pop esi
// 006b8cdf  33c0                 xor eax, eax
// 006b8ce1  5b                   pop ebx
// 006b8ce2  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_checkstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
