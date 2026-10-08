// from server: 100% by auto
// roc 2010-06 0077e010  unit: RBX::PartDropTool  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e010
//
// 0077e010  8b542404             mov edx, dword ptr [esp + 4]
// 0077e014  837a6800             cmp dword ptr [edx + 0x68], 0
// 0077e018  53                   push ebx
// 0077e019  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0077e01d  56                   push esi
// 0077e01e  8d7268               lea esi, [edx + 0x68]
// 0077e021  57                   push edi
// 0077e022  8b7a10               mov edi, dword ptr [edx + 0x10]
// 0077e025  7412                 je 0x77e039
// 0077e027  8b06                 mov eax, dword ptr [esi]
// 0077e029  8b4808               mov ecx, dword ptr [eax + 8]
// 0077e02c  3bcb                 cmp ecx, ebx
// 0077e02e  7209                 jb 0x77e039
// 0077e030  7448                 je 0x77e07a
// 0077e032  833800               cmp dword ptr [eax], 0
// 0077e035  8bf0                 mov esi, eax
// 0077e037  75ee                 jne 0x77e027
// 0077e039  6a20                 push 0x20
// 0077e03b  6a00                 push 0
// 0077e03d  6a00                 push 0
// 0077e03f  52                   push edx
// 0077e040  e8bb090000           call 0x77ea00
// 0077e045  c640040a             mov byte ptr [eax + 4], 0xa
// 0077e049  8a4f14               mov cl, byte ptr [edi + 0x14]
// 0077e04c  895808               mov dword ptr [eax + 8], ebx
// 0077e04f  83c410               add esp, 0x10
// 0077e052  80e103               and cl, 3
// 0077e055  884805               mov byte ptr [eax + 5], cl
// 0077e058  8b16                 mov edx, dword ptr [esi]
// 0077e05a  8910                 mov dword ptr [eax], edx
// 0077e05c  8906                 mov dword ptr [esi], eax
// 0077e05e  8d4f78               lea ecx, [edi + 0x78]
// 0077e061  894810               mov dword ptr [eax + 0x10], ecx
// 0077e064  8b8f8c000000         mov ecx, dword ptr [edi + 0x8c]
// 0077e06a  894814               mov dword ptr [eax + 0x14], ecx
// 0077e06d  894110               mov dword ptr [ecx + 0x10], eax
// 0077e070  89878c000000         mov dword ptr [edi + 0x8c], eax
// 0077e076  5f                   pop edi
// 0077e077  5e                   pop esi
// 0077e078  5b                   pop ebx
// 0077e079  c3                   ret 
// 0077e07a  8a4805               mov cl, byte ptr [eax + 5]
// 0077e07d  0fb65f14             movzx ebx, byte ptr [edi + 0x14]
// 0077e081  0fb6d1               movzx edx, cl
// 0077e084  83e203               and edx, 3
// 0077e087  f7d3                 not ebx
// 0077e089  84d3                 test bl, dl
// 0077e08b  74e9                 je 0x77e076
// 0077e08d  5f                   pop edi
// 0077e08e  80f103               xor cl, 3
// 0077e091  5e                   pop esi
// 0077e092  884805               mov byte ptr [eax + 5], cl
// 0077e095  5b                   pop ebx
// 0077e096  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_findupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
