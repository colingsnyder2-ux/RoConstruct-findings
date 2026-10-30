// roc 2011-06 008f2c60  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2c60
//
// 008f2c60  56                   push esi
// 008f2c61  8bf1                 mov esi, ecx
// 008f2c63  e8a8f5ffff           call 0x8f2210
// 008f2c68  8b10                 mov edx, dword ptr [eax]
// 008f2c6a  8bc8                 mov ecx, eax
// 008f2c6c  8b4218               mov eax, dword ptr [edx + 0x18]
// 008f2c6f  ffd0                 call eax
// 008f2c71  85c0                 test eax, eax
// 008f2c73  8b442408             mov eax, dword ptr [esp + 8]
// 008f2c77  7511                 jne 0x8f2c8a
// 008f2c79  c70000000000         mov dword ptr [eax], 0
// 008f2c7f  c7400400000000       mov dword ptr [eax + 4], 0
// 008f2c86  5e                   pop esi
// 008f2c87  c20400               ret 4
// 008f2c8a  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008f2c90  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008f2c96  8908                 mov dword ptr [eax], ecx
// 008f2c98  895004               mov dword ptr [eax + 4], edx
// 008f2c9b  5e                   pop esi
// 008f2c9c  c20400               ret 4
// copied from an identical function in another client (function ?GetImageSize@CXTButton@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp