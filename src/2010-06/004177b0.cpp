// roc 2010-06 004177b0  unit: VCContent::?$CComObject  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004177b0
//
// 004177b0  6aff                 push -1
// 004177b2  689bbf9800           push 0x98bf9b
// 004177b7  64a100000000         mov eax, dword ptr fs:[0]
// 004177bd  50                   push eax
// 004177be  64892500000000       mov dword ptr fs:[0], esp
// 004177c5  83ec08               sub esp, 8
// 004177c8  c7042400000000       mov dword ptr [esp], 0
// 004177cf  68c8010000           push 0x1c8
// 004177d4  c644240400           mov byte ptr [esp + 4], 0
// 004177d9  e8c2013900           call 0x7a79a0
// 004177de  83c404               add esp, 4
// 004177e1  89442404             mov dword ptr [esp + 4], eax
// 004177e5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004177ed  85c0                 test eax, eax
// 004177ef  7409                 je 0x4177fa
// 004177f1  8bc8                 mov ecx, eax
// 004177f3  e8a8161e00           call 0x5f8ea0
// 004177f8  eb02                 jmp 0x4177fc
// 004177fa  33c0                 xor eax, eax
// 004177fc  8b0c24               mov ecx, dword ptr [esp]
// 004177ff  56                   push esi
// 00417800  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00417804  51                   push ecx
// 00417805  50                   push eax
// 00417806  8bce                 mov ecx, esi
// 00417808  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00417810  e8ebfeffff           call 0x417700
// 00417815  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00417819  8bc6                 mov eax, esi
// 0041781b  5e                   pop esi
// 0041781c  64890d00000000       mov dword ptr fs:[0], ecx
// 00417823  83c414               add esp, 0x14
// 00417826  c3                   ret 
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$create@VGlobalSettings@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
