// roc 2009-12 00571ad0  unit: CSHA1  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00571ad0
//
// 00571ad0  8a442408             mov al, byte ptr [esp + 8]
// 00571ad4  3c01                 cmp al, 1
// 00571ad6  740e                 je 0x571ae6
// 00571ad8  3c02                 cmp al, 2
// 00571ada  740a                 je 0x571ae6
// 00571adc  3c03                 cmp al, 3
// 00571ade  7406                 je 0x571ae6
// 00571ae0  b8fcffffff           mov eax, 0xfffffffc
// 00571ae5  c3                   ret 
// 00571ae6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00571aea  57                   push edi
// 00571aeb  8b7c2408             mov edi, dword ptr [esp + 8]
// 00571aef  8807                 mov byte ptr [edi], al
// 00571af1  85c9                 test ecx, ecx
// 00571af3  7416                 je 0x571b0b
// 00571af5  33c0                 xor eax, eax
// 00571af7  8a1408               mov dl, byte ptr [eax + ecx]
// 00571afa  88540701             mov byte ptr [edi + eax + 1], dl
// 00571afe  40                   inc eax
// 00571aff  83f810               cmp eax, 0x10
// 00571b02  7cf3                 jl 0x571af7
// 00571b04  b801000000           mov eax, 1
// 00571b09  5f                   pop edi
// 00571b0a  c3                   ret 
// 00571b0b  56                   push esi
// 00571b0c  33f6                 xor esi, esi
// 00571b0e  8bff                 mov edi, edi
// 00571b10  e8dbe7ffff           call 0x5702f0
// 00571b15  88443701             mov byte ptr [edi + esi + 1], al
// 00571b19  46                   inc esi
// 00571b1a  83fe10               cmp esi, 0x10
// 00571b1d  7cf1                 jl 0x571b10
// 00571b1f  5e                   pop esi
// 00571b20  b801000000           mov eax, 1
// 00571b25  5f                   pop edi
// 00571b26  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
