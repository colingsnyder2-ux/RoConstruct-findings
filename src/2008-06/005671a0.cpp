// roc 2008-06 005671a0  unit: RBX::Selection  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005671a0
//
// 005671a0  64a100000000         mov eax, dword ptr fs:[0]
// 005671a6  6aff                 push -1
// 005671a8  68fef47c00           push 0x7cf4fe
// 005671ad  50                   push eax
// 005671ae  b801000000           mov eax, 1
// 005671b3  64892500000000       mov dword ptr fs:[0], esp
// 005671ba  8405e0499700         test byte ptr [0x9749e0], al
// 005671c0  7530                 jne 0x5671f2
// 005671c2  0905e0499700         or dword ptr [0x9749e0], eax
// 005671c8  6858ec8200           push 0x82ec58
// 005671cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005671d5  e8a63beaff           call 0x40ad80
// 005671da  50                   push eax
// 005671db  b920499700           mov ecx, 0x974920
// 005671e0  e80b970000           call 0x5708f0
// 005671e5  6860d07f00           push 0x7fd060
// 005671ea  e8c0a51300           call 0x6a17af
// 005671ef  83c404               add esp, 4
// 005671f2  8b0c24               mov ecx, dword ptr [esp]
// 005671f5  b820499700           mov eax, 0x974920
// 005671fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00567201  83c40c               add esp, 0xc
// 00567204  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
