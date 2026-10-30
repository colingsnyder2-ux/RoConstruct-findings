// from server: 100% by auto
// roc 2011-06 00579db0  unit: seg_00570000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579db0
//
// 00579db0  83ec14               sub esp, 0x14
// 00579db3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00579db7  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00579dbd  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00579dc0  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00579dc3  56                   push esi
// 00579dc4  8b742428             mov esi, dword ptr [esp + 0x28]
// 00579dc8  8954240c             mov dword ptr [esp + 0xc], edx
// 00579dcc  894c2410             mov dword ptr [esp + 0x10], ecx
// 00579dd0  85f6                 test esi, esi
// 00579dd2  0f8e92000000         jle 0x579e6a
// 00579dd8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00579ddc  8b542420             mov edx, dword ptr [esp + 0x20]
// 00579de0  53                   push ebx
// 00579de1  2bd0                 sub edx, eax
// 00579de3  55                   push ebp
// 00579de4  8944240c             mov dword ptr [esp + 0xc], eax
// 00579de8  8954241c             mov dword ptr [esp + 0x1c], edx
// 00579dec  89742410             mov dword ptr [esp + 0x10], esi
// 00579df0  57                   push edi
// 00579df1  8b3402               mov esi, dword ptr [edx + eax]
// 00579df4  8b18                 mov ebx, dword ptr [eax]
// 00579df6  894c2434             mov dword ptr [esp + 0x34], ecx
// 00579dfa  85c9                 test ecx, ecx
// 00579dfc  765b                 jbe 0x579e59
// 00579dfe  8bff                 mov edi, edi
// 00579e00  0fb60e               movzx ecx, byte ptr [esi]
// 00579e03  0fb64601             movzx eax, byte ptr [esi + 1]
// 00579e07  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00579e0b  46                   inc esi
// 00579e0c  0fb65601             movzx edx, byte ptr [esi + 1]
// 00579e10  46                   inc esi
// 00579e11  c1e802               shr eax, 2
// 00579e14  8bf8                 mov edi, eax
// 00579e16  c1e705               shl edi, 5
// 00579e19  c1e903               shr ecx, 3
// 00579e1c  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00579e20  c1ea03               shr edx, 3
// 00579e23  03fa                 add edi, edx
// 00579e25  8d7c7d00             lea edi, [ebp + edi*2]
// 00579e29  46                   inc esi
// 00579e2a  66833f00             cmp word ptr [edi], 0
// 00579e2e  750f                 jne 0x579e3f
// 00579e30  52                   push edx
// 00579e31  51                   push ecx
// 00579e32  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00579e36  51                   push ecx
// 00579e37  e854feffff           call 0x579c90
// 00579e3c  83c40c               add esp, 0xc
// 00579e3f  8a17                 mov dl, byte ptr [edi]
// 00579e41  feca                 dec dl
// 00579e43  8813                 mov byte ptr [ebx], dl
// 00579e45  43                   inc ebx
// 00579e46  836c243401           sub dword ptr [esp + 0x34], 1
// 00579e4b  75b3                 jne 0x579e00
// 00579e4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00579e51  8b442410             mov eax, dword ptr [esp + 0x10]
// 00579e55  8b542420             mov edx, dword ptr [esp + 0x20]
// 00579e59  83c004               add eax, 4
// 00579e5c  836c241401           sub dword ptr [esp + 0x14], 1
// 00579e61  89442410             mov dword ptr [esp + 0x10], eax
// 00579e65  758a                 jne 0x579df1
// 00579e67  5f                   pop edi
// 00579e68  5d                   pop ebp
// 00579e69  5b                   pop ebx
// 00579e6a  5e                   pop esi
// 00579e6b  83c414               add esp, 0x14
// 00579e6e  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
