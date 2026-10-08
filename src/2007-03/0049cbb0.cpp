// roc 2007-03 0049cbb0  unit: seg_00490000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049cbb0
//
// 0049cbb0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049cbb4  8bc1                 mov eax, ecx
// 0049cbb6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049cbba  894804               mov dword ptr [eax + 4], ecx
// 0049cbbd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049cbc1  c70050c47900         mov dword ptr [eax], 0x79c450
// 0049cbc7  895008               mov dword ptr [eax + 8], edx
// 0049cbca  8b11                 mov edx, dword ptr [ecx]
// 0049cbcc  89500c               mov dword ptr [eax + 0xc], edx
// 0049cbcf  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049cbd2  85c9                 test ecx, ecx
// 0049cbd4  894810               mov dword ptr [eax + 0x10], ecx
// 0049cbd7  740c                 je 0x49cbe5
// 0049cbd9  83c104               add ecx, 4
// 0049cbdc  ba01000000           mov edx, 1
// 0049cbe1  f00fc111             lock xadd dword ptr [ecx], edx
// 0049cbe5  c20c00               ret 0xc
// library rbxgs-net/Replicator.cpp (function ??0ChangePropertyItem@Replicator@Network@RBX@@QAE@AAV123@ABV?$shared_ptr@$$CBVInstance@RBX@@@boost@@ABVPropertyDescriptor@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
