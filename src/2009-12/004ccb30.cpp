// roc 2009-12 004ccb30  unit: G3D::VARArea  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccb30
//
// 004ccb30  56                   push esi
// 004ccb31  8b742408             mov esi, dword ptr [esp + 8]
// 004ccb35  b801000000           mov eax, 1
// 004ccb3a  014174               add dword ptr [ecx + 0x74], eax
// 004ccb3d  8b16                 mov edx, dword ptr [esi]
// 004ccb3f  3b91e8030000         cmp edx, dword ptr [ecx + 0x3e8]
// 004ccb45  57                   push edi
// 004ccb46  8db9e8030000         lea edi, [ecx + 0x3e8]
// 004ccb4c  743b                 je 0x4ccb89
// 004ccb4e  01416c               add dword ptr [ecx + 0x6c], eax
// 004ccb51  833e00               cmp dword ptr [esi], 0
// 004ccb54  750e                 jne 0x4ccb64
// 004ccb56  c781e403000006000000 mov dword ptr [ecx + 0x3e4], 6
// 004ccb60  6a00                 push 0
// 004ccb62  eb10                 jmp 0x4ccb74
// 004ccb64  c781e40300000b000000 mov dword ptr [ecx + 0x3e4], 0xb
// 004ccb6e  8b06                 mov eax, dword ptr [esi]
// 004ccb70  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 004ccb73  51                   push ecx
// 004ccb74  68408d0000           push 0x8d40
// 004ccb79  ff15f0dab700         call dword ptr [0xb7daf0]
// 004ccb7f  8b16                 mov edx, dword ptr [esi]
// 004ccb81  52                   push edx
// 004ccb82  8bcf                 mov ecx, edi
// 004ccb84  e8e7eff7ff           call 0x44bb70
// 004ccb89  5f                   pop edi
// 004ccb8a  5e                   pop esi
// 004ccb8b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setFramebuffer@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
