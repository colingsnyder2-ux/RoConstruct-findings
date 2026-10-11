// roc 2007-03 0054a310  unit: seg_00540000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a310
//
// 0054a310  6aff                 push -1
// 0054a312  688b977500           push 0x75978b
// 0054a317  64a100000000         mov eax, dword ptr fs:[0]
// 0054a31d  50                   push eax
// 0054a31e  64892500000000       mov dword ptr fs:[0], esp
// 0054a325  83ec08               sub esp, 8
// 0054a328  c7042400000000       mov dword ptr [esp], 0
// 0054a32f  6854010000           push 0x154
// 0054a334  c644240400           mov byte ptr [esp + 4], 0
// 0054a339  ff153ce97700         call dword ptr [0x77e93c]
// 0054a33f  83c404               add esp, 4
// 0054a342  89442404             mov dword ptr [esp + 4], eax
// 0054a346  85c0                 test eax, eax
// 0054a348  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054a350  7409                 je 0x54a35b
// 0054a352  8bc8                 mov ecx, eax
// 0054a354  e8d7feffff           call 0x54a230
// 0054a359  eb02                 jmp 0x54a35d
// 0054a35b  33c0                 xor eax, eax
// 0054a35d  8b0c24               mov ecx, dword ptr [esp]
// 0054a360  56                   push esi
// 0054a361  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0054a365  51                   push ecx
// 0054a366  50                   push eax
// 0054a367  8bce                 mov ecx, esi
// 0054a369  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0054a371  e80af2ffff           call 0x549580
// 0054a376  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054a37a  8bc6                 mov eax, esi
// 0054a37c  5e                   pop esi
// 0054a37d  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a384  83c414               add esp, 0x14
// 0054a387  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VRocket@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VRocket@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Gyro.cpp
