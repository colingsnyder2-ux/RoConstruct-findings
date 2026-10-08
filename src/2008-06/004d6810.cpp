// roc 2008-06 004d6810  unit: CSHA1  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6810
//
// 004d6810  8a442408             mov al, byte ptr [esp + 8]
// 004d6814  3c01                 cmp al, 1
// 004d6816  740e                 je 0x4d6826
// 004d6818  3c02                 cmp al, 2
// 004d681a  740a                 je 0x4d6826
// 004d681c  3c03                 cmp al, 3
// 004d681e  7406                 je 0x4d6826
// 004d6820  b8fcffffff           mov eax, 0xfffffffc
// 004d6825  c3                   ret 
// 004d6826  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d682a  57                   push edi
// 004d682b  8b7c2408             mov edi, dword ptr [esp + 8]
// 004d682f  8807                 mov byte ptr [edi], al
// 004d6831  85c9                 test ecx, ecx
// 004d6833  7416                 je 0x4d684b
// 004d6835  33c0                 xor eax, eax
// 004d6837  8a1408               mov dl, byte ptr [eax + ecx]
// 004d683a  88540701             mov byte ptr [edi + eax + 1], dl
// 004d683e  40                   inc eax
// 004d683f  83f810               cmp eax, 0x10
// 004d6842  7cf3                 jl 0x4d6837
// 004d6844  b801000000           mov eax, 1
// 004d6849  5f                   pop edi
// 004d684a  c3                   ret 
// 004d684b  56                   push esi
// 004d684c  33f6                 xor esi, esi
// 004d684e  8bff                 mov edi, edi
// 004d6850  e8cbd8ffff           call 0x4d4120
// 004d6855  88443701             mov byte ptr [edi + esi + 1], al
// 004d6859  46                   inc esi
// 004d685a  83fe10               cmp esi, 0x10
// 004d685d  7cf1                 jl 0x4d6850
// 004d685f  5e                   pop esi
// 004d6860  b801000000           mov eax, 1
// 004d6865  5f                   pop edi
// 004d6866  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
