// roc 2007-03 00530190  unit: seg_00530000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530190
//
// 00530190  6aff                 push -1
// 00530192  68a8417500           push 0x7541a8
// 00530197  64a100000000         mov eax, dword ptr fs:[0]
// 0053019d  50                   push eax
// 0053019e  64892500000000       mov dword ptr fs:[0], esp
// 005301a5  51                   push ecx
// 005301a6  56                   push esi
// 005301a7  57                   push edi
// 005301a8  8bf9                 mov edi, ecx
// 005301aa  897c2408             mov dword ptr [esp + 8], edi
// 005301ae  8b770c               mov esi, dword ptr [edi + 0xc]
// 005301b1  85f6                 test esi, esi
// 005301b3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005301bb  742a                 je 0x5301e7
// 005301bd  8d4604               lea eax, [esi + 4]
// 005301c0  83c9ff               or ecx, 0xffffffff
// 005301c3  f00fc108             lock xadd dword ptr [eax], ecx
// 005301c7  751e                 jne 0x5301e7
// 005301c9  8b16                 mov edx, dword ptr [esi]
// 005301cb  8b4204               mov eax, dword ptr [edx + 4]
// 005301ce  8bce                 mov ecx, esi
// 005301d0  ffd0                 call eax
// 005301d2  8d4e08               lea ecx, [esi + 8]
// 005301d5  83caff               or edx, 0xffffffff
// 005301d8  f00fc111             lock xadd dword ptr [ecx], edx
// 005301dc  7509                 jne 0x5301e7
// 005301de  8b06                 mov eax, dword ptr [esi]
// 005301e0  8b5008               mov edx, dword ptr [eax + 8]
// 005301e3  8bce                 mov ecx, esi
// 005301e5  ffd2                 call edx
// 005301e7  8b7704               mov esi, dword ptr [edi + 4]
// 005301ea  85f6                 test esi, esi
// 005301ec  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005301f4  742a                 je 0x530220
// 005301f6  8d4604               lea eax, [esi + 4]
// 005301f9  83c9ff               or ecx, 0xffffffff
// 005301fc  f00fc108             lock xadd dword ptr [eax], ecx
// 00530200  751e                 jne 0x530220
// 00530202  8b16                 mov edx, dword ptr [esi]
// 00530204  8b4204               mov eax, dword ptr [edx + 4]
// 00530207  8bce                 mov ecx, esi
// 00530209  ffd0                 call eax
// 0053020b  8d4e08               lea ecx, [esi + 8]
// 0053020e  83caff               or edx, 0xffffffff
// 00530211  f00fc111             lock xadd dword ptr [ecx], edx
// 00530215  7509                 jne 0x530220
// 00530217  8b06                 mov eax, dword ptr [esi]
// 00530219  8b5008               mov edx, dword ptr [eax + 8]
// 0053021c  8bce                 mov ecx, esi
// 0053021e  ffd2                 call edx
// 00530220  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00530224  5f                   pop edi
// 00530225  5e                   pop esi
// 00530226  64890d00000000       mov dword ptr fs:[0], ecx
// 0053022d  83c410               add esp, 0x10
// 00530230  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
