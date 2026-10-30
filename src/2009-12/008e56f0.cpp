// roc 2009-12 008e56f0  unit: CXTCaptionButton  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e56f0
//
// 008e56f0  56                   push esi
// 008e56f1  8bf1                 mov esi, ecx
// 008e56f3  8b06                 mov eax, dword ptr [esi]
// 008e56f5  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 008e56fb  ffd2                 call edx
// 008e56fd  85c0                 test eax, eax
// 008e56ff  7411                 je 0x8e5712
// 008e5701  8bce                 mov ecx, esi
// 008e5703  e868c1ffff           call 0x8e1870
// 008e5708  8b10                 mov edx, dword ptr [eax]
// 008e570a  8bc8                 mov ecx, eax
// 008e570c  8b4230               mov eax, dword ptr [edx + 0x30]
// 008e570f  5e                   pop esi
// 008e5710  ffe0                 jmp eax
// 008e5712  e8b9a2f4ff           call 0x82f9d0
// 008e5717  6a0f                 push 0xf
// 008e5719  8bc8                 mov ecx, eax
// 008e571b  e8e099f4ff           call 0x82f100
// 008e5720  5e                   pop esi
// 008e5721  c3                   ret 
// copied from an identical function in another client (function ?GetColorFace@CXTButton@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp