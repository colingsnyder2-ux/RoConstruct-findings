// roc 2009-12 0062bf70  unit: seg_00620000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062bf70
//
// 0062bf70  81ec98000000         sub esp, 0x98
// 0062bf76  56                   push esi
// 0062bf77  6890000000           push 0x90
// 0062bf7c  8d442410             lea eax, [esp + 0x10]
// 0062bf80  6a00                 push 0
// 0062bf82  50                   push eax
// 0062bf83  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062bf8b  e8148b1c00           call 0x7f4aa4
// 0062bf90  83c40c               add esp, 0xc
// 0062bf93  8d4c2408             lea ecx, [esp + 8]
// 0062bf97  51                   push ecx
// 0062bf98  c744240c94000000     mov dword ptr [esp + 0xc], 0x94
// 0062bfa0  ff15e4b19800         call dword ptr [0x98b1e4]
// 0062bfa6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0062bfaa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062bfae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062bfb2  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 0062bfb9  52                   push edx
// 0062bfba  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0062bfbe  50                   push eax
// 0062bfbf  51                   push ecx
// 0062bfc0  52                   push edx
// 0062bfc1  68b0669b00           push 0x9b66b0
// 0062bfc6  56                   push esi
// 0062bfc7  e894611b00           call 0x7e2160
// 0062bfcc  83c418               add esp, 0x18
// 0062bfcf  8bc6                 mov eax, esi
// 0062bfd1  5e                   pop esi
// 0062bfd2  81c498000000         add esp, 0x98
// 0062bfd8  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?osVer@DebugSettings@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
