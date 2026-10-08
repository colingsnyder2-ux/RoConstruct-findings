// roc 2007-03 004fea80  unit: seg_004f0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fea80
//
// 004fea80  8b442404             mov eax, dword ptr [esp + 4]
// 004fea84  50                   push eax
// 004fea85  e8a6ffffff           call 0x4fea30
// 004fea8a  f6d8                 neg al
// 004fea8c  1bc0                 sbb eax, eax
// 004fea8e  83c001               add eax, 1
// 004fea91  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GLight.cpp
