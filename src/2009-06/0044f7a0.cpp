// roc 2009-06 0044f7a0  unit: VCWorkspace::?$CComObject  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044f7a0
//
// 0044f7a0  6aff                 push -1
// 0044f7a2  686b088500           push 0x85086b
// 0044f7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0044f7ad  50                   push eax
// 0044f7ae  64892500000000       mov dword ptr fs:[0], esp
// 0044f7b5  83ec08               sub esp, 8
// 0044f7b8  c7042400000000       mov dword ptr [esp], 0
// 0044f7bf  683c010000           push 0x13c
// 0044f7c4  c644240400           mov byte ptr [esp + 4], 0
// 0044f7c9  e86a922c00           call 0x718a38
// 0044f7ce  83c404               add esp, 4
// 0044f7d1  89442404             mov dword ptr [esp + 4], eax
// 0044f7d5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044f7dd  85c0                 test eax, eax
// 0044f7df  7409                 je 0x44f7ea
// 0044f7e1  8bc8                 mov ecx, eax
// 0044f7e3  e8680e1900           call 0x5e0650
// 0044f7e8  eb02                 jmp 0x44f7ec
// 0044f7ea  33c0                 xor eax, eax
// 0044f7ec  8b0c24               mov ecx, dword ptr [esp]
// 0044f7ef  56                   push esi
// 0044f7f0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0044f7f4  51                   push ecx
// 0044f7f5  50                   push eax
// 0044f7f6  8bce                 mov ecx, esi
// 0044f7f8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0044f800  e8dbfcffff           call 0x44f4e0
// 0044f805  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f809  8bc6                 mov eax, esi
// 0044f80b  5e                   pop esi
// 0044f80c  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f813  83c414               add esp, 0x14
// 0044f816  c3                   ret 
// library openrbx-client/App\v8datamodel\FlagStand.cpp (function ??$create@VFlagStandService@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VFlagStandService@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/FlagStand.cpp
