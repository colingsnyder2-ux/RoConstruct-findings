// roc 2007-08 00569000  unit: RBX::RootInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569000
//
// 00569000  64a100000000         mov eax, dword ptr fs:[0]
// 00569006  6aff                 push -1
// 00569008  688e447500           push 0x75448e
// 0056900d  50                   push eax
// 0056900e  b801000000           mov eax, 1
// 00569013  64892500000000       mov dword ptr fs:[0], esp
// 0056901a  8405c8238c00         test byte ptr [0x8c23c8], al
// 00569020  7530                 jne 0x569052
// 00569022  0905c8238c00         or dword ptr [0x8c23c8], eax
// 00569028  6894f58900           push 0x89f594
// 0056902d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00569035  e86686fcff           call 0x5316a0
// 0056903a  50                   push eax
// 0056903b  b940238c00           mov ecx, 0x8c2340
// 00569040  e8bb7b0000           call 0x570c00
// 00569045  68c09d7700           push 0x779dc0
// 0056904a  e8d47c0c00           call 0x630d23
// 0056904f  83c404               add esp, 4
// 00569052  8b0c24               mov ecx, dword ptr [esp]
// 00569055  b840238c00           mov eax, 0x8c2340
// 0056905a  64890d00000000       mov dword ptr fs:[0], ecx
// 00569061  83c40c               add esp, 0xc
// 00569064  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
