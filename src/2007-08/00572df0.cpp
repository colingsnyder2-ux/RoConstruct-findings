// roc 2007-08 00572df0  unit: RBX::VTexture::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572df0
//
// 00572df0  64a100000000         mov eax, dword ptr fs:[0]
// 00572df6  6aff                 push -1
// 00572df8  68ae517500           push 0x7551ae
// 00572dfd  50                   push eax
// 00572dfe  b801000000           mov eax, 1
// 00572e03  64892500000000       mov dword ptr fs:[0], esp
// 00572e0a  840500278c00         test byte ptr [0x8c2700], al
// 00572e10  7530                 jne 0x572e42
// 00572e12  090500278c00         or dword ptr [0x8c2700], eax
// 00572e18  689cfe8900           push 0x89fe9c
// 00572e1d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00572e25  e856ffffff           call 0x572d80
// 00572e2a  50                   push eax
// 00572e2b  b978268c00           mov ecx, 0x8c2678
// 00572e30  e8cbddffff           call 0x570c00
// 00572e35  6840a07700           push 0x77a040
// 00572e3a  e8e4de0b00           call 0x630d23
// 00572e3f  83c404               add esp, 4
// 00572e42  8b0c24               mov ecx, dword ptr [esp]
// 00572e45  b878268c00           mov eax, 0x8c2678
// 00572e4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00572e51  83c40c               add esp, 0xc
// 00572e54  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
