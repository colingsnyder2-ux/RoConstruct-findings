// roc 2007-03 00477fa0  unit: seg_00470000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00477fa0
//
// 00477fa0  56                   push esi
// 00477fa1  8bf1                 mov esi, ecx
// 00477fa3  e898fbffff           call 0x477b40
// 00477fa8  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 00477fae  85c9                 test ecx, ecx
// 00477fb0  7408                 je 0x477fba
// 00477fb2  8b01                 mov eax, dword ptr [ecx]
// 00477fb4  8b5004               mov edx, dword ptr [eax + 4]
// 00477fb7  56                   push esi
// 00477fb8  ffd2                 call edx
// 00477fba  8b442408             mov eax, dword ptr [esp + 8]
// 00477fbe  c6861001000001       mov byte ptr [esi + 0x110], 1
// 00477fc5  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00477fcc  894630               mov dword ptr [esi + 0x30], eax
// 00477fcf  e88cb4ffff           call 0x473460
// 00477fd4  5e                   pop esi
// 00477fd5  89442404             mov dword ptr [esp + 4], eax
// 00477fd9  ff2548eb7700         jmp dword ptr [0x77eb48]
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginPrimitive@RenderDevice@G3D@@QAEXW4Primitive@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
