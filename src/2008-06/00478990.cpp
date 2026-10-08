// roc 2008-06 00478990  unit: CInstanceRecord::CNameItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478990
//
// 00478990  56                   push esi
// 00478991  8bf1                 mov esi, ecx
// 00478993  8b4634               mov eax, dword ptr [esi + 0x34]
// 00478996  014678               add dword ptr [esi + 0x78], eax
// 00478999  014670               add dword ptr [esi + 0x70], eax
// 0047899c  50                   push eax
// 0047899d  8b4630               mov eax, dword ptr [esi + 0x30]
// 004789a0  50                   push eax
// 004789a1  e85af5ffff           call 0x477f00
// 004789a6  ff15bc298000         call dword ptr [0x8029bc]
// 004789ac  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 004789b2  c6861001000000       mov byte ptr [esi + 0x110], 0
// 004789b9  85c9                 test ecx, ecx
// 004789bb  7416                 je 0x4789d3
// 004789bd  c6861101000001       mov byte ptr [esi + 0x111], 1
// 004789c4  8b11                 mov edx, dword ptr [ecx]
// 004789c6  8b4214               mov eax, dword ptr [edx + 0x14]
// 004789c9  56                   push esi
// 004789ca  ffd0                 call eax
// 004789cc  c6861101000000       mov byte ptr [esi + 0x111], 0
// 004789d3  5e                   pop esi
// 004789d4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
