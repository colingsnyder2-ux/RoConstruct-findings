// roc 2010-06 0089a180  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a180
//
// 0089a180  56                   push esi
// 0089a181  8bf1                 mov esi, ecx
// 0089a183  e8d86cf8ff           call 0x820e60
// 0089a188  8b10                 mov edx, dword ptr [eax]
// 0089a18a  8bc8                 mov ecx, eax
// 0089a18c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0089a18f  ffd0                 call eax
// 0089a191  85c0                 test eax, eax
// 0089a193  8b442408             mov eax, dword ptr [esp + 8]
// 0089a197  7511                 jne 0x89a1aa
// 0089a199  c70000000000         mov dword ptr [eax], 0
// 0089a19f  c7400400000000       mov dword ptr [eax + 4], 0
// 0089a1a6  5e                   pop esi
// 0089a1a7  c20400               ret 4
// 0089a1aa  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0089a1b0  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 0089a1b6  8908                 mov dword ptr [eax], ecx
// 0089a1b8  895004               mov dword ptr [eax + 4], edx
// 0089a1bb  5e                   pop esi
// 0089a1bc  c20400               ret 4
// copied from an identical function in another client (function ?GetTextPoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp