// roc 2011-06 008e0d00  unit: VCEdit::?$CXTMaskEditT  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e0d00
//
// 008e0d00  56                   push esi
// 008e0d01  8bf1                 mov esi, ecx
// 008e0d03  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008e0d07  741f                 je 0x8e0d28
// 008e0d09  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e0d0d  7419                 je 0x8e0d28
// 008e0d0f  e804b90e00           call 0x9cc618
// 008e0d14  a900080000           test eax, 0x800
// 008e0d19  750d                 jne 0x8e0d28
// 008e0d1b  8d4e70               lea ecx, [esi + 0x70]
// 008e0d1e  ff15b026a400         call dword ptr [0xa426b0]
// 008e0d24  84c0                 test al, al
// 008e0d26  7410                 je 0x8e0d38
// 008e0d28  8b442408             mov eax, dword ptr [esp + 8]
// 008e0d2c  50                   push eax
// 008e0d2d  8bce                 mov ecx, esi
// 008e0d2f  e82a99f2ff           call 0x80a65e
// 008e0d34  5e                   pop esi
// 008e0d35  c20400               ret 4
// 008e0d38  53                   push ebx
// 008e0d39  57                   push edi
// 008e0d3a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008e0d3e  817f0400010000       cmp dword ptr [edi + 4], 0x100
// 008e0d45  0f85b2000000         jne 0x8e0dfd
// 008e0d4b  8b1d601aa400         mov ebx, dword ptr [0xa41a60]
// 008e0d51  6a6d                 push 0x6d
// 008e0d53  ffd3                 call ebx
// 008e0d55  6685c0               test ax, ax
// 008e0d58  7d18                 jge 0x8e0d72
// 008e0d5a  6a01                 push 1
// 008e0d5c  6a01                 push 1
// 008e0d5e  6a2d                 push 0x2d
// 008e0d60  8bce                 mov ecx, esi
// 008e0d62  e889f9ffff           call 0x8e06f0
// 008e0d67  5f                   pop edi
// 008e0d68  5b                   pop ebx
// 008e0d69  b801000000           mov eax, 1
// 008e0d6e  5e                   pop esi
// 008e0d6f  c20400               ret 4
// 008e0d72  6a6b                 push 0x6b
// 008e0d74  ffd3                 call ebx
// 008e0d76  6685c0               test ax, ax
// 008e0d79  7d18                 jge 0x8e0d93
// 008e0d7b  6a01                 push 1
// 008e0d7d  6a01                 push 1
// 008e0d7f  6a2b                 push 0x2b
// 008e0d81  8bce                 mov ecx, esi
// 008e0d83  e868f9ffff           call 0x8e06f0
// 008e0d88  5f                   pop edi
// 008e0d89  5b                   pop ebx
// 008e0d8a  b801000000           mov eax, 1
// 008e0d8f  5e                   pop esi
// 008e0d90  c20400               ret 4
// 008e0d93  6a11                 push 0x11
// 008e0d95  ffd3                 call ebx
// 008e0d97  6685c0               test ax, ax
// 008e0d9a  7d61                 jge 0x8e0dfd
// 008e0d9c  8b4708               mov eax, dword ptr [edi + 8]
// 008e0d9f  83c0bd               add eax, -0x43
// 008e0da2  83f837               cmp eax, 0x37
// 008e0da5  7756                 ja 0x8e0dfd
// 008e0da7  0fb688200e8e00       movzx ecx, byte ptr [eax + 0x8e0e20]
// 008e0dae  ff248d0c0e8e00       jmp dword ptr [ecx*4 + 0x8e0e0c]
// 008e0db5  8bce                 mov ecx, esi
// 008e0db7  e804feffff           call 0x8e0bc0
// 008e0dbc  5f                   pop edi
// 008e0dbd  5b                   pop ebx
// 008e0dbe  b801000000           mov eax, 1
// 008e0dc3  5e                   pop esi
// 008e0dc4  c20400               ret 4
// 008e0dc7  8bce                 mov ecx, esi
// 008e0dc9  e862f2ffff           call 0x8e0030
// 008e0dce  5f                   pop edi
// 008e0dcf  5b                   pop ebx
// 008e0dd0  b801000000           mov eax, 1
// 008e0dd5  5e                   pop esi
// 008e0dd6  c20400               ret 4
// 008e0dd9  8bce                 mov ecx, esi
// 008e0ddb  e840feffff           call 0x8e0c20
// 008e0de0  5f                   pop edi
// 008e0de1  5b                   pop ebx
// 008e0de2  b801000000           mov eax, 1
// 008e0de7  5e                   pop esi
// 008e0de8  c20400               ret 4
// 008e0deb  8bce                 mov ecx, esi
// 008e0ded  e8deeaffff           call 0x8df8d0
// 008e0df2  5f                   pop edi
// 008e0df3  5b                   pop ebx
// 008e0df4  b801000000           mov eax, 1
// 008e0df9  5e                   pop esi
// 008e0dfa  c20400               ret 4
// 008e0dfd  57                   push edi
// 008e0dfe  8bce                 mov ecx, esi
// 008e0e00  e85998f2ff           call 0x80a65e
// 008e0e05  5f                   pop edi
// 008e0e06  5b                   pop ebx
// 008e0e07  5e                   pop esi
// 008e0e08  c20400               ret 4
// 008e0e0b  90                   nop 
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTMaskEditT@VCEdit@@@@UAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Controls\XTMaskEdit.cpp