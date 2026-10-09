// roc 2008-06 0049a1e0  unit: RBX::VInstance::?$SignalDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a1e0
//
// 0049a1e0  6aff                 push -1
// 0049a1e2  683b467d00           push 0x7d463b
// 0049a1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a1ed  50                   push eax
// 0049a1ee  64892500000000       mov dword ptr fs:[0], esp
// 0049a1f5  83ec08               sub esp, 8
// 0049a1f8  c7042400000000       mov dword ptr [esp], 0
// 0049a1ff  6850010000           push 0x150
// 0049a204  c644240400           mov byte ptr [esp + 4], 0
// 0049a209  ff15b0288000         call dword ptr [0x8028b0]
// 0049a20f  83c404               add esp, 4
// 0049a212  89442404             mov dword ptr [esp + 4], eax
// 0049a216  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049a21e  85c0                 test eax, eax
// 0049a220  7409                 je 0x49a22b
// 0049a222  8bc8                 mov ecx, eax
// 0049a224  e867670000           call 0x4a0990
// 0049a229  eb02                 jmp 0x49a22d
// 0049a22b  33c0                 xor eax, eax
// 0049a22d  8b0c24               mov ecx, dword ptr [esp]
// 0049a230  56                   push esi
// 0049a231  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049a235  51                   push ecx
// 0049a236  50                   push eax
// 0049a237  8bce                 mov ecx, esi
// 0049a239  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0049a241  e8eafeffff           call 0x49a130
// 0049a246  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049a24a  8bc6                 mov eax, esi
// 0049a24c  5e                   pop esi
// 0049a24d  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a254  83c414               add esp, 0x14
// 0049a257  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
