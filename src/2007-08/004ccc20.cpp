// roc 2007-08 004ccc20  unit: CSHA1  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ccc20
//
// 004ccc20  8a442408             mov al, byte ptr [esp + 8]
// 004ccc24  3c01                 cmp al, 1
// 004ccc26  740e                 je 0x4ccc36
// 004ccc28  3c02                 cmp al, 2
// 004ccc2a  740a                 je 0x4ccc36
// 004ccc2c  3c03                 cmp al, 3
// 004ccc2e  7406                 je 0x4ccc36
// 004ccc30  b8fcffffff           mov eax, 0xfffffffc
// 004ccc35  c3                   ret 
// 004ccc36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ccc3a  85c9                 test ecx, ecx
// 004ccc3c  57                   push edi
// 004ccc3d  8b7c2408             mov edi, dword ptr [esp + 8]
// 004ccc41  8807                 mov byte ptr [edi], al
// 004ccc43  7421                 je 0x4ccc66
// 004ccc45  33c0                 xor eax, eax
// 004ccc47  eb07                 jmp 0x4ccc50
// 004ccc49  8da42400000000       lea esp, [esp]
// 004ccc50  8a1408               mov dl, byte ptr [eax + ecx]
// 004ccc53  88540701             mov byte ptr [edi + eax + 1], dl
// 004ccc57  83c001               add eax, 1
// 004ccc5a  83f810               cmp eax, 0x10
// 004ccc5d  7cf1                 jl 0x4ccc50
// 004ccc5f  b801000000           mov eax, 1
// 004ccc64  5f                   pop edi
// 004ccc65  c3                   ret 
// 004ccc66  56                   push esi
// 004ccc67  33f6                 xor esi, esi
// 004ccc69  8da42400000000       lea esp, [esp]
// 004ccc70  e8cbd6ffff           call 0x4ca340
// 004ccc75  88443701             mov byte ptr [edi + esi + 1], al
// 004ccc79  83c601               add esi, 1
// 004ccc7c  83fe10               cmp esi, 0x10
// 004ccc7f  7cef                 jl 0x4ccc70
// 004ccc81  5e                   pop esi
// 004ccc82  b801000000           mov eax, 1
// 004ccc87  5f                   pop edi
// 004ccc88  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?cipherInit@@YAHPAUcipherInstance@@EPAD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
