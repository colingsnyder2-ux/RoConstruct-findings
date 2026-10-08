// roc 2007-03 007292a0  unit: seg_00720000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007292a0
//
// 007292a0  8bc1                 mov eax, ecx
// 007292a2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007292a6  8b11                 mov edx, dword ptr [ecx]
// 007292a8  8910                 mov dword ptr [eax], edx
// 007292aa  8b5104               mov edx, dword ptr [ecx + 4]
// 007292ad  895004               mov dword ptr [eax + 4], edx
// 007292b0  8b4908               mov ecx, dword ptr [ecx + 8]
// 007292b3  85c9                 test ecx, ecx
// 007292b5  894808               mov dword ptr [eax + 8], ecx
// 007292b8  740c                 je 0x7292c6
// 007292ba  83c104               add ecx, 4
// 007292bd  ba01000000           mov edx, 1
// 007292c2  f00fc111             lock xadd dword ptr [ecx], edx
// 007292c6  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ??0?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
