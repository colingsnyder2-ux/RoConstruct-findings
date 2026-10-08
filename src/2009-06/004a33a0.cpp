// roc 2009-06 004a33a0  unit: G3D::PBVTextureFormat::?$Table  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a33a0
//
// 004a33a0  6aff                 push -1
// 004a33a2  68e1728500           push 0x8572e1
// 004a33a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a33ad  50                   push eax
// 004a33ae  64892500000000       mov dword ptr fs:[0], esp
// 004a33b5  51                   push ecx
// 004a33b6  56                   push esi
// 004a33b7  8bf1                 mov esi, ecx
// 004a33b9  57                   push edi
// 004a33ba  89742408             mov dword ptr [esp + 8], esi
// 004a33be  8d8e9c080000         lea ecx, [esi + 0x89c]
// 004a33c4  c744241404000000     mov dword ptr [esp + 0x14], 4
// 004a33cc  c701e8ff8b00         mov dword ptr [ecx], 0x8bffe8
// 004a33d2  e8797d3a00           call 0x84b150
// 004a33d7  8d8e80080000         lea ecx, [esi + 0x880]
// 004a33dd  c644241403           mov byte ptr [esp + 0x14], 3
// 004a33e2  e8e9fcffff           call 0x4a30d0
// 004a33e7  8d8e20010000         lea ecx, [esi + 0x120]
// 004a33ed  c644241402           mov byte ptr [esp + 0x14], 2
// 004a33f2  e889dbffff           call 0x4a0f80
// 004a33f7  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 004a33fd  8b3da4e18900         mov edi, dword ptr [0x89e1a4]
// 004a3403  c644241401           mov byte ptr [esp + 0x14], 1
// 004a3408  85c0                 test eax, eax
// 004a340a  7431                 je 0x4a343d
// 004a340c  83c004               add eax, 4
// 004a340f  50                   push eax
// 004a3410  ffd7                 call edi
// 004a3412  85c0                 test eax, eax
// 004a3414  751d                 jne 0x4a3433
// 004a3416  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 004a341c  e85f19faff           call 0x444d80
// 004a3421  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 004a3427  85c9                 test ecx, ecx
// 004a3429  7408                 je 0x4a3433
// 004a342b  8b01                 mov eax, dword ptr [ecx]
// 004a342d  8b10                 mov edx, dword ptr [eax]
// 004a342f  6a01                 push 1
// 004a3431  ffd2                 call edx
// 004a3433  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 004a343d  8d4e50               lea ecx, [esi + 0x50]
// 004a3440  c644241400           mov byte ptr [esp + 0x14], 0
// 004a3445  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a344b  8b4638               mov eax, dword ptr [esi + 0x38]
// 004a344e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a3456  85c0                 test eax, eax
// 004a3458  7428                 je 0x4a3482
// 004a345a  83c004               add eax, 4
// 004a345d  50                   push eax
// 004a345e  ffd7                 call edi
// 004a3460  85c0                 test eax, eax
// 004a3462  7517                 jne 0x4a347b
// 004a3464  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004a3467  e81419faff           call 0x444d80
// 004a346c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004a346f  85c9                 test ecx, ecx
// 004a3471  7408                 je 0x4a347b
// 004a3473  8b01                 mov eax, dword ptr [ecx]
// 004a3475  8b10                 mov edx, dword ptr [eax]
// 004a3477  6a01                 push 1
// 004a3479  ffd2                 call edx
// 004a347b  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004a3482  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a3486  5f                   pop edi
// 004a3487  5e                   pop esi
// 004a3488  64890d00000000       mov dword ptr fs:[0], ecx
// 004a348f  83c410               add esp, 0x10
// 004a3492  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??1RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
