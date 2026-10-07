// roc 2009-06 004a9150  unit: G3D::Win32Window  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9150
//
// 004a9150  81eca8000000         sub esp, 0xa8
// 004a9156  56                   push esi
// 004a9157  8bf0                 mov esi, eax
// 004a9159  57                   push edi
// 004a915a  85f6                 test esi, esi
// 004a915c  7503                 jne 0x4a9161
// 004a915e  8d7055               lea esi, [eax + 0x55]
// 004a9161  689c000000           push 0x9c
// 004a9166  8d442418             lea eax, [esp + 0x18]
// 004a916a  6a00                 push 0
// 004a916c  50                   push eax
// 004a916d  e8020b2700           call 0x719c74
// 004a9172  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 004a9179  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 004a9180  8b3d74ed8900         mov edi, dword ptr [0x89ed74]
// 004a9186  894c2414             mov dword ptr [esp + 0x14], ecx
// 004a918a  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 004a9191  ba9c000000           mov edx, 0x9c
// 004a9196  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004a919d  83c40c               add esp, 0xc
// 004a91a0  89b4248c000000       mov dword ptr [esp + 0x8c], esi
// 004a91a7  83c8ff               or eax, 0xffffffff
// 004a91aa  c744240c20000000     mov dword ptr [esp + 0xc], 0x20
// 004a91b2  c744241010000000     mov dword ptr [esp + 0x10], 0x10
// 004a91ba  6689542438           mov word ptr [esp + 0x38], dx
// 004a91bf  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 004a91c6  c744243c00005c00     mov dword ptr [esp + 0x3c], 0x5c0000
// 004a91ce  33f6                 xor esi, esi
// 004a91d0  85c0                 test eax, eax
// 004a91d2  744a                 je 0x4a921e
// 004a91d4  8b54b408             mov edx, dword ptr [esp + esi*4 + 8]
// 004a91d8  6a04                 push 4
// 004a91da  8d442418             lea eax, [esp + 0x18]
// 004a91de  50                   push eax
// 004a91df  89942484000000       mov dword ptr [esp + 0x84], edx
// 004a91e6  ffd7                 call edi
// 004a91e8  46                   inc esi
// 004a91e9  83fe03               cmp esi, 3
// 004a91ec  7ce2                 jl 0x4a91d0
// 004a91ee  85c0                 test eax, eax
// 004a91f0  742c                 je 0x4a921e
// 004a91f2  c744243c00001c00     mov dword ptr [esp + 0x3c], 0x1c0000
// 004a91fa  33f6                 xor esi, esi
// 004a91fc  8d642400             lea esp, [esp]
// 004a9200  85c0                 test eax, eax
// 004a9202  741a                 je 0x4a921e
// 004a9204  8b4cb408             mov ecx, dword ptr [esp + esi*4 + 8]
// 004a9208  6a04                 push 4
// 004a920a  8d542418             lea edx, [esp + 0x18]
// 004a920e  52                   push edx
// 004a920f  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 004a9216  ffd7                 call edi
// 004a9218  46                   inc esi
// 004a9219  83fe03               cmp esi, 3
// 004a921c  7ce2                 jl 0x4a9200
// 004a921e  33c9                 xor ecx, ecx
// 004a9220  85c0                 test eax, eax
// 004a9222  0f94c1               sete cl
// 004a9225  5f                   pop edi
// 004a9226  8ac1                 mov al, cl
// 004a9228  5e                   pop esi
// 004a9229  81c4a8000000         add esp, 0xa8
// 004a922f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?ChangeResolution@G3D@@YA_NHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
