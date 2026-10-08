// roc 2009-12 00552110  unit: RBX::Network::VMarker::?$EventDesc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00552110
//
// 00552110  c70124e99b00         mov dword ptr [ecx], 0x9be924
// 00552116  e96599fdff           jmp 0x52ba80
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
