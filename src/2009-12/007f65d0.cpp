// roc 2009-12 007f65d0  unit: CXTPPropertyGridItem  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f65d0
//
// 007f65d0  55                   push ebp
// 007f65d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007f65d5  8d45ff               lea eax, [ebp - 1]
// 007f65d8  3dfdffff0f           cmp eax, 0xffffffd
// 007f65dd  0f877f000000         ja 0x7f6662
// 007f65e3  56                   push esi
// 007f65e4  e897760500           call 0x84dc80
// 007f65e9  8bf0                 mov esi, eax
// 007f65eb  85f6                 test esi, esi
// 007f65ed  7505                 jne 0x7f65f4
// 007f65ef  5e                   pop esi
// 007f65f0  5d                   pop ebp
// 007f65f1  c20400               ret 4
// 007f65f4  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007f65f7  53                   push ebx
// 007f65f8  8d5cb1fc             lea ebx, [ecx + esi*4 - 4]
// 007f65fc  57                   push edi
// 007f65fd  3bcb                 cmp ecx, ebx
// 007f65ff  7736                 ja 0x7f6637
// 007f6601  8bc6                 mov eax, esi
// 007f6603  99                   cdq 
// 007f6604  2bc2                 sub eax, edx
// 007f6606  d1f8                 sar eax, 1
// 007f6608  7440                 je 0x7f664a
// 007f660a  83e601               and esi, 1
// 007f660d  8bd0                 mov edx, eax
// 007f660f  7503                 jne 0x7f6614
// 007f6611  8d50ff               lea edx, [eax - 1]
// 007f6614  8b3c91               mov edi, dword ptr [ecx + edx*4]
// 007f6617  8b7f28               mov edi, dword ptr [edi + 0x28]
// 007f661a  3bfd                 cmp edi, ebp
// 007f661c  7422                 je 0x7f6640
// 007f661e  7e0d                 jle 0x7f662d
// 007f6620  8d5c91fc             lea ebx, [ecx + edx*4 - 4]
// 007f6624  85f6                 test esi, esi
// 007f6626  7509                 jne 0x7f6631
// 007f6628  8d70ff               lea esi, [eax - 1]
// 007f662b  eb06                 jmp 0x7f6633
// 007f662d  8d4c9104             lea ecx, [ecx + edx*4 + 4]
// 007f6631  8bf0                 mov esi, eax
// 007f6633  3bcb                 cmp ecx, ebx
// 007f6635  76ca                 jbe 0x7f6601
// 007f6637  5f                   pop edi
// 007f6638  5b                   pop ebx
// 007f6639  5e                   pop esi
// 007f663a  33c0                 xor eax, eax
// 007f663c  5d                   pop ebp
// 007f663d  c20400               ret 4
// 007f6640  8b0491               mov eax, dword ptr [ecx + edx*4]
// 007f6643  5f                   pop edi
// 007f6644  5b                   pop ebx
// 007f6645  5e                   pop esi
// 007f6646  5d                   pop ebp
// 007f6647  c20400               ret 4
// 007f664a  85f6                 test esi, esi
// 007f664c  74e9                 je 0x7f6637
// 007f664e  8b09                 mov ecx, dword ptr [ecx]
// 007f6650  33c0                 xor eax, eax
// 007f6652  396928               cmp dword ptr [ecx + 0x28], ebp
// 007f6655  5f                   pop edi
// 007f6656  0f95c0               setne al
// 007f6659  5b                   pop ebx
// 007f665a  5e                   pop esi
// 007f665b  5d                   pop ebp
// 007f665c  48                   dec eax
// 007f665d  23c1                 and eax, ecx
// 007f665f  c20400               ret 4
// 007f6662  33c0                 xor eax, eax
// 007f6664  5d                   pop ebp
// 007f6665  c20400               ret 4
// copied from an identical function in another client (function ?FindAction@CXTPControlActions@@QBEPAVCXTPControlAction@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp