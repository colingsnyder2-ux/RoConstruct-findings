// roc 2007-08 004feea0  unit: RBX::Render::AggregateChunk  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004feea0
//
// 004feea0  83ec20               sub esp, 0x20
// 004feea3  57                   push edi
// 004feea4  8bf9                 mov edi, ecx
// 004feea6  833f00               cmp dword ptr [edi], 0
// 004feea9  0f8484000000         je 0x4fef33
// 004feeaf  56                   push esi
// 004feeb0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004feeb4  8bce                 mov ecx, esi
// 004feeb6  e815aef7ff           call 0x479cd0
// 004feebb  8d442418             lea eax, [esp + 0x18]
// 004feebf  50                   push eax
// 004feec0  8bce                 mov ecx, esi
// 004feec2  e8d94af7ff           call 0x4739a0
// 004feec7  8d4c2418             lea ecx, [esp + 0x18]
// 004feecb  51                   push ecx
// 004feecc  8bcf                 mov ecx, edi
// 004feece  e84dfdffff           call 0x4fec20
// 004feed3  8b4f04               mov ecx, dword ptr [edi + 4]
// 004feed6  6a01                 push 1
// 004feed8  8d54241c             lea edx, [esp + 0x1c]
// 004feedc  52                   push edx
// 004feedd  e85e17f7ff           call 0x470640
// 004feee2  8b4f08               mov ecx, dword ptr [edi + 8]
// 004feee5  6a01                 push 1
// 004feee7  8d44241c             lea eax, [esp + 0x1c]
// 004feeeb  50                   push eax
// 004feeec  e84f17f7ff           call 0x470640
// 004feef1  57                   push edi
// 004feef2  8bce                 mov ecx, esi
// 004feef4  e8176df7ff           call 0x475c10
// 004feef9  e802c30000           call 0x50b200
// 004feefe  d900                 fld dword ptr [eax]
// 004fef00  d95c2408             fstp dword ptr [esp + 8]
// 004fef04  8d4c2408             lea ecx, [esp + 8]
// 004fef08  d94004               fld dword ptr [eax + 4]
// 004fef0b  51                   push ecx
// 004fef0c  d95c2410             fstp dword ptr [esp + 0x10]
// 004fef10  8d54241c             lea edx, [esp + 0x1c]
// 004fef14  d94008               fld dword ptr [eax + 8]
// 004fef17  56                   push esi
// 004fef18  d95c2418             fstp dword ptr [esp + 0x18]
// 004fef1c  52                   push edx
// 004fef1d  d9e8                 fld1 
// 004fef1f  d95c2420             fstp dword ptr [esp + 0x20]
// 004fef23  e848fe2200           call 0x72ed70
// 004fef28  83c40c               add esp, 0xc
// 004fef2b  8bce                 mov ecx, esi
// 004fef2d  e83eadf7ff           call 0x479c70
// 004fef32  5e                   pop esi
// 004fef33  5f                   pop edi
// 004fef34  83c420               add esp, 0x20
// 004fef37  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?apply@DepthBlur@Render@RBX@@QAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
