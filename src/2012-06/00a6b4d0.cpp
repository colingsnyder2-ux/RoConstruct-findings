// roc 2012-06 00a6b4d0  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b4d0
//
// 00a6b4d0  56                   push esi
// 00a6b4d1  8bf1                 mov esi, ecx
// 00a6b4d3  8b06                 mov eax, dword ptr [esi]
// 00a6b4d5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6b4db  ffd2                 call edx
// 00a6b4dd  85c0                 test eax, eax
// 00a6b4df  743d                 je 0xa6b51e
// 00a6b4e1  8bce                 mov ecx, esi
// 00a6b4e3  e8b8b5ffff           call 0xa66aa0
// 00a6b4e8  8b10                 mov edx, dword ptr [eax]
// 00a6b4ea  8bc8                 mov ecx, eax
// 00a6b4ec  8b4218               mov eax, dword ptr [edx + 0x18]
// 00a6b4ef  ffd0                 call eax
// 00a6b4f1  8bce                 mov ecx, esi
// 00a6b4f3  85c0                 test eax, eax
// 00a6b4f5  7409                 je 0xa6b500
// 00a6b4f7  e8a4b5ffff           call 0xa66aa0
// 00a6b4fc  6a00                 push 0
// 00a6b4fe  eb07                 jmp 0xa6b507
// 00a6b500  e89bb5ffff           call 0xa66aa0
// 00a6b505  6a01                 push 1
// 00a6b507  8b10                 mov edx, dword ptr [eax]
// 00a6b509  8bc8                 mov ecx, eax
// 00a6b50b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a6b50e  ffd0                 call eax
// 00a6b510  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6b513  6a01                 push 1
// 00a6b515  6a00                 push 0
// 00a6b517  51                   push ecx
// 00a6b518  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6b51e  5e                   pop esi
// 00a6b51f  c3                   ret 
// copied from an identical function in another client (function ?ResetImage@CXTButton@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp