// roc 2007-08 0055ad40  unit: RBX::VTool::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ad40
//
// 0055ad40  64a100000000         mov eax, dword ptr fs:[0]
// 0055ad46  6aff                 push -1
// 0055ad48  682e367500           push 0x75362e
// 0055ad4d  50                   push eax
// 0055ad4e  b801000000           mov eax, 1
// 0055ad53  64892500000000       mov dword ptr fs:[0], esp
// 0055ad5a  8405b81f8c00         test byte ptr [0x8c1fb8], al
// 0055ad60  7530                 jne 0x55ad92
// 0055ad62  0905b81f8c00         or dword ptr [0x8c1fb8], eax
// 0055ad68  6840887a00           push 0x7a8840
// 0055ad6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055ad75  e8c6f1feff           call 0x549f40
// 0055ad7a  50                   push eax
// 0055ad7b  b9301f8c00           mov ecx, 0x8c1f30
// 0055ad80  e87b5e0100           call 0x570c00
// 0055ad85  68709b7700           push 0x779b70
// 0055ad8a  e8945f0d00           call 0x630d23
// 0055ad8f  83c404               add esp, 4
// 0055ad92  8b0c24               mov ecx, dword ptr [esp]
// 0055ad95  b8301f8c00           mov eax, 0x8c1f30
// 0055ad9a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055ada1  83c40c               add esp, 0xc
// 0055ada4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
