// roc 2008-06 005d6000  unit: RBX::VTeams::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6000
//
// 005d6000  64a100000000         mov eax, dword ptr fs:[0]
// 005d6006  6aff                 push -1
// 005d6008  689e5b7d00           push 0x7d5b9e
// 005d600d  50                   push eax
// 005d600e  b801000000           mov eax, 1
// 005d6013  64892500000000       mov dword ptr fs:[0], esp
// 005d601a  8405b8a19700         test byte ptr [0x97a1b8], al
// 005d6020  7530                 jne 0x5d6052
// 005d6022  0905b8a19700         or dword ptr [0x97a1b8], eax
// 005d6028  6808cd8300           push 0x83cd08
// 005d602d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d6035  e8464de3ff           call 0x40ad80
// 005d603a  50                   push eax
// 005d603b  b9f8a09700           mov ecx, 0x97a0f8
// 005d6040  e8aba8f9ff           call 0x5708f0
// 005d6045  6810f27f00           push 0x7ff210
// 005d604a  e860b70c00           call 0x6a17af
// 005d604f  83c404               add esp, 4
// 005d6052  8b0c24               mov ecx, dword ptr [esp]
// 005d6055  b8f8a09700           mov eax, 0x97a0f8
// 005d605a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6061  83c40c               add esp, 0xc
// 005d6064  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
