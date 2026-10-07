// roc 2012-06 00669dc0  unit: seg_00660000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669dc0
//
// 00669dc0  807c240800           cmp byte ptr [esp + 8], 0
// 00669dc5  57                   push edi
// 00669dc6  8b7c2408             mov edi, dword ptr [esp + 8]
// 00669dca  7413                 je 0x669ddf
// 00669dcc  8b07                 mov eax, dword ptr [edi]
// 00669dce  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00669dd5  8b0f                 mov ecx, dword ptr [edi]
// 00669dd7  8b11                 mov edx, dword ptr [ecx]
// 00669dd9  57                   push edi
// 00669dda  ffd2                 call edx
// 00669ddc  83c404               add esp, 4
// 00669ddf  8b4704               mov eax, dword ptr [edi + 4]
// 00669de2  8b08                 mov ecx, dword ptr [eax]
// 00669de4  6a40                 push 0x40
// 00669de6  6a01                 push 1
// 00669de8  57                   push edi
// 00669de9  ffd1                 call ecx
// 00669deb  898744010000         mov dword ptr [edi + 0x144], eax
// 00669df1  c70060986600         mov dword ptr [eax], 0x669860
// 00669df7  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 00669dfd  83c40c               add esp, 0xc
// 00669e00  807a0800             cmp byte ptr [edx + 8], 0
// 00669e04  740e                 je 0x669e14
// 00669e06  c74004b09a6600       mov dword ptr [eax + 4], 0x669ab0
// 00669e0d  e88efeffff           call 0x669ca0
// 00669e12  5f                   pop edi
// 00669e13  c3                   ret 
// 00669e14  55                   push ebp
// 00669e15  c74004b0986600       mov dword ptr [eax + 4], 0x6698b0
// 00669e1c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00669e1f  33ed                 xor ebp, ebp
// 00669e21  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 00669e24  7e43                 jle 0x669e69
// 00669e26  53                   push ebx
// 00669e27  56                   push esi
// 00669e28  8d7108               lea esi, [ecx + 8]
// 00669e2b  8d5808               lea ebx, [eax + 8]
// 00669e2e  8bff                 mov edi, edi
// 00669e30  8b4614               mov eax, dword ptr [esi + 0x14]
// 00669e33  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 00669e3a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 00669e40  03c0                 add eax, eax
// 00669e42  03c0                 add eax, eax
// 00669e44  52                   push edx
// 00669e45  03c0                 add eax, eax
// 00669e47  99                   cdq 
// 00669e48  f73e                 idiv dword ptr [esi]
// 00669e4a  8b4f04               mov ecx, dword ptr [edi + 4]
// 00669e4d  50                   push eax
// 00669e4e  8b4108               mov eax, dword ptr [ecx + 8]
// 00669e51  6a01                 push 1
// 00669e53  57                   push edi
// 00669e54  ffd0                 call eax
// 00669e56  8903                 mov dword ptr [ebx], eax
// 00669e58  45                   inc ebp
// 00669e59  83c410               add esp, 0x10
// 00669e5c  83c304               add ebx, 4
// 00669e5f  83c654               add esi, 0x54
// 00669e62  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 00669e65  7cc9                 jl 0x669e30
// 00669e67  5e                   pop esi
// 00669e68  5b                   pop ebx
// 00669e69  5d                   pop ebp
// 00669e6a  5f                   pop edi
// 00669e6b  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
