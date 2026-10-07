// roc 2010-06 00583b00  unit: seg_00580000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583b00
//
// 00583b00  83ec14               sub esp, 0x14
// 00583b03  8b442418             mov eax, dword ptr [esp + 0x18]
// 00583b07  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00583b0d  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00583b10  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00583b13  56                   push esi
// 00583b14  8b742428             mov esi, dword ptr [esp + 0x28]
// 00583b18  8954240c             mov dword ptr [esp + 0xc], edx
// 00583b1c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00583b20  85f6                 test esi, esi
// 00583b22  0f8e92000000         jle 0x583bba
// 00583b28  8b442424             mov eax, dword ptr [esp + 0x24]
// 00583b2c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00583b30  53                   push ebx
// 00583b31  2bd0                 sub edx, eax
// 00583b33  55                   push ebp
// 00583b34  8944240c             mov dword ptr [esp + 0xc], eax
// 00583b38  8954241c             mov dword ptr [esp + 0x1c], edx
// 00583b3c  89742410             mov dword ptr [esp + 0x10], esi
// 00583b40  57                   push edi
// 00583b41  8b3402               mov esi, dword ptr [edx + eax]
// 00583b44  8b18                 mov ebx, dword ptr [eax]
// 00583b46  894c2434             mov dword ptr [esp + 0x34], ecx
// 00583b4a  85c9                 test ecx, ecx
// 00583b4c  765b                 jbe 0x583ba9
// 00583b4e  8bff                 mov edi, edi
// 00583b50  0fb60e               movzx ecx, byte ptr [esi]
// 00583b53  0fb64601             movzx eax, byte ptr [esi + 1]
// 00583b57  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00583b5b  46                   inc esi
// 00583b5c  0fb65601             movzx edx, byte ptr [esi + 1]
// 00583b60  46                   inc esi
// 00583b61  c1e802               shr eax, 2
// 00583b64  8bf8                 mov edi, eax
// 00583b66  c1e705               shl edi, 5
// 00583b69  c1e903               shr ecx, 3
// 00583b6c  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00583b70  c1ea03               shr edx, 3
// 00583b73  03fa                 add edi, edx
// 00583b75  8d7c7d00             lea edi, [ebp + edi*2]
// 00583b79  46                   inc esi
// 00583b7a  66833f00             cmp word ptr [edi], 0
// 00583b7e  750f                 jne 0x583b8f
// 00583b80  52                   push edx
// 00583b81  51                   push ecx
// 00583b82  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00583b86  51                   push ecx
// 00583b87  e854feffff           call 0x5839e0
// 00583b8c  83c40c               add esp, 0xc
// 00583b8f  8a17                 mov dl, byte ptr [edi]
// 00583b91  feca                 dec dl
// 00583b93  8813                 mov byte ptr [ebx], dl
// 00583b95  43                   inc ebx
// 00583b96  836c243401           sub dword ptr [esp + 0x34], 1
// 00583b9b  75b3                 jne 0x583b50
// 00583b9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00583ba1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583ba5  8b542420             mov edx, dword ptr [esp + 0x20]
// 00583ba9  83c004               add eax, 4
// 00583bac  836c241401           sub dword ptr [esp + 0x14], 1
// 00583bb1  89442410             mov dword ptr [esp + 0x10], eax
// 00583bb5  758a                 jne 0x583b41
// 00583bb7  5f                   pop edi
// 00583bb8  5d                   pop ebp
// 00583bb9  5b                   pop ebx
// 00583bba  5e                   pop esi
// 00583bbb  83c414               add esp, 0x14
// 00583bbe  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
