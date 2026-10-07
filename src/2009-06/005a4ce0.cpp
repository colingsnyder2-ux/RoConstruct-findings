// roc 2009-06 005a4ce0  unit: seg_005a0000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a4ce0
//
// 005a4ce0  83ec10               sub esp, 0x10
// 005a4ce3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a4ce7  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 005a4ced  53                   push ebx
// 005a4cee  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 005a4cf1  55                   push ebp
// 005a4cf2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a4cf6  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 005a4cf9  03c0                 add eax, eax
// 005a4cfb  03c0                 add eax, eax
// 005a4cfd  56                   push esi
// 005a4cfe  8b742428             mov esi, dword ptr [esp + 0x28]
// 005a4d02  03c0                 add eax, eax
// 005a4d04  52                   push edx
// 005a4d05  89442410             mov dword ptr [esp + 0x10], eax
// 005a4d09  03c0                 add eax, eax
// 005a4d0b  56                   push esi
// 005a4d0c  e88ffcffff           call 0x5a49a0
// 005a4d11  33db                 xor ebx, ebx
// 005a4d13  83c408               add esp, 8
// 005a4d16  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005a4d19  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a4d1d  0f8e7f000000         jle 0x5a4da2
// 005a4d23  8bd6                 mov edx, esi
// 005a4d25  89542410             mov dword ptr [esp + 0x10], edx
// 005a4d29  57                   push edi
// 005a4d2a  8d9b00000000         lea ebx, [ebx]
// 005a4d30  837c241000           cmp dword ptr [esp + 0x10], 0
// 005a4d35  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a4d39  8b3498               mov esi, dword ptr [eax + ebx*4]
// 005a4d3c  8b02                 mov eax, dword ptr [edx]
// 005a4d3e  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a4d41  bf01000000           mov edi, 1
// 005a4d46  7648                 jbe 0x5a4d90
// 005a4d48  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a4d4c  89542424             mov dword ptr [esp + 0x24], edx
// 005a4d50  0fb65101             movzx edx, byte ptr [ecx + 1]
// 005a4d54  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005a4d58  03d3                 add edx, ebx
// 005a4d5a  0fb619               movzx ebx, byte ptr [ecx]
// 005a4d5d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a4d61  0fb608               movzx ecx, byte ptr [eax]
// 005a4d64  03df                 add ebx, edi
// 005a4d66  03da                 add ebx, edx
// 005a4d68  03cb                 add ecx, ebx
// 005a4d6a  c1f902               sar ecx, 2
// 005a4d6d  880e                 mov byte ptr [esi], cl
// 005a4d6f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a4d73  46                   inc esi
// 005a4d74  83f703               xor edi, 3
// 005a4d77  83c002               add eax, 2
// 005a4d7a  83c102               add ecx, 2
// 005a4d7d  836c242401           sub dword ptr [esp + 0x24], 1
// 005a4d82  75cc                 jne 0x5a4d50
// 005a4d84  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a4d88  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005a4d8c  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a4d90  43                   inc ebx
// 005a4d91  83c208               add edx, 8
// 005a4d94  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 005a4d97  89542414             mov dword ptr [esp + 0x14], edx
// 005a4d9b  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a4d9f  7c8f                 jl 0x5a4d30
// 005a4da1  5f                   pop edi
// 005a4da2  5e                   pop esi
// 005a4da3  5d                   pop ebp
// 005a4da4  5b                   pop ebx
// 005a4da5  83c410               add esp, 0x10
// 005a4da8  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v2_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
