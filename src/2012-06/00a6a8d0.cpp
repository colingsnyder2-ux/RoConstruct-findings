// roc 2012-06 00a6a8d0  unit: CXTCaptionButton  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a8d0
//
// 00a6a8d0  56                   push esi
// 00a6a8d1  8bf1                 mov esi, ecx
// 00a6a8d3  8b06                 mov eax, dword ptr [esi]
// 00a6a8d5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00a6a8db  ffd2                 call edx
// 00a6a8dd  85c0                 test eax, eax
// 00a6a8df  7411                 je 0xa6a8f2
// 00a6a8e1  8bce                 mov ecx, esi
// 00a6a8e3  e8b8c1ffff           call 0xa66aa0
// 00a6a8e8  8b10                 mov edx, dword ptr [eax]
// 00a6a8ea  8bc8                 mov ecx, eax
// 00a6a8ec  8b4230               mov eax, dword ptr [edx + 0x30]
// 00a6a8ef  5e                   pop esi
// 00a6a8f0  ffe0                 jmp eax
// 00a6a8f2  e8692ff5ff           call 0x9bd860
// 00a6a8f7  6a0f                 push 0xf
// 00a6a8f9  8bc8                 mov ecx, eax
// 00a6a8fb  e8e026f5ff           call 0x9bcfe0
// 00a6a900  5e                   pop esi
// 00a6a901  c3                   ret 
// copied from an identical function in another client (function ?GetColorFace@CXTButton@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp