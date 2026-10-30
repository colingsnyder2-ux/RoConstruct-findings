// roc 2011-06 008f3170  unit: CXTCaptionButton  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3170
//
// 008f3170  56                   push esi
// 008f3171  8bf1                 mov esi, ecx
// 008f3173  8b06                 mov eax, dword ptr [esi]
// 008f3175  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f317b  ffd2                 call edx
// 008f317d  85c0                 test eax, eax
// 008f317f  743d                 je 0x8f31be
// 008f3181  8bce                 mov ecx, esi
// 008f3183  e888f0ffff           call 0x8f2210
// 008f3188  8b10                 mov edx, dword ptr [eax]
// 008f318a  8bc8                 mov ecx, eax
// 008f318c  8b4218               mov eax, dword ptr [edx + 0x18]
// 008f318f  ffd0                 call eax
// 008f3191  8bce                 mov ecx, esi
// 008f3193  85c0                 test eax, eax
// 008f3195  7409                 je 0x8f31a0
// 008f3197  e874f0ffff           call 0x8f2210
// 008f319c  6a00                 push 0
// 008f319e  eb07                 jmp 0x8f31a7
// 008f31a0  e86bf0ffff           call 0x8f2210
// 008f31a5  6a01                 push 1
// 008f31a7  8b10                 mov edx, dword ptr [eax]
// 008f31a9  8bc8                 mov ecx, eax
// 008f31ab  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008f31ae  ffd0                 call eax
// 008f31b0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f31b3  6a01                 push 1
// 008f31b5  6a00                 push 0
// 008f31b7  51                   push ecx
// 008f31b8  ff15ec19a400         call dword ptr [0xa419ec]
// 008f31be  5e                   pop esi
// 008f31bf  c3                   ret 
// copied from an identical function in another client (function ?ResetImage@CXTButton@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp