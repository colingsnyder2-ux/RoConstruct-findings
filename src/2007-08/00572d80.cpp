// roc 2007-08 00572d80  unit: RBX::VTexture::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572d80
//
// 00572d80  64a100000000         mov eax, dword ptr fs:[0]
// 00572d86  6aff                 push -1
// 00572d88  688e517500           push 0x75518e
// 00572d8d  50                   push eax
// 00572d8e  b801000000           mov eax, 1
// 00572d93  64892500000000       mov dword ptr fs:[0], esp
// 00572d9a  840570268c00         test byte ptr [0x8c2670], al
// 00572da0  7530                 jne 0x572dd2
// 00572da2  090570268c00         or dword ptr [0x8c2670], eax
// 00572da8  6894fe8900           push 0x89fe94
// 00572dad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00572db5  e856ffffff           call 0x572d10
// 00572dba  50                   push eax
// 00572dbb  b9e8258c00           mov ecx, 0x8c25e8
// 00572dc0  e83bdeffff           call 0x570c00
// 00572dc5  6850a07700           push 0x77a050
// 00572dca  e854df0b00           call 0x630d23
// 00572dcf  83c404               add esp, 4
// 00572dd2  8b0c24               mov ecx, dword ptr [esp]
// 00572dd5  b8e8258c00           mov eax, 0x8c25e8
// 00572dda  64890d00000000       mov dword ptr fs:[0], ecx
// 00572de1  83c40c               add esp, 0xc
// 00572de4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
