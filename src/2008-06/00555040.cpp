// roc 2008-06 00555040  unit: RBX::VRunService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555040
//
// 00555040  8bc1                 mov eax, ecx
// 00555042  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00555046  8b11                 mov edx, dword ptr [ecx]
// 00555048  8910                 mov dword ptr [eax], edx
// 0055504a  8b5104               mov edx, dword ptr [ecx + 4]
// 0055504d  895004               mov dword ptr [eax + 4], edx
// 00555050  8b5108               mov edx, dword ptr [ecx + 8]
// 00555053  895008               mov dword ptr [eax + 8], edx
// 00555056  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00555059  89500c               mov dword ptr [eax + 0xc], edx
// 0055505c  85d2                 test edx, edx
// 0055505e  740e                 je 0x55506e
// 00555060  56                   push esi
// 00555061  83c204               add edx, 4
// 00555064  be01000000           mov esi, 1
// 00555069  f00fc132             lock xadd dword ptr [edx], esi
// 0055506d  5e                   pop esi
// 0055506e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00555071  895010               mov dword ptr [eax + 0x10], edx
// 00555074  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00555077  894814               mov dword ptr [eax + 0x14], ecx
// 0055507a  85c9                 test ecx, ecx
// 0055507c  740c                 je 0x55508a
// 0055507e  83c104               add ecx, 4
// 00555081  ba01000000           mov edx, 1
// 00555086  f00fc111             lock xadd dword ptr [ecx], edx
// 0055508a  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ??0?$bind_t@XV?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@3@@_bi@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
