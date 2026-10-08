// roc 2011-06 0053a0e0  unit: CSHA1  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053a0e0
//
// 0053a0e0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0053a0e5  85c9                 test ecx, ecx
// 0053a0e7  7e3f                 jle 0x53a128
// 0053a0e9  8b442404             mov eax, dword ptr [esp + 4]
// 0053a0ed  83c002               add eax, 2
// 0053a0f0  56                   push esi
// 0053a0f1  0fb65001             movzx edx, byte ptr [eax + 1]
// 0053a0f5  0fb670ff             movzx esi, byte ptr [eax - 1]
// 0053a0f9  8b1495b02cc300       mov edx, dword ptr [edx*4 + 0xc32cb0]
// 0053a100  3314b5b024c300       xor edx, dword ptr [esi*4 + 0xc324b0]
// 0053a107  0fb630               movzx esi, byte ptr [eax]
// 0053a10a  3314b5b028c300       xor edx, dword ptr [esi*4 + 0xc328b0]
// 0053a111  0fb670fe             movzx esi, byte ptr [eax - 2]
// 0053a115  3314b5b020c300       xor edx, dword ptr [esi*4 + 0xc320b0]
// 0053a11c  83c004               add eax, 4
// 0053a11f  83e901               sub ecx, 1
// 0053a122  8950fa               mov dword ptr [eax - 6], edx
// 0053a125  75ca                 jne 0x53a0f1
// 0053a127  5e                   pop esi
// 0053a128  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
