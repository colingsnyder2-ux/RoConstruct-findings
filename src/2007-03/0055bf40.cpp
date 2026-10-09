// roc 2007-03 0055bf40  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055bf40
//
// 0055bf40  64a100000000         mov eax, dword ptr fs:[0]
// 0055bf46  6aff                 push -1
// 0055bf48  68ae447500           push 0x7544ae
// 0055bf4d  50                   push eax
// 0055bf4e  b801000000           mov eax, 1
// 0055bf53  64892500000000       mov dword ptr fs:[0], esp
// 0055bf5a  840548c38b00         test byte ptr [0x8bc348], al
// 0055bf60  7530                 jne 0x55bf92
// 0055bf62  090548c38b00         or dword ptr [0x8bc348], eax
// 0055bf68  68f0877a00           push 0x7a87f0
// 0055bf6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055bf75  e806dafeff           call 0x549980
// 0055bf7a  50                   push eax
// 0055bf7b  b9c0c28b00           mov ecx, 0x8bc2c0
// 0055bf80  e85b4e0100           call 0x570de0
// 0055bf85  68309a7700           push 0x779a30
// 0055bf8a  e824320c00           call 0x61f1b3
// 0055bf8f  83c404               add esp, 4
// 0055bf92  8b0c24               mov ecx, dword ptr [esp]
// 0055bf95  b8c0c28b00           mov eax, 0x8bc2c0
// 0055bf9a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bfa1  83c40c               add esp, 0xc
// 0055bfa4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
