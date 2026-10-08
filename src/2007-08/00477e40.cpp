// roc 2007-08 00477e40  unit: CInstanceRecord::CNameItem  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00477e40
//
// 00477e40  56                   push esi
// 00477e41  8bf1                 mov esi, ecx
// 00477e43  e898fbffff           call 0x4779e0
// 00477e48  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 00477e4e  85c9                 test ecx, ecx
// 00477e50  7408                 je 0x477e5a
// 00477e52  8b01                 mov eax, dword ptr [ecx]
// 00477e54  8b5004               mov edx, dword ptr [eax + 4]
// 00477e57  56                   push esi
// 00477e58  ffd2                 call edx
// 00477e5a  8b442408             mov eax, dword ptr [esp + 8]
// 00477e5e  c6861001000001       mov byte ptr [esi + 0x110], 1
// 00477e65  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00477e6c  894630               mov dword ptr [esi + 0x30], eax
// 00477e6f  e8fcb4ffff           call 0x473370
// 00477e74  5e                   pop esi
// 00477e75  89442404             mov dword ptr [esp + 4], eax
// 00477e79  ff257ceb7700         jmp dword ptr [0x77eb7c]
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginPrimitive@RenderDevice@G3D@@QAEXW4Primitive@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
