// roc 2008-06 005780e0  unit: RBX::VInstance::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005780e0
//
// 005780e0  6aff                 push -1
// 005780e2  683b467d00           push 0x7d463b
// 005780e7  64a100000000         mov eax, dword ptr fs:[0]
// 005780ed  50                   push eax
// 005780ee  64892500000000       mov dword ptr fs:[0], esp
// 005780f5  83ec08               sub esp, 8
// 005780f8  c7042400000000       mov dword ptr [esp], 0
// 005780ff  6888010000           push 0x188
// 00578104  c644240400           mov byte ptr [esp + 4], 0
// 00578109  ff15b0288000         call dword ptr [0x8028b0]
// 0057810f  83c404               add esp, 4
// 00578112  89442404             mov dword ptr [esp + 4], eax
// 00578116  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057811e  85c0                 test eax, eax
// 00578120  7409                 je 0x57812b
// 00578122  8bc8                 mov ecx, eax
// 00578124  e8a74b0800           call 0x5fccd0
// 00578129  eb02                 jmp 0x57812d
// 0057812b  33c0                 xor eax, eax
// 0057812d  8b0c24               mov ecx, dword ptr [esp]
// 00578130  56                   push esi
// 00578131  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00578135  51                   push ecx
// 00578136  50                   push eax
// 00578137  8bce                 mov ecx, esi
// 00578139  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00578141  e8eafeffff           call 0x578030
// 00578146  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057814a  8bc6                 mov eax, esi
// 0057814c  5e                   pop esi
// 0057814d  64890d00000000       mov dword ptr fs:[0], ecx
// 00578154  83c414               add esp, 0x14
// 00578157  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyGyro@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyGyro@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Gyro.cpp
