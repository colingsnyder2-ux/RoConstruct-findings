// roc 2007-08 00591c80  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591c80
//
// 00591c80  8b442404             mov eax, dword ptr [esp + 4]
// 00591c84  56                   push esi
// 00591c85  50                   push eax
// 00591c86  8bf1                 mov esi, ecx
// 00591c88  e873ffffff           call 0x591c00
// 00591c8d  c6863800020000       mov byte ptr [esi + 0x20038], 0
// 00591c94  8bc6                 mov eax, esi
// 00591c96  5e                   pop esi
// 00591c97  c20400               ret 4
// library rbxgs/util\Profiling.cpp (function ??0ThreadProfiler@Profiling@RBX@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
