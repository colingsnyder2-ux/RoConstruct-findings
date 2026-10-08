// roc 2007-03 0057ddf0  unit: seg_00570000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ddf0
//
// 0057ddf0  6aff                 push -1
// 0057ddf2  68e8397500           push 0x7539e8
// 0057ddf7  64a100000000         mov eax, dword ptr fs:[0]
// 0057ddfd  50                   push eax
// 0057ddfe  64892500000000       mov dword ptr fs:[0], esp
// 0057de05  83ec08               sub esp, 8
// 0057de08  53                   push ebx
// 0057de09  56                   push esi
// 0057de0a  8bf1                 mov esi, ecx
// 0057de0c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057de10  57                   push edi
// 0057de11  e8ba0dffff           call 0x56ebd0
// 0057de16  83ec20               sub esp, 0x20
// 0057de19  8bdc                 mov ebx, esp
// 0057de1b  8bf8                 mov edi, eax
// 0057de1d  8964244c             mov dword ptr [esp + 0x4c], esp
// 0057de21  57                   push edi
// 0057de22  8bcb                 mov ecx, ebx
// 0057de24  ff157ce77700         call dword ptr [0x77e77c]
// 0057de2a  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0057de2d  89431c               mov dword ptr [ebx + 0x1c], eax
// 0057de30  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057de34  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 0057de3a  8d4c242c             lea ecx, [esp + 0x2c]
// 0057de3e  51                   push ecx
// 0057de3f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057de42  8b140a               mov edx, dword ptr [edx + ecx]
// 0057de45  03562c               add edx, dword ptr [esi + 0x2c]
// 0057de48  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 0057de4f  8b4628               mov eax, dword ptr [esi + 0x28]
// 0057de52  ffd0                 call eax
// 0057de54  8bf0                 mov esi, eax
// 0057de56  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057de5e  e8fdf2feff           call 0x56d160
// 0057de63  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057de67  8901                 mov dword ptr [ecx], eax
// 0057de69  56                   push esi
// 0057de6a  83c104               add ecx, 4
// 0057de6d  e8de24f1ff           call 0x490350
// 0057de72  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057de76  85c0                 test eax, eax
// 0057de78  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0057de80  742c                 je 0x57deae
// 0057de82  8bf0                 mov esi, eax
// 0057de84  83c004               add eax, 4
// 0057de87  83c9ff               or ecx, 0xffffffff
// 0057de8a  f00fc108             lock xadd dword ptr [eax], ecx
// 0057de8e  751e                 jne 0x57deae
// 0057de90  8b16                 mov edx, dword ptr [esi]
// 0057de92  8b4204               mov eax, dword ptr [edx + 4]
// 0057de95  8bce                 mov ecx, esi
// 0057de97  ffd0                 call eax
// 0057de99  8d4e08               lea ecx, [esi + 8]
// 0057de9c  83caff               or edx, 0xffffffff
// 0057de9f  f00fc111             lock xadd dword ptr [ecx], edx
// 0057dea3  7509                 jne 0x57deae
// 0057dea5  8b06                 mov eax, dword ptr [esi]
// 0057dea7  8b5008               mov edx, dword ptr [eax + 8]
// 0057deaa  8bce                 mov ecx, esi
// 0057deac  ffd2                 call edx
// 0057deae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057deb2  5f                   pop edi
// 0057deb3  5e                   pop esi
// 0057deb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0057debb  5b                   pop ebx
// 0057debc  83c414               add esp, 0x14
// 0057debf  c20c00               ret 0xc
// library rbxgs/v8datamodel\Workspace.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VWorkspace@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@ABEXPAVWorkspace@2@AAVValue@12@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
