// roc 2008-06 005c3420  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3420
//
// 005c3420  64a100000000         mov eax, dword ptr fs:[0]
// 005c3426  6aff                 push -1
// 005c3428  68be467d00           push 0x7d46be
// 005c342d  50                   push eax
// 005c342e  b801000000           mov eax, 1
// 005c3433  64892500000000       mov dword ptr fs:[0], esp
// 005c343a  8405308b9700         test byte ptr [0x978b30], al
// 005c3440  7530                 jne 0x5c3472
// 005c3442  0905308b9700         or dword ptr [0x978b30], eax
// 005c3448  6840e08300           push 0x83e040
// 005c344d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3455  e876d4ffff           call 0x5c08d0
// 005c345a  50                   push eax
// 005c345b  b9708a9700           mov ecx, 0x978a70
// 005c3460  e88bd4faff           call 0x5708f0
// 005c3465  68e0e77f00           push 0x7fe7e0
// 005c346a  e840e30d00           call 0x6a17af
// 005c346f  83c404               add esp, 4
// 005c3472  8b0c24               mov ecx, dword ptr [esp]
// 005c3475  b8708a9700           mov eax, 0x978a70
// 005c347a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3481  83c40c               add esp, 0xc
// 005c3484  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
