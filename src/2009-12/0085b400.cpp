// roc 2009-12 0085b400  unit: CXTPStatusBar  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b400
//
// 0085b400  8b442404             mov eax, dword ptr [esp + 4]
// 0085b404  56                   push esi
// 0085b405  57                   push edi
// 0085b406  50                   push eax
// 0085b407  8bf9                 mov edi, ecx
// 0085b409  e8f2feffff           call 0x85b300
// 0085b40e  8bf0                 mov esi, eax
// 0085b410  85f6                 test esi, esi
// 0085b412  7505                 jne 0x85b419
// 0085b414  5f                   pop edi
// 0085b415  5e                   pop esi
// 0085b416  c20c00               ret 0xc
// 0085b419  f6462c01             test byte ptr [esi + 0x2c], 1
// 0085b41d  53                   push ebx
// 0085b41e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0085b422  7521                 jne 0x85b445
// 0085b424  8d4e30               lea ecx, [esi + 0x30]
// 0085b427  ff1580de9800         call dword ptr [0x98de80]
// 0085b42d  50                   push eax
// 0085b42e  8bcb                 mov ecx, ebx
// 0085b430  ff1584de9800         call dword ptr [0x98de84]
// 0085b436  85c0                 test eax, eax
// 0085b438  750b                 jne 0x85b445
// 0085b43a  5b                   pop ebx
// 0085b43b  5f                   pop edi
// 0085b43c  b801000000           mov eax, 1
// 0085b441  5e                   pop esi
// 0085b442  c20c00               ret 0xc
// 0085b445  55                   push ebp
// 0085b446  8d6e30               lea ebp, [esi + 0x30]
// 0085b449  53                   push ebx
// 0085b44a  8bcd                 mov ecx, ebp
// 0085b44c  ff1538d59800         call dword ptr [0x98d538]
// 0085b452  8bce                 mov ecx, esi
// 0085b454  e8977ff1ff           call 0x7733f0
// 0085b459  85c0                 test eax, eax
// 0085b45b  7507                 jne 0x85b464
// 0085b45d  5d                   pop ebp
// 0085b45e  5b                   pop ebx
// 0085b45f  5f                   pop edi
// 0085b460  5e                   pop esi
// 0085b461  c20c00               ret 0xc
// 0085b464  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0085b469  750f                 jne 0x85b47a
// 0085b46b  5d                   pop ebp
// 0085b46c  5b                   pop ebx
// 0085b46d  b801000000           mov eax, 1
// 0085b472  09462c               or dword ptr [esi + 0x2c], eax
// 0085b475  5f                   pop edi
// 0085b476  5e                   pop esi
// 0085b477  c20c00               ret 0xc
// 0085b47a  83662cfe             and dword ptr [esi + 0x2c], 0xfffffffe
// 0085b47e  f7462800000004       test dword ptr [esi + 0x28], 0x4000000
// 0085b485  7404                 je 0x85b48b
// 0085b487  33c0                 xor eax, eax
// 0085b489  eb08                 jmp 0x85b493
// 0085b48b  8bcd                 mov ecx, ebp
// 0085b48d  ff1580de9800         call dword ptr [0x98de80]
// 0085b493  8b17                 mov edx, dword ptr [edi]
// 0085b495  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 0085b49b  50                   push eax
// 0085b49c  0fb74628             movzx eax, word ptr [esi + 0x28]
// 0085b4a0  0b4658               or eax, dword ptr [esi + 0x58]
// 0085b4a3  8bcf                 mov ecx, edi
// 0085b4a5  50                   push eax
// 0085b4a6  6801040000           push 0x401
// 0085b4ab  ffd2                 call edx
// 0085b4ad  8b4720               mov eax, dword ptr [edi + 0x20]
// 0085b4b0  6a00                 push 0
// 0085b4b2  6a00                 push 0
// 0085b4b4  50                   push eax
// 0085b4b5  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0085b4bb  5d                   pop ebp
// 0085b4bc  5b                   pop ebx
// 0085b4bd  5f                   pop edi
// 0085b4be  b801000000           mov eax, 1
// 0085b4c3  5e                   pop esi
// 0085b4c4  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetPaneText@CXTPStatusBar@@QAEHHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp