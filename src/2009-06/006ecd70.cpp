// roc 2009-06 006ecd70  unit: RBX::PartDropTool  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecd70
//
// 006ecd70  8b542404             mov edx, dword ptr [esp + 4]
// 006ecd74  837a6800             cmp dword ptr [edx + 0x68], 0
// 006ecd78  53                   push ebx
// 006ecd79  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006ecd7d  56                   push esi
// 006ecd7e  8d7268               lea esi, [edx + 0x68]
// 006ecd81  57                   push edi
// 006ecd82  8b7a10               mov edi, dword ptr [edx + 0x10]
// 006ecd85  7412                 je 0x6ecd99
// 006ecd87  8b06                 mov eax, dword ptr [esi]
// 006ecd89  8b4808               mov ecx, dword ptr [eax + 8]
// 006ecd8c  3bcb                 cmp ecx, ebx
// 006ecd8e  7209                 jb 0x6ecd99
// 006ecd90  7448                 je 0x6ecdda
// 006ecd92  833800               cmp dword ptr [eax], 0
// 006ecd95  8bf0                 mov esi, eax
// 006ecd97  75ee                 jne 0x6ecd87
// 006ecd99  6a20                 push 0x20
// 006ecd9b  6a00                 push 0
// 006ecd9d  6a00                 push 0
// 006ecd9f  52                   push edx
// 006ecda0  e8bb090000           call 0x6ed760
// 006ecda5  c640040a             mov byte ptr [eax + 4], 0xa
// 006ecda9  8a4f14               mov cl, byte ptr [edi + 0x14]
// 006ecdac  895808               mov dword ptr [eax + 8], ebx
// 006ecdaf  83c410               add esp, 0x10
// 006ecdb2  80e103               and cl, 3
// 006ecdb5  884805               mov byte ptr [eax + 5], cl
// 006ecdb8  8b16                 mov edx, dword ptr [esi]
// 006ecdba  8910                 mov dword ptr [eax], edx
// 006ecdbc  8906                 mov dword ptr [esi], eax
// 006ecdbe  8d4f78               lea ecx, [edi + 0x78]
// 006ecdc1  894810               mov dword ptr [eax + 0x10], ecx
// 006ecdc4  8b8f8c000000         mov ecx, dword ptr [edi + 0x8c]
// 006ecdca  894814               mov dword ptr [eax + 0x14], ecx
// 006ecdcd  894110               mov dword ptr [ecx + 0x10], eax
// 006ecdd0  89878c000000         mov dword ptr [edi + 0x8c], eax
// 006ecdd6  5f                   pop edi
// 006ecdd7  5e                   pop esi
// 006ecdd8  5b                   pop ebx
// 006ecdd9  c3                   ret 
// 006ecdda  8a4805               mov cl, byte ptr [eax + 5]
// 006ecddd  0fb65f14             movzx ebx, byte ptr [edi + 0x14]
// 006ecde1  0fb6d1               movzx edx, cl
// 006ecde4  83e203               and edx, 3
// 006ecde7  f7d3                 not ebx
// 006ecde9  84d3                 test bl, dl
// 006ecdeb  74e9                 je 0x6ecdd6
// 006ecded  5f                   pop edi
// 006ecdee  80f103               xor cl, 3
// 006ecdf1  5e                   pop esi
// 006ecdf2  884805               mov byte ptr [eax + 5], cl
// 006ecdf5  5b                   pop ebx
// 006ecdf6  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_findupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
