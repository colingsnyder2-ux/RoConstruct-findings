// roc 2009-06 005c68c0  unit: seg_005c0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c68c0
//
// 005c68c0  55                   push ebp
// 005c68c1  8bec                 mov ebp, esp
// 005c68c3  83ec08               sub esp, 8
// 005c68c6  894df8               mov dword ptr [ebp - 8], ecx
// 005c68c9  51                   push ecx
// 005c68ca  8bcc                 mov ecx, esp
// 005c68cc  8965fc               mov dword ptr [ebp - 4], esp
// 005c68cf  e85cd2feff           call 0x5b3b30
// 005c68d4  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c68d7  e884e4ffff           call 0x5c4d60
// 005c68dc  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c68df  c7401000000000       mov dword ptr [eax + 0x10], 0
// 005c68e6  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c68e9  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 005c68f0  8b55f8               mov edx, dword ptr [ebp - 8]
// 005c68f3  c7421800000000       mov dword ptr [edx + 0x18], 0
// 005c68fa  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c68fd  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005c6904  8b45f8               mov eax, dword ptr [ebp - 8]
// 005c6907  8be5                 mov esp, ebp
// 005c6909  5d                   pop ebp
// 005c690a  c3                   ret 
// copied from an identical function in another client (function ??0?$deque@VTriangle@VETMesh@Wml@@V?$allocator@VTriangle@VETMesh@Wml@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Meshes/WmlVETMesh.cpp