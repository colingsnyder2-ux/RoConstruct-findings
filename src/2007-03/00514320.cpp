// roc 2007-03 00514320  unit: seg_00510000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514320
//
// 00514320  b801000000           mov eax, 1
// 00514325  8405c4a08b00         test byte ptr [0x8ba0c4], al
// 0051432b  751c                 jne 0x514349
// 0051432d  d9ee                 fldz 
// 0051432f  0905c4a08b00         or dword ptr [0x8ba0c4], eax
// 00514335  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 0051433b  d9e8                 fld1 
// 0051433d  d91dbca08b00         fstp dword ptr [0x8ba0bc]
// 00514343  d91dc0a08b00         fstp dword ptr [0x8ba0c0]
// 00514349  d905b8a08b00         fld dword ptr [0x8ba0b8]
// 0051434f  83ec0c               sub esp, 0xc
// 00514352  8bc4                 mov eax, esp
// 00514354  d918                 fstp dword ptr [eax]
// 00514356  d905bca08b00         fld dword ptr [0x8ba0bc]
// 0051435c  d95804               fstp dword ptr [eax + 4]
// 0051435f  d905c0a08b00         fld dword ptr [0x8ba0c0]
// 00514365  d95808               fstp dword ptr [eax + 8]
// 00514368  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051436c  50                   push eax
// 0051436d  e82efcffff           call 0x513fa0
// 00514372  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CoordinateFrame.cpp
