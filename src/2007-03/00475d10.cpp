// roc 2007-03 00475d10  unit: seg_00470000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475d10
//
// 00475d10  56                   push esi
// 00475d11  8b742408             mov esi, dword ptr [esp + 8]
// 00475d15  b801000000           mov eax, 1
// 00475d1a  014174               add dword ptr [ecx + 0x74], eax
// 00475d1d  8b16                 mov edx, dword ptr [esi]
// 00475d1f  3b91e8030000         cmp edx, dword ptr [ecx + 0x3e8]
// 00475d25  57                   push edi
// 00475d26  8db9e8030000         lea edi, [ecx + 0x3e8]
// 00475d2c  743b                 je 0x475d69
// 00475d2e  01416c               add dword ptr [ecx + 0x6c], eax
// 00475d31  833e00               cmp dword ptr [esi], 0
// 00475d34  750e                 jne 0x475d44
// 00475d36  c781e403000006000000 mov dword ptr [ecx + 0x3e4], 6
// 00475d40  6a00                 push 0
// 00475d42  eb10                 jmp 0x475d54
// 00475d44  c781e40300000b000000 mov dword ptr [ecx + 0x3e4], 0xb
// 00475d4e  8b06                 mov eax, dword ptr [esi]
// 00475d50  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00475d53  51                   push ecx
// 00475d54  68408d0000           push 0x8d40
// 00475d59  ff1584818b00         call dword ptr [0x8b8184]
// 00475d5f  8b16                 mov edx, dword ptr [esi]
// 00475d61  52                   push edx
// 00475d62  8bcf                 mov ecx, edi
// 00475d64  e827f3ffff           call 0x475090
// 00475d69  5f                   pop edi
// 00475d6a  5e                   pop esi
// 00475d6b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setFramebuffer@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
