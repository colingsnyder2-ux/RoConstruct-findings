// roc 2007-03 005894f0  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005894f0
//
// 005894f0  6aff                 push -1
// 005894f2  688b977500           push 0x75978b
// 005894f7  64a100000000         mov eax, dword ptr fs:[0]
// 005894fd  50                   push eax
// 005894fe  64892500000000       mov dword ptr fs:[0], esp
// 00589505  83ec08               sub esp, 8
// 00589508  c7042400000000       mov dword ptr [esp], 0
// 0058950f  682c010000           push 0x12c
// 00589514  c644240400           mov byte ptr [esp + 4], 0
// 00589519  ff153ce97700         call dword ptr [0x77e93c]
// 0058951f  83c404               add esp, 4
// 00589522  89442404             mov dword ptr [esp + 4], eax
// 00589526  85c0                 test eax, eax
// 00589528  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00589530  7409                 je 0x58953b
// 00589532  8bc8                 mov ecx, eax
// 00589534  e897410500           call 0x5dd6d0
// 00589539  eb02                 jmp 0x58953d
// 0058953b  33c0                 xor eax, eax
// 0058953d  8b0c24               mov ecx, dword ptr [esp]
// 00589540  56                   push esi
// 00589541  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00589545  51                   push ecx
// 00589546  50                   push eax
// 00589547  8bce                 mov ecx, esi
// 00589549  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00589551  e8eafeffff           call 0x589440
// 00589556  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058955a  8bc6                 mov eax, esi
// 0058955c  5e                   pop esi
// 0058955d  64890d00000000       mov dword ptr fs:[0], ecx
// 00589564  83c414               add esp, 0x14
// 00589567  c3                   ret 
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??$create@VTexture@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTexture@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
