// from server: 100% by auto
// roc 2010-06 00585e00  unit: seg_00580000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585e00
//
// 00585e00  83ec24               sub esp, 0x24
// 00585e03  53                   push ebx
// 00585e04  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00585e08  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00585e0b  8b08                 mov ecx, dword ptr [eax]
// 00585e0d  8b5004               mov edx, dword ptr [eax + 4]
// 00585e10  56                   push esi
// 00585e11  57                   push edi
// 00585e12  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 00585e18  8b470c               mov eax, dword ptr [edi + 0xc]
// 00585e1b  894c240c             mov dword ptr [esp + 0xc], ecx
// 00585e1f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00585e22  89542410             mov dword ptr [esp + 0x10], edx
// 00585e26  8b5714               mov edx, dword ptr [edi + 0x14]
// 00585e29  89442414             mov dword ptr [esp + 0x14], eax
// 00585e2d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00585e30  894c2418             mov dword ptr [esp + 0x18], ecx
// 00585e34  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00585e37  8954241c             mov dword ptr [esp + 0x1c], edx
// 00585e3b  8b5720               mov edx, dword ptr [edi + 0x20]
// 00585e3e  89442420             mov dword ptr [esp + 0x20], eax
// 00585e42  6a7f                 push 0x7f
// 00585e44  b807000000           mov eax, 7
// 00585e49  8d742410             lea esi, [esp + 0x10]
// 00585e4d  894c2428             mov dword ptr [esp + 0x28], ecx
// 00585e51  8954242c             mov dword ptr [esp + 0x2c], edx
// 00585e55  895c2430             mov dword ptr [esp + 0x30], ebx
// 00585e59  e822fbffff           call 0x585980
// 00585e5e  83c404               add esp, 4
// 00585e61  84c0                 test al, al
// 00585e63  7406                 je 0x585e6b
// 00585e65  33c9                 xor ecx, ecx
// 00585e67  33c0                 xor eax, eax
// 00585e69  eb1b                 jmp 0x585e86
// 00585e6b  8b03                 mov eax, dword ptr [ebx]
// 00585e6d  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00585e74  8b0b                 mov ecx, dword ptr [ebx]
// 00585e76  8b11                 mov edx, dword ptr [ecx]
// 00585e78  53                   push ebx
// 00585e79  ffd2                 call edx
// 00585e7b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00585e7f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00585e83  83c404               add esp, 4
// 00585e86  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00585e89  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00585e8d  8932                 mov dword ptr [edx], esi
// 00585e8f  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00585e92  8b742410             mov esi, dword ptr [esp + 0x10]
// 00585e96  897204               mov dword ptr [edx + 4], esi
// 00585e99  8b542424             mov edx, dword ptr [esp + 0x24]
// 00585e9d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00585ea0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00585ea4  894710               mov dword ptr [edi + 0x10], eax
// 00585ea7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00585eab  894714               mov dword ptr [edi + 0x14], eax
// 00585eae  8b442428             mov eax, dword ptr [esp + 0x28]
// 00585eb2  894f18               mov dword ptr [edi + 0x18], ecx
// 00585eb5  89571c               mov dword ptr [edi + 0x1c], edx
// 00585eb8  894720               mov dword ptr [edi + 0x20], eax
// 00585ebb  5f                   pop edi
// 00585ebc  5e                   pop esi
// 00585ebd  5b                   pop ebx
// 00585ebe  83c424               add esp, 0x24
// 00585ec1  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
