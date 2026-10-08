// roc 2008-06 0047b410  unit: CInstanceRecord::CNameItem  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047b410
//
// 0047b410  56                   push esi
// 0047b411  8bf1                 mov esi, ecx
// 0047b413  e8b8fbffff           call 0x47afd0
// 0047b418  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 0047b41e  85c9                 test ecx, ecx
// 0047b420  7408                 je 0x47b42a
// 0047b422  8b01                 mov eax, dword ptr [ecx]
// 0047b424  8b5004               mov edx, dword ptr [eax + 4]
// 0047b427  56                   push esi
// 0047b428  ffd2                 call edx
// 0047b42a  8b442408             mov eax, dword ptr [esp + 8]
// 0047b42e  c6861001000001       mov byte ptr [esi + 0x110], 1
// 0047b435  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0047b43c  894630               mov dword ptr [esi + 0x30], eax
// 0047b43f  e82cb4ffff           call 0x476870
// 0047b444  5e                   pop esi
// 0047b445  89442404             mov dword ptr [esp + 4], eax
// 0047b449  ff25c0298000         jmp dword ptr [0x8029c0]
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginPrimitive@RenderDevice@G3D@@QAEXW4Primitive@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
