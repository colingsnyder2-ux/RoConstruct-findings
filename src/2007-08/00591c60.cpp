// roc 2007-08 00591c60  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591c60
//
// 00591c60  8b442404             mov eax, dword ptr [esp + 4]
// 00591c64  56                   push esi
// 00591c65  50                   push eax
// 00591c66  8bf1                 mov esi, ecx
// 00591c68  e893ffffff           call 0x591c00
// 00591c6d  c7863800020000000000 mov dword ptr [esi + 0x20038], 0
// 00591c77  8bc6                 mov eax, esi
// 00591c79  5e                   pop esi
// 00591c7a  c20400               ret 4
// library rbxgs/util\Profiling.cpp (function ??0CodeProfiler@Profiling@RBX@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
