// roc 2009-06 004a2960  unit: G3D::PBVTextureFormat::?$Table  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a2960
//
// 004a2960  56                   push esi
// 004a2961  8bf1                 mov esi, ecx
// 004a2963  e878fbffff           call 0x4a24e0
// 004a2968  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 004a296e  85c9                 test ecx, ecx
// 004a2970  7408                 je 0x4a297a
// 004a2972  8b01                 mov eax, dword ptr [ecx]
// 004a2974  8b5004               mov edx, dword ptr [eax + 4]
// 004a2977  56                   push esi
// 004a2978  ffd2                 call edx
// 004a297a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a297e  83e801               sub eax, 1
// 004a2981  741c                 je 0x4a299f
// 004a2983  83e801               sub eax, 1
// 004a2986  7410                 je 0x4a2998
// 004a2988  83e802               sub eax, 2
// 004a298b  7404                 je 0x4a2991
// 004a298d  33c0                 xor eax, eax
// 004a298f  eb13                 jmp 0x4a29a4
// 004a2991  b805140000           mov eax, 0x1405
// 004a2996  eb0c                 jmp 0x4a29a4
// 004a2998  b803140000           mov eax, 0x1403
// 004a299d  eb05                 jmp 0x4a29a4
// 004a299f  b801140000           mov eax, 0x1401
// 004a29a4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a29a8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a29ac  51                   push ecx
// 004a29ad  50                   push eax
// 004a29ae  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a29b2  52                   push edx
// 004a29b3  e828b5ffff           call 0x49dee0
// 004a29b8  50                   push eax
// 004a29b9  ff15ecea8900         call dword ptr [0x89eaec]
// 004a29bf  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004a29c5  85c9                 test ecx, ecx
// 004a29c7  7416                 je 0x4a29df
// 004a29c9  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004a29d0  8b01                 mov eax, dword ptr [ecx]
// 004a29d2  8b5014               mov edx, dword ptr [eax + 0x14]
// 004a29d5  56                   push esi
// 004a29d6  ffd2                 call edx
// 004a29d8  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004a29df  5e                   pop esi
// 004a29e0  c21000               ret 0x10
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?internalSendIndices@RenderDevice@G3D@@AAEXW4Primitive@12@IHPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
