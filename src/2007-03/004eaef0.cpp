// roc 2007-03 004eaef0  unit: seg_004e0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eaef0
//
// 004eaef0  56                   push esi
// 004eaef1  8bf1                 mov esi, ecx
// 004eaef3  e838260100           call 0x4fd530
// 004eaef8  8d4e58               lea ecx, [esi + 0x58]
// 004eaefb  e830260100           call 0x4fd530
// 004eaf00  8d8eb0000000         lea ecx, [esi + 0xb0]
// 004eaf06  e825260100           call 0x4fd530
// 004eaf0b  8d8e08010000         lea ecx, [esi + 0x108]
// 004eaf11  e81a260100           call 0x4fd530
// 004eaf16  8d8e60010000         lea ecx, [esi + 0x160]
// 004eaf1c  e80f260100           call 0x4fd530
// 004eaf21  8d8eb8010000         lea ecx, [esi + 0x1b8]
// 004eaf27  e804260100           call 0x4fd530
// 004eaf2c  8bc6                 mov eax, esi
// 004eaf2e  5e                   pop esi
// 004eaf2f  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderStats.cpp (function ??0RenderStats@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderStats.cpp
