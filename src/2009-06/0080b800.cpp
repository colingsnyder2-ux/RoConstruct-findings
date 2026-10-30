// roc 2009-06 0080b800  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b800
//
// 0080b800  56                   push esi
// 0080b801  8bf1                 mov esi, ecx
// 0080b803  8b06                 mov eax, dword ptr [esi]
// 0080b805  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080b80b  ffd2                 call edx
// 0080b80d  85c0                 test eax, eax
// 0080b80f  743d                 je 0x80b84e
// 0080b811  8bce                 mov ecx, esi
// 0080b813  e85859f8ff           call 0x791170
// 0080b818  8b10                 mov edx, dword ptr [eax]
// 0080b81a  8bc8                 mov ecx, eax
// 0080b81c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0080b81f  ffd0                 call eax
// 0080b821  8bce                 mov ecx, esi
// 0080b823  85c0                 test eax, eax
// 0080b825  7409                 je 0x80b830
// 0080b827  e84459f8ff           call 0x791170
// 0080b82c  6a00                 push 0
// 0080b82e  eb07                 jmp 0x80b837
// 0080b830  e83b59f8ff           call 0x791170
// 0080b835  6a01                 push 1
// 0080b837  8b10                 mov edx, dword ptr [eax]
// 0080b839  8bc8                 mov ecx, eax
// 0080b83b  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0080b83e  ffd0                 call eax
// 0080b840  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080b843  6a01                 push 1
// 0080b845  6a00                 push 0
// 0080b847  51                   push ecx
// 0080b848  ff157cee8900         call dword ptr [0x89ee7c]
// 0080b84e  5e                   pop esi
// 0080b84f  c3                   ret 
// copied from an identical function in another client (function ?ResetImage@CXTButton@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp