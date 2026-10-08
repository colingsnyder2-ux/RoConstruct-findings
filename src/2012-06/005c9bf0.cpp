// roc 2012-06 005c9bf0  unit: RBX::AdornRbxGfx  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9bf0
//
// 005c9bf0  8a442408             mov al, byte ptr [esp + 8]
// 005c9bf4  3c01                 cmp al, 1
// 005c9bf6  740e                 je 0x5c9c06
// 005c9bf8  3c02                 cmp al, 2
// 005c9bfa  740a                 je 0x5c9c06
// 005c9bfc  3c03                 cmp al, 3
// 005c9bfe  7406                 je 0x5c9c06
// 005c9c00  b8fcffffff           mov eax, 0xfffffffc
// 005c9c05  c3                   ret 
// 005c9c06  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9c0a  57                   push edi
// 005c9c0b  8b7c2408             mov edi, dword ptr [esp + 8]
// 005c9c0f  8807                 mov byte ptr [edi], al
// 005c9c11  85c9                 test ecx, ecx
// 005c9c13  7416                 je 0x5c9c2b
// 005c9c15  33c0                 xor eax, eax
// 005c9c17  8a1408               mov dl, byte ptr [eax + ecx]
// 005c9c1a  88540701             mov byte ptr [edi + eax + 1], dl
// 005c9c1e  40                   inc eax
// 005c9c1f  83f810               cmp eax, 0x10
// 005c9c22  7cf3                 jl 0x5c9c17
// 005c9c24  b801000000           mov eax, 1
// 005c9c29  5f                   pop edi
// 005c9c2a  c3                   ret 
// 005c9c2b  56                   push esi
// 005c9c2c  33f6                 xor esi, esi
// 005c9c2e  8bff                 mov edi, edi
// 005c9c30  e80bdfffff           call 0x5c7b40
// 005c9c35  88443701             mov byte ptr [edi + esi + 1], al
// 005c9c39  46                   inc esi
// 005c9c3a  83fe10               cmp esi, 0x10
// 005c9c3d  7cf1                 jl 0x5c9c30
// 005c9c3f  5e                   pop esi
// 005c9c40  b801000000           mov eax, 1
// 005c9c45  5f                   pop edi
// 005c9c46  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
