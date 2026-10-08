// roc 2007-03 004845e0  unit: seg_00480000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004845e0
//
// 004845e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004845e3  83e800               sub eax, 0
// 004845e6  56                   push esi
// 004845e7  7422                 je 0x48460b
// 004845e9  83e801               sub eax, 1
// 004845ec  7536                 jne 0x484624
// 004845ee  8b742408             mov esi, dword ptr [esp + 8]
// 004845f2  56                   push esi
// 004845f3  83c10c               add ecx, 0xc
// 004845f6  e845ffffff           call 0x484540
// 004845fb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004845ff  50                   push eax
// 00484600  56                   push esi
// 00484601  ff1514808b00         call dword ptr [0x8b8014]
// 00484607  5e                   pop esi
// 00484608  c20800               ret 8
// 0048460b  8b742408             mov esi, dword ptr [esp + 8]
// 0048460f  56                   push esi
// 00484610  83c10c               add ecx, 0xc
// 00484613  e878ffffff           call 0x484590
// 00484618  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048461c  51                   push ecx
// 0048461d  56                   push esi
// 0048461e  ff15ec7f8b00         call dword ptr [0x8b7fec]
// 00484624  5e                   pop esi
// 00484625  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?bindProgram@GPUProgram@G3D@@IBEXHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
