// roc 2009-06 005122d0  unit: CSHA1  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005122d0
//
// 005122d0  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 005122d5  85c9                 test ecx, ecx
// 005122d7  7e3f                 jle 0x512318
// 005122d9  8b442404             mov eax, dword ptr [esp + 4]
// 005122dd  83c002               add eax, 2
// 005122e0  56                   push esi
// 005122e1  0fb65001             movzx edx, byte ptr [eax + 1]
// 005122e5  0fb670ff             movzx esi, byte ptr [eax - 1]
// 005122e9  8b149560979f00       mov edx, dword ptr [edx*4 + 0x9f9760]
// 005122f0  3314b5608f9f00       xor edx, dword ptr [esi*4 + 0x9f8f60]
// 005122f7  0fb630               movzx esi, byte ptr [eax]
// 005122fa  3314b560939f00       xor edx, dword ptr [esi*4 + 0x9f9360]
// 00512301  0fb670fe             movzx esi, byte ptr [eax - 2]
// 00512305  3314b5608b9f00       xor edx, dword ptr [esi*4 + 0x9f8b60]
// 0051230c  83c004               add eax, 4
// 0051230f  83e901               sub ecx, 1
// 00512312  8950fa               mov dword ptr [eax - 6], edx
// 00512315  75ca                 jne 0x5122e1
// 00512317  5e                   pop esi
// 00512318  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?InvMixColumn@@YAXQAY03EE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
