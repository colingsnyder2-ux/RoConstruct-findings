// from server: 100% by auto
// roc 2008-06 0047f030  unit: G3D::Win32Window  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f030
//
// 0047f030  81eca8000000         sub esp, 0xa8
// 0047f036  56                   push esi
// 0047f037  8bf0                 mov esi, eax
// 0047f039  57                   push edi
// 0047f03a  85f6                 test esi, esi
// 0047f03c  7503                 jne 0x47f041
// 0047f03e  8d7055               lea esi, [eax + 0x55]
// 0047f041  689c000000           push 0x9c
// 0047f046  8d442418             lea eax, [esp + 0x18]
// 0047f04a  6a00                 push 0
// 0047f04c  50                   push eax
// 0047f04d  e8b2262200           call 0x6a1704
// 0047f052  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 0047f059  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 0047f060  8b3de02c8000         mov edi, dword ptr [0x802ce0]
// 0047f066  894c2414             mov dword ptr [esp + 0x14], ecx
// 0047f06a  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 0047f071  ba9c000000           mov edx, 0x9c
// 0047f076  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0047f07d  83c40c               add esp, 0xc
// 0047f080  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 0047f087  83c8ff               or eax, 0xffffffff
// 0047f08a  c744240c20000000     mov dword ptr [esp + 0xc], 0x20
// 0047f092  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 0047f09a  6689542438           mov word ptr [esp + 0x38], dx
// 0047f09f  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0047f0a6  c744243c00005c00     mov dword ptr [esp + 0x3c], 0x5c0000
// 0047f0ae  33f6                 xor esi, esi
// 0047f0b0  85c0                 test eax, eax
// 0047f0b2  744a                 je 0x47f0fe
// 0047f0b4  8b54b408             mov edx, dword ptr [esp + esi*4 + 8]
// 0047f0b8  6a04                 push 4
// 0047f0ba  8d442418             lea eax, [esp + 0x18]
// 0047f0be  50                   push eax
// 0047f0bf  89942484000000       mov dword ptr [esp + 0x84], edx
// 0047f0c6  ffd7                 call edi
// 0047f0c8  46                   inc esi
// 0047f0c9  83fe03               cmp esi, 3
// 0047f0cc  7ce2                 jl 0x47f0b0
// 0047f0ce  85c0                 test eax, eax
// 0047f0d0  742c                 je 0x47f0fe
// 0047f0d2  c744243c00001c00     mov dword ptr [esp + 0x3c], 0x1c0000
// 0047f0da  33f6                 xor esi, esi
// 0047f0dc  8d642400             lea esp, [esp]
// 0047f0e0  85c0                 test eax, eax
// 0047f0e2  741a                 je 0x47f0fe
// 0047f0e4  8b4cb408             mov ecx, dword ptr [esp + esi*4 + 8]
// 0047f0e8  6a04                 push 4
// 0047f0ea  8d542418             lea edx, [esp + 0x18]
// 0047f0ee  52                   push edx
// 0047f0ef  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0047f0f6  ffd7                 call edi
// 0047f0f8  46                   inc esi
// 0047f0f9  83fe03               cmp esi, 3
// 0047f0fc  7ce2                 jl 0x47f0e0
// 0047f0fe  33c9                 xor ecx, ecx
// 0047f100  85c0                 test eax, eax
// 0047f102  0f94c1               sete cl
// 0047f105  5f                   pop edi
// 0047f106  8ac1                 mov al, cl
// 0047f108  5e                   pop esi
// 0047f109  81c4a8000000         add esp, 0xa8
// 0047f10f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?ChangeResolution@G3D@@YA_NHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
