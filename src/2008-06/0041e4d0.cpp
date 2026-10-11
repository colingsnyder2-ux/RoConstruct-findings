// roc 2008-06 0041e4d0  unit: VDHTMLWindow::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e4d0
//
// 0041e4d0  6aff                 push -1
// 0041e4d2  683b467d00           push 0x7d463b
// 0041e4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0041e4dd  50                   push eax
// 0041e4de  64892500000000       mov dword ptr fs:[0], esp
// 0041e4e5  83ec08               sub esp, 8
// 0041e4e8  c7042400000000       mov dword ptr [esp], 0
// 0041e4ef  686c010000           push 0x16c
// 0041e4f4  c644240400           mov byte ptr [esp + 4], 0
// 0041e4f9  ff15b0288000         call dword ptr [0x8028b0]
// 0041e4ff  83c404               add esp, 4
// 0041e502  89442404             mov dword ptr [esp + 4], eax
// 0041e506  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041e50e  85c0                 test eax, eax
// 0041e510  7409                 je 0x41e51b
// 0041e512  8bc8                 mov ecx, eax
// 0041e514  e8e79e1700           call 0x598400
// 0041e519  eb02                 jmp 0x41e51d
// 0041e51b  33c0                 xor eax, eax
// 0041e51d  8b0c24               mov ecx, dword ptr [esp]
// 0041e520  56                   push esi
// 0041e521  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041e525  51                   push ecx
// 0041e526  50                   push eax
// 0041e527  8bce                 mov ecx, esi
// 0041e529  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0041e531  e88afdffff           call 0x41e2c0
// 0041e536  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041e53a  8bc6                 mov eax, esi
// 0041e53c  5e                   pop esi
// 0041e53d  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e544  83c414               add esp, 0x14
// 0041e547  c3                   ret 
// library openrbx-client/App\v8datamodel\Gyro.cpp (function ??$create@VBodyVelocity@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VBodyVelocity@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Gyro.cpp
