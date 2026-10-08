// roc 2007-08 005a1fb0  unit: RBX::VSkin::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1fb0
//
// 005a1fb0  64a100000000         mov eax, dword ptr fs:[0]
// 005a1fb6  6aff                 push -1
// 005a1fb8  683e7e7500           push 0x757e3e
// 005a1fbd  50                   push eax
// 005a1fbe  b801000000           mov eax, 1
// 005a1fc3  64892500000000       mov dword ptr fs:[0], esp
// 005a1fca  840578548c00         test byte ptr [0x8c5478], al
// 005a1fd0  7530                 jne 0x5a2002
// 005a1fd2  090578548c00         or dword ptr [0x8c5478], eax
// 005a1fd8  68c83d7b00           push 0x7b3dc8
// 005a1fdd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a1fe5  e8b6bffeff           call 0x58dfa0
// 005a1fea  50                   push eax
// 005a1feb  b9f0538c00           mov ecx, 0x8c53f0
// 005a1ff0  e80becfcff           call 0x570c00
// 005a1ff5  68d0b27700           push 0x77b2d0
// 005a1ffa  e824ed0800           call 0x630d23
// 005a1fff  83c404               add esp, 4
// 005a2002  8b0c24               mov ecx, dword ptr [esp]
// 005a2005  b8f0538c00           mov eax, 0x8c53f0
// 005a200a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a2011  83c40c               add esp, 0xc
// 005a2014  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
