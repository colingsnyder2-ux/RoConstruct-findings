// roc 2007-08 005a08c0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a08c0
//
// 005a08c0  64a100000000         mov eax, dword ptr fs:[0]
// 005a08c6  6aff                 push -1
// 005a08c8  68fe7c7500           push 0x757cfe
// 005a08cd  50                   push eax
// 005a08ce  b801000000           mov eax, 1
// 005a08d3  64892500000000       mov dword ptr fs:[0], esp
// 005a08da  840590538c00         test byte ptr [0x8c5390], al
// 005a08e0  7530                 jne 0x5a0912
// 005a08e2  090590538c00         or dword ptr [0x8c5390], eax
// 005a08e8  6800758a00           push 0x8a7500
// 005a08ed  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a08f5  e80668fdff           call 0x577100
// 005a08fa  50                   push eax
// 005a08fb  b908538c00           mov ecx, 0x8c5308
// 005a0900  e8fb02fdff           call 0x570c00
// 005a0905  6850b17700           push 0x77b150
// 005a090a  e814040900           call 0x630d23
// 005a090f  83c404               add esp, 4
// 005a0912  8b0c24               mov ecx, dword ptr [esp]
// 005a0915  b808538c00           mov eax, 0x8c5308
// 005a091a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0921  83c40c               add esp, 0xc
// 005a0924  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
