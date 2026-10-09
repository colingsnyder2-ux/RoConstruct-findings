// roc 2008-06 004b23b0  unit: RBX::VLighting::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b23b0
//
// 004b23b0  6aff                 push -1
// 004b23b2  683b467d00           push 0x7d463b
// 004b23b7  64a100000000         mov eax, dword ptr fs:[0]
// 004b23bd  50                   push eax
// 004b23be  64892500000000       mov dword ptr fs:[0], esp
// 004b23c5  83ec08               sub esp, 8
// 004b23c8  c7042400000000       mov dword ptr [esp], 0
// 004b23cf  6854010000           push 0x154
// 004b23d4  c644240400           mov byte ptr [esp + 4], 0
// 004b23d9  ff15b0288000         call dword ptr [0x8028b0]
// 004b23df  83c404               add esp, 4
// 004b23e2  89442404             mov dword ptr [esp + 4], eax
// 004b23e6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b23ee  85c0                 test eax, eax
// 004b23f0  7409                 je 0x4b23fb
// 004b23f2  8bc8                 mov ecx, eax
// 004b23f4  e807221300           call 0x5e4600
// 004b23f9  eb02                 jmp 0x4b23fd
// 004b23fb  33c0                 xor eax, eax
// 004b23fd  8b0c24               mov ecx, dword ptr [esp]
// 004b2400  56                   push esi
// 004b2401  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b2405  51                   push ecx
// 004b2406  50                   push eax
// 004b2407  8bce                 mov ecx, esi
// 004b2409  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b2411  e8eafeffff           call 0x4b2300
// 004b2416  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b241a  8bc6                 mov eax, esi
// 004b241c  5e                   pop esi
// 004b241d  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2424  83c414               add esp, 0x14
// 004b2427  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
