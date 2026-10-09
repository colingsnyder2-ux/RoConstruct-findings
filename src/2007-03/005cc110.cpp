// roc 2007-03 005cc110  unit: seg_005c0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cc110
//
// 005cc110  6aff                 push -1
// 005cc112  688b977500           push 0x75978b
// 005cc117  64a100000000         mov eax, dword ptr fs:[0]
// 005cc11d  50                   push eax
// 005cc11e  64892500000000       mov dword ptr fs:[0], esp
// 005cc125  83ec08               sub esp, 8
// 005cc128  c7042400000000       mov dword ptr [esp], 0
// 005cc12f  681c010000           push 0x11c
// 005cc134  c644240400           mov byte ptr [esp + 4], 0
// 005cc139  ff153ce97700         call dword ptr [0x77e93c]
// 005cc13f  83c404               add esp, 4
// 005cc142  89442404             mov dword ptr [esp + 4], eax
// 005cc146  85c0                 test eax, eax
// 005cc148  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cc150  7409                 je 0x5cc15b
// 005cc152  8bc8                 mov ecx, eax
// 005cc154  e8977c0300           call 0x603df0
// 005cc159  eb02                 jmp 0x5cc15d
// 005cc15b  33c0                 xor eax, eax
// 005cc15d  8b0c24               mov ecx, dword ptr [esp]
// 005cc160  56                   push esi
// 005cc161  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005cc165  51                   push ecx
// 005cc166  50                   push eax
// 005cc167  8bce                 mov ecx, esi
// 005cc169  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005cc171  e8eafeffff           call 0x5cc060
// 005cc176  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cc17a  8bc6                 mov eax, esi
// 005cc17c  5e                   pop esi
// 005cc17d  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc184  83c414               add esp, 0x14
// 005cc187  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
