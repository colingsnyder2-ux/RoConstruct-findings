// roc 2010-06 00899a10  unit: CXTCaptionButton  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899a10
//
// 00899a10  56                   push esi
// 00899a11  8bf1                 mov esi, ecx
// 00899a13  8b06                 mov eax, dword ptr [esi]
// 00899a15  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00899a1b  ffd2                 call edx
// 00899a1d  85c0                 test eax, eax
// 00899a1f  7411                 je 0x899a32
// 00899a21  8bce                 mov ecx, esi
// 00899a23  e83874f8ff           call 0x820e60
// 00899a28  8b10                 mov edx, dword ptr [eax]
// 00899a2a  8bc8                 mov ecx, eax
// 00899a2c  8b4230               mov eax, dword ptr [edx + 0x30]
// 00899a2f  5e                   pop esi
// 00899a30  ffe0                 jmp eax
// 00899a32  e8e9a0f4ff           call 0x7e3b20
// 00899a37  6a0f                 push 0xf
// 00899a39  8bc8                 mov ecx, eax
// 00899a3b  e87098f4ff           call 0x7e32b0
// 00899a40  5e                   pop esi
// 00899a41  c3                   ret 
// copied from an identical function in another client (function ?GetColorFace@CXTButton@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp