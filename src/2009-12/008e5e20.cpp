// roc 2009-12 008e5e20  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5e20
//
// 008e5e20  56                   push esi
// 008e5e21  8bf1                 mov esi, ecx
// 008e5e23  e848baffff           call 0x8e1870
// 008e5e28  8b10                 mov edx, dword ptr [eax]
// 008e5e2a  8bc8                 mov ecx, eax
// 008e5e2c  8b4218               mov eax, dword ptr [edx + 0x18]
// 008e5e2f  ffd0                 call eax
// 008e5e31  85c0                 test eax, eax
// 008e5e33  8b442408             mov eax, dword ptr [esp + 8]
// 008e5e37  7511                 jne 0x8e5e4a
// 008e5e39  c70000000000         mov dword ptr [eax], 0
// 008e5e3f  c7400400000000       mov dword ptr [eax + 4], 0
// 008e5e46  5e                   pop esi
// 008e5e47  c20400               ret 4
// 008e5e4a  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 008e5e50  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 008e5e56  8908                 mov dword ptr [eax], ecx
// 008e5e58  895004               mov dword ptr [eax + 4], edx
// 008e5e5b  5e                   pop esi
// 008e5e5c  c20400               ret 4
// copied from an identical function in another client (function ?GetImagePoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp