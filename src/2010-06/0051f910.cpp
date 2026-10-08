// roc 2010-06 0051f910  unit: CSHA1  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051f910
//
// 0051f910  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 0051f915  85c9                 test ecx, ecx
// 0051f917  7e3f                 jle 0x51f958
// 0051f919  8b442404             mov eax, dword ptr [esp + 4]
// 0051f91d  83c002               add eax, 2
// 0051f920  56                   push esi
// 0051f921  0fb65001             movzx edx, byte ptr [eax + 1]
// 0051f925  0fb670ff             movzx esi, byte ptr [eax - 1]
// 0051f929  8b1495c087b900       mov edx, dword ptr [edx*4 + 0xb987c0]
// 0051f930  3314b5c07fb900       xor edx, dword ptr [esi*4 + 0xb97fc0]
// 0051f937  0fb630               movzx esi, byte ptr [eax]
// 0051f93a  3314b5c083b900       xor edx, dword ptr [esi*4 + 0xb983c0]
// 0051f941  0fb670fe             movzx esi, byte ptr [eax - 2]
// 0051f945  3314b5c07bb900       xor edx, dword ptr [esi*4 + 0xb97bc0]
// 0051f94c  83c004               add eax, 4
// 0051f94f  83e901               sub ecx, 1
// 0051f952  8950fa               mov dword ptr [eax - 6], edx
// 0051f955  75ca                 jne 0x51f921
// 0051f957  5e                   pop esi
// 0051f958  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
