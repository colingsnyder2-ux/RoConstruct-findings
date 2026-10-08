// roc 2007-03 00500700  unit: seg_00500000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500700
//
// 00500700  8b442404             mov eax, dword ptr [esp + 4]
// 00500704  50                   push eax
// 00500705  e896fdffff           call 0x5004a0
// 0050070a  f6d8                 neg al
// 0050070c  1bc0                 sbb eax, eax
// 0050070e  83c001               add eax, 1
// 00500711  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GLight.cpp
