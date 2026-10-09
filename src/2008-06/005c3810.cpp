// roc 2008-06 005c3810  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3810
//
// 005c3810  64a100000000         mov eax, dword ptr fs:[0]
// 005c3816  6aff                 push -1
// 005c3818  68de477d00           push 0x7d47de
// 005c381d  50                   push eax
// 005c381e  b801000000           mov eax, 1
// 005c3823  64892500000000       mov dword ptr fs:[0], esp
// 005c382a  840538929700         test byte ptr [0x979238], al
// 005c3830  7530                 jne 0x5c3862
// 005c3832  090538929700         or dword ptr [0x979238], eax
// 005c3838  68d0168400           push 0x8416d0
// 005c383d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c3845  e866d1ffff           call 0x5c09b0
// 005c384a  50                   push eax
// 005c384b  b978919700           mov ecx, 0x979178
// 005c3850  e89bd0faff           call 0x5708f0
// 005c3855  6860e87f00           push 0x7fe860
// 005c385a  e850df0d00           call 0x6a17af
// 005c385f  83c404               add esp, 4
// 005c3862  8b0c24               mov ecx, dword ptr [esp]
// 005c3865  b878919700           mov eax, 0x979178
// 005c386a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3871  83c40c               add esp, 0xc
// 005c3874  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
