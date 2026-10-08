// roc 2007-08 0052d6e0  unit: RBX::RunService  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d6e0
//
// 0052d6e0  6aff                 push -1
// 0052d6e2  68880a7500           push 0x750a88
// 0052d6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0052d6ed  50                   push eax
// 0052d6ee  64892500000000       mov dword ptr fs:[0], esp
// 0052d6f5  51                   push ecx
// 0052d6f6  56                   push esi
// 0052d6f7  8bc1                 mov eax, ecx
// 0052d6f9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052d6fd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052d701  83ec08               sub esp, 8
// 0052d704  85f6                 test esi, esi
// 0052d706  8bcc                 mov ecx, esp
// 0052d708  8911                 mov dword ptr [ecx], edx
// 0052d70a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052d712  8964240c             mov dword ptr [esp + 0xc], esp
// 0052d716  897104               mov dword ptr [ecx + 4], esi
// 0052d719  740c                 je 0x52d727
// 0052d71b  8d4e04               lea ecx, [esi + 4]
// 0052d71e  ba01000000           mov edx, 1
// 0052d723  f00fc111             lock xadd dword ptr [ecx], edx
// 0052d727  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052d72b  8b11                 mov edx, dword ptr [ecx]
// 0052d72d  8b4804               mov ecx, dword ptr [eax + 4]
// 0052d730  03ca                 add ecx, edx
// 0052d732  8b10                 mov edx, dword ptr [eax]
// 0052d734  ffd2                 call edx
// 0052d736  85f6                 test esi, esi
// 0052d738  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0052d740  742a                 je 0x52d76c
// 0052d742  8d4604               lea eax, [esi + 4]
// 0052d745  83c9ff               or ecx, 0xffffffff
// 0052d748  f00fc108             lock xadd dword ptr [eax], ecx
// 0052d74c  751e                 jne 0x52d76c
// 0052d74e  8b16                 mov edx, dword ptr [esi]
// 0052d750  8b4204               mov eax, dword ptr [edx + 4]
// 0052d753  8bce                 mov ecx, esi
// 0052d755  ffd0                 call eax
// 0052d757  8d4e08               lea ecx, [esi + 8]
// 0052d75a  83caff               or edx, 0xffffffff
// 0052d75d  f00fc111             lock xadd dword ptr [ecx], edx
// 0052d761  7509                 jne 0x52d76c
// 0052d763  8b06                 mov eax, dword ptr [esi]
// 0052d765  8b5008               mov edx, dword ptr [eax + 8]
// 0052d768  8bce                 mov ecx, esi
// 0052d76a  ffd2                 call edx
// 0052d76c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052d770  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d777  5e                   pop esi
// 0052d778  83c410               add esp, 0x10
// 0052d77b  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
