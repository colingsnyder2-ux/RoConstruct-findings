// roc 2007-03 005002a0  unit: seg_00500000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005002a0
//
// 005002a0  8b442404             mov eax, dword ptr [esp + 4]
// 005002a4  50                   push eax
// 005002a5  e806ffffff           call 0x5001b0
// 005002aa  f6d8                 neg al
// 005002ac  1bc0                 sbb eax, eax
// 005002ae  83c001               add eax, 1
// 005002b1  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GLight.cpp
