// roc 2007-08 0052d690  unit: RBX::RunService  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d690
//
// 0052d690  8bc1                 mov eax, ecx
// 0052d692  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052d696  8b11                 mov edx, dword ptr [ecx]
// 0052d698  8910                 mov dword ptr [eax], edx
// 0052d69a  8b5104               mov edx, dword ptr [ecx + 4]
// 0052d69d  895004               mov dword ptr [eax + 4], edx
// 0052d6a0  8b5108               mov edx, dword ptr [ecx + 8]
// 0052d6a3  895008               mov dword ptr [eax + 8], edx
// 0052d6a6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052d6a9  85d2                 test edx, edx
// 0052d6ab  89500c               mov dword ptr [eax + 0xc], edx
// 0052d6ae  740e                 je 0x52d6be
// 0052d6b0  56                   push esi
// 0052d6b1  83c204               add edx, 4
// 0052d6b4  be01000000           mov esi, 1
// 0052d6b9  f00fc132             lock xadd dword ptr [edx], esi
// 0052d6bd  5e                   pop esi
// 0052d6be  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052d6c1  895010               mov dword ptr [eax + 0x10], edx
// 0052d6c4  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0052d6c7  85c9                 test ecx, ecx
// 0052d6c9  894814               mov dword ptr [eax + 0x14], ecx
// 0052d6cc  740c                 je 0x52d6da
// 0052d6ce  83c104               add ecx, 4
// 0052d6d1  ba01000000           mov edx, 1
// 0052d6d6  f00fc111             lock xadd dword ptr [ecx], edx
// 0052d6da  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??0?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
