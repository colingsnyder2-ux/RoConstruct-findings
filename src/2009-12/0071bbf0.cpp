// roc 2009-12 0071bbf0  unit: RBX::VPhysicsService::?$EventDesc  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071bbf0
//
// 0071bbf0  56                   push esi
// 0071bbf1  8bf1                 mov esi, ecx
// 0071bbf3  8b4618               mov eax, dword ptr [esi + 0x18]
// 0071bbf6  85c0                 test eax, eax
// 0071bbf8  7409                 je 0x71bc03
// 0071bbfa  50                   push eax
// 0071bbfb  e85a7c0d00           call 0x7f385a
// 0071bc00  83c404               add esp, 4
// 0071bc03  8b460c               mov eax, dword ptr [esi + 0xc]
// 0071bc06  50                   push eax
// 0071bc07  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0071bc0e  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0071bc15  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0071bc1c  e8397c0d00           call 0x7f385a
// 0071bc21  83c404               add esp, 4
// 0071bc24  5e                   pop esi
// 0071bc25  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??1Cluster@Clusterer@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp
