// from server: 100% by auto
// roc 2007-08 00612ff0  unit: seg_00610000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612ff0
//
// 00612ff0  8b542404             mov edx, dword ptr [esp + 4]
// 00612ff4  8b4268               mov eax, dword ptr [edx + 0x68]
// 00612ff7  85c0                 test eax, eax
// 00612ff9  53                   push ebx
// 00612ffa  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00612ffe  56                   push esi
// 00612fff  8b7210               mov esi, dword ptr [edx + 0x10]
// 00613002  57                   push edi
// 00613003  8d7a68               lea edi, [edx + 0x68]
// 00613006  7411                 je 0x613019
// 00613008  8b4808               mov ecx, dword ptr [eax + 8]
// 0061300b  3bcb                 cmp ecx, ebx
// 0061300d  720a                 jb 0x613019
// 0061300f  7449                 je 0x61305a
// 00613011  8bf8                 mov edi, eax
// 00613013  8b00                 mov eax, dword ptr [eax]
// 00613015  85c0                 test eax, eax
// 00613017  75ef                 jne 0x613008
// 00613019  6a20                 push 0x20
// 0061301b  6a00                 push 0
// 0061301d  6a00                 push 0
// 0061301f  52                   push edx
// 00613020  e8cb090000           call 0x6139f0
// 00613025  c640040a             mov byte ptr [eax + 4], 0xa
// 00613029  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0061302c  895808               mov dword ptr [eax + 8], ebx
// 0061302f  83c410               add esp, 0x10
// 00613032  80e103               and cl, 3
// 00613035  884805               mov byte ptr [eax + 5], cl
// 00613038  8b17                 mov edx, dword ptr [edi]
// 0061303a  8910                 mov dword ptr [eax], edx
// 0061303c  8907                 mov dword ptr [edi], eax
// 0061303e  8d4e78               lea ecx, [esi + 0x78]
// 00613041  894810               mov dword ptr [eax + 0x10], ecx
// 00613044  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0061304a  894814               mov dword ptr [eax + 0x14], ecx
// 0061304d  894110               mov dword ptr [ecx + 0x10], eax
// 00613050  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00613056  5f                   pop edi
// 00613057  5e                   pop esi
// 00613058  5b                   pop ebx
// 00613059  c3                   ret 
// 0061305a  8a4805               mov cl, byte ptr [eax + 5]
// 0061305d  0fb65e14             movzx ebx, byte ptr [esi + 0x14]
// 00613061  0fb6d1               movzx edx, cl
// 00613064  83e203               and edx, 3
// 00613067  f7d3                 not ebx
// 00613069  84d3                 test bl, dl
// 0061306b  74e9                 je 0x613056
// 0061306d  5f                   pop edi
// 0061306e  80f103               xor cl, 3
// 00613071  5e                   pop esi
// 00613072  884805               mov byte ptr [eax + 5], cl
// 00613075  5b                   pop ebx
// 00613076  c3                   ret 
// library lua-5.1.1/lfunc.c (function _luaF_findupval)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lfunc.c
