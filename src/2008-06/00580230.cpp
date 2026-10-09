// roc 2008-06 00580230  unit: RBX::VMotorFeature::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580230
//
// 00580230  6aff                 push -1
// 00580232  683b467d00           push 0x7d463b
// 00580237  64a100000000         mov eax, dword ptr fs:[0]
// 0058023d  50                   push eax
// 0058023e  64892500000000       mov dword ptr fs:[0], esp
// 00580245  83ec08               sub esp, 8
// 00580248  c7042400000000       mov dword ptr [esp], 0
// 0058024f  6850010000           push 0x150
// 00580254  c644240400           mov byte ptr [esp + 4], 0
// 00580259  ff15b0288000         call dword ptr [0x8028b0]
// 0058025f  83c404               add esp, 4
// 00580262  89442404             mov dword ptr [esp + 4], eax
// 00580266  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058026e  85c0                 test eax, eax
// 00580270  7409                 je 0x58027b
// 00580272  8bc8                 mov ecx, eax
// 00580274  e8c7c50800           call 0x60c840
// 00580279  eb02                 jmp 0x58027d
// 0058027b  33c0                 xor eax, eax
// 0058027d  8b0c24               mov ecx, dword ptr [esp]
// 00580280  56                   push esi
// 00580281  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00580285  51                   push ecx
// 00580286  50                   push eax
// 00580287  8bce                 mov ecx, esi
// 00580289  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00580291  e8eafeffff           call 0x580180
// 00580296  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058029a  8bc6                 mov eax, esi
// 0058029c  5e                   pop esi
// 0058029d  64890d00000000       mov dword ptr fs:[0], ecx
// 005802a4  83c414               add esp, 0x14
// 005802a7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??$create@VHole@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VHole@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
