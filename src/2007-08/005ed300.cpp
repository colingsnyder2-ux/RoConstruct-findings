// roc 2007-08 005ed300  unit: RBX::VRocket::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed300
//
// 005ed300  64a100000000         mov eax, dword ptr fs:[0]
// 005ed306  6aff                 push -1
// 005ed308  68deb17500           push 0x75b1de
// 005ed30d  50                   push eax
// 005ed30e  b801000000           mov eax, 1
// 005ed313  64892500000000       mov dword ptr fs:[0], esp
// 005ed31a  840598708c00         test byte ptr [0x8c7098], al
// 005ed320  7530                 jne 0x5ed352
// 005ed322  090598708c00         or dword ptr [0x8c7098], eax
// 005ed328  68c8f38a00           push 0x8af3c8
// 005ed32d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ed335  e856b3e2ff           call 0x418690
// 005ed33a  50                   push eax
// 005ed33b  b910708c00           mov ecx, 0x8c7010
// 005ed340  e8bb38f8ff           call 0x570c00
// 005ed345  6810c37700           push 0x77c310
// 005ed34a  e8d4390400           call 0x630d23
// 005ed34f  83c404               add esp, 4
// 005ed352  8b0c24               mov ecx, dword ptr [esp]
// 005ed355  b810708c00           mov eax, 0x8c7010
// 005ed35a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed361  83c40c               add esp, 0xc
// 005ed364  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
