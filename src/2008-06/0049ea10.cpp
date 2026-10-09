// roc 2008-06 0049ea10  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ea10
//
// 0049ea10  64a100000000         mov eax, dword ptr fs:[0]
// 0049ea16  6aff                 push -1
// 0049ea18  684e767c00           push 0x7c764e
// 0049ea1d  50                   push eax
// 0049ea1e  b801000000           mov eax, 1
// 0049ea23  64892500000000       mov dword ptr fs:[0], esp
// 0049ea2a  840560089700         test byte ptr [0x970860], al
// 0049ea30  7530                 jne 0x49ea62
// 0049ea32  090560089700         or dword ptr [0x970860], eax
// 0049ea38  68d8448200           push 0x8244d8
// 0049ea3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049ea45  e836c3f6ff           call 0x40ad80
// 0049ea4a  50                   push eax
// 0049ea4b  b9a0079700           mov ecx, 0x9707a0
// 0049ea50  e89b1e0d00           call 0x5708f0
// 0049ea55  6870ba7f00           push 0x7fba70
// 0049ea5a  e8502d2000           call 0x6a17af
// 0049ea5f  83c404               add esp, 4
// 0049ea62  8b0c24               mov ecx, dword ptr [esp]
// 0049ea65  b8a0079700           mov eax, 0x9707a0
// 0049ea6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ea71  83c40c               add esp, 0xc
// 0049ea74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
