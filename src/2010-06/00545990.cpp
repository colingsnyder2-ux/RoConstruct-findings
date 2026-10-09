// roc 2010-06 00545990  unit: RBX::RbxG3D::RenderScene  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00545990
//
// 00545990  6aff                 push -1
// 00545992  6804ff9800           push 0x98ff04
// 00545997  64a100000000         mov eax, dword ptr fs:[0]
// 0054599d  50                   push eax
// 0054599e  64892500000000       mov dword ptr fs:[0], esp
// 005459a5  83ec4c               sub esp, 0x4c
// 005459a8  56                   push esi
// 005459a9  8bf1                 mov esi, ecx
// 005459ab  8b4604               mov eax, dword ptr [esi + 4]
// 005459ae  3b4608               cmp eax, dword ptr [esi + 8]
// 005459b1  89742404             mov dword ptr [esp + 4], esi
// 005459b5  7d3b                 jge 0x5459f2
// 005459b7  8b16                 mov edx, dword ptr [esi]
// 005459b9  8bc8                 mov ecx, eax
// 005459bb  c1e104               shl ecx, 4
// 005459be  03c8                 add ecx, eax
// 005459c0  8d0c8a               lea ecx, [edx + ecx*4]
// 005459c3  894c2408             mov dword ptr [esp + 8], ecx
// 005459c7  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005459cf  85c9                 test ecx, ecx
// 005459d1  740a                 je 0x5459dd
// 005459d3  8b442460             mov eax, dword ptr [esp + 0x60]
// 005459d7  50                   push eax
// 005459d8  e8f3e7ffff           call 0x5441d0
// 005459dd  ff4604               inc dword ptr [esi + 4]
// 005459e0  5e                   pop esi
// 005459e1  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005459e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005459ec  83c458               add esp, 0x58
// 005459ef  c20400               ret 4
// 005459f2  8b0e                 mov ecx, dword ptr [esi]
// 005459f4  57                   push edi
// 005459f5  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 005459f9  3bf9                 cmp edi, ecx
// 005459fb  7276                 jb 0x545a73
// 005459fd  8bd0                 mov edx, eax
// 005459ff  c1e204               shl edx, 4
// 00545a02  03d0                 add edx, eax
// 00545a04  8d0c91               lea ecx, [ecx + edx*4]
// 00545a07  3bf9                 cmp edi, ecx
// 00545a09  7368                 jae 0x545a73
// 00545a0b  57                   push edi
// 00545a0c  8d4c2414             lea ecx, [esp + 0x14]
// 00545a10  e8bbe7ffff           call 0x5441d0
// 00545a15  8d542410             lea edx, [esp + 0x10]
// 00545a19  52                   push edx
// 00545a1a  8bce                 mov ecx, esi
// 00545a1c  c744246001000000     mov dword ptr [esp + 0x60], 1
// 00545a24  e867ffffff           call 0x545990
// 00545a29  8b442450             mov eax, dword ptr [esp + 0x50]
// 00545a2d  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00545a35  85c0                 test eax, eax
// 00545a37  745b                 je 0x545a94
// 00545a39  83c004               add eax, 4
// 00545a3c  50                   push eax
// 00545a3d  ff157ca39e00         call dword ptr [0x9ea37c]
// 00545a43  85c0                 test eax, eax
// 00545a45  754d                 jne 0x545a94
// 00545a47  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00545a4b  e8d0e0f3ff           call 0x483b20
// 00545a50  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00545a54  85c9                 test ecx, ecx
// 00545a56  743c                 je 0x545a94
// 00545a58  8b01                 mov eax, dword ptr [ecx]
// 00545a5a  8b10                 mov edx, dword ptr [eax]
// 00545a5c  6a01                 push 1
// 00545a5e  ffd2                 call edx
// 00545a60  5f                   pop edi
// 00545a61  5e                   pop esi
// 00545a62  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00545a66  64890d00000000       mov dword ptr fs:[0], ecx
// 00545a6d  83c458               add esp, 0x58
// 00545a70  c20400               ret 4
// 00545a73  6a00                 push 0
// 00545a75  40                   inc eax
// 00545a76  50                   push eax
// 00545a77  8bce                 mov ecx, esi
// 00545a79  e842f6ffff           call 0x5450c0
// 00545a7e  8b4604               mov eax, dword ptr [esi + 4]
// 00545a81  8b16                 mov edx, dword ptr [esi]
// 00545a83  8bc8                 mov ecx, eax
// 00545a85  c1e104               shl ecx, 4
// 00545a88  03c8                 add ecx, eax
// 00545a8a  57                   push edi
// 00545a8b  8d4c8abc             lea ecx, [edx + ecx*4 - 0x44]
// 00545a8f  e89ce7ffff           call 0x544230
// 00545a94  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00545a98  5f                   pop edi
// 00545a99  5e                   pop esi
// 00545a9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00545aa1  83c458               add esp, 0x58
// 00545aa4  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?append@?$Array@VRenderSurface@Render@RBX@@@G3D@@QAEXABVRenderSurface@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
