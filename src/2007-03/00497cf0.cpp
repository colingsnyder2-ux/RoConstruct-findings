// roc 2007-03 00497cf0  unit: seg_00490000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497cf0
//
// 00497cf0  56                   push esi
// 00497cf1  6a01                 push 1
// 00497cf3  8bf1                 mov esi, ecx
// 00497cf5  e836feffff           call 0x497b30
// 00497cfa  8b06                 mov eax, dword ptr [esi]
// 00497cfc  a807                 test al, 7
// 00497cfe  750a                 jne 0x497d0a
// 00497d00  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497d03  c1f803               sar eax, 3
// 00497d06  c6040800             mov byte ptr [eax + ecx], 0
// 00497d0a  830601               add dword ptr [esi], 1
// 00497d0d  5e                   pop esi
// 00497d0e  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Write0@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
