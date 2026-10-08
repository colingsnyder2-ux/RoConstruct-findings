// roc 2007-08 004a66c0  unit: RBX::Network::Replicator::Item  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a66c0
//
// 004a66c0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004a66c4  8bc1                 mov eax, ecx
// 004a66c6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a66ca  894804               mov dword ptr [eax + 4], ecx
// 004a66cd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a66d1  c70080d57900         mov dword ptr [eax], 0x79d580
// 004a66d7  895008               mov dword ptr [eax + 8], edx
// 004a66da  8b11                 mov edx, dword ptr [ecx]
// 004a66dc  89500c               mov dword ptr [eax + 0xc], edx
// 004a66df  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a66e2  85c9                 test ecx, ecx
// 004a66e4  894810               mov dword ptr [eax + 0x10], ecx
// 004a66e7  740c                 je 0x4a66f5
// 004a66e9  83c104               add ecx, 4
// 004a66ec  ba01000000           mov edx, 1
// 004a66f1  f00fc111             lock xadd dword ptr [ecx], edx
// 004a66f5  c20c00               ret 0xc
// library rbxgs-net/Replicator.cpp (function ??0ChangePropertyItem@Replicator@Network@RBX@@QAE@AAV123@ABV?$shared_ptr@$$CBVInstance@RBX@@@boost@@ABVPropertyDescriptor@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
