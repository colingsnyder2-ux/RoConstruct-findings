// roc 2008-06 00501c30  unit: boost::bad_lexical_cast  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501c30
//
// 00501c30  56                   push esi
// 00501c31  8bf1                 mov esi, ecx
// 00501c33  e828040100           call 0x512060
// 00501c38  8d4e58               lea ecx, [esi + 0x58]
// 00501c3b  e820040100           call 0x512060
// 00501c40  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00501c46  e815040100           call 0x512060
// 00501c4b  8d8e08010000         lea ecx, [esi + 0x108]
// 00501c51  e80a040100           call 0x512060
// 00501c56  8d8e60010000         lea ecx, [esi + 0x160]
// 00501c5c  e8ff030100           call 0x512060
// 00501c61  8d8eb8010000         lea ecx, [esi + 0x1b8]
// 00501c67  e8f4030100           call 0x512060
// 00501c6c  8bc6                 mov eax, esi
// 00501c6e  5e                   pop esi
// 00501c6f  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderStats.cpp (function ??0RenderStats@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderStats.cpp
