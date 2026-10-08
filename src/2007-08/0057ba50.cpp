// roc 2007-08 0057ba50  unit: RBX::Workspace  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ba50
//
// 0057ba50  64a100000000         mov eax, dword ptr fs:[0]
// 0057ba56  6aff                 push -1
// 0057ba58  6898657500           push 0x756598
// 0057ba5d  50                   push eax
// 0057ba5e  64892500000000       mov dword ptr fs:[0], esp
// 0057ba65  56                   push esi
// 0057ba66  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057ba6a  6a00                 push 0
// 0057ba6c  68284a8800           push 0x884a28
// 0057ba71  684c1f8800           push 0x881f4c
// 0057ba76  6a00                 push 0
// 0057ba78  56                   push esi
// 0057ba79  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057ba81  e8b0520b00           call 0x630d36
// 0057ba86  83c414               add esp, 0x14
// 0057ba89  85c0                 test eax, eax
// 0057ba8b  7409                 je 0x57ba96
// 0057ba8d  8bc8                 mov ecx, eax
// 0057ba8f  e8ec82ffff           call 0x573d80
// 0057ba94  eb0c                 jmp 0x57baa2
// 0057ba96  68b0b75700           push 0x57b7b0
// 0057ba9b  8bce                 mov ecx, esi
// 0057ba9d  e89ec4f0ff           call 0x487f40
// 0057baa2  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057baa6  85f6                 test esi, esi
// 0057baa8  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0057bab0  742a                 je 0x57badc
// 0057bab2  8d4604               lea eax, [esi + 4]
// 0057bab5  83c9ff               or ecx, 0xffffffff
// 0057bab8  f00fc108             lock xadd dword ptr [eax], ecx
// 0057babc  751e                 jne 0x57badc
// 0057babe  8b16                 mov edx, dword ptr [esi]
// 0057bac0  8b4204               mov eax, dword ptr [edx + 4]
// 0057bac3  8bce                 mov ecx, esi
// 0057bac5  ffd0                 call eax
// 0057bac7  8d4e08               lea ecx, [esi + 8]
// 0057baca  83caff               or edx, 0xffffffff
// 0057bacd  f00fc111             lock xadd dword ptr [ecx], edx
// 0057bad1  7509                 jne 0x57badc
// 0057bad3  8b06                 mov eax, dword ptr [esi]
// 0057bad5  8b5008               mov edx, dword ptr [eax + 8]
// 0057bad8  8bce                 mov ecx, esi
// 0057bada  ffd2                 call edx
// 0057badc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057bae0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bae7  5e                   pop esi
// 0057bae8  83c40c               add esp, 0xc
// 0057baeb  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper2@$00@RBX@@YAXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
