// roc 2008-06 00585100  unit: RBX::ModelInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585100
//
// 00585100  64a100000000         mov eax, dword ptr fs:[0]
// 00585106  6aff                 push -1
// 00585108  682e127d00           push 0x7d122e
// 0058510d  50                   push eax
// 0058510e  b801000000           mov eax, 1
// 00585113  64892500000000       mov dword ptr fs:[0], esp
// 0058511a  840528579700         test byte ptr [0x975728], al
// 00585120  7530                 jne 0x585152
// 00585122  090528579700         or dword ptr [0x975728], eax
// 00585128  68e8819400           push 0x9481e8
// 0058512d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00585135  e856ffffff           call 0x585090
// 0058513a  50                   push eax
// 0058513b  b968569700           mov ecx, 0x975668
// 00585140  e8abb7feff           call 0x5708f0
// 00585145  68b0d77f00           push 0x7fd7b0
// 0058514a  e860c61100           call 0x6a17af
// 0058514f  83c404               add esp, 4
// 00585152  8b0c24               mov ecx, dword ptr [esp]
// 00585155  b868569700           mov eax, 0x975668
// 0058515a  64890d00000000       mov dword ptr fs:[0], ecx
// 00585161  83c40c               add esp, 0xc
// 00585164  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
