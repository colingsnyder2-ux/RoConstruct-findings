// roc 2007-08 0060aa70  unit: RBX::GlueJoint  size: 659 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060aa70
//
// 0060aa70  6aff                 push -1
// 0060aa72  68dbc47500           push 0x75c4db
// 0060aa77  64a100000000         mov eax, dword ptr fs:[0]
// 0060aa7d  50                   push eax
// 0060aa7e  64892500000000       mov dword ptr fs:[0], esp
// 0060aa85  81ec24010000         sub esp, 0x124
// 0060aa8b  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 0060aa92  53                   push ebx
// 0060aa93  8b9c2440010000       mov ebx, dword ptr [esp + 0x140]
// 0060aa9a  55                   push ebp
// 0060aa9b  8bac2440010000       mov ebp, dword ptr [esp + 0x140]
// 0060aaa2  56                   push esi
// 0060aaa3  57                   push edi
// 0060aaa4  8bbc2450010000       mov edi, dword ptr [esp + 0x150]
// 0060aaab  6a04                 push 4
// 0060aaad  57                   push edi
// 0060aaae  53                   push ebx
// 0060aaaf  55                   push ebp
// 0060aab0  8bf1                 mov esi, ecx
// 0060aab2  50                   push eax
// 0060aab3  89742424             mov dword ptr [esp + 0x24], esi
// 0060aab7  e8d4fbffff           call 0x60a690
// 0060aabc  d9ee                 fldz 
// 0060aabe  c706542e7c00         mov dword ptr [esi], 0x7c2e54
// 0060aac4  d996c0000000         fst dword ptr [esi + 0xc0]
// 0060aaca  d996c4000000         fst dword ptr [esi + 0xc4]
// 0060aad0  8d4e28               lea ecx, [esi + 0x28]
// 0060aad3  d996c8000000         fst dword ptr [esi + 0xc8]
// 0060aad9  51                   push ecx
// 0060aada  d996cc000000         fst dword ptr [esi + 0xcc]
// 0060aae0  c784244001000000000000 mov dword ptr [esp + 0x140], 0
// 0060aaeb  d996d0000000         fst dword ptr [esi + 0xd0]
// 0060aaf1  d996d4000000         fst dword ptr [esi + 0xd4]
// 0060aaf7  d996d8000000         fst dword ptr [esi + 0xd8]
// 0060aafd  d996dc000000         fst dword ptr [esi + 0xdc]
// 0060ab03  d996e0000000         fst dword ptr [esi + 0xe0]
// 0060ab09  d996e4000000         fst dword ptr [esi + 0xe4]
// 0060ab0f  d996e8000000         fst dword ptr [esi + 0xe8]
// 0060ab15  d996ec000000         fst dword ptr [esi + 0xec]
// 0060ab1b  d996f0000000         fst dword ptr [esi + 0xf0]
// 0060ab21  d996f4000000         fst dword ptr [esi + 0xf4]
// 0060ab27  d996f8000000         fst dword ptr [esi + 0xf8]
// 0060ab2d  d996fc000000         fst dword ptr [esi + 0xfc]
// 0060ab33  d99600010000         fst dword ptr [esi + 0x100]
// 0060ab39  d99604010000         fst dword ptr [esi + 0x104]
// 0060ab3f  d99608010000         fst dword ptr [esi + 0x108]
// 0060ab45  d9960c010000         fst dword ptr [esi + 0x10c]
// 0060ab4b  d99610010000         fst dword ptr [esi + 0x110]
// 0060ab51  d99614010000         fst dword ptr [esi + 0x114]
// 0060ab57  d99618010000         fst dword ptr [esi + 0x118]
// 0060ab5d  d99e1c010000         fstp dword ptr [esi + 0x11c]
// 0060ab63  e898effaff           call 0x5b9b00
// 0060ab68  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 0060ab6f  83c404               add esp, 4
// 0060ab72  50                   push eax
// 0060ab73  8d9424d8000000       lea edx, [esp + 0xd8]
// 0060ab7a  52                   push edx
// 0060ab7b  e8409efaff           call 0x5b49c0
// 0060ab80  8d4658               lea eax, [esi + 0x58]
// 0060ab83  50                   push eax
// 0060ab84  e877effaff           call 0x5b9b00
// 0060ab89  50                   push eax
// 0060ab8a  e8c1edfaff           call 0x5b9950
// 0060ab8f  83c408               add esp, 8
// 0060ab92  50                   push eax
// 0060ab93  8d4c2448             lea ecx, [esp + 0x48]
// 0060ab97  51                   push ecx
// 0060ab98  8bcd                 mov ecx, ebp
// 0060ab9a  e8219efaff           call 0x5b49c0
// 0060ab9f  53                   push ebx
// 0060aba0  8d9424a8000000       lea edx, [esp + 0xa8]
// 0060aba7  52                   push edx
// 0060aba8  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 0060abaf  e8fc330000           call 0x60dfb0
// 0060abb4  57                   push edi
// 0060abb5  8d442478             lea eax, [esp + 0x78]
// 0060abb9  50                   push eax
// 0060abba  8d4c244c             lea ecx, [esp + 0x4c]
// 0060abbe  e8ed330000           call 0x60dfb0
// 0060abc3  8d4c2474             lea ecx, [esp + 0x74]
// 0060abc7  51                   push ecx
// 0060abc8  8d542418             lea edx, [esp + 0x18]
// 0060abcc  52                   push edx
// 0060abcd  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0060abd4  e807380000           call 0x60e3e0
// 0060abd9  51                   push ecx
// 0060abda  d905b07e7900         fld dword ptr [0x797eb0]
// 0060abe0  8d4c2418             lea ecx, [esp + 0x18]
// 0060abe4  d91c24               fstp dword ptr [esp]
// 0060abe7  e8b4300000           call 0x60dca0
// 0060abec  53                   push ebx
// 0060abed  8d842408010000       lea eax, [esp + 0x108]
// 0060abf4  50                   push eax
// 0060abf5  8d4c241c             lea ecx, [esp + 0x1c]
// 0060abf9  e832320000           call 0x60de30
// 0060abfe  d900                 fld dword ptr [eax]
// 0060ac00  d99ec0000000         fstp dword ptr [esi + 0xc0]
// 0060ac06  57                   push edi
// 0060ac07  d94004               fld dword ptr [eax + 4]
// 0060ac0a  8d8c2408010000       lea ecx, [esp + 0x108]
// 0060ac11  d99ec4000000         fstp dword ptr [esi + 0xc4]
// 0060ac17  51                   push ecx
// 0060ac18  d94008               fld dword ptr [eax + 8]
// 0060ac1b  8d4c241c             lea ecx, [esp + 0x1c]
// 0060ac1f  d99ec8000000         fstp dword ptr [esi + 0xc8]
// 0060ac25  d9400c               fld dword ptr [eax + 0xc]
// 0060ac28  d99ecc000000         fstp dword ptr [esi + 0xcc]
// 0060ac2e  d94010               fld dword ptr [eax + 0x10]
// 0060ac31  d99ed0000000         fstp dword ptr [esi + 0xd0]
// 0060ac37  d94014               fld dword ptr [eax + 0x14]
// 0060ac3a  d99ed4000000         fstp dword ptr [esi + 0xd4]
// 0060ac40  d94018               fld dword ptr [eax + 0x18]
// 0060ac43  d99ed8000000         fstp dword ptr [esi + 0xd8]
// 0060ac49  d9401c               fld dword ptr [eax + 0x1c]
// 0060ac4c  d99edc000000         fstp dword ptr [esi + 0xdc]
// 0060ac52  d94020               fld dword ptr [eax + 0x20]
// 0060ac55  d99ee0000000         fstp dword ptr [esi + 0xe0]
// 0060ac5b  d94024               fld dword ptr [eax + 0x24]
// 0060ac5e  d99ee4000000         fstp dword ptr [esi + 0xe4]
// 0060ac64  d94028               fld dword ptr [eax + 0x28]
// 0060ac67  d99ee8000000         fstp dword ptr [esi + 0xe8]
// 0060ac6d  d9402c               fld dword ptr [eax + 0x2c]
// 0060ac70  d99eec000000         fstp dword ptr [esi + 0xec]
// 0060ac76  e8b5310000           call 0x60de30
// 0060ac7b  d900                 fld dword ptr [eax]
// 0060ac7d  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 0060ac84  d99ef0000000         fstp dword ptr [esi + 0xf0]
// 0060ac8a  5f                   pop edi
// 0060ac8b  d94004               fld dword ptr [eax + 4]
// 0060ac8e  d99ef4000000         fstp dword ptr [esi + 0xf4]
// 0060ac94  d94008               fld dword ptr [eax + 8]
// 0060ac97  d99ef8000000         fstp dword ptr [esi + 0xf8]
// 0060ac9d  d9400c               fld dword ptr [eax + 0xc]
// 0060aca0  d99efc000000         fstp dword ptr [esi + 0xfc]
// 0060aca6  d94010               fld dword ptr [eax + 0x10]
// 0060aca9  d99e00010000         fstp dword ptr [esi + 0x100]
// 0060acaf  d94014               fld dword ptr [eax + 0x14]
// 0060acb2  d99e04010000         fstp dword ptr [esi + 0x104]
// 0060acb8  d94018               fld dword ptr [eax + 0x18]
// 0060acbb  d99e08010000         fstp dword ptr [esi + 0x108]
// 0060acc1  d9401c               fld dword ptr [eax + 0x1c]
// 0060acc4  d99e0c010000         fstp dword ptr [esi + 0x10c]
// 0060acca  d94020               fld dword ptr [eax + 0x20]
// 0060accd  d99e10010000         fstp dword ptr [esi + 0x110]
// 0060acd3  d94024               fld dword ptr [eax + 0x24]
// 0060acd6  d99e14010000         fstp dword ptr [esi + 0x114]
// 0060acdc  d94028               fld dword ptr [eax + 0x28]
// 0060acdf  d99e18010000         fstp dword ptr [esi + 0x118]
// 0060ace5  d9402c               fld dword ptr [eax + 0x2c]
// 0060ace8  8bc6                 mov eax, esi
// 0060acea  d99e1c010000         fstp dword ptr [esi + 0x11c]
// 0060acf0  5e                   pop esi
// 0060acf1  5d                   pop ebp
// 0060acf2  5b                   pop ebx
// 0060acf3  64890d00000000       mov dword ptr fs:[0], ecx
// 0060acfa  81c430010000         add esp, 0x130
// 0060ad00  c21000               ret 0x10
// library rbxgs/v8world\GlueJoint.cpp (function ??0GlueJoint@RBX@@QAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/GlueJoint.cpp
