// roc 2008-06 0045c580  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c580
//
// 0045c580  6aff                 push -1
// 0045c582  683b467d00           push 0x7d463b
// 0045c587  64a100000000         mov eax, dword ptr fs:[0]
// 0045c58d  50                   push eax
// 0045c58e  64892500000000       mov dword ptr fs:[0], esp
// 0045c595  83ec08               sub esp, 8
// 0045c598  c7042400000000       mov dword ptr [esp], 0
// 0045c59f  6844010000           push 0x144
// 0045c5a4  c644240400           mov byte ptr [esp + 4], 0
// 0045c5a9  ff15b0288000         call dword ptr [0x8028b0]
// 0045c5af  83c404               add esp, 4
// 0045c5b2  89442404             mov dword ptr [esp + 4], eax
// 0045c5b6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045c5be  85c0                 test eax, eax
// 0045c5c0  7409                 je 0x45c5cb
// 0045c5c2  8bc8                 mov ecx, eax
// 0045c5c4  e817f41600           call 0x5cb9e0
// 0045c5c9  eb02                 jmp 0x45c5cd
// 0045c5cb  33c0                 xor eax, eax
// 0045c5cd  8b0c24               mov ecx, dword ptr [esp]
// 0045c5d0  56                   push esi
// 0045c5d1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045c5d5  51                   push ecx
// 0045c5d6  50                   push eax
// 0045c5d7  8bce                 mov ecx, esi
// 0045c5d9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0045c5e1  e8bafbffff           call 0x45c1a0
// 0045c5e6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045c5ea  8bc6                 mov eax, esi
// 0045c5ec  5e                   pop esi
// 0045c5ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c5f4  83c414               add esp, 0x14
// 0045c5f7  c3                   ret 
// library openrbx-client/App\v8datamodel\ForceField.cpp (function ??$create@VForceField@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VForceField@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ForceField.cpp
