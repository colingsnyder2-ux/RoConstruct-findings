// roc 2008-06 00646cc0  unit: RBX::GlueJoint  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646cc0
//
// 00646cc0  6aff                 push -1
// 00646cc2  68cbad7d00           push 0x7dadcb
// 00646cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00646ccd  50                   push eax
// 00646cce  64892500000000       mov dword ptr fs:[0], esp
// 00646cd5  81ec24010000         sub esp, 0x124
// 00646cdb  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 00646ce2  53                   push ebx
// 00646ce3  8b9c2440010000       mov ebx, dword ptr [esp + 0x140]
// 00646cea  55                   push ebp
// 00646ceb  8bac2440010000       mov ebp, dword ptr [esp + 0x140]
// 00646cf2  56                   push esi
// 00646cf3  57                   push edi
// 00646cf4  8bbc2450010000       mov edi, dword ptr [esp + 0x150]
// 00646cfb  6a04                 push 4
// 00646cfd  57                   push edi
// 00646cfe  53                   push ebx
// 00646cff  55                   push ebp
// 00646d00  8bf1                 mov esi, ecx
// 00646d02  50                   push eax
// 00646d03  89742424             mov dword ptr [esp + 0x24], esi
// 00646d07  e814fcffff           call 0x646920
// 00646d0c  d9ee                 fldz 
// 00646d0e  c7067cae8400         mov dword ptr [esi], 0x84ae7c
// 00646d14  d996c0000000         fst dword ptr [esi + 0xc0]
// 00646d1a  d996c4000000         fst dword ptr [esi + 0xc4]
// 00646d20  8d4e28               lea ecx, [esi + 0x28]
// 00646d23  d996c8000000         fst dword ptr [esi + 0xc8]
// 00646d29  51                   push ecx
// 00646d2a  d996cc000000         fst dword ptr [esi + 0xcc]
// 00646d30  c784244001000000000000 mov dword ptr [esp + 0x140], 0
// 00646d3b  d996d0000000         fst dword ptr [esi + 0xd0]
// 00646d41  d996d4000000         fst dword ptr [esi + 0xd4]
// 00646d47  d996d8000000         fst dword ptr [esi + 0xd8]
// 00646d4d  d996dc000000         fst dword ptr [esi + 0xdc]
// 00646d53  d996e0000000         fst dword ptr [esi + 0xe0]
// 00646d59  d996e4000000         fst dword ptr [esi + 0xe4]
// 00646d5f  d996e8000000         fst dword ptr [esi + 0xe8]
// 00646d65  d996ec000000         fst dword ptr [esi + 0xec]
// 00646d6b  d996f0000000         fst dword ptr [esi + 0xf0]
// 00646d71  d996f4000000         fst dword ptr [esi + 0xf4]
// 00646d77  d996f8000000         fst dword ptr [esi + 0xf8]
// 00646d7d  d996fc000000         fst dword ptr [esi + 0xfc]
// 00646d83  d99600010000         fst dword ptr [esi + 0x100]
// 00646d89  d99604010000         fst dword ptr [esi + 0x104]
// 00646d8f  d99608010000         fst dword ptr [esi + 0x108]
// 00646d95  d9960c010000         fst dword ptr [esi + 0x10c]
// 00646d9b  d99610010000         fst dword ptr [esi + 0x110]
// 00646da1  d99614010000         fst dword ptr [esi + 0x114]
// 00646da7  d99618010000         fst dword ptr [esi + 0x118]
// 00646dad  d99e1c010000         fstp dword ptr [esi + 0x11c]
// 00646db3  e85855faff           call 0x5ec310
// 00646db8  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 00646dbf  83c404               add esp, 4
// 00646dc2  50                   push eax
// 00646dc3  8d9424d8000000       lea edx, [esp + 0xd8]
// 00646dca  52                   push edx
// 00646dcb  e82009faff           call 0x5e76f0
// 00646dd0  8d4658               lea eax, [esi + 0x58]
// 00646dd3  50                   push eax
// 00646dd4  e83755faff           call 0x5ec310
// 00646dd9  50                   push eax
// 00646dda  e8a153faff           call 0x5ec180
// 00646ddf  83c408               add esp, 8
// 00646de2  50                   push eax
// 00646de3  8d4c2448             lea ecx, [esp + 0x48]
// 00646de7  51                   push ecx
// 00646de8  8bcd                 mov ecx, ebp
// 00646dea  e80109faff           call 0x5e76f0
// 00646def  53                   push ebx
// 00646df0  8d9424a8000000       lea edx, [esp + 0xa8]
// 00646df7  52                   push edx
// 00646df8  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00646dff  e8ec2c0000           call 0x649af0
// 00646e04  57                   push edi
// 00646e05  8d442478             lea eax, [esp + 0x78]
// 00646e09  50                   push eax
// 00646e0a  8d4c244c             lea ecx, [esp + 0x4c]
// 00646e0e  e8dd2c0000           call 0x649af0
// 00646e13  8d4c2474             lea ecx, [esp + 0x74]
// 00646e17  51                   push ecx
// 00646e18  8d542418             lea edx, [esp + 0x18]
// 00646e1c  52                   push edx
// 00646e1d  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00646e24  e8f7300000           call 0x649f20
// 00646e29  51                   push ecx
// 00646e2a  d90504e78100         fld dword ptr [0x81e704]
// 00646e30  8d4c2418             lea ecx, [esp + 0x18]
// 00646e34  d91c24               fstp dword ptr [esp]
// 00646e37  e8a4290000           call 0x6497e0
// 00646e3c  53                   push ebx
// 00646e3d  8d842408010000       lea eax, [esp + 0x108]
// 00646e44  50                   push eax
// 00646e45  8d4c241c             lea ecx, [esp + 0x1c]
// 00646e49  e8222b0000           call 0x649970
// 00646e4e  d900                 fld dword ptr [eax]
// 00646e50  d99ec0000000         fstp dword ptr [esi + 0xc0]
// 00646e56  57                   push edi
// 00646e57  d94004               fld dword ptr [eax + 4]
// 00646e5a  8d8c2408010000       lea ecx, [esp + 0x108]
// 00646e61  d99ec4000000         fstp dword ptr [esi + 0xc4]
// 00646e67  51                   push ecx
// 00646e68  d94008               fld dword ptr [eax + 8]
// 00646e6b  8d4c241c             lea ecx, [esp + 0x1c]
// 00646e6f  d99ec8000000         fstp dword ptr [esi + 0xc8]
// 00646e75  d9400c               fld dword ptr [eax + 0xc]
// 00646e78  d99ecc000000         fstp dword ptr [esi + 0xcc]
// 00646e7e  d94010               fld dword ptr [eax + 0x10]
// 00646e81  d99ed0000000         fstp dword ptr [esi + 0xd0]
// 00646e87  d94014               fld dword ptr [eax + 0x14]
// 00646e8a  d99ed4000000         fstp dword ptr [esi + 0xd4]
// 00646e90  d94018               fld dword ptr [eax + 0x18]
// 00646e93  d99ed8000000         fstp dword ptr [esi + 0xd8]
// 00646e99  d9401c               fld dword ptr [eax + 0x1c]
// 00646e9c  d99edc000000         fstp dword ptr [esi + 0xdc]
// 00646ea2  d94020               fld dword ptr [eax + 0x20]
// 00646ea5  d99ee0000000         fstp dword ptr [esi + 0xe0]
// 00646eab  d94024               fld dword ptr [eax + 0x24]
// 00646eae  d99ee4000000         fstp dword ptr [esi + 0xe4]
// 00646eb4  d94028               fld dword ptr [eax + 0x28]
// 00646eb7  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 00646ebd  d9402c               fld dword ptr [eax + 0x2c]
// 00646ec0  d99eec000000         fstp dword ptr [esi + 0xec]
// 00646ec6  e8a52a0000           call 0x649970
// 00646ecb  d900                 fld dword ptr [eax]
// 00646ecd  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00646ed4  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 00646eda  5f                   pop edi
// 00646edb  d94004               fld dword ptr [eax + 4]
// 00646ede  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 00646ee4  d94008               fld dword ptr [eax + 8]
// 00646ee7  d99ef8000000         fstp dword ptr [esi + 0xf8]
// 00646eed  d9400c               fld dword ptr [eax + 0xc]
// 00646ef0  d99efc000000         fstp dword ptr [esi + 0xfc]
// 00646ef6  d94010               fld dword ptr [eax + 0x10]
// 00646ef9  d99e00010000         fstp dword ptr [esi + 0x100]
// 00646eff  d94014               fld dword ptr [eax + 0x14]
// 00646f02  d99e04010000         fstp dword ptr [esi + 0x104]
// 00646f08  d94018               fld dword ptr [eax + 0x18]
// 00646f0b  d99e08010000         fstp dword ptr [esi + 0x108]
// 00646f11  d9401c               fld dword ptr [eax + 0x1c]
// 00646f14  d99e0c010000         fstp dword ptr [esi + 0x10c]
// 00646f1a  d94020               fld dword ptr [eax + 0x20]
// 00646f1d  d99e10010000         fstp dword ptr [esi + 0x110]
// 00646f23  d94024               fld dword ptr [eax + 0x24]
// 00646f26  d99e14010000         fstp dword ptr [esi + 0x114]
// 00646f2c  d94028               fld dword ptr [eax + 0x28]
// 00646f2f  d99e18010000         fstp dword ptr [esi + 0x118]
// 00646f35  d9402c               fld dword ptr [eax + 0x2c]
// 00646f38  8bc6                 mov eax, esi
// 00646f3a  d99e1c010000         fstp dword ptr [esi + 0x11c]
// 00646f40  5e                   pop esi
// 00646f41  5d                   pop ebp
// 00646f42  5b                   pop ebx
// 00646f43  64890d00000000       mov dword ptr fs:[0], ecx
// 00646f4a  81c430010000         add esp, 0x130
// 00646f50  c21000               ret 0x10
// library rbxgs/v8world\GlueJoint.cpp (function ??0GlueJoint@RBX@@QAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/GlueJoint.cpp
