// roc 2010-06 005203c0  unit: CSHA1  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005203c0
//
// 005203c0  8a442408             mov al, byte ptr [esp + 8]
// 005203c4  3c01                 cmp al, 1
// 005203c6  740e                 je 0x5203d6
// 005203c8  3c02                 cmp al, 2
// 005203ca  740a                 je 0x5203d6
// 005203cc  3c03                 cmp al, 3
// 005203ce  7406                 je 0x5203d6
// 005203d0  b8fcffffff           mov eax, 0xfffffffc
// 005203d5  c3                   ret 
// 005203d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005203da  57                   push edi
// 005203db  8b7c2408             mov edi, dword ptr [esp + 8]
// 005203df  8807                 mov byte ptr [edi], al
// 005203e1  85c9                 test ecx, ecx
// 005203e3  7416                 je 0x5203fb
// 005203e5  33c0                 xor eax, eax
// 005203e7  8a1408               mov dl, byte ptr [eax + ecx]
// 005203ea  88540701             mov byte ptr [edi + eax + 1], dl
// 005203ee  40                   inc eax
// 005203ef  83f810               cmp eax, 0x10
// 005203f2  7cf3                 jl 0x5203e7
// 005203f4  b801000000           mov eax, 1
// 005203f9  5f                   pop edi
// 005203fa  c3                   ret 
// 005203fb  56                   push esi
// 005203fc  33f6                 xor esi, esi
// 005203fe  8bff                 mov edi, edi
// 00520400  e84be8ffff           call 0x51ec50
// 00520405  88443701             mov byte ptr [edi + esi + 1], al
// 00520409  46                   inc esi
// 0052040a  83fe10               cmp esi, 0x10
// 0052040d  7cf1                 jl 0x520400
// 0052040f  5e                   pop esi
// 00520410  b801000000           mov eax, 1
// 00520415  5f                   pop edi
// 00520416  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
