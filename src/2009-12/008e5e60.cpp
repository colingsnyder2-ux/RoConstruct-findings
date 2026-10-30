// roc 2009-12 008e5e60  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5e60
//
// 008e5e60  56                   push esi
// 008e5e61  8bf1                 mov esi, ecx
// 008e5e63  e808baffff           call 0x8e1870
// 008e5e68  8b10                 mov edx, dword ptr [eax]
// 008e5e6a  8bc8                 mov ecx, eax
// 008e5e6c  8b4218               mov eax, dword ptr [edx + 0x18]
// 008e5e6f  ffd0                 call eax
// 008e5e71  85c0                 test eax, eax
// 008e5e73  8b442408             mov eax, dword ptr [esp + 8]
// 008e5e77  7511                 jne 0x8e5e8a
// 008e5e79  c70000000000         mov dword ptr [eax], 0
// 008e5e7f  c7400400000000       mov dword ptr [eax + 4], 0
// 008e5e86  5e                   pop esi
// 008e5e87  c20400               ret 4
// 008e5e8a  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 008e5e90  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 008e5e96  8908                 mov dword ptr [eax], ecx
// 008e5e98  895004               mov dword ptr [eax + 4], edx
// 008e5e9b  5e                   pop esi
// 008e5e9c  c20400               ret 4
// copied from an identical function in another client (function ?GetTextPoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp