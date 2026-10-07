// roc 2010-06 00552ce0  unit: G3D::Log  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00552ce0
//
// 00552ce0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00552ce4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00552ce8  53                   push ebx
// 00552ce9  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00552ced  55                   push ebp
// 00552cee  03c1                 add eax, ecx
// 00552cf0  394308               cmp dword ptr [ebx + 8], eax
// 00552cf3  56                   push esi
// 00552cf4  57                   push edi
// 00552cf5  0f8cad000000         jl 0x552da8
// 00552cfb  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00552cff  8b442430             mov eax, dword ptr [esp + 0x30]
// 00552d03  8d1428               lea edx, [eax + ebp]
// 00552d06  39530c               cmp dword ptr [ebx + 0xc], edx
// 00552d09  0f8c99000000         jl 0x552da8
// 00552d0f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00552d13  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00552d17  03d1                 add edx, ecx
// 00552d19  395708               cmp dword ptr [edi + 8], edx
// 00552d1c  0f8c86000000         jl 0x552da8
// 00552d22  8b742420             mov esi, dword ptr [esp + 0x20]
// 00552d26  8d1406               lea edx, [esi + eax]
// 00552d29  39570c               cmp dword ptr [edi + 0xc], edx
// 00552d2c  7c7a                 jl 0x552da8
// 00552d2e  85ed                 test ebp, ebp
// 00552d30  7c76                 jl 0x552da8
// 00552d32  837c242400           cmp dword ptr [esp + 0x24], 0
// 00552d37  7c6f                 jl 0x552da8
// 00552d39  85f6                 test esi, esi
// 00552d3b  7c6b                 jl 0x552da8
// 00552d3d  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00552d42  7c64                 jl 0x552da8
// 00552d44  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00552d47  3b5710               cmp edx, dword ptr [edi + 0x10]
// 00552d4a  755c                 jne 0x552da8
// 00552d4c  85c0                 test eax, eax
// 00552d4e  7e51                 jle 0x552da1
// 00552d50  2bee                 sub ebp, esi
// 00552d52  89442418             mov dword ptr [esp + 0x18], eax
// 00552d56  eb0c                 jmp 0x552d64
// 00552d58  eb06                 jmp 0x552d60
// 00552d5a  8d9b00000000         lea ebx, [ebx]
// 00552d60  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00552d64  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00552d67  8bd0                 mov edx, eax
// 00552d69  0fafd1               imul edx, ecx
// 00552d6c  52                   push edx
// 00552d6d  8b5708               mov edx, dword ptr [edi + 8]
// 00552d70  8d0c2e               lea ecx, [esi + ebp]
// 00552d73  0fafd6               imul edx, esi
// 00552d76  0faf4b08             imul ecx, dword ptr [ebx + 8]
// 00552d7a  034c2428             add ecx, dword ptr [esp + 0x28]
// 00552d7e  03542420             add edx, dword ptr [esp + 0x20]
// 00552d82  0fafc8               imul ecx, eax
// 00552d85  0faf5710             imul edx, dword ptr [edi + 0x10]
// 00552d89  034b04               add ecx, dword ptr [ebx + 4]
// 00552d8c  035704               add edx, dword ptr [edi + 4]
// 00552d8f  51                   push ecx
// 00552d90  52                   push edx
// 00552d91  e890602500           call 0x7a8e26
// 00552d96  83c40c               add esp, 0xc
// 00552d99  46                   inc esi
// 00552d9a  836c241801           sub dword ptr [esp + 0x18], 1
// 00552d9f  75bf                 jne 0x552d60
// 00552da1  5f                   pop edi
// 00552da2  5e                   pop esi
// 00552da3  5d                   pop ebp
// 00552da4  b001                 mov al, 1
// 00552da6  5b                   pop ebx
// 00552da7  c3                   ret 
// 00552da8  5f                   pop edi
// 00552da9  5e                   pop esi
// 00552daa  5d                   pop ebp
// 00552dab  32c0                 xor al, al
// 00552dad  5b                   pop ebx
// 00552dae  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?pasteSubImage@GImage@G3D@@SA_NAAV12@ABV12@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
