// roc 2011-06 0053ab90  unit: seg_00530000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053ab90
//
// 0053ab90  8a442408             mov al, byte ptr [esp + 8]
// 0053ab94  3c01                 cmp al, 1
// 0053ab96  740e                 je 0x53aba6
// 0053ab98  3c02                 cmp al, 2
// 0053ab9a  740a                 je 0x53aba6
// 0053ab9c  3c03                 cmp al, 3
// 0053ab9e  7406                 je 0x53aba6
// 0053aba0  b8fcffffff           mov eax, 0xfffffffc
// 0053aba5  c3                   ret 
// 0053aba6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053abaa  57                   push edi
// 0053abab  8b7c2408             mov edi, dword ptr [esp + 8]
// 0053abaf  8807                 mov byte ptr [edi], al
// 0053abb1  85c9                 test ecx, ecx
// 0053abb3  7416                 je 0x53abcb
// 0053abb5  33c0                 xor eax, eax
// 0053abb7  8a1408               mov dl, byte ptr [eax + ecx]
// 0053abba  88540701             mov byte ptr [edi + eax + 1], dl
// 0053abbe  40                   inc eax
// 0053abbf  83f810               cmp eax, 0x10
// 0053abc2  7cf3                 jl 0x53abb7
// 0053abc4  b801000000           mov eax, 1
// 0053abc9  5f                   pop edi
// 0053abca  c3                   ret 
// 0053abcb  56                   push esi
// 0053abcc  33f6                 xor esi, esi
// 0053abce  8bff                 mov edi, edi
// 0053abd0  e8cb9fffff           call 0x534ba0
// 0053abd5  88443701             mov byte ptr [edi + esi + 1], al
// 0053abd9  46                   inc esi
// 0053abda  83fe10               cmp esi, 0x10
// 0053abdd  7cf1                 jl 0x53abd0
// 0053abdf  5e                   pop esi
// 0053abe0  b801000000           mov eax, 1
// 0053abe5  5f                   pop edi
// 0053abe6  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
