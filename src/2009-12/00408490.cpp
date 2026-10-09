// roc 2009-12 00408490  unit: VCApp::?$CComObject  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00408490
//
// 00408490  6aff                 push -1
// 00408492  684bad9300           push 0x93ad4b
// 00408497  64a100000000         mov eax, dword ptr fs:[0]
// 0040849d  50                   push eax
// 0040849e  64892500000000       mov dword ptr fs:[0], esp
// 004084a5  83ec08               sub esp, 8
// 004084a8  c7042400000000       mov dword ptr [esp], 0
// 004084af  6838010000           push 0x138
// 004084b4  c644240400           mov byte ptr [esp + 4], 0
// 004084b9  e8a2b33e00           call 0x7f3860
// 004084be  83c404               add esp, 4
// 004084c1  89442404             mov dword ptr [esp + 4], eax
// 004084c5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004084cd  85c0                 test eax, eax
// 004084cf  7409                 je 0x4084da
// 004084d1  8bc8                 mov ecx, eax
// 004084d3  e888180400           call 0x449d60
// 004084d8  eb02                 jmp 0x4084dc
// 004084da  33c0                 xor eax, eax
// 004084dc  8b0c24               mov ecx, dword ptr [esp]
// 004084df  56                   push esi
// 004084e0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004084e4  51                   push ecx
// 004084e5  50                   push eax
// 004084e6  8bce                 mov ecx, esi
// 004084e8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004084f0  e8ebfeffff           call 0x4083e0
// 004084f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004084f9  8bc6                 mov eax, esi
// 004084fb  5e                   pop esi
// 004084fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00408503  83c414               add esp, 0x14
// 00408506  c3                   ret 
// library openrbx-client/App\v8datamodel\Teams.cpp (function ??$create@VTeams@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTeams@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Teams.cpp
