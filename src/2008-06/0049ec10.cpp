// roc 2008-06 0049ec10  unit: RBX::VNetworkSettings::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ec10
//
// 0049ec10  64a100000000         mov eax, dword ptr fs:[0]
// 0049ec16  6aff                 push -1
// 0049ec18  68ae767c00           push 0x7c76ae
// 0049ec1d  50                   push eax
// 0049ec1e  b801000000           mov eax, 1
// 0049ec23  64892500000000       mov dword ptr fs:[0], esp
// 0049ec2a  8405b80a9700         test byte ptr [0x970ab8], al
// 0049ec30  7530                 jne 0x49ec62
// 0049ec32  0905b80a9700         or dword ptr [0x970ab8], eax
// 0049ec38  6838ef8200           push 0x82ef38
// 0049ec3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049ec45  e856fdffff           call 0x49e9a0
// 0049ec4a  50                   push eax
// 0049ec4b  b9f8099700           mov ecx, 0x9709f8
// 0049ec50  e89b1c0d00           call 0x5708f0
// 0049ec55  6840ba7f00           push 0x7fba40
// 0049ec5a  e8502b2000           call 0x6a17af
// 0049ec5f  83c404               add esp, 4
// 0049ec62  8b0c24               mov ecx, dword ptr [esp]
// 0049ec65  b8f8099700           mov eax, 0x9709f8
// 0049ec6a  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ec71  83c40c               add esp, 0xc
// 0049ec74  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
