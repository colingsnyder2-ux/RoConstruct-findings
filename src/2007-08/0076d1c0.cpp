// from server: 99% by colin
// roc 2007-08 0076efd0  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076efd0
//
// 0076efd0  56                   push esi
// 0076efd1  6a05                 push 5
// 0076efd3  33c9                 xor ecx, ecx
// 0076efd5  51                   push ecx
// 0076efd6  b8206c4900           mov eax, 0x447590
// 0076efdb  50                   push eax
// 0076efdc  33f6                 xor esi, esi
// 0076efde  56                   push esi
// 0076efdf  ba90154900           mov edx, 0x444df0
// 0076efe4  52                   push edx
// 0076efe5  6898b67900           push 0x7901c4
// 0076efea  6898bd7900           push 0x7901b4
// 0076efef  b94ce08b00           mov ecx, 0x8bbcc0
// 0076eff4  e86764d2ff           call 0x446a00
// 0076eff9  6810857700           push 0x777be0
// 0076effe  e8201decff           call 0x630d23
// 0076f003  83c404               add esp, 4
// 0076f006  5e                   pop esi
// 0076f007  c3                   ret 
// library rbxgs-net/Players.cpp (function ??__EpropPlayerMaxCount@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp