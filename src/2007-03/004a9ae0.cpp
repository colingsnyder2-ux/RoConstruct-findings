// roc 2007-03 004a9ae0  unit: seg_004a0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a9ae0
//
// 004a9ae0  56                   push esi
// 004a9ae1  8bf1                 mov esi, ecx
// 004a9ae3  8b06                 mov eax, dword ptr [esi]
// 004a9ae5  50                   push eax
// 004a9ae6  ff153cf07700         call dword ptr [0x77f03c]
// 004a9aec  ba78918b00           mov edx, 0x8b9178
// 004a9af1  8a08                 mov cl, byte ptr [eax]
// 004a9af3  880a                 mov byte ptr [edx], cl
// 004a9af5  83c001               add eax, 1
// 004a9af8  83c201               add edx, 1
// 004a9afb  84c9                 test cl, cl
// 004a9afd  75f2                 jne 0x4a9af1
// 004a9aff  384c2408             cmp byte ptr [esp + 8], cl
// 004a9b03  744c                 je 0x4a9b51
// 004a9b05  57                   push edi
// 004a9b06  bf78918b00           mov edi, 0x8b9178
// 004a9b0b  83c7ff               add edi, -1
// 004a9b0e  8bff                 mov edi, edi
// 004a9b10  8a4701               mov al, byte ptr [edi + 1]
// 004a9b13  83c701               add edi, 1
// 004a9b16  84c0                 test al, al
// 004a9b18  75f6                 jne 0x4a9b10
// 004a9b1a  66a1709d7900         mov ax, word ptr [0x799d70]
// 004a9b20  668907               mov word ptr [edi], ax
// 004a9b23  b878918b00           mov eax, 0x8b9178
// 004a9b28  8d5001               lea edx, [eax + 1]
// 004a9b2b  5f                   pop edi
// 004a9b2c  8d642400             lea esp, [esp]
// 004a9b30  8a08                 mov cl, byte ptr [eax]
// 004a9b32  83c001               add eax, 1
// 004a9b35  84c9                 test cl, cl
// 004a9b37  75f7                 jne 0x4a9b30
// 004a9b39  2bc2                 sub eax, edx
// 004a9b3b  0fb75604             movzx edx, word ptr [esi + 4]
// 004a9b3f  6a0a                 push 0xa
// 004a9b41  8d8878918b00         lea ecx, [eax + 0x8b9178]
// 004a9b47  51                   push ecx
// 004a9b48  52                   push edx
// 004a9b49  e81a5b1700           call 0x61f668
// 004a9b4e  83c40c               add esp, 0xc
// 004a9b51  b878918b00           mov eax, 0x8b9178
// 004a9b56  5e                   pop esi
// 004a9b57  c20400               ret 4
// library rbxgs-raknet/RakNetTypes.cpp (function ?ToString@SystemAddress@@QBEPAD_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
