// roc 2008-06 005b1950  unit: RBX::VHat::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1950
//
// 005b1950  64a100000000         mov eax, dword ptr fs:[0]
// 005b1956  6aff                 push -1
// 005b1958  685e377d00           push 0x7d375e
// 005b195d  50                   push eax
// 005b195e  b801000000           mov eax, 1
// 005b1963  64892500000000       mov dword ptr fs:[0], esp
// 005b196a  8405186e9700         test byte ptr [0x976e18], al
// 005b1970  7530                 jne 0x5b19a2
// 005b1972  0905186e9700         or dword ptr [0x976e18], eax
// 005b1978  68f8498300           push 0x8349f8
// 005b197d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b1985  e8f693e5ff           call 0x40ad80
// 005b198a  50                   push eax
// 005b198b  b9586d9700           mov ecx, 0x976d58
// 005b1990  e85beffbff           call 0x5708f0
// 005b1995  68b0e27f00           push 0x7fe2b0
// 005b199a  e810fe0e00           call 0x6a17af
// 005b199f  83c404               add esp, 4
// 005b19a2  8b0c24               mov ecx, dword ptr [esp]
// 005b19a5  b8586d9700           mov eax, 0x976d58
// 005b19aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005b19b1  83c40c               add esp, 0xc
// 005b19b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
