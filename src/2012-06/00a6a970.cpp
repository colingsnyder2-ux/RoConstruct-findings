// roc 2012-06 00a6a970  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a970
//
// 00a6a970  56                   push esi
// 00a6a971  8bf1                 mov esi, ecx
// 00a6a973  8b06                 mov eax, dword ptr [esi]
// 00a6a975  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a97b  ffd2                 call edx
// 00a6a97d  85c0                 test eax, eax
// 00a6a97f  7411                 je 0xa6a992
// 00a6a981  8bce                 mov ecx, esi
// 00a6a983  e818c1ffff           call 0xa66aa0
// 00a6a988  8b10                 mov edx, dword ptr [eax]
// 00a6a98a  5e                   pop esi
// 00a6a98b  8bc8                 mov ecx, eax
// 00a6a98d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00a6a990  ffe2                 jmp edx
// 00a6a992  5e                   pop esi
// 00a6a993  c20400               ret 4
// copied from an identical function in another client (function ?SetColorText@CXTButton@@UAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp