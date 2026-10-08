// roc 2011-06 006366a0  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006366a0
//
// 006366a0  8b4104               mov eax, dword ptr [ecx + 4]
// 006366a3  85c0                 test eax, eax
// 006366a5  7407                 je 0x6366ae
// 006366a7  50                   push eax
// 006366a8  ff15b803a400         call dword ptr [0xa403b8]
// 006366ae  c3                   ret 
// library rbxgs/util\FileSystem.cpp (function ??1VistaAPIs@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/FileSystem.cpp
