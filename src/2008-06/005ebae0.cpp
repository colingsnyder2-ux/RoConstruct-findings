// roc 2008-06 005ebae0  unit: RBX::Sky  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ebae0
//
// 005ebae0  6aff                 push -1
// 005ebae2  688e6e7d00           push 0x7d6e8e
// 005ebae7  64a100000000         mov eax, dword ptr fs:[0]
// 005ebaed  50                   push eax
// 005ebaee  64892500000000       mov dword ptr fs:[0], esp
// 005ebaf5  51                   push ecx
// 005ebaf6  56                   push esi
// 005ebaf7  8bf1                 mov esi, ecx
// 005ebaf9  89742404             mov dword ptr [esp + 4], esi
// 005ebafd  8d8ed0010000         lea ecx, [esi + 0x1d0]
// 005ebb03  c744241005000000     mov dword ptr [esp + 0x10], 5
// 005ebb0b  ff1568248000         call dword ptr [0x802468]
// 005ebb11  8d8eb0010000         lea ecx, [esi + 0x1b0]
// 005ebb17  c644241004           mov byte ptr [esp + 0x10], 4
// 005ebb1c  ff1568248000         call dword ptr [0x802468]
// 005ebb22  8d8e90010000         lea ecx, [esi + 0x190]
// 005ebb28  c644241003           mov byte ptr [esp + 0x10], 3
// 005ebb2d  ff1568248000         call dword ptr [0x802468]
// 005ebb33  8d8e70010000         lea ecx, [esi + 0x170]
// 005ebb39  c644241002           mov byte ptr [esp + 0x10], 2
// 005ebb3e  ff1568248000         call dword ptr [0x802468]
// 005ebb44  8d8e50010000         lea ecx, [esi + 0x150]
// 005ebb4a  c644241001           mov byte ptr [esp + 0x10], 1
// 005ebb4f  ff1568248000         call dword ptr [0x802468]
// 005ebb55  8d8e30010000         lea ecx, [esi + 0x130]
// 005ebb5b  c644241000           mov byte ptr [esp + 0x10], 0
// 005ebb60  ff1568248000         call dword ptr [0x802468]
// 005ebb66  8bce                 mov ecx, esi
// 005ebb68  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ebb70  e8abf4ffff           call 0x5eb020
// 005ebb75  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ebb79  5e                   pop esi
// 005ebb7a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebb81  83c410               add esp, 0x10
// 005ebb84  c3                   ret 
// library openrbx-client/App\v8datamodel\Sky.cpp (function ??1Sky@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Sky.cpp
