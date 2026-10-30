// roc 2009-12 008c1c20  unit: CXTPImageEditorDlg::CDlgToolBar  size: 425 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1c20
//
// 008c1c20  6aff                 push -1
// 008c1c22  68183f9600           push 0x963f18
// 008c1c27  64a100000000         mov eax, dword ptr fs:[0]
// 008c1c2d  50                   push eax
// 008c1c2e  83ec20               sub esp, 0x20
// 008c1c31  53                   push ebx
// 008c1c32  56                   push esi
// 008c1c33  57                   push edi
// 008c1c34  a10052b600           mov eax, dword ptr [0xb65200]
// 008c1c39  33c4                 xor eax, esp
// 008c1c3b  50                   push eax
// 008c1c3c  8d442430             lea eax, [esp + 0x30]
// 008c1c40  64a300000000         mov dword ptr fs:[0], eax
// 008c1c46  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008c1c4a  33f6                 xor esi, esi
// 008c1c4c  3bfe                 cmp edi, esi
// 008c1c4e  0f8460010000         je 0x8c1db4
// 008c1c54  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008c1c58  3bde                 cmp ebx, esi
// 008c1c5a  0f8454010000         je 0x8c1db4
// 008c1c60  8d4c2420             lea ecx, [esp + 0x20]
// 008c1c64  e845480600           call 0x9264ae
// 008c1c69  56                   push esi
// 008c1c6a  8974243c             mov dword ptr [esp + 0x3c], esi
// 008c1c6e  ff1554b19800         call dword ptr [0x98b154]
// 008c1c74  50                   push eax
// 008c1c75  8d4c2424             lea ecx, [esp + 0x24]
// 008c1c79  e81e480600           call 0x92649c
// 008c1c7e  8b4304               mov eax, dword ptr [ebx + 4]
// 008c1c81  8d4c2440             lea ecx, [esp + 0x40]
// 008c1c85  51                   push ecx
// 008c1c86  8d542448             lea edx, [esp + 0x48]
// 008c1c8a  52                   push edx
// 008c1c8b  8d4c2418             lea ecx, [esp + 0x18]
// 008c1c8f  51                   push ecx
// 008c1c90  50                   push eax
// 008c1c91  8d542430             lea edx, [esp + 0x30]
// 008c1c95  52                   push edx
// 008c1c96  89742458             mov dword ptr [esp + 0x58], esi
// 008c1c9a  8974242c             mov dword ptr [esp + 0x2c], esi
// 008c1c9e  89742424             mov dword ptr [esp + 0x24], esi
// 008c1ca2  89742430             mov dword ptr [esp + 0x30], esi
// 008c1ca6  e8258cf4ff           call 0x80a8d0
// 008c1cab  83c414               add esp, 0x14
// 008c1cae  85c0                 test eax, eax
// 008c1cb0  0f84ed000000         je 0x8c1da3
// 008c1cb6  8b4704               mov eax, dword ptr [edi + 4]
// 008c1cb9  8d4c2440             lea ecx, [esp + 0x40]
// 008c1cbd  51                   push ecx
// 008c1cbe  8d54241c             lea edx, [esp + 0x1c]
// 008c1cc2  52                   push edx
// 008c1cc3  8d4c2424             lea ecx, [esp + 0x24]
// 008c1cc7  51                   push ecx
// 008c1cc8  50                   push eax
// 008c1cc9  8d542430             lea edx, [esp + 0x30]
// 008c1ccd  52                   push edx
// 008c1cce  e8fd8bf4ff           call 0x80a8d0
// 008c1cd3  83c414               add esp, 0x14
// 008c1cd6  85c0                 test eax, eax
// 008c1cd8  751c                 jne 0x8c1cf6
// 008c1cda  8b442444             mov eax, dword ptr [esp + 0x44]
// 008c1cde  8b3540b79800         mov esi, dword ptr [0x98b740]
// 008c1ce4  50                   push eax
// 008c1ce5  ffd6                 call esi
// 008c1ce7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c1ceb  51                   push ecx
// 008c1cec  ffd6                 call esi
// 008c1cee  83c408               add esp, 8
// 008c1cf1  e9ad000000           jmp 0x8c1da3
// 008c1cf6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c1cfa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c1cfe  56                   push esi
// 008c1cff  56                   push esi
// 008c1d00  8d54241c             lea edx, [esp + 0x1c]
// 008c1d04  52                   push edx
// 008c1d05  56                   push esi
// 008c1d06  50                   push eax
// 008c1d07  51                   push ecx
// 008c1d08  8974242c             mov dword ptr [esp + 0x2c], esi
// 008c1d0c  ff1560b19800         call dword ptr [0x98b160]
// 008c1d12  8bf8                 mov edi, eax
// 008c1d14  3bfe                 cmp edi, esi
// 008c1d16  7466                 je 0x8c1d7e
// 008c1d18  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c1d1c  3bc6                 cmp eax, esi
// 008c1d1e  745e                 je 0x8c1d7e
// 008c1d20  8b542440             mov edx, dword ptr [esp + 0x40]
// 008c1d24  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008c1d28  52                   push edx
// 008c1d29  51                   push ecx
// 008c1d2a  50                   push eax
// 008c1d2b  e8e068f4ff           call 0x808610
// 008c1d30  83c40c               add esp, 0xc
// 008c1d33  33c0                 xor eax, eax
// 008c1d35  f7442440fcffffff     test dword ptr [esp + 0x40], 0xfffffffc
// 008c1d3d  7630                 jbe 0x8c1d6f
// 008c1d3f  90                   nop 
// 008c1d40  8b542444             mov edx, dword ptr [esp + 0x44]
// 008c1d44  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 008c1d47  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c1d4b  3b0c82               cmp ecx, dword ptr [edx + eax*4]
// 008c1d4e  7413                 je 0x8c1d63
// 008c1d50  81f9fffeff00         cmp ecx, 0xfffeff
// 008c1d56  740b                 je 0x8c1d63
// 008c1d58  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c1d5c  810c81000000ff       or dword ptr [ecx + eax*4], 0xff000000
// 008c1d63  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008c1d67  40                   inc eax
// 008c1d68  c1e902               shr ecx, 2
// 008c1d6b  3bc1                 cmp eax, ecx
// 008c1d6d  72d1                 jb 0x8c1d40
// 008c1d6f  8bcb                 mov ecx, ebx
// 008c1d71  e8a820f3ff           call 0x7f3e1e
// 008c1d76  57                   push edi
// 008c1d77  8bcb                 mov ecx, ebx
// 008c1d79  e8ac20f3ff           call 0x7f3e2a
// 008c1d7e  8b542444             mov edx, dword ptr [esp + 0x44]
// 008c1d82  8b3540b79800         mov esi, dword ptr [0x98b740]
// 008c1d88  52                   push edx
// 008c1d89  ffd6                 call esi
// 008c1d8b  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c1d8f  50                   push eax
// 008c1d90  ffd6                 call esi
// 008c1d92  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c1d96  51                   push ecx
// 008c1d97  ffd6                 call esi
// 008c1d99  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c1d9d  52                   push edx
// 008c1d9e  ffd6                 call esi
// 008c1da0  83c410               add esp, 0x10
// 008c1da3  8d4c2420             lea ecx, [esp + 0x20]
// 008c1da7  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008c1daf  e8f4460600           call 0x9264a8
// 008c1db4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c1db8  64890d00000000       mov dword ptr fs:[0], ecx
// 008c1dbf  59                   pop ecx
// 008c1dc0  5f                   pop edi
// 008c1dc1  5e                   pop esi
// 008c1dc2  5b                   pop ebx
// 008c1dc3  83c42c               add esp, 0x2c
// 008c1dc6  c20800               ret 8
// copied from an identical function in another client (function ?FixAlphaLayer@CXTPImageEditorPicture@@QAEXPAVCAlphaBitmap@1@0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp