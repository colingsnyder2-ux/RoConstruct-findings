// roc 2009-12 004d5d00  unit: G3D::Win32Window  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5d00
//
// 004d5d00  81eca8000000         sub esp, 0xa8
// 004d5d06  56                   push esi
// 004d5d07  8bf0                 mov esi, eax
// 004d5d09  57                   push edi
// 004d5d0a  85f6                 test esi, esi
// 004d5d0c  7503                 jne 0x4d5d11
// 004d5d0e  8d7055               lea esi, [eax + 0x55]
// 004d5d11  689c000000           push 0x9c
// 004d5d16  8d442418             lea eax, [esp + 0x18]
// 004d5d1a  6a00                 push 0
// 004d5d1c  50                   push eax
// 004d5d1d  e882ed3100           call 0x7f4aa4
// 004d5d22  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 004d5d29  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 004d5d30  8b3d08ca9800         mov edi, dword ptr [0x98ca08]
// 004d5d36  894c2414             mov dword ptr [esp + 0x14], ecx
// 004d5d3a  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 004d5d41  ba9c000000           mov edx, 0x9c
// 004d5d46  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004d5d4d  83c40c               add esp, 0xc
// 004d5d50  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 004d5d57  83c8ff               or eax, 0xffffffff
// 004d5d5a  c744240c20000000     mov dword ptr [esp + 0xc], 0x20
// 004d5d62  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 004d5d6a  6689542438           mov word ptr [esp + 0x38], dx
// 004d5d6f  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 004d5d76  c744243c00005c00     mov dword ptr [esp + 0x3c], 0x5c0000
// 004d5d7e  33f6                 xor esi, esi
// 004d5d80  85c0                 test eax, eax
// 004d5d82  744a                 je 0x4d5dce
// 004d5d84  8b54b408             mov edx, dword ptr [esp + esi*4 + 8]
// 004d5d88  6a04                 push 4
// 004d5d8a  8d442418             lea eax, [esp + 0x18]
// 004d5d8e  50                   push eax
// 004d5d8f  89942484000000       mov dword ptr [esp + 0x84], edx
// 004d5d96  ffd7                 call edi
// 004d5d98  46                   inc esi
// 004d5d99  83fe03               cmp esi, 3
// 004d5d9c  7ce2                 jl 0x4d5d80
// 004d5d9e  85c0                 test eax, eax
// 004d5da0  742c                 je 0x4d5dce
// 004d5da2  c744243c00001c00     mov dword ptr [esp + 0x3c], 0x1c0000
// 004d5daa  33f6                 xor esi, esi
// 004d5dac  8d642400             lea esp, [esp]
// 004d5db0  85c0                 test eax, eax
// 004d5db2  741a                 je 0x4d5dce
// 004d5db4  8b4cb408             mov ecx, dword ptr [esp + esi*4 + 8]
// 004d5db8  6a04                 push 4
// 004d5dba  8d542418             lea edx, [esp + 0x18]
// 004d5dbe  52                   push edx
// 004d5dbf  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 004d5dc6  ffd7                 call edi
// 004d5dc8  46                   inc esi
// 004d5dc9  83fe03               cmp esi, 3
// 004d5dcc  7ce2                 jl 0x4d5db0
// 004d5dce  33c9                 xor ecx, ecx
// 004d5dd0  85c0                 test eax, eax
// 004d5dd2  0f94c1               sete cl
// 004d5dd5  5f                   pop edi
// 004d5dd6  8ac1                 mov al, cl
// 004d5dd8  5e                   pop esi
// 004d5dd9  81c4a8000000         add esp, 0xa8
// 004d5ddf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?ChangeResolution@G3D@@YA_NHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
