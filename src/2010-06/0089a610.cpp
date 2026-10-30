// roc 2010-06 0089a610  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a610
//
// 0089a610  56                   push esi
// 0089a611  8bf1                 mov esi, ecx
// 0089a613  8b06                 mov eax, dword ptr [esi]
// 0089a615  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0089a61b  ffd2                 call edx
// 0089a61d  85c0                 test eax, eax
// 0089a61f  743d                 je 0x89a65e
// 0089a621  8bce                 mov ecx, esi
// 0089a623  e83868f8ff           call 0x820e60
// 0089a628  8b10                 mov edx, dword ptr [eax]
// 0089a62a  8bc8                 mov ecx, eax
// 0089a62c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0089a62f  ffd0                 call eax
// 0089a631  8bce                 mov ecx, esi
// 0089a633  85c0                 test eax, eax
// 0089a635  7409                 je 0x89a640
// 0089a637  e82468f8ff           call 0x820e60
// 0089a63c  6a00                 push 0
// 0089a63e  eb07                 jmp 0x89a647
// 0089a640  e81b68f8ff           call 0x820e60
// 0089a645  6a01                 push 1
// 0089a647  8b10                 mov edx, dword ptr [eax]
// 0089a649  8bc8                 mov ecx, eax
// 0089a64b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0089a64e  ffd0                 call eax
// 0089a650  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0089a653  6a01                 push 1
// 0089a655  6a00                 push 0
// 0089a657  51                   push ecx
// 0089a658  ff1578ba9e00         call dword ptr [0x9eba78]
// 0089a65e  5e                   pop esi
// 0089a65f  c3                   ret 
// copied from an identical function in another client (function ?ResetImage@CXTButton@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp