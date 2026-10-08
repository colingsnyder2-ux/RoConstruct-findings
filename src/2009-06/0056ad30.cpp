// roc 2009-06 0056ad30  unit: G3D::Shader  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ad30
//
// 0056ad30  6aff                 push -1
// 0056ad32  68e3fb8500           push 0x85fbe3
// 0056ad37  64a100000000         mov eax, dword ptr fs:[0]
// 0056ad3d  50                   push eax
// 0056ad3e  64892500000000       mov dword ptr fs:[0], esp
// 0056ad45  51                   push ecx
// 0056ad46  56                   push esi
// 0056ad47  8bf1                 mov esi, ecx
// 0056ad49  89742404             mov dword ptr [esp + 4], esi
// 0056ad4d  8d4e18               lea ecx, [esi + 0x18]
// 0056ad50  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0056ad58  c70154aa8c00         mov dword ptr [ecx], 0x8caa54
// 0056ad5e  e8ed5cf4ff           call 0x4b0a50
// 0056ad63  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056ad66  c644241000           mov byte ptr [esp + 0x10], 0
// 0056ad6b  85c0                 test eax, eax
// 0056ad6d  742c                 je 0x56ad9b
// 0056ad6f  83c004               add eax, 4
// 0056ad72  50                   push eax
// 0056ad73  ff15a4e18900         call dword ptr [0x89e1a4]
// 0056ad79  85c0                 test eax, eax
// 0056ad7b  7517                 jne 0x56ad94
// 0056ad7d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056ad80  e8fb9fedff           call 0x444d80
// 0056ad85  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056ad88  85c9                 test ecx, ecx
// 0056ad8a  7408                 je 0x56ad94
// 0056ad8c  8b01                 mov eax, dword ptr [ecx]
// 0056ad8e  8b10                 mov edx, dword ptr [eax]
// 0056ad90  6a01                 push 1
// 0056ad92  ffd2                 call edx
// 0056ad94  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0056ad9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056ad9f  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 0056ada5  5e                   pop esi
// 0056ada6  64890d00000000       mov dword ptr fs:[0], ecx
// 0056adad  83c410               add esp, 0x10
// 0056adb0  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??1Shader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
