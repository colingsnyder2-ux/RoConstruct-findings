// roc 2009-12 008d6af0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d6af0
//
// 008d6af0  83ec14               sub esp, 0x14
// 008d6af3  53                   push ebx
// 008d6af4  55                   push ebp
// 008d6af5  56                   push esi
// 008d6af6  57                   push edi
// 008d6af7  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d6afb  e800ad0000           call 0x8e1800
// 008d6b00  8bc8                 mov ecx, eax
// 008d6b02  e8d9930000           call 0x8dfee0
// 008d6b07  85c0                 test eax, eax
// 008d6b09  0f84bd000000         je 0x8d6bcc
// 008d6b0f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008d6b13  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d6b16  8b4650               mov eax, dword ptr [esi + 0x50]
// 008d6b19  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008d6b1c  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 008d6b1f  8b6e4c               mov ebp, dword ptr [esi + 0x4c]
// 008d6b22  89442420             mov dword ptr [esp + 0x20], eax
// 008d6b26  397104               cmp dword ptr [ecx + 4], esi
// 008d6b29  7405                 je 0x8d6b30
// 008d6b2b  397108               cmp dword ptr [ecx + 8], esi
// 008d6b2e  7572                 jne 0x8d6ba2
// 008d6b30  8b11                 mov edx, dword ptr [ecx]
// 008d6b32  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d6b35  ffd0                 call eax
// 008d6b37  83f803               cmp eax, 3
// 008d6b3a  7766                 ja 0x8d6ba2
// 008d6b3c  ff2485d86b8d00       jmp dword ptr [eax*4 + 0x8d6bd8]
// 008d6b43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d6b47  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d6b4b  83ec10               sub esp, 0x10
// 008d6b4e  8bc4                 mov eax, esp
// 008d6b50  8938                 mov dword ptr [eax], edi
// 008d6b52  895804               mov dword ptr [eax + 4], ebx
// 008d6b55  896808               mov dword ptr [eax + 8], ebp
// 008d6b58  56                   push esi
// 008d6b59  89480c               mov dword ptr [eax + 0xc], ecx
// 008d6b5c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d6b60  52                   push edx
// 008d6b61  e86afcffff           call 0x8d67d0
// 008d6b66  eb3a                 jmp 0x8d6ba2
// 008d6b68  68d06d8e00           push 0x8e6dd0
// 008d6b6d  6a00                 push 0
// 008d6b6f  eb0e                 jmp 0x8d6b7f
// 008d6b71  68906e8e00           push 0x8e6e90
// 008d6b76  eb05                 jmp 0x8d6b7d
// 008d6b78  68306e8e00           push 0x8e6e30
// 008d6b7d  6a01                 push 1
// 008d6b7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d6b83  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d6b87  56                   push esi
// 008d6b88  83ec10               sub esp, 0x10
// 008d6b8b  8bc4                 mov eax, esp
// 008d6b8d  8938                 mov dword ptr [eax], edi
// 008d6b8f  895804               mov dword ptr [eax + 4], ebx
// 008d6b92  896808               mov dword ptr [eax + 8], ebp
// 008d6b95  89480c               mov dword ptr [eax + 0xc], ecx
// 008d6b98  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d6b9c  52                   push edx
// 008d6b9d  e80efdffff           call 0x8d68b0
// 008d6ba2  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d6ba6  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008d6ba9  8b11                 mov edx, dword ptr [ecx]
// 008d6bab  8b5268               mov edx, dword ptr [edx + 0x68]
// 008d6bae  6a01                 push 1
// 008d6bb0  83ec10               sub esp, 0x10
// 008d6bb3  8bc4                 mov eax, esp
// 008d6bb5  8938                 mov dword ptr [eax], edi
// 008d6bb7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008d6bbb  895804               mov dword ptr [eax + 4], ebx
// 008d6bbe  896808               mov dword ptr [eax + 8], ebp
// 008d6bc1  89780c               mov dword ptr [eax + 0xc], edi
// 008d6bc4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d6bc8  56                   push esi
// 008d6bc9  50                   push eax
// 008d6bca  ffd2                 call edx
// 008d6bcc  5f                   pop edi
// 008d6bcd  5e                   pop esi
// 008d6bce  5d                   pop ebp
// 008d6bcf  5b                   pop ebx
// 008d6bd0  83c414               add esp, 0x14
// 008d6bd3  c20800               ret 8
// 008d6bd6  8bff                 mov edi, edi
// 008d6bd8  43                   inc ebx
// 008d6bd9  6b8d00716b8d00       imul ecx, dword ptr [ebp - 0x72948f00], 0
// 008d6be0  686b8d0078           push 0x78008d6b
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp