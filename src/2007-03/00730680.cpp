// roc 2007-03 00730680  unit: seg_00730000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00730680
//
// 00730680  56                   push esi
// 00730681  8bf1                 mov esi, ecx
// 00730683  6a10                 push 0x10
// 00730685  6a28                 push 0x28
// 00730687  c706d8e57900         mov dword ptr [esi], 0x79e5d8
// 0073068d  c7460c0a000000       mov dword ptr [esi + 0xc], 0xa
// 00730694  c7460400000000       mov dword ptr [esi + 4], 0
// 0073069b  e83035dcff           call 0x4f3bd0
// 007306a0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007306a3  03c9                 add ecx, ecx
// 007306a5  03c9                 add ecx, ecx
// 007306a7  51                   push ecx
// 007306a8  6a00                 push 0
// 007306aa  50                   push eax
// 007306ab  894608               mov dword ptr [esi + 8], eax
// 007306ae  e83d3adcff           call 0x4f40f0
// 007306b3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007306b7  83c414               add esp, 0x14
// 007306ba  c7461000000000       mov dword ptr [esi + 0x10], 0
// 007306c1  895614               mov dword ptr [esi + 0x14], edx
// 007306c4  8bc6                 mov eax, esi
// 007306c6  5e                   pop esi
// 007306c7  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ??0TextureManager@G3D@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
