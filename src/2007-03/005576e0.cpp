// roc 2007-03 005576e0  unit: seg_00550000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005576e0
//
// 005576e0  6aff                 push -1
// 005576e2  688b977500           push 0x75978b
// 005576e7  64a100000000         mov eax, dword ptr fs:[0]
// 005576ed  50                   push eax
// 005576ee  64892500000000       mov dword ptr fs:[0], esp
// 005576f5  83ec08               sub esp, 8
// 005576f8  c7042400000000       mov dword ptr [esp], 0
// 005576ff  6804010000           push 0x104
// 00557704  c644240400           mov byte ptr [esp + 4], 0
// 00557709  ff153ce97700         call dword ptr [0x77e93c]
// 0055770f  83c404               add esp, 4
// 00557712  89442404             mov dword ptr [esp + 4], eax
// 00557716  85c0                 test eax, eax
// 00557718  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00557720  7409                 je 0x55772b
// 00557722  8bc8                 mov ecx, eax
// 00557724  e877acffff           call 0x5523a0
// 00557729  eb02                 jmp 0x55772d
// 0055772b  33c0                 xor eax, eax
// 0055772d  8b0c24               mov ecx, dword ptr [esp]
// 00557730  56                   push esi
// 00557731  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00557735  51                   push ecx
// 00557736  50                   push eax
// 00557737  8bce                 mov ecx, esi
// 00557739  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00557741  e82aeeffff           call 0x556570
// 00557746  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055774a  8bc6                 mov eax, esi
// 0055774c  5e                   pop esi
// 0055774d  64890d00000000       mov dword ptr fs:[0], ecx
// 00557754  83c414               add esp, 0x14
// 00557757  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??$create@VGuiRoot@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGuiRoot@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
