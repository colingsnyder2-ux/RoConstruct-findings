// roc 2007-03 004c0c60  unit: seg_004c0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0c60
//
// 004c0c60  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 004c0c65  85c9                 test ecx, ecx
// 004c0c67  7e3f                 jle 0x4c0ca8
// 004c0c69  8b442404             mov eax, dword ptr [esp + 4]
// 004c0c6d  83c002               add eax, 2
// 004c0c70  56                   push esi
// 004c0c71  0fb65001             movzx edx, byte ptr [eax + 1]
// 004c0c75  0fb670ff             movzx esi, byte ptr [eax - 1]
// 004c0c79  8b149588468900       mov edx, dword ptr [edx*4 + 0x894688]
// 004c0c80  3314b5883e8900       xor edx, dword ptr [esi*4 + 0x893e88]
// 004c0c87  0fb630               movzx esi, byte ptr [eax]
// 004c0c8a  3314b588428900       xor edx, dword ptr [esi*4 + 0x894288]
// 004c0c91  0fb670fe             movzx esi, byte ptr [eax - 2]
// 004c0c95  3314b5883a8900       xor edx, dword ptr [esi*4 + 0x893a88]
// 004c0c9c  83c004               add eax, 4
// 004c0c9f  83e901               sub ecx, 1
// 004c0ca2  8950fa               mov dword ptr [eax - 6], edx
// 004c0ca5  75ca                 jne 0x4c0c71
// 004c0ca7  5e                   pop esi
// 004c0ca8  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
