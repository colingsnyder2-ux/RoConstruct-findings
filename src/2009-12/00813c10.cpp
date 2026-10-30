// roc 2009-12 00813c10  unit: CXTPToolBar  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813c10
//
// 00813c10  53                   push ebx
// 00813c11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00813c15  56                   push esi
// 00813c16  8bf1                 mov esi, ecx
// 00813c18  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00813c1f  57                   push edi
// 00813c20  757a                 jne 0x813c9c
// 00813c22  83fb09               cmp ebx, 9
// 00813c25  7575                 jne 0x813c9c
// 00813c27  8b4620               mov eax, dword ptr [esi + 0x20]
// 00813c2a  8b3dbccb9800         mov edi, dword ptr [0x98cbbc]
// 00813c30  50                   push eax
// 00813c31  ffd7                 call edi
// 00813c33  50                   push eax
// 00813c34  e8f1fefdff           call 0x7f3b2a
// 00813c39  85c0                 test eax, eax
// 00813c3b  745f                 je 0x813c9c
// 00813c3d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00813c40  51                   push ecx
// 00813c41  ffd7                 call edi
// 00813c43  50                   push eax
// 00813c44  e8e1fefdff           call 0x7f3b2a
// 00813c49  6a10                 push 0x10
// 00813c4b  8bf8                 mov edi, eax
// 00813c4d  ff1530cc9800         call dword ptr [0x98cc30]
// 00813c53  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00813c56  33d2                 xor edx, edx
// 00813c58  6685c0               test ax, ax
// 00813c5b  0f9cc2               setl dl
// 00813c5e  8bc2                 mov eax, edx
// 00813c60  50                   push eax
// 00813c61  8b4720               mov eax, dword ptr [edi + 0x20]
// 00813c64  51                   push ecx
// 00813c65  50                   push eax
// 00813c66  ff15e4ca9800         call dword ptr [0x98cae4]
// 00813c6c  50                   push eax
// 00813c6d  e8b8fefdff           call 0x7f3b2a
// 00813c72  85c0                 test eax, eax
// 00813c74  7426                 je 0x813c9c
// 00813c76  3bc6                 cmp eax, esi
// 00813c78  7422                 je 0x813c9c
// 00813c7a  8bc8                 mov ecx, eax
// 00813c7c  e881fffdff           call 0x7f3c02
// 00813c81  8b16                 mov edx, dword ptr [esi]
// 00813c83  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00813c89  6a00                 push 0
// 00813c8b  6a01                 push 1
// 00813c8d  6a00                 push 0
// 00813c8f  8bce                 mov ecx, esi
// 00813c91  ffd0                 call eax
// 00813c93  5f                   pop edi
// 00813c94  5e                   pop esi
// 00813c95  8d43f8               lea eax, [ebx - 8]
// 00813c98  5b                   pop ebx
// 00813c99  c20800               ret 8
// 00813c9c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00813ca0  51                   push ecx
// 00813ca1  53                   push ebx
// 00813ca2  8bce                 mov ecx, esi
// 00813ca4  e80744ffff           call 0x8080b0
// 00813ca9  5f                   pop edi
// 00813caa  5e                   pop esi
// 00813cab  5b                   pop ebx
// 00813cac  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPToolBar@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp