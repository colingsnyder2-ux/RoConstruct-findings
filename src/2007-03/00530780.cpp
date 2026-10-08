// roc 2007-03 00530780  unit: seg_00530000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530780
//
// 00530780  8bc1                 mov eax, ecx
// 00530782  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00530786  8b11                 mov edx, dword ptr [ecx]
// 00530788  8910                 mov dword ptr [eax], edx
// 0053078a  8b5104               mov edx, dword ptr [ecx + 4]
// 0053078d  895004               mov dword ptr [eax + 4], edx
// 00530790  8b5108               mov edx, dword ptr [ecx + 8]
// 00530793  895008               mov dword ptr [eax + 8], edx
// 00530796  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00530799  85d2                 test edx, edx
// 0053079b  89500c               mov dword ptr [eax + 0xc], edx
// 0053079e  740e                 je 0x5307ae
// 005307a0  56                   push esi
// 005307a1  83c204               add edx, 4
// 005307a4  be01000000           mov esi, 1
// 005307a9  f00fc132             lock xadd dword ptr [edx], esi
// 005307ad  5e                   pop esi
// 005307ae  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005307b1  895010               mov dword ptr [eax + 0x10], edx
// 005307b4  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005307b7  85c9                 test ecx, ecx
// 005307b9  894814               mov dword ptr [eax + 0x14], ecx
// 005307bc  740c                 je 0x5307ca
// 005307be  83c104               add ecx, 4
// 005307c1  ba01000000           mov edx, 1
// 005307c6  f00fc111             lock xadd dword ptr [ecx], edx
// 005307ca  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??0?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
