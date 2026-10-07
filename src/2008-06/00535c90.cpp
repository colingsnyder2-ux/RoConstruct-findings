// roc 2008-06 00535c90  unit: seg_00530000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535c90
//
// 00535c90  83ec14               sub esp, 0x14
// 00535c93  8b442418             mov eax, dword ptr [esp + 0x18]
// 00535c97  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00535c9d  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00535ca0  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00535ca3  56                   push esi
// 00535ca4  8b742428             mov esi, dword ptr [esp + 0x28]
// 00535ca8  8954240c             mov dword ptr [esp + 0xc], edx
// 00535cac  894c2410             mov dword ptr [esp + 0x10], ecx
// 00535cb0  85f6                 test esi, esi
// 00535cb2  0f8e92000000         jle 0x535d4a
// 00535cb8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00535cbc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00535cc0  53                   push ebx
// 00535cc1  2bd0                 sub edx, eax
// 00535cc3  55                   push ebp
// 00535cc4  8944240c             mov dword ptr [esp + 0xc], eax
// 00535cc8  8954241c             mov dword ptr [esp + 0x1c], edx
// 00535ccc  89742410             mov dword ptr [esp + 0x10], esi
// 00535cd0  57                   push edi
// 00535cd1  8b3402               mov esi, dword ptr [edx + eax]
// 00535cd4  8b18                 mov ebx, dword ptr [eax]
// 00535cd6  894c2434             mov dword ptr [esp + 0x34], ecx
// 00535cda  85c9                 test ecx, ecx
// 00535cdc  765b                 jbe 0x535d39
// 00535cde  8bff                 mov edi, edi
// 00535ce0  0fb60e               movzx ecx, byte ptr [esi]
// 00535ce3  0fb64601             movzx eax, byte ptr [esi + 1]
// 00535ce7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00535ceb  46                   inc esi
// 00535cec  0fb65601             movzx edx, byte ptr [esi + 1]
// 00535cf0  46                   inc esi
// 00535cf1  c1e802               shr eax, 2
// 00535cf4  8bf8                 mov edi, eax
// 00535cf6  c1e705               shl edi, 5
// 00535cf9  c1e903               shr ecx, 3
// 00535cfc  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00535d00  c1ea03               shr edx, 3
// 00535d03  03fa                 add edi, edx
// 00535d05  8d7c7d00             lea edi, [ebp + edi*2]
// 00535d09  46                   inc esi
// 00535d0a  66833f00             cmp word ptr [edi], 0
// 00535d0e  750f                 jne 0x535d1f
// 00535d10  52                   push edx
// 00535d11  51                   push ecx
// 00535d12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00535d16  51                   push ecx
// 00535d17  e854feffff           call 0x535b70
// 00535d1c  83c40c               add esp, 0xc
// 00535d1f  8a17                 mov dl, byte ptr [edi]
// 00535d21  feca                 dec dl
// 00535d23  8813                 mov byte ptr [ebx], dl
// 00535d25  43                   inc ebx
// 00535d26  836c243401           sub dword ptr [esp + 0x34], 1
// 00535d2b  75b3                 jne 0x535ce0
// 00535d2d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00535d31  8b442410             mov eax, dword ptr [esp + 0x10]
// 00535d35  8b542420             mov edx, dword ptr [esp + 0x20]
// 00535d39  83c004               add eax, 4
// 00535d3c  836c241401           sub dword ptr [esp + 0x14], 1
// 00535d41  89442410             mov dword ptr [esp + 0x10], eax
// 00535d45  758a                 jne 0x535cd1
// 00535d47  5f                   pop edi
// 00535d48  5d                   pop ebp
// 00535d49  5b                   pop ebx
// 00535d4a  5e                   pop esi
// 00535d4b  83c414               add esp, 0x14
// 00535d4e  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
