// roc 2011-06 008f2ca0  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2ca0
//
// 008f2ca0  56                   push esi
// 008f2ca1  8bf1                 mov esi, ecx
// 008f2ca3  e868f5ffff           call 0x8f2210
// 008f2ca8  8b10                 mov edx, dword ptr [eax]
// 008f2caa  8bc8                 mov ecx, eax
// 008f2cac  8b4218               mov eax, dword ptr [edx + 0x18]
// 008f2caf  ffd0                 call eax
// 008f2cb1  85c0                 test eax, eax
// 008f2cb3  8b442408             mov eax, dword ptr [esp + 8]
// 008f2cb7  7511                 jne 0x8f2cca
// 008f2cb9  c70000000000         mov dword ptr [eax], 0
// 008f2cbf  c7400400000000       mov dword ptr [eax + 4], 0
// 008f2cc6  5e                   pop esi
// 008f2cc7  c20400               ret 4
// 008f2cca  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 008f2cd0  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 008f2cd6  8908                 mov dword ptr [eax], ecx
// 008f2cd8  895004               mov dword ptr [eax + 4], edx
// 008f2cdb  5e                   pop esi
// 008f2cdc  c20400               ret 4
// copied from an identical function in another client (function ?GetImagePoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp