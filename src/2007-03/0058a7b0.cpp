// roc 2007-03 0058a7b0  unit: seg_00580000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058a7b0
//
// 0058a7b0  6aff                 push -1
// 0058a7b2  688b977500           push 0x75978b
// 0058a7b7  64a100000000         mov eax, dword ptr fs:[0]
// 0058a7bd  50                   push eax
// 0058a7be  64892500000000       mov dword ptr fs:[0], esp
// 0058a7c5  83ec08               sub esp, 8
// 0058a7c8  c7042400000000       mov dword ptr [esp], 0
// 0058a7cf  681c010000           push 0x11c
// 0058a7d4  c644240400           mov byte ptr [esp + 4], 0
// 0058a7d9  ff153ce97700         call dword ptr [0x77e93c]
// 0058a7df  83c404               add esp, 4
// 0058a7e2  89442404             mov dword ptr [esp + 4], eax
// 0058a7e6  85c0                 test eax, eax
// 0058a7e8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058a7f0  7409                 je 0x58a7fb
// 0058a7f2  8bc8                 mov ecx, eax
// 0058a7f4  e857fdffff           call 0x58a550
// 0058a7f9  eb02                 jmp 0x58a7fd
// 0058a7fb  33c0                 xor eax, eax
// 0058a7fd  8b0c24               mov ecx, dword ptr [esp]
// 0058a800  56                   push esi
// 0058a801  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058a805  51                   push ecx
// 0058a806  50                   push eax
// 0058a807  8bce                 mov ecx, esi
// 0058a809  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058a811  e89af2ffff           call 0x589ab0
// 0058a816  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058a81a  8bc6                 mov eax, esi
// 0058a81c  5e                   pop esi
// 0058a81d  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a824  83c414               add esp, 0x14
// 0058a827  c3                   ret 
// library openrbx-client/App\v8datamodel\JointInstance.cpp (function ??$create@VGlue@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlue@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/JointInstance.cpp
