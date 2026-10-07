// roc 2012-06 006fb690  unit: RBX::CameraZoomExtentsCommand  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006fb690
//
// 006fb690  8b442404             mov eax, dword ptr [esp + 4]
// 006fb694  56                   push esi
// 006fb695  50                   push eax
// 006fb696  8bf1                 mov esi, ecx
// 006fb698  e8033ef8ff           call 0x67f4a0
// 006fb69d  83c404               add esp, 4
// 006fb6a0  50                   push eax
// 006fb6a1  8bce                 mov ecx, esi
// 006fb6a3  e888ffffff           call 0x6fb630
// 006fb6a8  5e                   pop esi
// 006fb6a9  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?SetTheme@CXTPCommandBars@@QAEXW4XTPPaintTheme@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
