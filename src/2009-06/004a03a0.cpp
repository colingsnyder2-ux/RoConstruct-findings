// roc 2009-06 004a03a0  unit: G3D::VARArea  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a03a0
//
// 004a03a0  56                   push esi
// 004a03a1  8b742408             mov esi, dword ptr [esp + 8]
// 004a03a5  b801000000           mov eax, 1
// 004a03aa  014174               add dword ptr [ecx + 0x74], eax
// 004a03ad  8b16                 mov edx, dword ptr [esi]
// 004a03af  3b91e8030000         cmp edx, dword ptr [ecx + 0x3e8]
// 004a03b5  57                   push edi
// 004a03b6  8db9e8030000         lea edi, [ecx + 0x3e8]
// 004a03bc  743b                 je 0x4a03f9
// 004a03be  01416c               add dword ptr [ecx + 0x6c], eax
// 004a03c1  833e00               cmp dword ptr [esi], 0
// 004a03c4  750e                 jne 0x4a03d4
// 004a03c6  c781e403000006000000 mov dword ptr [ecx + 0x3e4], 6
// 004a03d0  6a00                 push 0
// 004a03d2  eb10                 jmp 0x4a03e4
// 004a03d4  c781e40300000b000000 mov dword ptr [ecx + 0x3e4], 0xb
// 004a03de  8b06                 mov eax, dword ptr [esi]
// 004a03e0  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 004a03e3  51                   push ecx
// 004a03e4  68408d0000           push 0x8d40
// 004a03e9  ff1540d3a300         call dword ptr [0xa3d340]
// 004a03ef  8b16                 mov edx, dword ptr [esi]
// 004a03f1  52                   push edx
// 004a03f2  8bcf                 mov ecx, edi
// 004a03f4  e867f4ffff           call 0x49f860
// 004a03f9  5f                   pop edi
// 004a03fa  5e                   pop esi
// 004a03fb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setFramebuffer@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
