// roc 2007-03 00549bf0  unit: seg_00540000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00549bf0
//
// 00549bf0  64a100000000         mov eax, dword ptr fs:[0]
// 00549bf6  6aff                 push -1
// 00549bf8  688e2f7500           push 0x752f8e
// 00549bfd  50                   push eax
// 00549bfe  b801000000           mov eax, 1
// 00549c03  64892500000000       mov dword ptr fs:[0], esp
// 00549c0a  8405a8be8b00         test byte ptr [0x8bbea8], al
// 00549c10  7530                 jne 0x549c42
// 00549c12  0905a8be8b00         or dword ptr [0x8bbea8], eax
// 00549c18  6890717a00           push 0x7a7190
// 00549c1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00549c25  e856fdffff           call 0x549980
// 00549c2a  50                   push eax
// 00549c2b  b920be8b00           mov ecx, 0x8bbe20
// 00549c30  e8ab710200           call 0x570de0
// 00549c35  6850997700           push 0x779950
// 00549c3a  e874550d00           call 0x61f1b3
// 00549c3f  83c404               add esp, 4
// 00549c42  8b0c24               mov ecx, dword ptr [esp]
// 00549c45  b820be8b00           mov eax, 0x8bbe20
// 00549c4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00549c51  83c40c               add esp, 0xc
// 00549c54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
