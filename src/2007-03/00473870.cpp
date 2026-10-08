// roc 2007-03 00473870  unit: seg_00470000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473870
//
// 00473870  56                   push esi
// 00473871  8bf1                 mov esi, ecx
// 00473873  57                   push edi
// 00473874  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473878  b901000000           mov ecx, 1
// 0047387d  014e78               add dword ptr [esi + 0x78], ecx
// 00473880  3bbe18040000         cmp edi, dword ptr [esi + 0x418]
// 00473886  7465                 je 0x4738ed
// 00473888  014e70               add dword ptr [esi + 0x70], ecx
// 0047388b  8bc7                 mov eax, edi
// 0047388d  83e800               sub eax, 0
// 00473890  743f                 je 0x4738d1
// 00473892  2bc1                 sub eax, ecx
// 00473894  741a                 je 0x4738b0
// 00473896  2bc1                 sub eax, ecx
// 00473898  754d                 jne 0x4738e7
// 0047389a  68440b0000           push 0xb44
// 0047389f  ff1574eb7700         call dword ptr [0x77eb74]
// 004738a5  89be18040000         mov dword ptr [esi + 0x418], edi
// 004738ab  5f                   pop edi
// 004738ac  5e                   pop esi
// 004738ad  c20400               ret 4
// 004738b0  68440b0000           push 0xb44
// 004738b5  ff156ceb7700         call dword ptr [0x77eb6c]
// 004738bb  6805040000           push 0x405
// 004738c0  ff15d4eb7700         call dword ptr [0x77ebd4]
// 004738c6  89be18040000         mov dword ptr [esi + 0x418], edi
// 004738cc  5f                   pop edi
// 004738cd  5e                   pop esi
// 004738ce  c20400               ret 4
// 004738d1  68440b0000           push 0xb44
// 004738d6  ff156ceb7700         call dword ptr [0x77eb6c]
// 004738dc  6804040000           push 0x404
// 004738e1  ff15d4eb7700         call dword ptr [0x77ebd4]
// 004738e7  89be18040000         mov dword ptr [esi + 0x418], edi
// 004738ed  5f                   pop edi
// 004738ee  5e                   pop esi
// 004738ef  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCullFace@RenderDevice@G3D@@QAEXW4CullFace@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
