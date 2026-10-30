// roc 2011-06 008f2ce0  unit: CXTCaptionButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2ce0
//
// 008f2ce0  56                   push esi
// 008f2ce1  8bf1                 mov esi, ecx
// 008f2ce3  e828f5ffff           call 0x8f2210
// 008f2ce8  8b10                 mov edx, dword ptr [eax]
// 008f2cea  8bc8                 mov ecx, eax
// 008f2cec  8b4218               mov eax, dword ptr [edx + 0x18]
// 008f2cef  ffd0                 call eax
// 008f2cf1  85c0                 test eax, eax
// 008f2cf3  8b442408             mov eax, dword ptr [esp + 8]
// 008f2cf7  7511                 jne 0x8f2d0a
// 008f2cf9  c70000000000         mov dword ptr [eax], 0
// 008f2cff  c7400400000000       mov dword ptr [eax + 4], 0
// 008f2d06  5e                   pop esi
// 008f2d07  c20400               ret 4
// 008f2d0a  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 008f2d10  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 008f2d16  8908                 mov dword ptr [eax], ecx
// 008f2d18  895004               mov dword ptr [eax + 4], edx
// 008f2d1b  5e                   pop esi
// 008f2d1c  c20400               ret 4
// copied from an identical function in another client (function ?GetTextPoint@CXTButton@@QBE?AVCPoint@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp