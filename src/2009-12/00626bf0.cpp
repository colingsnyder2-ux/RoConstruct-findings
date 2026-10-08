// roc 2009-12 00626bf0  unit: seg_00620000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626bf0
//
// 00626bf0  83ec08               sub esp, 8
// 00626bf3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00626bf7  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 00626bfd  53                   push ebx
// 00626bfe  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 00626c01  55                   push ebp
// 00626c02  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00626c06  56                   push esi
// 00626c07  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00626c0b  57                   push edi
// 00626c0c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00626c0f  03ff                 add edi, edi
// 00626c11  03ff                 add edi, edi
// 00626c13  03ff                 add edi, edi
// 00626c15  52                   push edx
// 00626c16  8d043f               lea eax, [edi + edi]
// 00626c19  55                   push ebp
// 00626c1a  897c2418             mov dword ptr [esp + 0x18], edi
// 00626c1e  e82dfdffff           call 0x626950
// 00626c23  83c408               add esp, 8
// 00626c26  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00626c2a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00626c32  7e54                 jle 0x626c88
// 00626c34  8b542428             mov edx, dword ptr [esp + 0x28]
// 00626c38  2bd5                 sub edx, ebp
// 00626c3a  89542414             mov dword ptr [esp + 0x14], edx
// 00626c3e  8bff                 mov edi, edi
// 00626c40  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 00626c43  8b4500               mov eax, dword ptr [ebp]
// 00626c46  33f6                 xor esi, esi
// 00626c48  85ff                 test edi, edi
// 00626c4a  7627                 jbe 0x626c73
// 00626c4c  8d642400             lea esp, [esp]
// 00626c50  0fb65001             movzx edx, byte ptr [eax + 1]
// 00626c54  0fb618               movzx ebx, byte ptr [eax]
// 00626c57  03d6                 add edx, esi
// 00626c59  03da                 add ebx, edx
// 00626c5b  d1fb                 sar ebx, 1
// 00626c5d  8819                 mov byte ptr [ecx], bl
// 00626c5f  41                   inc ecx
// 00626c60  83f601               xor esi, 1
// 00626c63  83c002               add eax, 2
// 00626c66  83ef01               sub edi, 1
// 00626c69  75e5                 jne 0x626c50
// 00626c6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00626c6f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00626c73  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00626c77  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00626c7b  40                   inc eax
// 00626c7c  83c504               add ebp, 4
// 00626c7f  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00626c82  8944241c             mov dword ptr [esp + 0x1c], eax
// 00626c86  7cb8                 jl 0x626c40
// 00626c88  5f                   pop edi
// 00626c89  5e                   pop esi
// 00626c8a  5d                   pop ebp
// 00626c8b  5b                   pop ebx
// 00626c8c  83c408               add esp, 8
// 00626c8f  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
