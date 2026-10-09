// roc 2009-12 00571020  unit: CSHA1  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00571020
//
// 00571020  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 00571025  85c9                 test ecx, ecx
// 00571027  7e3f                 jle 0x571068
// 00571029  8b442404             mov eax, dword ptr [esp + 4]
// 0057102d  83c002               add eax, 2
// 00571030  56                   push esi
// 00571031  0fb65001             movzx edx, byte ptr [eax + 1]
// 00571035  0fb670ff             movzx esi, byte ptr [eax - 1]
// 00571039  8b1495583ab200       mov edx, dword ptr [edx*4 + 0xb23a58]
// 00571040  3314b55832b200       xor edx, dword ptr [esi*4 + 0xb23258]
// 00571047  0fb630               movzx esi, byte ptr [eax]
// 0057104a  3314b55836b200       xor edx, dword ptr [esi*4 + 0xb23658]
// 00571051  0fb670fe             movzx esi, byte ptr [eax - 2]
// 00571055  3314b5582eb200       xor edx, dword ptr [esi*4 + 0xb22e58]
// 0057105c  83c004               add eax, 4
// 0057105f  83e901               sub ecx, 1
// 00571062  8950fa               mov dword ptr [eax - 6], edx
// 00571065  75ca                 jne 0x571031
// 00571067  5e                   pop esi
// 00571068  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
