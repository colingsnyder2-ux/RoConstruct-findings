// roc 2007-08 00476480  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476480
//
// 00476480  803d60cf8b0000       cmp byte ptr [0x8bcf60], 0
// 00476487  56                   push esi
// 00476488  8bf1                 mov esi, ecx
// 0047648a  740d                 je 0x476499
// 0047648c  6a00                 push 0
// 0047648e  6892880000           push 0x8892
// 00476493  ff15d0d98b00         call dword ptr [0x8bd9d0]
// 00476499  ff152ceb7700         call dword ptr [0x77eb2c]
// 0047649f  c6861201000000       mov byte ptr [esi + 0x112], 0
// 004764a6  8b4638               mov eax, dword ptr [esi + 0x38]
// 004764a9  85c0                 test eax, eax
// 004764ab  742c                 je 0x4764d9
// 004764ad  83c004               add eax, 4
// 004764b0  50                   push eax
// 004764b1  ff15e8d27700         call dword ptr [0x77d2e8]
// 004764b7  85c0                 test eax, eax
// 004764b9  7517                 jne 0x4764d2
// 004764bb  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004764be  e80d19feff           call 0x457dd0
// 004764c3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004764c6  85c9                 test ecx, ecx
// 004764c8  7408                 je 0x4764d2
// 004764ca  8b01                 mov eax, dword ptr [ecx]
// 004764cc  8b10                 mov edx, dword ptr [eax]
// 004764ce  6a01                 push 1
// 004764d0  ffd2                 call edx
// 004764d2  c7463800000000       mov dword ptr [esi + 0x38], 0
// 004764d9  5e                   pop esi
// 004764da  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?endIndexedPrimitives@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
