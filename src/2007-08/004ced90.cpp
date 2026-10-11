// roc 2007-08 004ced90  unit: G3D::VVector3::?$Table  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ced90
//
// 004ced90  6aff                 push -1
// 004ced92  68bb6a7500           push 0x756abb
// 004ced97  64a100000000         mov eax, dword ptr fs:[0]
// 004ced9d  50                   push eax
// 004ced9e  64892500000000       mov dword ptr fs:[0], esp
// 004ceda5  83ec08               sub esp, 8
// 004ceda8  c7042400000000       mov dword ptr [esp], 0
// 004cedaf  68b0010000           push 0x1b0
// 004cedb4  c644240400           mov byte ptr [esp + 4], 0
// 004cedb9  ff15d0e67700         call dword ptr [0x77e6d0]
// 004cedbf  83c404               add esp, 4
// 004cedc2  89442404             mov dword ptr [esp + 4], eax
// 004cedc6  85c0                 test eax, eax
// 004cedc8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cedd0  7409                 je 0x4ceddb
// 004cedd2  8bc8                 mov ecx, eax
// 004cedd4  e827760e00           call 0x5b6400
// 004cedd9  eb02                 jmp 0x4ceddd
// 004ceddb  33c0                 xor eax, eax
// 004ceddd  8b0c24               mov ecx, dword ptr [esp]
// 004cede0  56                   push esi
// 004cede1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004cede5  51                   push ecx
// 004cede6  50                   push eax
// 004cede7  8bce                 mov ecx, esi
// 004cede9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004cedf1  e8eafeffff           call 0x4cece0
// 004cedf6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cedfa  8bc6                 mov eax, esi
// 004cedfc  5e                   pop esi
// 004cedfd  64890d00000000       mov dword ptr fs:[0], ecx
// 004cee04  83c414               add esp, 0x14
// 004cee07  c3                   ret 
// library openrbx-client/App\v8datamodel\Camera.cpp (function ??$create@VCamera@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VCamera@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Camera.cpp
