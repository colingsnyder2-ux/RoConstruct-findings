// roc 2007-03 004f2a10  unit: seg_004f0000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2a10
//
// 004f2a10  83ec20               sub esp, 0x20
// 004f2a13  57                   push edi
// 004f2a14  8bf9                 mov edi, ecx
// 004f2a16  833f00               cmp dword ptr [edi], 0
// 004f2a19  0f8484000000         je 0x4f2aa3
// 004f2a1f  56                   push esi
// 004f2a20  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004f2a24  8bce                 mov ecx, esi
// 004f2a26  e8f573f8ff           call 0x479e20
// 004f2a2b  8d442418             lea eax, [esp + 0x18]
// 004f2a2f  50                   push eax
// 004f2a30  8bce                 mov ecx, esi
// 004f2a32  e86910f8ff           call 0x473aa0
// 004f2a37  8d4c2418             lea ecx, [esp + 0x18]
// 004f2a3b  51                   push ecx
// 004f2a3c  8bcf                 mov ecx, edi
// 004f2a3e  e84dfdffff           call 0x4f2790
// 004f2a43  8b4f04               mov ecx, dword ptr [edi + 4]
// 004f2a46  6a01                 push 1
// 004f2a48  8d54241c             lea edx, [esp + 0x1c]
// 004f2a4c  52                   push edx
// 004f2a4d  e8dedbf7ff           call 0x470630
// 004f2a52  8b4f08               mov ecx, dword ptr [edi + 8]
// 004f2a55  6a01                 push 1
// 004f2a57  8d44241c             lea eax, [esp + 0x1c]
// 004f2a5b  50                   push eax
// 004f2a5c  e8cfdbf7ff           call 0x470630
// 004f2a61  57                   push edi
// 004f2a62  8bce                 mov ecx, esi
// 004f2a64  e80733f8ff           call 0x475d70
// 004f2a69  e8b2de0000           call 0x500920
// 004f2a6e  d900                 fld dword ptr [eax]
// 004f2a70  d95c2408             fstp dword ptr [esp + 8]
// 004f2a74  8d4c2408             lea ecx, [esp + 8]
// 004f2a78  d94004               fld dword ptr [eax + 4]
// 004f2a7b  51                   push ecx
// 004f2a7c  d95c2410             fstp dword ptr [esp + 0x10]
// 004f2a80  8d54241c             lea edx, [esp + 0x1c]
// 004f2a84  d94008               fld dword ptr [eax + 8]
// 004f2a87  56                   push esi
// 004f2a88  d95c2418             fstp dword ptr [esp + 0x18]
// 004f2a8c  52                   push edx
// 004f2a8d  d9e8                 fld1 
// 004f2a8f  d95c2420             fstp dword ptr [esp + 0x20]
// 004f2a93  e808ea2300           call 0x7314a0
// 004f2a98  83c40c               add esp, 0xc
// 004f2a9b  8bce                 mov ecx, esi
// 004f2a9d  e81e73f8ff           call 0x479dc0
// 004f2aa2  5e                   pop esi
// 004f2aa3  5f                   pop edi
// 004f2aa4  83c420               add esp, 0x20
// 004f2aa7  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?apply@DepthBlur@Render@RBX@@QAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
