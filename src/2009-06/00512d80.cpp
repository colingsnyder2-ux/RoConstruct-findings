// roc 2009-06 00512d80  unit: CSHA1  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00512d80
//
// 00512d80  8a442408             mov al, byte ptr [esp + 8]
// 00512d84  3c01                 cmp al, 1
// 00512d86  740e                 je 0x512d96
// 00512d88  3c02                 cmp al, 2
// 00512d8a  740a                 je 0x512d96
// 00512d8c  3c03                 cmp al, 3
// 00512d8e  7406                 je 0x512d96
// 00512d90  b8fcffffff           mov eax, 0xfffffffc
// 00512d95  c3                   ret 
// 00512d96  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00512d9a  57                   push edi
// 00512d9b  8b7c2408             mov edi, dword ptr [esp + 8]
// 00512d9f  8807                 mov byte ptr [edi], al
// 00512da1  85c9                 test ecx, ecx
// 00512da3  7416                 je 0x512dbb
// 00512da5  33c0                 xor eax, eax
// 00512da7  8a1408               mov dl, byte ptr [eax + ecx]
// 00512daa  88540701             mov byte ptr [edi + eax + 1], dl
// 00512dae  40                   inc eax
// 00512daf  83f810               cmp eax, 0x10
// 00512db2  7cf3                 jl 0x512da7
// 00512db4  b801000000           mov eax, 1
// 00512db9  5f                   pop edi
// 00512dba  c3                   ret 
// 00512dbb  56                   push esi
// 00512dbc  33f6                 xor esi, esi
// 00512dbe  8bff                 mov edi, edi
// 00512dc0  e8fbd8ffff           call 0x5106c0
// 00512dc5  88443701             mov byte ptr [edi + esi + 1], al
// 00512dc9  46                   inc esi
// 00512dca  83fe10               cmp esi, 0x10
// 00512dcd  7cf1                 jl 0x512dc0
// 00512dcf  5e                   pop esi
// 00512dd0  b801000000           mov eax, 1
// 00512dd5  5f                   pop edi
// 00512dd6  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
