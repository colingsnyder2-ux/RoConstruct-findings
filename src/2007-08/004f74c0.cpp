// roc 2007-08 004f74c0  unit: seg_004f0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f74c0
//
// 004f74c0  56                   push esi
// 004f74c1  8bf1                 mov esi, ecx
// 004f74c3  e8b8100100           call 0x508580
// 004f74c8  8d4e58               lea ecx, [esi + 0x58]
// 004f74cb  e8b0100100           call 0x508580
// 004f74d0  8d8eb0000000         lea ecx, [esi + 0xb0]
// 004f74d6  e8a5100100           call 0x508580
// 004f74db  8d8e08010000         lea ecx, [esi + 0x108]
// 004f74e1  e89a100100           call 0x508580
// 004f74e6  8d8e60010000         lea ecx, [esi + 0x160]
// 004f74ec  e88f100100           call 0x508580
// 004f74f1  8d8eb8010000         lea ecx, [esi + 0x1b8]
// 004f74f7  e884100100           call 0x508580
// 004f74fc  8bc6                 mov eax, esi
// 004f74fe  5e                   pop esi
// 004f74ff  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderStats.cpp (function ??0RenderStats@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderStats.cpp
