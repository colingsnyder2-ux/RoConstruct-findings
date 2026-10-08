// roc 2007-03 005cf6a0  unit: seg_005c0000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cf6a0
//
// 005cf6a0  6aff                 push -1
// 005cf6a2  6826ac7500           push 0x75ac26
// 005cf6a7  64a100000000         mov eax, dword ptr fs:[0]
// 005cf6ad  50                   push eax
// 005cf6ae  64892500000000       mov dword ptr fs:[0], esp
// 005cf6b5  51                   push ecx
// 005cf6b6  56                   push esi
// 005cf6b7  57                   push edi
// 005cf6b8  8bf9                 mov edi, ecx
// 005cf6ba  897c2408             mov dword ptr [esp + 8], edi
// 005cf6be  8d8f10010000         lea ecx, [edi + 0x110]
// 005cf6c4  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005cf6cc  e84fd6fcff           call 0x59cd20
// 005cf6d1  8bb70c010000         mov esi, dword ptr [edi + 0x10c]
// 005cf6d7  85f6                 test esi, esi
// 005cf6d9  c644241400           mov byte ptr [esp + 0x14], 0
// 005cf6de  742a                 je 0x5cf70a
// 005cf6e0  8d4604               lea eax, [esi + 4]
// 005cf6e3  83c9ff               or ecx, 0xffffffff
// 005cf6e6  f00fc108             lock xadd dword ptr [eax], ecx
// 005cf6ea  751e                 jne 0x5cf70a
// 005cf6ec  8b16                 mov edx, dword ptr [esi]
// 005cf6ee  8b4204               mov eax, dword ptr [edx + 4]
// 005cf6f1  8bce                 mov ecx, esi
// 005cf6f3  ffd0                 call eax
// 005cf6f5  8d4e08               lea ecx, [esi + 8]
// 005cf6f8  83caff               or edx, 0xffffffff
// 005cf6fb  f00fc111             lock xadd dword ptr [ecx], edx
// 005cf6ff  7509                 jne 0x5cf70a
// 005cf701  8b06                 mov eax, dword ptr [esi]
// 005cf703  8b5008               mov edx, dword ptr [eax + 8]
// 005cf706  8bce                 mov ecx, esi
// 005cf708  ffd2                 call edx
// 005cf70a  8bcf                 mov ecx, edi
// 005cf70c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005cf714  e8d7e6ffff           call 0x5cddf0
// 005cf719  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cf71d  5f                   pop edi
// 005cf71e  5e                   pop esi
// 005cf71f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf726  83c410               add esp, 0x10
// 005cf729  c3                   ret 
// library rbxgs/v8datamodel\LocakBackpack.cpp (function ??1LocalBackpackItem@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/LocakBackpack.cpp
