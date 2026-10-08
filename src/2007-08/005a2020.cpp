// roc 2007-08 005a2020  unit: RBX::VSkin::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2020
//
// 005a2020  64a100000000         mov eax, dword ptr fs:[0]
// 005a2026  6aff                 push -1
// 005a2028  685e7e7500           push 0x757e5e
// 005a202d  50                   push eax
// 005a202e  b801000000           mov eax, 1
// 005a2033  64892500000000       mov dword ptr fs:[0], esp
// 005a203a  840508558c00         test byte ptr [0x8c5508], al
// 005a2040  7530                 jne 0x5a2072
// 005a2042  090508558c00         or dword ptr [0x8c5508], eax
// 005a2048  68e03d7b00           push 0x7b3de0
// 005a204d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a2055  e83666e7ff           call 0x418690
// 005a205a  50                   push eax
// 005a205b  b980548c00           mov ecx, 0x8c5480
// 005a2060  e89bebfcff           call 0x570c00
// 005a2065  68c0b27700           push 0x77b2c0
// 005a206a  e8b4ec0800           call 0x630d23
// 005a206f  83c404               add esp, 4
// 005a2072  8b0c24               mov ecx, dword ptr [esp]
// 005a2075  b880548c00           mov eax, 0x8c5480
// 005a207a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a2081  83c40c               add esp, 0xc
// 005a2084  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
