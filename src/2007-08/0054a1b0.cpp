// roc 2007-08 0054a1b0  unit: RBX::VServiceProvider::?$Notifier  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054a1b0
//
// 0054a1b0  64a100000000         mov eax, dword ptr fs:[0]
// 0054a1b6  6aff                 push -1
// 0054a1b8  68ce217500           push 0x7521ce
// 0054a1bd  50                   push eax
// 0054a1be  b801000000           mov eax, 1
// 0054a1c3  64892500000000       mov dword ptr fs:[0], esp
// 0054a1ca  8405301c8c00         test byte ptr [0x8c1c30], al
// 0054a1d0  7530                 jne 0x54a202
// 0054a1d2  0905301c8c00         or dword ptr [0x8c1c30], eax
// 0054a1d8  68c8707a00           push 0x7a70c8
// 0054a1dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054a1e5  e856fdffff           call 0x549f40
// 0054a1ea  50                   push eax
// 0054a1eb  b9a81b8c00           mov ecx, 0x8c1ba8
// 0054a1f0  e80b6a0200           call 0x570c00
// 0054a1f5  68609a7700           push 0x779a60
// 0054a1fa  e8246b0e00           call 0x630d23
// 0054a1ff  83c404               add esp, 4
// 0054a202  8b0c24               mov ecx, dword ptr [esp]
// 0054a205  b8a81b8c00           mov eax, 0x8c1ba8
// 0054a20a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a211  83c40c               add esp, 0xc
// 0054a214  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
