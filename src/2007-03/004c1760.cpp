// roc 2007-03 004c1760  unit: seg_004c0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1760
//
// 004c1760  8a442408             mov al, byte ptr [esp + 8]
// 004c1764  3c01                 cmp al, 1
// 004c1766  740e                 je 0x4c1776
// 004c1768  3c02                 cmp al, 2
// 004c176a  740a                 je 0x4c1776
// 004c176c  3c03                 cmp al, 3
// 004c176e  7406                 je 0x4c1776
// 004c1770  b8fcffffff           mov eax, 0xfffffffc
// 004c1775  c3                   ret 
// 004c1776  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c177a  85c9                 test ecx, ecx
// 004c177c  57                   push edi
// 004c177d  8b7c2408             mov edi, dword ptr [esp + 8]
// 004c1781  8807                 mov byte ptr [edi], al
// 004c1783  7421                 je 0x4c17a6
// 004c1785  33c0                 xor eax, eax
// 004c1787  eb07                 jmp 0x4c1790
// 004c1789  8da42400000000       lea esp, [esp]
// 004c1790  8a1408               mov dl, byte ptr [eax + ecx]
// 004c1793  88540701             mov byte ptr [edi + eax + 1], dl
// 004c1797  83c001               add eax, 1
// 004c179a  83f810               cmp eax, 0x10
// 004c179d  7cf1                 jl 0x4c1790
// 004c179f  b801000000           mov eax, 1
// 004c17a4  5f                   pop edi
// 004c17a5  c3                   ret 
// 004c17a6  56                   push esi
// 004c17a7  33f6                 xor esi, esi
// 004c17a9  8da42400000000       lea esp, [esp]
// 004c17b0  e86b81ffff           call 0x4b9920
// 004c17b5  88443701             mov byte ptr [edi + esi + 1], al
// 004c17b9  83c601               add esi, 1
// 004c17bc  83fe10               cmp esi, 0x10
// 004c17bf  7cef                 jl 0x4c17b0
// 004c17c1  5e                   pop esi
// 004c17c2  b801000000           mov eax, 1
// 004c17c7  5f                   pop edi
// 004c17c8  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
