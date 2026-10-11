// roc 2008-06 0045db40  unit: RBX::VControllerService::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045db40
//
// 0045db40  6aff                 push -1
// 0045db42  683b467d00           push 0x7d463b
// 0045db47  64a100000000         mov eax, dword ptr fs:[0]
// 0045db4d  50                   push eax
// 0045db4e  64892500000000       mov dword ptr fs:[0], esp
// 0045db55  83ec08               sub esp, 8
// 0045db58  c7042400000000       mov dword ptr [esp], 0
// 0045db5f  68e8010000           push 0x1e8
// 0045db64  c644240400           mov byte ptr [esp + 4], 0
// 0045db69  ff15b0288000         call dword ptr [0x8028b0]
// 0045db6f  83c404               add esp, 4
// 0045db72  89442404             mov dword ptr [esp + 4], eax
// 0045db76  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045db7e  85c0                 test eax, eax
// 0045db80  7409                 je 0x45db8b
// 0045db82  8bc8                 mov ecx, eax
// 0045db84  e817fe1600           call 0x5cd9a0
// 0045db89  eb02                 jmp 0x45db8d
// 0045db8b  33c0                 xor eax, eax
// 0045db8d  8b0c24               mov ecx, dword ptr [esp]
// 0045db90  56                   push esi
// 0045db91  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045db95  51                   push ecx
// 0045db96  50                   push eax
// 0045db97  8bce                 mov ecx, esi
// 0045db99  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0045dba1  e8eafeffff           call 0x45da90
// 0045dba6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045dbaa  8bc6                 mov eax, esi
// 0045dbac  5e                   pop esi
// 0045dbad  64890d00000000       mov dword ptr fs:[0], ecx
// 0045dbb4  83c414               add esp, 0x14
// 0045dbb7  c3                   ret 
// library openrbx-client/App\v8datamodel\Camera.cpp (function ??$create@VCamera@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VCamera@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Camera.cpp
