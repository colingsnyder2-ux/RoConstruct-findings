// roc 2008-06 005d9280  unit: RBX::VPartInstance::?$FilteredSelection  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9280
//
// 005d9280  6aff                 push -1
// 005d9282  683b467d00           push 0x7d463b
// 005d9287  64a100000000         mov eax, dword ptr fs:[0]
// 005d928d  50                   push eax
// 005d928e  64892500000000       mov dword ptr fs:[0], esp
// 005d9295  83ec08               sub esp, 8
// 005d9298  c7042400000000       mov dword ptr [esp], 0
// 005d929f  6854010000           push 0x154
// 005d92a4  c644240400           mov byte ptr [esp + 4], 0
// 005d92a9  ff15b0288000         call dword ptr [0x8028b0]
// 005d92af  83c404               add esp, 4
// 005d92b2  89442404             mov dword ptr [esp + 4], eax
// 005d92b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d92be  85c0                 test eax, eax
// 005d92c0  7409                 je 0x5d92cb
// 005d92c2  8bc8                 mov ecx, eax
// 005d92c4  e877f4ffff           call 0x5d8740
// 005d92c9  eb02                 jmp 0x5d92cd
// 005d92cb  33c0                 xor eax, eax
// 005d92cd  8b0c24               mov ecx, dword ptr [esp]
// 005d92d0  56                   push esi
// 005d92d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d92d5  51                   push ecx
// 005d92d6  50                   push eax
// 005d92d7  8bce                 mov ecx, esi
// 005d92d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005d92e1  e86af0ffff           call 0x5d8350
// 005d92e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d92ea  8bc6                 mov eax, esi
// 005d92ec  5e                   pop esi
// 005d92ed  64890d00000000       mov dword ptr fs:[0], ecx
// 005d92f4  83c414               add esp, 0x14
// 005d92f7  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
