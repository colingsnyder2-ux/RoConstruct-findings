// roc 2012-06 00936570  unit: seg_00930000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936570
//
// 00936570  8b542404             mov edx, dword ptr [esp + 4]
// 00936574  837a6800             cmp dword ptr [edx + 0x68], 0
// 00936578  53                   push ebx
// 00936579  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0093657d  56                   push esi
// 0093657e  8d7268               lea esi, [edx + 0x68]
// 00936581  57                   push edi
// 00936582  8b7a10               mov edi, dword ptr [edx + 0x10]
// 00936585  7412                 je 0x936599
// 00936587  8b06                 mov eax, dword ptr [esi]
// 00936589  8b4808               mov ecx, dword ptr [eax + 8]
// 0093658c  3bcb                 cmp ecx, ebx
// 0093658e  7209                 jb 0x936599
// 00936590  7448                 je 0x9365da
// 00936592  833800               cmp dword ptr [eax], 0
// 00936595  8bf0                 mov esi, eax
// 00936597  75ee                 jne 0x936587
// 00936599  6a20                 push 0x20
// 0093659b  6a00                 push 0
// 0093659d  6a00                 push 0
// 0093659f  52                   push edx
// 009365a0  e8bb090000           call 0x936f60
// 009365a5  c640040a             mov byte ptr [eax + 4], 0xa
// 009365a9  8a4f14               mov cl, byte ptr [edi + 0x14]
// 009365ac  895808               mov dword ptr [eax + 8], ebx
// 009365af  83c410               add esp, 0x10
// 009365b2  80e103               and cl, 3
// 009365b5  884805               mov byte ptr [eax + 5], cl
// 009365b8  8b16                 mov edx, dword ptr [esi]
// 009365ba  8910                 mov dword ptr [eax], edx
// 009365bc  8906                 mov dword ptr [esi], eax
// 009365be  8d4f78               lea ecx, [edi + 0x78]
// 009365c1  894810               mov dword ptr [eax + 0x10], ecx
// 009365c4  8b8f8c000000         mov ecx, dword ptr [edi + 0x8c]
// 009365ca  894814               mov dword ptr [eax + 0x14], ecx
// 009365cd  894110               mov dword ptr [ecx + 0x10], eax
// 009365d0  89878c000000         mov dword ptr [edi + 0x8c], eax
// 009365d6  5f                   pop edi
// 009365d7  5e                   pop esi
// 009365d8  5b                   pop ebx
// 009365d9  c3                   ret 
// 009365da  8a4805               mov cl, byte ptr [eax + 5]
// 009365dd  0fb65f14             movzx ebx, byte ptr [edi + 0x14]
// 009365e1  0fb6d1               movzx edx, cl
// 009365e4  83e203               and edx, 3
// 009365e7  f7d3                 not ebx
// 009365e9  84d3                 test bl, dl
// 009365eb  74e9                 je 0x9365d6
// 009365ed  5f                   pop edi
// 009365ee  80f103               xor cl, 3
// 009365f1  5e                   pop esi
// 009365f2  884805               mov byte ptr [eax + 5], cl
// 009365f5  5b                   pop ebx
// 009365f6  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_findupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
