// roc 2008-06 005c0710  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0710
//
// 005c0710  64a100000000         mov eax, dword ptr fs:[0]
// 005c0716  6aff                 push -1
// 005c0718  688e447d00           push 0x7d448e
// 005c071d  50                   push eax
// 005c071e  b801000000           mov eax, 1
// 005c0723  64892500000000       mov dword ptr fs:[0], esp
// 005c072a  8405b0849700         test byte ptr [0x9784b0], al
// 005c0730  7530                 jne 0x5c0762
// 005c0732  0905b0849700         or dword ptr [0x9784b0], eax
// 005c0738  6854369500           push 0x953654
// 005c073d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c0745  e836a6e4ff           call 0x40ad80
// 005c074a  50                   push eax
// 005c074b  b9f0839700           mov ecx, 0x9783f0
// 005c0750  e89b01fbff           call 0x5708f0
// 005c0755  68b0e67f00           push 0x7fe6b0
// 005c075a  e850100e00           call 0x6a17af
// 005c075f  83c404               add esp, 4
// 005c0762  8b0c24               mov ecx, dword ptr [esp]
// 005c0765  b8f0839700           mov eax, 0x9783f0
// 005c076a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0771  83c40c               add esp, 0xc
// 005c0774  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
