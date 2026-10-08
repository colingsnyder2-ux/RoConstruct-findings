// roc 2012-06 005c94e0  unit: RBX::AdornRbxGfx  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c94e0
//
// 005c94e0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 005c94e5  85c9                 test ecx, ecx
// 005c94e7  7e3f                 jle 0x5c9528
// 005c94e9  8b442404             mov eax, dword ptr [esp + 4]
// 005c94ed  83c002               add eax, 2
// 005c94f0  56                   push esi
// 005c94f1  0fb65001             movzx edx, byte ptr [eax + 1]
// 005c94f5  0fb670ff             movzx esi, byte ptr [eax - 1]
// 005c94f9  8b1495b847d900       mov edx, dword ptr [edx*4 + 0xd947b8]
// 005c9500  3314b5b83fd900       xor edx, dword ptr [esi*4 + 0xd93fb8]
// 005c9507  0fb630               movzx esi, byte ptr [eax]
// 005c950a  3314b5b843d900       xor edx, dword ptr [esi*4 + 0xd943b8]
// 005c9511  0fb670fe             movzx esi, byte ptr [eax - 2]
// 005c9515  3314b5b83bd900       xor edx, dword ptr [esi*4 + 0xd93bb8]
// 005c951c  83c004               add eax, 4
// 005c951f  83e901               sub ecx, 1
// 005c9522  8950fa               mov dword ptr [eax - 6], edx
// 005c9525  75ca                 jne 0x5c94f1
// 005c9527  5e                   pop esi
// 005c9528  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
