// roc 2007-03 00604ba0  unit: seg_00600000  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604ba0
//
// 00604ba0  64a100000000         mov eax, dword ptr fs:[0]
// 00604ba6  6aff                 push -1
// 00604ba8  68f0ca7500           push 0x75caf0
// 00604bad  50                   push eax
// 00604bae  64892500000000       mov dword ptr fs:[0], esp
// 00604bb5  83ec10               sub esp, 0x10
// 00604bb8  56                   push esi
// 00604bb9  8bf1                 mov esi, ecx
// 00604bbb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00604bbe  e8dd44fdff           call 0x5d90a0
// 00604bc3  84c0                 test al, al
// 00604bc5  0f849e000000         je 0x604c69
// 00604bcb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00604bce  8d44240c             lea eax, [esp + 0xc]
// 00604bd2  50                   push eax
// 00604bd3  e8b8fbffff           call 0x604790
// 00604bd8  8d4c2404             lea ecx, [esp + 4]
// 00604bdc  51                   push ecx
// 00604bdd  8bc8                 mov ecx, eax
// 00604bdf  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00604be7  e8c467fcff           call 0x5cb3b0
// 00604bec  8b00                 mov eax, dword ptr [eax]
// 00604bee  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00604bf4  8b5210               mov edx, dword ptr [edx + 0x10]
// 00604bf7  8d8884010000         lea ecx, [eax + 0x184]
// 00604bfd  8b442424             mov eax, dword ptr [esp + 0x24]
// 00604c01  6a00                 push 0
// 00604c03  50                   push eax
// 00604c04  c644242401           mov byte ptr [esp + 0x24], 1
// 00604c09  ffd2                 call edx
// 00604c0b  8b442408             mov eax, dword ptr [esp + 8]
// 00604c0f  85c0                 test eax, eax
// 00604c11  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00604c16  742c                 je 0x604c44
// 00604c18  8bf0                 mov esi, eax
// 00604c1a  83c004               add eax, 4
// 00604c1d  83c9ff               or ecx, 0xffffffff
// 00604c20  f00fc108             lock xadd dword ptr [eax], ecx
// 00604c24  751e                 jne 0x604c44
// 00604c26  8b16                 mov edx, dword ptr [esi]
// 00604c28  8b4204               mov eax, dword ptr [edx + 4]
// 00604c2b  8bce                 mov ecx, esi
// 00604c2d  ffd0                 call eax
// 00604c2f  8d4e08               lea ecx, [esi + 8]
// 00604c32  83caff               or edx, 0xffffffff
// 00604c35  f00fc111             lock xadd dword ptr [ecx], edx
// 00604c39  7509                 jne 0x604c44
// 00604c3b  8b06                 mov eax, dword ptr [esi]
// 00604c3d  8b5008               mov edx, dword ptr [eax + 8]
// 00604c40  8bce                 mov ecx, esi
// 00604c42  ffd2                 call edx
// 00604c44  8b442410             mov eax, dword ptr [esp + 0x10]
// 00604c48  85c0                 test eax, eax
// 00604c4a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00604c52  7415                 je 0x604c69
// 00604c54  8bc8                 mov ecx, eax
// 00604c56  83c008               add eax, 8
// 00604c59  83caff               or edx, 0xffffffff
// 00604c5c  f00fc110             lock xadd dword ptr [eax], edx
// 00604c60  7507                 jne 0x604c69
// 00604c62  8b01                 mov eax, dword ptr [ecx]
// 00604c64  8b5008               mov edx, dword ptr [eax + 8]
// 00604c67  ffd2                 call edx
// 00604c69  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00604c6d  5e                   pop esi
// 00604c6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00604c75  83c41c               add esp, 0x1c
// 00604c78  c20400               ret 4
// library rbxgs/tool\PartDragTool.cpp (function ?render3dAdorn@PartDragTool@RBX@@UAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/PartDragTool.cpp
