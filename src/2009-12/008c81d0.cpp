// roc 2009-12 008c81d0  unit: VCEdit::?$CXTMaskEditT  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c81d0
//
// 008c81d0  51                   push ecx
// 008c81d1  56                   push esi
// 008c81d2  8bf1                 mov esi, ecx
// 008c81d4  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c81d8  741f                 je 0x8c81f9
// 008c81da  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c81de  7419                 je 0x8c81f9
// 008c81e0  e88de20500           call 0x926472
// 008c81e5  a900080000           test eax, 0x800
// 008c81ea  750d                 jne 0x8c81f9
// 008c81ec  8d4e70               lea ecx, [esi + 0x70]
// 008c81ef  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c81f5  84c0                 test al, al
// 008c81f7  7418                 je 0x8c8211
// 008c81f9  8b06                 mov eax, dword ptr [esi]
// 008c81fb  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008c8201  6a00                 push 0
// 008c8203  6a00                 push 0
// 008c8205  6801030000           push 0x301
// 008c820a  8bce                 mov ecx, esi
// 008c820c  ffd2                 call edx
// 008c820e  5e                   pop esi
// 008c820f  59                   pop ecx
// 008c8210  c3                   ret 
// 008c8211  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c8214  85c0                 test eax, eax
// 008c8216  7449                 je 0x8c8261
// 008c8218  53                   push ebx
// 008c8219  57                   push edi
// 008c821a  8d7e58               lea edi, [esi + 0x58]
// 008c821d  57                   push edi
// 008c821e  8d5e54               lea ebx, [esi + 0x54]
// 008c8221  53                   push ebx
// 008c8222  68b0000000           push 0xb0
// 008c8227  50                   push eax
// 008c8228  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c822e  8d8680000000         lea eax, [esi + 0x80]
// 008c8234  50                   push eax
// 008c8235  8bce                 mov ecx, esi
// 008c8237  e80cbcf2ff           call 0x7f3e48
// 008c823c  8bce                 mov ecx, esi
// 008c823e  e83de8ffff           call 0x8c6a80
// 008c8243  6a01                 push 1
// 008c8245  53                   push ebx
// 008c8246  8bce                 mov ecx, esi
// 008c8248  e8b3fbffff           call 0x8c7e00
// 008c824d  6a01                 push 1
// 008c824f  57                   push edi
// 008c8250  8bce                 mov ecx, esi
// 008c8252  e8a9fbffff           call 0x8c7e00
// 008c8257  8b1b                 mov ebx, dword ptr [ebx]
// 008c8259  391f                 cmp dword ptr [edi], ebx
// 008c825b  7d02                 jge 0x8c825f
// 008c825d  891f                 mov dword ptr [edi], ebx
// 008c825f  5f                   pop edi
// 008c8260  5b                   pop ebx
// 008c8261  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c8264  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c8267  51                   push ecx
// 008c8268  52                   push edx
// 008c8269  8d44240c             lea eax, [esp + 0xc]
// 008c826d  50                   push eax
// 008c826e  8bce                 mov ecx, esi
// 008c8270  e8abfaffff           call 0x8c7d20
// 008c8275  8d4c2404             lea ecx, [esp + 4]
// 008c8279  51                   push ecx
// 008c827a  8bce                 mov ecx, esi
// 008c827c  e8aff4ffff           call 0x8c7730
// 008c8281  8d4c2404             lea ecx, [esp + 4]
// 008c8285  ff15c0de9800         call dword ptr [0x98dec0]
// 008c828b  b801000000           mov eax, 1
// 008c8290  5e                   pop esi
// 008c8291  59                   pop ecx
// 008c8292  c3                   ret 
// copied from an identical function in another client (function ?MaskCopy@?$CXTMaskEditT@VCEdit@@@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp