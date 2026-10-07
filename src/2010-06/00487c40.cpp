// roc 2010-06 00487c40  unit: G3D::Win32Window  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487c40
//
// 00487c40  81eca8000000         sub esp, 0xa8
// 00487c46  56                   push esi
// 00487c47  8bf0                 mov esi, eax
// 00487c49  57                   push edi
// 00487c4a  85f6                 test esi, esi
// 00487c4c  7503                 jne 0x487c51
// 00487c4e  8d7055               lea esi, [eax + 0x55]
// 00487c51  689c000000           push 0x9c
// 00487c56  8d442418             lea eax, [esp + 0x18]
// 00487c5a  6a00                 push 0
// 00487c5c  50                   push eax
// 00487c5d  e8820f3200           call 0x7a8be4
// 00487c62  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00487c69  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 00487c70  8b3d94bb9e00         mov edi, dword ptr [0x9ebb94]
// 00487c76  894c2414             mov dword ptr [esp + 0x14], ecx
// 00487c7a  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 00487c81  ba9c000000           mov edx, 0x9c
// 00487c86  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00487c8d  83c40c               add esp, 0xc
// 00487c90  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 00487c97  83c8ff               or eax, 0xffffffff
// 00487c9a  c744240c20000000     mov dword ptr [esp + 0xc], 0x20
// 00487ca2  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 00487caa  6689542438           mov word ptr [esp + 0x38], dx
// 00487caf  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00487cb6  c744243c00005c00     mov dword ptr [esp + 0x3c], 0x5c0000
// 00487cbe  33f6                 xor esi, esi
// 00487cc0  85c0                 test eax, eax
// 00487cc2  744a                 je 0x487d0e
// 00487cc4  8b54b408             mov edx, dword ptr [esp + esi*4 + 8]
// 00487cc8  6a04                 push 4
// 00487cca  8d442418             lea eax, [esp + 0x18]
// 00487cce  50                   push eax
// 00487ccf  89942484000000       mov dword ptr [esp + 0x84], edx
// 00487cd6  ffd7                 call edi
// 00487cd8  46                   inc esi
// 00487cd9  83fe03               cmp esi, 3
// 00487cdc  7ce2                 jl 0x487cc0
// 00487cde  85c0                 test eax, eax
// 00487ce0  742c                 je 0x487d0e
// 00487ce2  c744243c00001c00     mov dword ptr [esp + 0x3c], 0x1c0000
// 00487cea  33f6                 xor esi, esi
// 00487cec  8d642400             lea esp, [esp]
// 00487cf0  85c0                 test eax, eax
// 00487cf2  741a                 je 0x487d0e
// 00487cf4  8b4cb408             mov ecx, dword ptr [esp + esi*4 + 8]
// 00487cf8  6a04                 push 4
// 00487cfa  8d542418             lea edx, [esp + 0x18]
// 00487cfe  52                   push edx
// 00487cff  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00487d06  ffd7                 call edi
// 00487d08  46                   inc esi
// 00487d09  83fe03               cmp esi, 3
// 00487d0c  7ce2                 jl 0x487cf0
// 00487d0e  33c9                 xor ecx, ecx
// 00487d10  85c0                 test eax, eax
// 00487d12  0f94c1               sete cl
// 00487d15  5f                   pop edi
// 00487d16  8ac1                 mov al, cl
// 00487d18  5e                   pop esi
// 00487d19  81c4a8000000         add esp, 0xa8
// 00487d1f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?ChangeResolution@G3D@@YA_NHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
