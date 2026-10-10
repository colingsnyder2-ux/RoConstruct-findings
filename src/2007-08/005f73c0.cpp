// from server: 98% by colin
// roc 2007-08 005f71c0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f71c0
//
// 005f71c0  6aff                 push -1
// 005f71c2  68bb6a7500           push 0x756abb
// 005f71c7  64a100000000         mov eax, dword ptr fs:[0]
// 005f71cd  50                   push eax
// 005f71ce  64892500000000       mov dword ptr fs:[0], esp
// 005f71d5  83ec08               sub esp, 8
// 005f71d8  c7042400000000       mov dword ptr [esp], 0
// 005f71df  6804010000           push 0xec
// 005f71e4  c644240400           mov byte ptr [esp + 4], 0
// 005f71e9  ff15d0e67700         call dword ptr [0x77e6d0]
// 005f71ef  83c404               add esp, 4
// 005f71f2  89442404             mov dword ptr [esp + 4], eax
// 005f71f6  85c0                 test eax, eax
// 005f71f8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f7200  7409                 je 0x5f740b
// 005f7202  8bc8                 mov ecx, eax
// 005f7204  e847f4ffff           call 0x5f6be0
// 005f7209  eb02                 jmp 0x5f740d
// 005f720b  33c0                 xor eax, eax
// 005f720d  8b0c24               mov ecx, dword ptr [esp]
// 005f7210  56                   push esi
// 005f7211  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005f7215  51                   push ecx
// 005f7216  50                   push eax
// 005f7217  8bce                 mov ecx, esi
// 005f7219  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005f7221  e86aa1ffff           call 0x5f1650
// 005f7226  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f722a  8bc6                 mov eax, esi
// 005f722c  5e                   pop esi
// 005f722d  64890d00000000       mov dword ptr fs:[0], ecx
// 005f7234  83c414               add esp, 0x14
// 005f7237  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp