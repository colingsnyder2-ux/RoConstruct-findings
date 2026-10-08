// roc 2007-08 0057baf0  unit: RBX::Workspace  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057baf0
//
// 0057baf0  64a100000000         mov eax, dword ptr fs:[0]
// 0057baf6  6aff                 push -1
// 0057baf8  6898657500           push 0x756598
// 0057bafd  50                   push eax
// 0057bafe  64892500000000       mov dword ptr fs:[0], esp
// 0057bb05  56                   push esi
// 0057bb06  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057bb0a  6a00                 push 0
// 0057bb0c  68284a8800           push 0x884a28
// 0057bb11  684c1f8800           push 0x881f4c
// 0057bb16  6a00                 push 0
// 0057bb18  56                   push esi
// 0057bb19  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057bb21  e810520b00           call 0x630d36
// 0057bb26  83c414               add esp, 0x14
// 0057bb29  85c0                 test eax, eax
// 0057bb2b  7409                 je 0x57bb36
// 0057bb2d  8bc8                 mov ecx, eax
// 0057bb2f  e82c82ffff           call 0x573d60
// 0057bb34  eb0c                 jmp 0x57bb42
// 0057bb36  68f0b75700           push 0x57b7f0
// 0057bb3b  8bce                 mov ecx, esi
// 0057bb3d  e8fec3f0ff           call 0x487f40
// 0057bb42  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057bb46  85f6                 test esi, esi
// 0057bb48  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0057bb50  742a                 je 0x57bb7c
// 0057bb52  8d4604               lea eax, [esi + 4]
// 0057bb55  83c9ff               or ecx, 0xffffffff
// 0057bb58  f00fc108             lock xadd dword ptr [eax], ecx
// 0057bb5c  751e                 jne 0x57bb7c
// 0057bb5e  8b16                 mov edx, dword ptr [esi]
// 0057bb60  8b4204               mov eax, dword ptr [edx + 4]
// 0057bb63  8bce                 mov ecx, esi
// 0057bb65  ffd0                 call eax
// 0057bb67  8d4e08               lea ecx, [esi + 8]
// 0057bb6a  83caff               or edx, 0xffffffff
// 0057bb6d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057bb71  7509                 jne 0x57bb7c
// 0057bb73  8b06                 mov eax, dword ptr [esi]
// 0057bb75  8b5008               mov edx, dword ptr [eax + 8]
// 0057bb78  8bce                 mov ecx, esi
// 0057bb7a  ffd2                 call edx
// 0057bb7c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057bb80  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bb87  5e                   pop esi
// 0057bb88  83c40c               add esp, 0xc
// 0057bb8b  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper2@$00@RBX@@YAXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
