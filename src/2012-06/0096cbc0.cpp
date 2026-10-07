// roc 2012-06 0096cbc0  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096cbc0
//
// 0096cbc0  6aff                 push -1
// 0096cbc2  68aea9ad00           push 0xada9ae
// 0096cbc7  64a100000000         mov eax, dword ptr fs:[0]
// 0096cbcd  50                   push eax
// 0096cbce  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0096cbd3  33c4                 xor eax, esp
// 0096cbd5  50                   push eax
// 0096cbd6  8d442404             lea eax, [esp + 4]
// 0096cbda  64a300000000         mov dword ptr fs:[0], eax
// 0096cbe0  b801000000           mov eax, 1
// 0096cbe5  84051474e500         test byte ptr [0xe57414], al
// 0096cbeb  7525                 jne 0x96cc12
// 0096cbed  09051474e500         or dword ptr [0xe57414], eax
// 0096cbf3  b96873e500           mov ecx, 0xe57368
// 0096cbf8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0096cc00  e80b150000           call 0x96e110
// 0096cc05  686014b200           push 0xb21460
// 0096cc0a  e8e6650100           call 0x9831f5
// 0096cc0f  83c404               add esp, 4
// 0096cc12  b86873e500           mov eax, 0xe57368
// 0096cc17  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0096cc1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0096cc22  59                   pop ecx
// 0096cc23  83c40c               add esp, 0xc
// 0096cc26  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
