// roc 2008-06 005c2150  unit: RBX::VBodyThrust::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2150
//
// 005c2150  6aff                 push -1
// 005c2152  683b467d00           push 0x7d463b
// 005c2157  64a100000000         mov eax, dword ptr fs:[0]
// 005c215d  50                   push eax
// 005c215e  64892500000000       mov dword ptr fs:[0], esp
// 005c2165  83ec08               sub esp, 8
// 005c2168  c7042400000000       mov dword ptr [esp], 0
// 005c216f  6874010000           push 0x174
// 005c2174  c644240400           mov byte ptr [esp + 4], 0
// 005c2179  ff15b0288000         call dword ptr [0x8028b0]
// 005c217f  83c404               add esp, 4
// 005c2182  89442404             mov dword ptr [esp + 4], eax
// 005c2186  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c218e  85c0                 test eax, eax
// 005c2190  7409                 je 0x5c219b
// 005c2192  8bc8                 mov ecx, eax
// 005c2194  e8f7ff0600           call 0x632190
// 005c2199  eb02                 jmp 0x5c219d
// 005c219b  33c0                 xor eax, eax
// 005c219d  8b0c24               mov ecx, dword ptr [esp]
// 005c21a0  56                   push esi
// 005c21a1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005c21a5  51                   push ecx
// 005c21a6  50                   push eax
// 005c21a7  8bce                 mov ecx, esi
// 005c21a9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c21b1  e8eafeffff           call 0x5c20a0
// 005c21b6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c21ba  8bc6                 mov eax, esi
// 005c21bc  5e                   pop esi
// 005c21bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005c21c4  83c414               add esp, 0x14
// 005c21c7  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??$create@VSelection@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSelection@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
