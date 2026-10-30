// roc 2009-12 008e62f0  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e62f0
//
// 008e62f0  56                   push esi
// 008e62f1  8bf1                 mov esi, ecx
// 008e62f3  8b06                 mov eax, dword ptr [esi]
// 008e62f5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e62fb  ffd2                 call edx
// 008e62fd  85c0                 test eax, eax
// 008e62ff  743d                 je 0x8e633e
// 008e6301  8bce                 mov ecx, esi
// 008e6303  e868b5ffff           call 0x8e1870
// 008e6308  8b10                 mov edx, dword ptr [eax]
// 008e630a  8bc8                 mov ecx, eax
// 008e630c  8b4218               mov eax, dword ptr [edx + 0x18]
// 008e630f  ffd0                 call eax
// 008e6311  8bce                 mov ecx, esi
// 008e6313  85c0                 test eax, eax
// 008e6315  7409                 je 0x8e6320
// 008e6317  e854b5ffff           call 0x8e1870
// 008e631c  6a00                 push 0
// 008e631e  eb07                 jmp 0x8e6327
// 008e6320  e84bb5ffff           call 0x8e1870
// 008e6325  6a01                 push 1
// 008e6327  8b10                 mov edx, dword ptr [eax]
// 008e6329  8bc8                 mov ecx, eax
// 008e632b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008e632e  ffd0                 call eax
// 008e6330  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e6333  6a01                 push 1
// 008e6335  6a00                 push 0
// 008e6337  51                   push ecx
// 008e6338  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e633e  5e                   pop esi
// 008e633f  c3                   ret 
// copied from an identical function in another client (function ?ResetImage@CXTButton@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp