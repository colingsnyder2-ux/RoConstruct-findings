// roc 2007-08 00549f40  unit: RBX::VServiceProvider::?$Notifier  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549f40
//
// 00549f40  64a100000000         mov eax, dword ptr fs:[0]
// 00549f46  6aff                 push -1
// 00549f48  686e217500           push 0x75216e
// 00549f4d  50                   push eax
// 00549f4e  b801000000           mov eax, 1
// 00549f53  64892500000000       mov dword ptr fs:[0], esp
// 00549f5a  8405a01b8c00         test byte ptr [0x8c1ba0], al
// 00549f60  7530                 jne 0x549f92
// 00549f62  0905a01b8c00         or dword ptr [0x8c1ba0], eax
// 00549f68  68e0827a00           push 0x7a82e0
// 00549f6d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00549f75  e816e7ecff           call 0x418690
// 00549f7a  50                   push eax
// 00549f7b  b9181b8c00           mov ecx, 0x8c1b18
// 00549f80  e87b6c0200           call 0x570c00
// 00549f85  68709a7700           push 0x779a70
// 00549f8a  e8946d0e00           call 0x630d23
// 00549f8f  83c404               add esp, 4
// 00549f92  8b0c24               mov ecx, dword ptr [esp]
// 00549f95  b8181b8c00           mov eax, 0x8c1b18
// 00549f9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00549fa1  83c40c               add esp, 0xc
// 00549fa4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
