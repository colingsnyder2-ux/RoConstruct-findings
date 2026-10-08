// roc 2007-08 00591150  unit: RBX::VHint::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591150
//
// 00591150  64a100000000         mov eax, dword ptr fs:[0]
// 00591156  6aff                 push -1
// 00591158  68de6c7500           push 0x756cde
// 0059115d  50                   push eax
// 0059115e  b801000000           mov eax, 1
// 00591163  64892500000000       mov dword ptr fs:[0], esp
// 0059116a  8405f0498c00         test byte ptr [0x8c49f0], al
// 00591170  7530                 jne 0x5911a2
// 00591172  0905f0498c00         or dword ptr [0x8c49f0], eax
// 00591178  68945e7b00           push 0x7b5e94
// 0059117d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00591185  e866fbffff           call 0x590cf0
// 0059118a  50                   push eax
// 0059118b  b968498c00           mov ecx, 0x8c4968
// 00591190  e86bfafdff           call 0x570c00
// 00591195  68e0a97700           push 0x77a9e0
// 0059119a  e884fb0900           call 0x630d23
// 0059119f  83c404               add esp, 4
// 005911a2  8b0c24               mov ecx, dword ptr [esp]
// 005911a5  b868498c00           mov eax, 0x8c4968
// 005911aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005911b1  83c40c               add esp, 0xc
// 005911b4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
