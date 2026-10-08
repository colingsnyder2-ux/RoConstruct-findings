// roc 2007-03 00402a10  unit: seg_00400000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402a10
//
// 00402a10  57                   push edi
// 00402a11  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00402a15  83ef01               sub edi, 1
// 00402a18  7824                 js 0x402a3e
// 00402a1a  53                   push ebx
// 00402a1b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00402a1f  55                   push ebp
// 00402a20  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00402a24  56                   push esi
// 00402a25  8b742414             mov esi, dword ptr [esp + 0x14]
// 00402a29  8da42400000000       lea esp, [esp]
// 00402a30  8bce                 mov ecx, esi
// 00402a32  ffd3                 call ebx
// 00402a34  03f5                 add esi, ebp
// 00402a36  83ef01               sub edi, 1
// 00402a39  79f5                 jns 0x402a30
// 00402a3b  5e                   pop esi
// 00402a3c  5d                   pop ebp
// 00402a3d  5b                   pop ebx
// 00402a3e  5f                   pop edi
// 00402a3f  c21000               ret 0x10
// library rbxgs/gui\GuiDraw.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
