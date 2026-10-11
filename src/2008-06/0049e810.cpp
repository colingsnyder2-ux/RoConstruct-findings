// roc 2008-06 0049e810  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e810
//
// 0049e810  6aff                 push -1
// 0049e812  683b467d00           push 0x7d463b
// 0049e817  64a100000000         mov eax, dword ptr fs:[0]
// 0049e81d  50                   push eax
// 0049e81e  64892500000000       mov dword ptr fs:[0], esp
// 0049e825  83ec08               sub esp, 8
// 0049e828  c7042400000000       mov dword ptr [esp], 0
// 0049e82f  6860010000           push 0x160
// 0049e834  c644240400           mov byte ptr [esp + 4], 0
// 0049e839  ff15b0288000         call dword ptr [0x8028b0]
// 0049e83f  83c404               add esp, 4
// 0049e842  89442404             mov dword ptr [esp + 4], eax
// 0049e846  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049e84e  85c0                 test eax, eax
// 0049e850  7409                 je 0x49e85b
// 0049e852  8bc8                 mov ecx, eax
// 0049e854  e867c30000           call 0x4aabc0
// 0049e859  eb02                 jmp 0x49e85d
// 0049e85b  33c0                 xor eax, eax
// 0049e85d  8b0c24               mov ecx, dword ptr [esp]
// 0049e860  56                   push esi
// 0049e861  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049e865  51                   push ecx
// 0049e866  50                   push eax
// 0049e867  8bce                 mov ecx, esi
// 0049e869  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0049e871  e8eafeffff           call 0x49e760
// 0049e876  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049e87a  8bc6                 mov eax, esi
// 0049e87c  5e                   pop esi
// 0049e87d  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e884  83c414               add esp, 0x14
// 0049e887  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??$create@VScript@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VScript@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
