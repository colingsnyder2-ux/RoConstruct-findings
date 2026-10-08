// from server: 100% by auto
// roc 2012-06 008bf4a0  unit: RBX::SpatialFilter  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008bf4a0
//
// 008bf4a0  56                   push esi
// 008bf4a1  8bf1                 mov esi, ecx
// 008bf4a3  e8c88afbff           call 0x877f70
// 008bf4a8  894604               mov dword ptr [esi + 4], eax
// 008bf4ab  c6401101             mov byte ptr [eax + 0x11], 1
// 008bf4af  8b4604               mov eax, dword ptr [esi + 4]
// 008bf4b2  894004               mov dword ptr [eax + 4], eax
// 008bf4b5  8b4604               mov eax, dword ptr [esi + 4]
// 008bf4b8  8900                 mov dword ptr [eax], eax
// 008bf4ba  8b4604               mov eax, dword ptr [esi + 4]
// 008bf4bd  894008               mov dword ptr [eax + 8], eax
// 008bf4c0  c7460800000000       mov dword ptr [esi + 8], 0
// 008bf4c7  8bc6                 mov eax, esi
// 008bf4c9  5e                   pop esi
// 008bf4ca  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??0?$map@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
