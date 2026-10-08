// roc 2008-06 0047b450  unit: CInstanceRecord::CNameItem  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047b450
//
// 0047b450  56                   push esi
// 0047b451  8bf1                 mov esi, ecx
// 0047b453  e878fbffff           call 0x47afd0
// 0047b458  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 0047b45e  85c9                 test ecx, ecx
// 0047b460  7408                 je 0x47b46a
// 0047b462  8b01                 mov eax, dword ptr [ecx]
// 0047b464  8b5004               mov edx, dword ptr [eax + 4]
// 0047b467  56                   push esi
// 0047b468  ffd2                 call edx
// 0047b46a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047b46e  83e801               sub eax, 1
// 0047b471  741c                 je 0x47b48f
// 0047b473  83e801               sub eax, 1
// 0047b476  7410                 je 0x47b488
// 0047b478  83e802               sub eax, 2
// 0047b47b  7404                 je 0x47b481
// 0047b47d  33c0                 xor eax, eax
// 0047b47f  eb13                 jmp 0x47b494
// 0047b481  b805140000           mov eax, 0x1405
// 0047b486  eb0c                 jmp 0x47b494
// 0047b488  b803140000           mov eax, 0x1403
// 0047b48d  eb05                 jmp 0x47b494
// 0047b48f  b801140000           mov eax, 0x1401
// 0047b494  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047b498  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047b49c  51                   push ecx
// 0047b49d  50                   push eax
// 0047b49e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047b4a2  52                   push edx
// 0047b4a3  e8c8b3ffff           call 0x476870
// 0047b4a8  50                   push eax
// 0047b4a9  ff15502a8000         call dword ptr [0x802a50]
// 0047b4af  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 0047b4b5  85c9                 test ecx, ecx
// 0047b4b7  7416                 je 0x47b4cf
// 0047b4b9  c6861101000001       mov byte ptr [esi + 0x111], 1
// 0047b4c0  8b01                 mov eax, dword ptr [ecx]
// 0047b4c2  8b5014               mov edx, dword ptr [eax + 0x14]
// 0047b4c5  56                   push esi
// 0047b4c6  ffd2                 call edx
// 0047b4c8  c6861101000000       mov byte ptr [esi + 0x111], 0
// 0047b4cf  5e                   pop esi
// 0047b4d0  c21000               ret 0x10
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?internalSendIndices@RenderDevice@G3D@@AAEXW4Primitive@12@IHPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
