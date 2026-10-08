// roc 2009-06 005d34c0  unit: RBX::VSelection::?$FactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d34c0
//
// 005d34c0  64a100000000         mov eax, dword ptr fs:[0]
// 005d34c6  6aff                 push -1
// 005d34c8  68082b8600           push 0x862b08
// 005d34cd  50                   push eax
// 005d34ce  64892500000000       mov dword ptr fs:[0], esp
// 005d34d5  56                   push esi
// 005d34d6  57                   push edi
// 005d34d7  8bf9                 mov edi, ecx
// 005d34d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d34dd  8907                 mov dword ptr [edi], eax
// 005d34df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d34e3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d34eb  894704               mov dword ptr [edi + 4], eax
// 005d34ee  85c0                 test eax, eax
// 005d34f0  7410                 je 0x5d3502
// 005d34f2  83c004               add eax, 4
// 005d34f5  b901000000           mov ecx, 1
// 005d34fa  f00fc108             lock xadd dword ptr [eax], ecx
// 005d34fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d3502  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d3506  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d350a  895708               mov dword ptr [edi + 8], edx
// 005d350d  894f0c               mov dword ptr [edi + 0xc], ecx
// 005d3510  85c9                 test ecx, ecx
// 005d3512  7414                 je 0x5d3528
// 005d3514  83c104               add ecx, 4
// 005d3517  b801000000           mov eax, 1
// 005d351c  f00fc101             lock xadd dword ptr [ecx], eax
// 005d3520  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d3524  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d3528  85c0                 test eax, eax
// 005d352a  7430                 je 0x5d355c
// 005d352c  8bf0                 mov esi, eax
// 005d352e  83c004               add eax, 4
// 005d3531  83c9ff               or ecx, 0xffffffff
// 005d3534  f00fc108             lock xadd dword ptr [eax], ecx
// 005d3538  751e                 jne 0x5d3558
// 005d353a  8b16                 mov edx, dword ptr [esi]
// 005d353c  8b4204               mov eax, dword ptr [edx + 4]
// 005d353f  8bce                 mov ecx, esi
// 005d3541  ffd0                 call eax
// 005d3543  8d4e08               lea ecx, [esi + 8]
// 005d3546  83caff               or edx, 0xffffffff
// 005d3549  f00fc111             lock xadd dword ptr [ecx], edx
// 005d354d  7509                 jne 0x5d3558
// 005d354f  8b06                 mov eax, dword ptr [esi]
// 005d3551  8b5008               mov edx, dword ptr [eax + 8]
// 005d3554  8bce                 mov ecx, esi
// 005d3556  ffd2                 call edx
// 005d3558  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d355c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d3564  85c9                 test ecx, ecx
// 005d3566  742c                 je 0x5d3594
// 005d3568  8bf1                 mov esi, ecx
// 005d356a  83c104               add ecx, 4
// 005d356d  83c8ff               or eax, 0xffffffff
// 005d3570  f00fc101             lock xadd dword ptr [ecx], eax
// 005d3574  751e                 jne 0x5d3594
// 005d3576  8b16                 mov edx, dword ptr [esi]
// 005d3578  8b4204               mov eax, dword ptr [edx + 4]
// 005d357b  8bce                 mov ecx, esi
// 005d357d  ffd0                 call eax
// 005d357f  8d4e08               lea ecx, [esi + 8]
// 005d3582  83caff               or edx, 0xffffffff
// 005d3585  f00fc111             lock xadd dword ptr [ecx], edx
// 005d3589  7509                 jne 0x5d3594
// 005d358b  8b06                 mov eax, dword ptr [esi]
// 005d358d  8b5008               mov edx, dword ptr [eax + 8]
// 005d3590  8bce                 mov ecx, esi
// 005d3592  ffd2                 call edx
// 005d3594  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d3598  8bc7                 mov eax, edi
// 005d359a  5f                   pop edi
// 005d359b  64890d00000000       mov dword ptr fs:[0], ecx
// 005d35a2  5e                   pop esi
// 005d35a3  83c40c               add esp, 0xc
// 005d35a6  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
