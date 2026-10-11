// roc 2008-06 004a3a90  unit: RBX::VMessage::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3a90
//
// 004a3a90  6aff                 push -1
// 004a3a92  68167d7c00           push 0x7c7d16
// 004a3a97  64a100000000         mov eax, dword ptr fs:[0]
// 004a3a9d  50                   push eax
// 004a3a9e  64892500000000       mov dword ptr fs:[0], esp
// 004a3aa5  51                   push ecx
// 004a3aa6  56                   push esi
// 004a3aa7  8bf1                 mov esi, ecx
// 004a3aa9  89742404             mov dword ptr [esp + 4], esi
// 004a3aad  8d8e40010000         lea ecx, [esi + 0x140]
// 004a3ab3  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a3abb  ff1568248000         call dword ptr [0x802468]
// 004a3ac1  8d8e30010000         lea ecx, [esi + 0x130]
// 004a3ac7  c644241000           mov byte ptr [esp + 0x10], 0
// 004a3acc  e83f99fdff           call 0x47d410
// 004a3ad1  8bce                 mov ecx, esi
// 004a3ad3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004a3adb  e8a0feffff           call 0x4a3980
// 004a3ae0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a3ae4  5e                   pop esi
// 004a3ae5  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3aec  83c410               add esp, 0x10
// 004a3aef  c3                   ret 
// library openrbx-client/App\v8datamodel\Message.cpp (function ??1Message@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
