// roc 2008-06 0048f700  unit: RBX::VShirtGraphic::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f700
//
// 0048f700  6aff                 push -1
// 0048f702  683b467d00           push 0x7d463b
// 0048f707  64a100000000         mov eax, dword ptr fs:[0]
// 0048f70d  50                   push eax
// 0048f70e  64892500000000       mov dword ptr fs:[0], esp
// 0048f715  83ec08               sub esp, 8
// 0048f718  c7042400000000       mov dword ptr [esp], 0
// 0048f71f  6874010000           push 0x174
// 0048f724  c644240400           mov byte ptr [esp + 4], 0
// 0048f729  ff15b0288000         call dword ptr [0x8028b0]
// 0048f72f  83c404               add esp, 4
// 0048f732  89442404             mov dword ptr [esp + 4], eax
// 0048f736  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048f73e  85c0                 test eax, eax
// 0048f740  7409                 je 0x48f74b
// 0048f742  8bc8                 mov ecx, eax
// 0048f744  e8b75f1400           call 0x5d5700
// 0048f749  eb02                 jmp 0x48f74d
// 0048f74b  33c0                 xor eax, eax
// 0048f74d  8b0c24               mov ecx, dword ptr [esp]
// 0048f750  56                   push esi
// 0048f751  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048f755  51                   push ecx
// 0048f756  50                   push eax
// 0048f757  8bce                 mov ecx, esi
// 0048f759  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0048f761  e8eafeffff           call 0x48f650
// 0048f766  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048f76a  8bc6                 mov eax, esi
// 0048f76c  5e                   pop esi
// 0048f76d  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f774  83c414               add esp, 0x14
// 0048f777  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ??$create@VSelection@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VSelection@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
