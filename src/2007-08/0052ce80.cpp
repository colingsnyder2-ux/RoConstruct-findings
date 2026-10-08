// roc 2007-08 0052ce80  unit: RBX::VRunService::?$FactoryProduct  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ce80
//
// 0052ce80  6aff                 push -1
// 0052ce82  68a8137500           push 0x7513a8
// 0052ce87  64a100000000         mov eax, dword ptr fs:[0]
// 0052ce8d  50                   push eax
// 0052ce8e  64892500000000       mov dword ptr fs:[0], esp
// 0052ce95  51                   push ecx
// 0052ce96  56                   push esi
// 0052ce97  57                   push edi
// 0052ce98  8bf9                 mov edi, ecx
// 0052ce9a  897c2408             mov dword ptr [esp + 8], edi
// 0052ce9e  8b770c               mov esi, dword ptr [edi + 0xc]
// 0052cea1  85f6                 test esi, esi
// 0052cea3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052ceab  742a                 je 0x52ced7
// 0052cead  8d4604               lea eax, [esi + 4]
// 0052ceb0  83c9ff               or ecx, 0xffffffff
// 0052ceb3  f00fc108             lock xadd dword ptr [eax], ecx
// 0052ceb7  751e                 jne 0x52ced7
// 0052ceb9  8b16                 mov edx, dword ptr [esi]
// 0052cebb  8b4204               mov eax, dword ptr [edx + 4]
// 0052cebe  8bce                 mov ecx, esi
// 0052cec0  ffd0                 call eax
// 0052cec2  8d4e08               lea ecx, [esi + 8]
// 0052cec5  83caff               or edx, 0xffffffff
// 0052cec8  f00fc111             lock xadd dword ptr [ecx], edx
// 0052cecc  7509                 jne 0x52ced7
// 0052cece  8b06                 mov eax, dword ptr [esi]
// 0052ced0  8b5008               mov edx, dword ptr [eax + 8]
// 0052ced3  8bce                 mov ecx, esi
// 0052ced5  ffd2                 call edx
// 0052ced7  8b7704               mov esi, dword ptr [edi + 4]
// 0052ceda  85f6                 test esi, esi
// 0052cedc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052cee4  742a                 je 0x52cf10
// 0052cee6  8d4604               lea eax, [esi + 4]
// 0052cee9  83c9ff               or ecx, 0xffffffff
// 0052ceec  f00fc108             lock xadd dword ptr [eax], ecx
// 0052cef0  751e                 jne 0x52cf10
// 0052cef2  8b16                 mov edx, dword ptr [esi]
// 0052cef4  8b4204               mov eax, dword ptr [edx + 4]
// 0052cef7  8bce                 mov ecx, esi
// 0052cef9  ffd0                 call eax
// 0052cefb  8d4e08               lea ecx, [esi + 8]
// 0052cefe  83caff               or edx, 0xffffffff
// 0052cf01  f00fc111             lock xadd dword ptr [ecx], edx
// 0052cf05  7509                 jne 0x52cf10
// 0052cf07  8b06                 mov eax, dword ptr [esi]
// 0052cf09  8b5008               mov edx, dword ptr [eax + 8]
// 0052cf0c  8bce                 mov ecx, esi
// 0052cf0e  ffd2                 call edx
// 0052cf10  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052cf14  5f                   pop edi
// 0052cf15  5e                   pop esi
// 0052cf16  64890d00000000       mov dword ptr fs:[0], ecx
// 0052cf1d  83c410               add esp, 0x10
// 0052cf20  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
