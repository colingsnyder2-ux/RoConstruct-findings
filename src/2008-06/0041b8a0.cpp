// roc 2008-06 0041b8a0  unit: VDHTMLWindow::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b8a0
//
// 0041b8a0  64a100000000         mov eax, dword ptr fs:[0]
// 0041b8a6  6aff                 push -1
// 0041b8a8  689ee07b00           push 0x7be09e
// 0041b8ad  50                   push eax
// 0041b8ae  b801000000           mov eax, 1
// 0041b8b3  64892500000000       mov dword ptr fs:[0], esp
// 0041b8ba  8405c0cf9600         test byte ptr [0x96cfc0], al
// 0041b8c0  7530                 jne 0x41b8f2
// 0041b8c2  0905c0cf9600         or dword ptr [0x96cfc0], eax
// 0041b8c8  6804c29200           push 0x92c204
// 0041b8cd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041b8d5  e8a6f4feff           call 0x40ad80
// 0041b8da  50                   push eax
// 0041b8db  b900cf9600           mov ecx, 0x96cf00
// 0041b8e0  e80b501500           call 0x5708f0
// 0041b8e5  6820a67f00           push 0x7fa620
// 0041b8ea  e8c05e2800           call 0x6a17af
// 0041b8ef  83c404               add esp, 4
// 0041b8f2  8b0c24               mov ecx, dword ptr [esp]
// 0041b8f5  b800cf9600           mov eax, 0x96cf00
// 0041b8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b901  83c40c               add esp, 0xc
// 0041b904  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
