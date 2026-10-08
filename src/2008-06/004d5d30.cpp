// roc 2008-06 004d5d30  unit: CSHA1  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d5d30
//
// 004d5d30  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 004d5d35  85c9                 test ecx, ecx
// 004d5d37  7e3f                 jle 0x4d5d78
// 004d5d39  8b442404             mov eax, dword ptr [esp + 4]
// 004d5d3d  83c002               add eax, 2
// 004d5d40  56                   push esi
// 004d5d41  0fb65001             movzx edx, byte ptr [eax + 1]
// 004d5d45  0fb670ff             movzx esi, byte ptr [eax - 1]
// 004d5d49  8b1495c8019400       mov edx, dword ptr [edx*4 + 0x9401c8]
// 004d5d50  3314b5c8f99300       xor edx, dword ptr [esi*4 + 0x93f9c8]
// 004d5d57  0fb630               movzx esi, byte ptr [eax]
// 004d5d5a  3314b5c8fd9300       xor edx, dword ptr [esi*4 + 0x93fdc8]
// 004d5d61  0fb670fe             movzx esi, byte ptr [eax - 2]
// 004d5d65  3314b5c8f59300       xor edx, dword ptr [esi*4 + 0x93f5c8]
// 004d5d6c  83c004               add eax, 4
// 004d5d6f  83e901               sub ecx, 1
// 004d5d72  8950fa               mov dword ptr [eax - 6], edx
// 004d5d75  75ca                 jne 0x4d5d41
// 004d5d77  5e                   pop esi
// 004d5d78  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
