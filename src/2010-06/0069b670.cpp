// roc 2010-06 0069b670  unit: RBX::PolyContact  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069b670
//
// 0069b670  56                   push esi
// 0069b671  8bf1                 mov esi, ecx
// 0069b673  8b4618               mov eax, dword ptr [esi + 0x18]
// 0069b676  85c0                 test eax, eax
// 0069b678  7409                 je 0x69b683
// 0069b67a  50                   push eax
// 0069b67b  e81ac31000           call 0x7a799a
// 0069b680  83c404               add esp, 4
// 0069b683  8b460c               mov eax, dword ptr [esi + 0xc]
// 0069b686  50                   push eax
// 0069b687  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0069b68e  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0069b695  c7462000000000       mov dword ptr [esi + 0x20], 0
// 0069b69c  e8f9c21000           call 0x7a799a
// 0069b6a1  83c404               add esp, 4
// 0069b6a4  5e                   pop esi
// 0069b6a5  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??1Cluster@Clusterer@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp
