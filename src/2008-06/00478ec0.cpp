// roc 2008-06 00478ec0  unit: CInstanceRecord::CNameItem  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478ec0
//
// 00478ec0  56                   push esi
// 00478ec1  8b742408             mov esi, dword ptr [esp + 8]
// 00478ec5  b801000000           mov eax, 1
// 00478eca  014174               add dword ptr [ecx + 0x74], eax
// 00478ecd  8b16                 mov edx, dword ptr [esi]
// 00478ecf  3b91e8030000         cmp edx, dword ptr [ecx + 0x3e8]
// 00478ed5  57                   push edi
// 00478ed6  8db9e8030000         lea edi, [ecx + 0x3e8]
// 00478edc  743b                 je 0x478f19
// 00478ede  01416c               add dword ptr [ecx + 0x6c], eax
// 00478ee1  833e00               cmp dword ptr [esi], 0
// 00478ee4  750e                 jne 0x478ef4
// 00478ee6  c781e403000006000000 mov dword ptr [ecx + 0x3e4], 6
// 00478ef0  6a00                 push 0
// 00478ef2  eb10                 jmp 0x478f04
// 00478ef4  c781e40300000b000000 mov dword ptr [ecx + 0x3e4], 0xb
// 00478efe  8b06                 mov eax, dword ptr [esi]
// 00478f00  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00478f03  51                   push ecx
// 00478f04  68408d0000           push 0x8d40
// 00478f09  ff15e0f99600         call dword ptr [0x96f9e0]
// 00478f0f  8b16                 mov edx, dword ptr [esi]
// 00478f11  52                   push edx
// 00478f12  8bcf                 mov ecx, edi
// 00478f14  e887001200           call 0x598fa0
// 00478f19  5f                   pop edi
// 00478f1a  5e                   pop esi
// 00478f1b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setFramebuffer@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
