// roc 2010-06 004936a0  unit: seg_00490000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004936a0
//
// 004936a0  56                   push esi
// 004936a1  8b742408             mov esi, dword ptr [esp + 8]
// 004936a5  b801000000           mov eax, 1
// 004936aa  014174               add dword ptr [ecx + 0x74], eax
// 004936ad  8b16                 mov edx, dword ptr [esi]
// 004936af  3b91e8030000         cmp edx, dword ptr [ecx + 0x3e8]
// 004936b5  57                   push edi
// 004936b6  8db9e8030000         lea edi, [ecx + 0x3e8]
// 004936bc  743b                 je 0x4936f9
// 004936be  01416c               add dword ptr [ecx + 0x6c], eax
// 004936c1  833e00               cmp dword ptr [esi], 0
// 004936c4  750e                 jne 0x4936d4
// 004936c6  c781e403000006000000 mov dword ptr [ecx + 0x3e4], 6
// 004936d0  6a00                 push 0
// 004936d2  eb10                 jmp 0x4936e4
// 004936d4  c781e40300000b000000 mov dword ptr [ecx + 0x3e4], 0xb
// 004936de  8b06                 mov eax, dword ptr [esi]
// 004936e0  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 004936e3  51                   push ecx
// 004936e4  68408d0000           push 0x8d40
// 004936e9  ff15803bc000         call dword ptr [0xc03b80]
// 004936ef  8b16                 mov edx, dword ptr [esi]
// 004936f1  52                   push edx
// 004936f2  8bcf                 mov ecx, edi
// 004936f4  e82736ffff           call 0x486d20
// 004936f9  5f                   pop edi
// 004936fa  5e                   pop esi
// 004936fb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setFramebuffer@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
