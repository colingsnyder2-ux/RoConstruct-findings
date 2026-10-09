// roc 2007-03 005a09d0  unit: seg_005a0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a09d0
//
// 005a09d0  64a100000000         mov eax, dword ptr fs:[0]
// 005a09d6  6aff                 push -1
// 005a09d8  683e8e7500           push 0x758e3e
// 005a09dd  50                   push eax
// 005a09de  b801000000           mov eax, 1
// 005a09e3  64892500000000       mov dword ptr fs:[0], esp
// 005a09ea  840588ed8b00         test byte ptr [0x8bed88], al
// 005a09f0  7530                 jne 0x5a0a22
// 005a09f2  090588ed8b00         or dword ptr [0x8bed88], eax
// 005a09f8  6828458a00           push 0x8a4528
// 005a09fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a0a05  e8f64efdff           call 0x575900
// 005a0a0a  50                   push eax
// 005a0a0b  b900ed8b00           mov ecx, 0x8bed00
// 005a0a10  e8cb03fdff           call 0x570de0
// 005a0a15  68d0ab7700           push 0x77abd0
// 005a0a1a  e894e70700           call 0x61f1b3
// 005a0a1f  83c404               add esp, 4
// 005a0a22  8b0c24               mov ecx, dword ptr [esp]
// 005a0a25  b800ed8b00           mov eax, 0x8bed00
// 005a0a2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0a31  83c40c               add esp, 0xc
// 005a0a34  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
