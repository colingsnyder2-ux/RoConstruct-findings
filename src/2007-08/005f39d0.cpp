// roc 2007-08 005f39d0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f39d0
//
// 005f39d0  64a100000000         mov eax, dword ptr fs:[0]
// 005f39d6  6aff                 push -1
// 005f39d8  68deb67500           push 0x75b6de
// 005f39dd  50                   push eax
// 005f39de  b801000000           mov eax, 1
// 005f39e3  64892500000000       mov dword ptr fs:[0], esp
// 005f39ea  8405607b8c00         test byte ptr [0x8c7b60], al
// 005f39f0  7530                 jne 0x5f3a22
// 005f39f2  0905607b8c00         or dword ptr [0x8c7b60], eax
// 005f39f8  68d8058b00           push 0x8b05d8
// 005f39fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f3a05  e8864ce2ff           call 0x418690
// 005f3a0a  50                   push eax
// 005f3a0b  b9d87a8c00           mov ecx, 0x8c7ad8
// 005f3a10  e8ebd1f7ff           call 0x570c00
// 005f3a15  6840c57700           push 0x77c540
// 005f3a1a  e804d30300           call 0x630d23
// 005f3a1f  83c404               add esp, 4
// 005f3a22  8b0c24               mov ecx, dword ptr [esp]
// 005f3a25  b8d87a8c00           mov eax, 0x8c7ad8
// 005f3a2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3a31  83c40c               add esp, 0xc
// 005f3a34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
