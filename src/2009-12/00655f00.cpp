// roc 2009-12 00655f00  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00655f00
//
// 00655f00  6aff                 push -1
// 00655f02  684bad9300           push 0x93ad4b
// 00655f07  64a100000000         mov eax, dword ptr fs:[0]
// 00655f0d  50                   push eax
// 00655f0e  64892500000000       mov dword ptr fs:[0], esp
// 00655f15  83ec08               sub esp, 8
// 00655f18  c7042400000000       mov dword ptr [esp], 0
// 00655f1f  6864010000           push 0x164
// 00655f24  c644240400           mov byte ptr [esp + 4], 0
// 00655f29  e832d91900           call 0x7f3860
// 00655f2e  83c404               add esp, 4
// 00655f31  89442404             mov dword ptr [esp + 4], eax
// 00655f35  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00655f3d  85c0                 test eax, eax
// 00655f3f  7409                 je 0x655f4a
// 00655f41  8bc8                 mov ecx, eax
// 00655f43  e8f8370e00           call 0x739740
// 00655f48  eb02                 jmp 0x655f4c
// 00655f4a  33c0                 xor eax, eax
// 00655f4c  8b0c24               mov ecx, dword ptr [esp]
// 00655f4f  56                   push esi
// 00655f50  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00655f54  51                   push ecx
// 00655f55  50                   push eax
// 00655f56  8bce                 mov ecx, esi
// 00655f58  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00655f60  e8ebfeffff           call 0x655e50
// 00655f65  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00655f69  8bc6                 mov eax, esi
// 00655f6b  5e                   pop esi
// 00655f6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00655f73  83c414               add esp, 0x14
// 00655f76  c3                   ret 
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??$create@VTexture@RBX@@@?$Creatable@VInstance@RBX@@@RBX@@SA?AV?$shared_ptr@VTexture@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
