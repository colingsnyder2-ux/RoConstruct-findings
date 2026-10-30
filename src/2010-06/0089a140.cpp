// roc 2010-06 0089a140  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a140
//
// 0089a140  56                   push esi
// 0089a141  8bf1                 mov esi, ecx
// 0089a143  e8186df8ff           call 0x820e60
// 0089a148  8b10                 mov edx, dword ptr [eax]
// 0089a14a  8bc8                 mov ecx, eax
// 0089a14c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0089a14f  ffd0                 call eax
// 0089a151  85c0                 test eax, eax
// 0089a153  8b442408             mov eax, dword ptr [esp + 8]
// 0089a157  7511                 jne 0x89a16a
// 0089a159  c70000000000         mov dword ptr [eax], 0
// 0089a15f  c7400400000000       mov dword ptr [eax + 4], 0
// 0089a166  5e                   pop esi
// 0089a167  c20400               ret 4
// 0089a16a  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0089a170  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0089a176  8908                 mov dword ptr [eax], ecx
// 0089a178  895004               mov dword ptr [eax + 4], edx
// 0089a17b  5e                   pop esi
// 0089a17c  c20400               ret 4
// copied from an identical function in another client (function ?GetImagePoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp