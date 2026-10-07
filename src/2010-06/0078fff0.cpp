// roc 2010-06 0078fff0  unit: RBX::GroupDragTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fff0
//
// 0078fff0  55                   push ebp
// 0078fff1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0078fff5  837d000c             cmp dword ptr [ebp], 0xc
// 0078fff9  56                   push esi
// 0078fffa  8bf0                 mov esi, eax
// 0078fffc  7440                 je 0x79003e
// 0078fffe  8b06                 mov eax, dword ptr [esi]
// 00790000  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 00790004  53                   push ebx
// 00790005  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 00790008  43                   inc ebx
// 00790009  3bd9                 cmp ebx, ecx
// 0079000b  57                   push edi
// 0079000c  7e1e                 jle 0x79002c
// 0079000e  81fbfa000000         cmp ebx, 0xfa
// 00790014  7c11                 jl 0x790027
// 00790016  8b560c               mov edx, dword ptr [esi + 0xc]
// 00790019  68143ea500           push 0xa53e14
// 0079001e  52                   push edx
// 0079001f  e86c25ffff           call 0x782590
// 00790024  83c408               add esp, 8
// 00790027  8b06                 mov eax, dword ptr [esi]
// 00790029  88584b               mov byte ptr [eax + 0x4b], bl
// 0079002c  ff4624               inc dword ptr [esi + 0x24]
// 0079002f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00790032  8d78ff               lea edi, [eax - 1]
// 00790035  8bdd                 mov ebx, ebp
// 00790037  e8a4feffff           call 0x78fee0
// 0079003c  5f                   pop edi
// 0079003d  5b                   pop ebx
// 0079003e  5e                   pop esi
// 0079003f  5d                   pop ebp
// 00790040  c3                   ret 
// library lua-5.1.4/lcode.c (function _discharge2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
