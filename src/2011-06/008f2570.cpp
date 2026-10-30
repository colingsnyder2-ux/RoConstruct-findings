// roc 2011-06 008f2570  unit: CXTCaptionButton  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2570
//
// 008f2570  56                   push esi
// 008f2571  8bf1                 mov esi, ecx
// 008f2573  8b06                 mov eax, dword ptr [esi]
// 008f2575  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008f257b  ffd2                 call edx
// 008f257d  85c0                 test eax, eax
// 008f257f  7411                 je 0x8f2592
// 008f2581  8bce                 mov ecx, esi
// 008f2583  e888fcffff           call 0x8f2210
// 008f2588  8b10                 mov edx, dword ptr [eax]
// 008f258a  8bc8                 mov ecx, eax
// 008f258c  8b4230               mov eax, dword ptr [edx + 0x30]
// 008f258f  5e                   pop esi
// 008f2590  ffe0                 jmp eax
// 008f2592  e8492ef5ff           call 0x8453e0
// 008f2597  6a0f                 push 0xf
// 008f2599  8bc8                 mov ecx, eax
// 008f259b  e81026f5ff           call 0x844bb0
// 008f25a0  5e                   pop esi
// 008f25a1  c3                   ret 
// copied from an identical function in another client (function ?GetColorFace@CXTButton@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp