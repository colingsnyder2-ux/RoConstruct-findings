// roc 2007-08 0051df60  unit: seg_00510000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051df60
//
// 0051df60  b801000000           mov eax, 1
// 0051df65  8405f4fb8b00         test byte ptr [0x8bfbf4], al
// 0051df6b  751c                 jne 0x51df89
// 0051df6d  d9ee                 fldz 
// 0051df6f  0905f4fb8b00         or dword ptr [0x8bfbf4], eax
// 0051df75  d915e8fb8b00         fst dword ptr [0x8bfbe8]
// 0051df7b  d9e8                 fld1 
// 0051df7d  d91decfb8b00         fstp dword ptr [0x8bfbec]
// 0051df83  d91df0fb8b00         fstp dword ptr [0x8bfbf0]
// 0051df89  d905e8fb8b00         fld dword ptr [0x8bfbe8]
// 0051df8f  83ec0c               sub esp, 0xc
// 0051df92  8bc4                 mov eax, esp
// 0051df94  d918                 fstp dword ptr [eax]
// 0051df96  d905ecfb8b00         fld dword ptr [0x8bfbec]
// 0051df9c  d95804               fstp dword ptr [eax + 4]
// 0051df9f  d905f0fb8b00         fld dword ptr [0x8bfbf0]
// 0051dfa5  d95808               fstp dword ptr [eax + 8]
// 0051dfa8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051dfac  50                   push eax
// 0051dfad  e82efcffff           call 0x51dbe0
// 0051dfb2  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
