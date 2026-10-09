// roc 2009-12 004fcd48  unit: RBX::Network::Player  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fcd48
//
// 004fcd48  6a00                 push 0
// 004fcd4a  6a00                 push 0
// 004fcd4c  e8277b2f00           call 0x7f4878
// 004fcd51  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004fcd54  8bcb                 mov ecx, ebx
// 004fcd56  2bc8                 sub ecx, eax
// 004fcd58  c1f902               sar ecx, 2
// 004fcd5b  3bcf                 cmp ecx, edi
// 004fcd5d  736e                 jae 0x4fcdcd
// 004fcd5f  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004fcd62  8b0a                 mov ecx, dword ptr [edx]
// 004fcd64  894d10               mov dword ptr [ebp + 0x10], ecx
// 004fcd67  8d0cbd00000000       lea ecx, [edi*4]
// 004fcd6e  894d14               mov dword ptr [ebp + 0x14], ecx
// 004fcd71  03c8                 add ecx, eax
// 004fcd73  51                   push ecx
// 004fcd74  53                   push ebx
// 004fcd75  50                   push eax
// 004fcd76  8bce                 mov ecx, esi
// 004fcd78  e8c30d2200           call 0x71db40
// 004fcd7d  8b4610               mov eax, dword ptr [esi + 0x10]
// 004fcd80  8bc8                 mov ecx, eax
// 004fcd82  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 004fcd85  8d5510               lea edx, [ebp + 0x10]
// 004fcd88  c1f902               sar ecx, 2
// 004fcd8b  52                   push edx
// 004fcd8c  2bf9                 sub edi, ecx
// 004fcd8e  57                   push edi
// 004fcd8f  50                   push eax
// 004fcd90  8bce                 mov ecx, esi
// 004fcd92  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004fcd99  e8b25a2700           call 0x772850
// 004fcd9e  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004fcda1  014610               add dword ptr [esi + 0x10], eax
// 004fcda4  8b7610               mov esi, dword ptr [esi + 0x10]
// 004fcda7  8d5510               lea edx, [ebp + 0x10]
// 004fcdaa  52                   push edx
// 004fcdab  2bf0                 sub esi, eax
// 004fcdad  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004fcdb0  56                   push esi
// 004fcdb1  50                   push eax
// 004fcdb2  e8a9f02c00           call 0x7cbe60
// 004fcdb7  83c40c               add esp, 0xc
// 004fcdba  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004fcdbd  64890d00000000       mov dword ptr fs:[0], ecx
// 004fcdc4  5f                   pop edi
// 004fcdc5  5e                   pop esi
// 004fcdc6  5b                   pop ebx
// 004fcdc7  8be5                 mov esp, ebp
// 004fcdc9  5d                   pop ebp
// 004fcdca  c21000               ret 0x10
// 004fcdcd  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004fcdd0  8b11                 mov edx, dword ptr [ecx]
// 004fcdd2  8d04bd00000000       lea eax, [edi*4]
// 004fcdd9  53                   push ebx
// 004fcdda  8bfb                 mov edi, ebx
// 004fcddc  2bf8                 sub edi, eax
// 004fcdde  53                   push ebx
// 004fcddf  57                   push edi
// 004fcde0  8bce                 mov ecx, esi
// 004fcde2  895510               mov dword ptr [ebp + 0x10], edx
// 004fcde5  894514               mov dword ptr [ebp + 0x14], eax
// 004fcde8  e8530d2200           call 0x71db40
// 004fcded  53                   push ebx
// 004fcdee  894610               mov dword ptr [esi + 0x10], eax
// 004fcdf1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004fcdf4  57                   push edi
// 004fcdf5  50                   push eax
// 004fcdf6  e8e5041b00           call 0x6ad2e0
// 004fcdfb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004fcdfe  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004fce01  8d4d10               lea ecx, [ebp + 0x10]
// 004fce04  51                   push ecx
// 004fce05  03d0                 add edx, eax
// 004fce07  52                   push edx
// 004fce08  50                   push eax
// 004fce09  e852f02c00           call 0x7cbe60
// 004fce0e  83c418               add esp, 0x18
// 004fce11  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004fce14  5f                   pop edi
// 004fce15  5e                   pop esi
// 004fce16  64890d00000000       mov dword ptr fs:[0], ecx
// 004fce1d  5b                   pop ebx
// 004fce1e  8be5                 mov esp, ebp
// 004fce20  5d                   pop ebp
// 004fce21  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function __catch$?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
