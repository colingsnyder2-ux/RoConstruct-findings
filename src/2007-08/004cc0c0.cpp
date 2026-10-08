// roc 2007-08 004cc0c0  unit: CSHA1  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cc0c0
//
// 004cc0c0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 004cc0c5  85c9                 test ecx, ecx
// 004cc0c7  7e3f                 jle 0x4cc108
// 004cc0c9  8b442404             mov eax, dword ptr [esp + 4]
// 004cc0cd  83c002               add eax, 2
// 004cc0d0  56                   push esi
// 004cc0d1  0fb65001             movzx edx, byte ptr [eax + 1]
// 004cc0d5  0fb670ff             movzx esi, byte ptr [eax - 1]
// 004cc0d9  8b149518618900       mov edx, dword ptr [edx*4 + 0x896118]
// 004cc0e0  3314b518598900       xor edx, dword ptr [esi*4 + 0x895918]
// 004cc0e7  0fb630               movzx esi, byte ptr [eax]
// 004cc0ea  3314b5185d8900       xor edx, dword ptr [esi*4 + 0x895d18]
// 004cc0f1  0fb670fe             movzx esi, byte ptr [eax - 2]
// 004cc0f5  3314b518558900       xor edx, dword ptr [esi*4 + 0x895518]
// 004cc0fc  83c004               add eax, 4
// 004cc0ff  83e901               sub ecx, 1
// 004cc102  8950fa               mov dword ptr [eax - 6], edx
// 004cc105  75ca                 jne 0x4cc0d1
// 004cc107  5e                   pop esi
// 004cc108  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
