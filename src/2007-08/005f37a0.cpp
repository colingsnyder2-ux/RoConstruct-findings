// roc 2007-08 005f37a0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f37a0
//
// 005f37a0  64a100000000         mov eax, dword ptr fs:[0]
// 005f37a6  6aff                 push -1
// 005f37a8  683eb67500           push 0x75b63e
// 005f37ad  50                   push eax
// 005f37ae  b801000000           mov eax, 1
// 005f37b3  64892500000000       mov dword ptr fs:[0], esp
// 005f37ba  840590788c00         test byte ptr [0x8c7890], al
// 005f37c0  7530                 jne 0x5f37f2
// 005f37c2  090590788c00         or dword ptr [0x8c7890], eax
// 005f37c8  6898058b00           push 0x8b0598
// 005f37cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f37d5  e8b64ee2ff           call 0x418690
// 005f37da  50                   push eax
// 005f37db  b908788c00           mov ecx, 0x8c7808
// 005f37e0  e81bd4f7ff           call 0x570c00
// 005f37e5  6890c57700           push 0x77c590
// 005f37ea  e834d50300           call 0x630d23
// 005f37ef  83c404               add esp, 4
// 005f37f2  8b0c24               mov ecx, dword ptr [esp]
// 005f37f5  b808788c00           mov eax, 0x8c7808
// 005f37fa  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3801  83c40c               add esp, 0xc
// 005f3804  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
