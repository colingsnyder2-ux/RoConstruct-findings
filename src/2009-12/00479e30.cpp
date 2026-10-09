// roc 2009-12 00479e30  unit: VCWorkspace::?$CComObject  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00479e30
//
// 00479e30  6aff                 push -1
// 00479e32  684bad9300           push 0x93ad4b
// 00479e37  64a100000000         mov eax, dword ptr fs:[0]
// 00479e3d  50                   push eax
// 00479e3e  64892500000000       mov dword ptr fs:[0], esp
// 00479e45  83ec08               sub esp, 8
// 00479e48  c7042400000000       mov dword ptr [esp], 0
// 00479e4f  6850010000           push 0x150
// 00479e54  c644240400           mov byte ptr [esp + 4], 0
// 00479e59  e8029a3700           call 0x7f3860
// 00479e5e  83c404               add esp, 4
// 00479e61  89442404             mov dword ptr [esp + 4], eax
// 00479e65  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00479e6d  85c0                 test eax, eax
// 00479e6f  7409                 je 0x479e7a
// 00479e71  8bc8                 mov ecx, eax
// 00479e73  e848f1ffff           call 0x478fc0
// 00479e78  eb02                 jmp 0x479e7c
// 00479e7a  33c0                 xor eax, eax
// 00479e7c  8b0c24               mov ecx, dword ptr [esp]
// 00479e7f  56                   push esi
// 00479e80  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00479e84  51                   push ecx
// 00479e85  50                   push eax
// 00479e86  8bce                 mov ecx, esi
// 00479e88  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00479e90  e87bd3ffff           call 0x477210
// 00479e95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00479e99  8bc6                 mov eax, esi
// 00479e9b  5e                   pop esi
// 00479e9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00479ea3  83c414               add esp, 0x14
// 00479ea6  c3                   ret 
// library openrbx-client/App\v8datamodel\CharacterAppearance.cpp (function ??$create@VShirtGraphic@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VShirtGraphic@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/CharacterAppearance.cpp
