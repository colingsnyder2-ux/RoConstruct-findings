// roc 2008-06 00524cb0  unit: seg_00520000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524cb0
//
// 00524cb0  56                   push esi
// 00524cb1  8b742408             mov esi, dword ptr [esp + 8]
// 00524cb5  8b4614               mov eax, dword ptr [esi + 0x14]
// 00524cb8  83f865               cmp eax, 0x65
// 00524cbb  7421                 je 0x524cde
// 00524cbd  83f866               cmp eax, 0x66
// 00524cc0  741c                 je 0x524cde
// 00524cc2  83f867               cmp eax, 0x67
// 00524cc5  7444                 je 0x524d0b
// 00524cc7  8b06                 mov eax, dword ptr [esi]
// 00524cc9  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00524cd0  8b0e                 mov ecx, dword ptr [esi]
// 00524cd2  8b5614               mov edx, dword ptr [esi + 0x14]
// 00524cd5  895118               mov dword ptr [ecx + 0x18], edx
// 00524cd8  8b06                 mov eax, dword ptr [esi]
// 00524cda  8b08                 mov ecx, dword ptr [eax]
// 00524cdc  eb27                 jmp 0x524d05
// 00524cde  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00524ce4  3b5620               cmp edx, dword ptr [esi + 0x20]
// 00524ce7  7313                 jae 0x524cfc
// 00524ce9  8b06                 mov eax, dword ptr [esi]
// 00524ceb  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 00524cf2  8b0e                 mov ecx, dword ptr [esi]
// 00524cf4  8b11                 mov edx, dword ptr [ecx]
// 00524cf6  56                   push esi
// 00524cf7  ffd2                 call edx
// 00524cf9  83c404               add esp, 4
// 00524cfc  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00524d02  8b4808               mov ecx, dword ptr [eax + 8]
// 00524d05  56                   push esi
// 00524d06  ffd1                 call ecx
// 00524d08  83c404               add esp, 4
// 00524d0b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00524d11  80780d00             cmp byte ptr [eax + 0xd], 0
// 00524d15  0f8586000000         jne 0x524da1
// 00524d1b  53                   push ebx
// 00524d1c  57                   push edi
// 00524d1d  bb18000000           mov ebx, 0x18
// 00524d22  8b10                 mov edx, dword ptr [eax]
// 00524d24  56                   push esi
// 00524d25  ffd2                 call edx
// 00524d27  33ff                 xor edi, edi
// 00524d29  83c404               add esp, 4
// 00524d2c  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 00524d32  7650                 jbe 0x524d84
// 00524d34  837e0800             cmp dword ptr [esi + 8], 0
// 00524d38  741d                 je 0x524d57
// 00524d3a  8b4608               mov eax, dword ptr [esi + 8]
// 00524d3d  897804               mov dword ptr [eax + 4], edi
// 00524d40  8b4e08               mov ecx, dword ptr [esi + 8]
// 00524d43  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 00524d49  895108               mov dword ptr [ecx + 8], edx
// 00524d4c  8b4608               mov eax, dword ptr [esi + 8]
// 00524d4f  8b08                 mov ecx, dword ptr [eax]
// 00524d51  56                   push esi
// 00524d52  ffd1                 call ecx
// 00524d54  83c404               add esp, 4
// 00524d57  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 00524d5d  8b4204               mov eax, dword ptr [edx + 4]
// 00524d60  6a00                 push 0
// 00524d62  56                   push esi
// 00524d63  ffd0                 call eax
// 00524d65  83c408               add esp, 8
// 00524d68  84c0                 test al, al
// 00524d6a  750f                 jne 0x524d7b
// 00524d6c  8b0e                 mov ecx, dword ptr [esi]
// 00524d6e  895914               mov dword ptr [ecx + 0x14], ebx
// 00524d71  8b16                 mov edx, dword ptr [esi]
// 00524d73  8b02                 mov eax, dword ptr [edx]
// 00524d75  56                   push esi
// 00524d76  ffd0                 call eax
// 00524d78  83c404               add esp, 4
// 00524d7b  47                   inc edi
// 00524d7c  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 00524d82  72b0                 jb 0x524d34
// 00524d84  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00524d8a  8b5108               mov edx, dword ptr [ecx + 8]
// 00524d8d  56                   push esi
// 00524d8e  ffd2                 call edx
// 00524d90  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00524d96  83c404               add esp, 4
// 00524d99  80780d00             cmp byte ptr [eax + 0xd], 0
// 00524d9d  7483                 je 0x524d22
// 00524d9f  5f                   pop edi
// 00524da0  5b                   pop ebx
// 00524da1  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00524da7  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00524daa  56                   push esi
// 00524dab  ffd1                 call ecx
// 00524dad  8b5618               mov edx, dword ptr [esi + 0x18]
// 00524db0  8b4210               mov eax, dword ptr [edx + 0x10]
// 00524db3  56                   push esi
// 00524db4  ffd0                 call eax
// 00524db6  56                   push esi
// 00524db7  e8b468ffff           call 0x51b670
// 00524dbc  83c40c               add esp, 0xc
// 00524dbf  5e                   pop esi
// 00524dc0  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
