// roc 2008-06 00606100  unit: seg_00600000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606100
//
// 00606100  51                   push ecx
// 00606101  8b0d7cb89700         mov ecx, dword ptr [0x97b87c]
// 00606107  a178b89700           mov eax, dword ptr [0x97b878]
// 0060610c  03c1                 add eax, ecx
// 0060610e  33c9                 xor ecx, ecx
// 00606110  890424               mov dword ptr [esp], eax
// 00606113  3bc1                 cmp eax, ecx
// 00606115  7514                 jne 0x60612b
// 00606117  d905b8c38100         fld dword ptr [0x81c3b8]
// 0060611d  890d78b89700         mov dword ptr [0x97b878], ecx
// 00606123  890d7cb89700         mov dword ptr [0x97b87c], ecx
// 00606129  59                   pop ecx
// 0060612a  c3                   ret 
// 0060612b  db0578b89700         fild dword ptr [0x97b878]
// 00606131  890d78b89700         mov dword ptr [0x97b878], ecx
// 00606137  890d7cb89700         mov dword ptr [0x97b87c], ecx
// 0060613d  da3424               fidiv dword ptr [esp]
// 00606140  59                   pop ecx
// 00606141  c3                   ret 
// library rbxgs/roc_contact_counter_open_a53cbed5341d1a27.cpp (function ?percentActive@ContactConnector@RBX@@SAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_contact_counter_open_a53cbed5341d1a27.cpp
