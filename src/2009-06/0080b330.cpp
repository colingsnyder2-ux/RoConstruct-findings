// roc 2009-06 0080b330  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b330
//
// 0080b330  56                   push esi
// 0080b331  8bf1                 mov esi, ecx
// 0080b333  e8385ef8ff           call 0x791170
// 0080b338  8b10                 mov edx, dword ptr [eax]
// 0080b33a  8bc8                 mov ecx, eax
// 0080b33c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0080b33f  ffd0                 call eax
// 0080b341  85c0                 test eax, eax
// 0080b343  8b442408             mov eax, dword ptr [esp + 8]
// 0080b347  7511                 jne 0x80b35a
// 0080b349  c70000000000         mov dword ptr [eax], 0
// 0080b34f  c7400400000000       mov dword ptr [eax + 4], 0
// 0080b356  5e                   pop esi
// 0080b357  c20400               ret 4
// 0080b35a  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080b360  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0080b366  8908                 mov dword ptr [eax], ecx
// 0080b368  895004               mov dword ptr [eax + 4], edx
// 0080b36b  5e                   pop esi
// 0080b36c  c20400               ret 4
// copied from an identical function in another client (function ?GetImagePoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp