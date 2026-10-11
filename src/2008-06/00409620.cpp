// roc 2008-06 00409620  unit: RBX::Network::VPlayer::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409620
//
// 00409620  6aff                 push -1
// 00409622  683b467d00           push 0x7d463b
// 00409627  64a100000000         mov eax, dword ptr fs:[0]
// 0040962d  50                   push eax
// 0040962e  64892500000000       mov dword ptr fs:[0], esp
// 00409635  83ec08               sub esp, 8
// 00409638  c7042400000000       mov dword ptr [esp], 0
// 0040963f  6874010000           push 0x174
// 00409644  c644240400           mov byte ptr [esp + 4], 0
// 00409649  ff15b0288000         call dword ptr [0x8028b0]
// 0040964f  83c404               add esp, 4
// 00409652  89442404             mov dword ptr [esp + 4], eax
// 00409656  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040965e  85c0                 test eax, eax
// 00409660  7409                 je 0x40966b
// 00409662  8bc8                 mov ecx, eax
// 00409664  e817eb1500           call 0x568180
// 00409669  eb02                 jmp 0x40966d
// 0040966b  33c0                 xor eax, eax
// 0040966d  8b0c24               mov ecx, dword ptr [esp]
// 00409670  56                   push esi
// 00409671  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00409675  51                   push ecx
// 00409676  50                   push eax
// 00409677  8bce                 mov ecx, esi
// 00409679  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00409681  e8eafeffff           call 0x409570
// 00409686  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040968a  8bc6                 mov eax, esi
// 0040968c  5e                   pop esi
// 0040968d  64890d00000000       mov dword ptr fs:[0], ecx
// 00409694  83c414               add esp, 0x14
// 00409697  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??$create@VSelection@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSelection@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
