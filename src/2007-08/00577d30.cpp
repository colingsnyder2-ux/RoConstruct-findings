// roc 2007-08 00577d30  unit: RBX::VPartInstance::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577d30
//
// 00577d30  6aff                 push -1
// 00577d32  6898657500           push 0x756598
// 00577d37  64a100000000         mov eax, dword ptr fs:[0]
// 00577d3d  50                   push eax
// 00577d3e  64892500000000       mov dword ptr fs:[0], esp
// 00577d45  51                   push ecx
// 00577d46  56                   push esi
// 00577d47  85c9                 test ecx, ecx
// 00577d49  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00577d51  7405                 je 0x577d58
// 00577d53  83c104               add ecx, 4
// 00577d56  eb02                 jmp 0x577d5a
// 00577d58  33c9                 xor ecx, ecx
// 00577d5a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00577d5e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00577d62  83ec08               sub esp, 8
// 00577d65  85f6                 test esi, esi
// 00577d67  8bc4                 mov eax, esp
// 00577d69  8910                 mov dword ptr [eax], edx
// 00577d6b  8964240c             mov dword ptr [esp + 0xc], esp
// 00577d6f  897004               mov dword ptr [eax + 4], esi
// 00577d72  740c                 je 0x577d80
// 00577d74  8d4604               lea eax, [esi + 4]
// 00577d77  ba01000000           mov edx, 1
// 00577d7c  f00fc110             lock xadd dword ptr [eax], edx
// 00577d80  51                   push ecx
// 00577d81  b990298c00           mov ecx, 0x8c2990
// 00577d86  e885ddf1ff           call 0x495b10
// 00577d8b  85f6                 test esi, esi
// 00577d8d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00577d95  742a                 je 0x577dc1
// 00577d97  8d4604               lea eax, [esi + 4]
// 00577d9a  83c9ff               or ecx, 0xffffffff
// 00577d9d  f00fc108             lock xadd dword ptr [eax], ecx
// 00577da1  751e                 jne 0x577dc1
// 00577da3  8b16                 mov edx, dword ptr [esi]
// 00577da5  8b4204               mov eax, dword ptr [edx + 4]
// 00577da8  8bce                 mov ecx, esi
// 00577daa  ffd0                 call eax
// 00577dac  8d4e08               lea ecx, [esi + 8]
// 00577daf  83caff               or edx, 0xffffffff
// 00577db2  f00fc111             lock xadd dword ptr [ecx], edx
// 00577db6  7509                 jne 0x577dc1
// 00577db8  8b06                 mov eax, dword ptr [esi]
// 00577dba  8b5008               mov edx, dword ptr [eax + 8]
// 00577dbd  8bce                 mov ecx, esi
// 00577dbf  ffd2                 call edx
// 00577dc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577dc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00577dcc  5e                   pop esi
// 00577dcd  83c410               add esp, 0x10
// 00577dd0  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ?onTouchThisStep@PartInstance@RBX@@QAEXV?$shared_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
