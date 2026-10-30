// roc 2009-06 005c10c0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c10c0
//
// 005c10c0  55                   push ebp
// 005c10c1  8bec                 mov ebp, esp
// 005c10c3  83ec2c               sub esp, 0x2c
// 005c10c6  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 005c10c9  8d45f0               lea eax, [ebp - 0x10]
// 005c10cc  50                   push eax
// 005c10cd  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c10d0  e85b33ffff           call 0x5b4430
// 005c10d5  8b08                 mov ecx, dword ptr [eax]
// 005c10d7  8b5004               mov edx, dword ptr [eax + 4]
// 005c10da  894df8               mov dword ptr [ebp - 8], ecx
// 005c10dd  8955fc               mov dword ptr [ebp - 4], edx
// 005c10e0  8d45e0               lea eax, [ebp - 0x20]
// 005c10e3  50                   push eax
// 005c10e4  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c10e7  e81433ffff           call 0x5b4400
// 005c10ec  8b08                 mov ecx, dword ptr [eax]
// 005c10ee  8b5004               mov edx, dword ptr [eax + 4]
// 005c10f1  894de8               mov dword ptr [ebp - 0x18], ecx
// 005c10f4  8955ec               mov dword ptr [ebp - 0x14], edx
// 005c10f7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c10fa  50                   push eax
// 005c10fb  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c10fe  51                   push ecx
// 005c10ff  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005c1102  52                   push edx
// 005c1103  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 005c1106  50                   push eax
// 005c1107  8d4dd8               lea ecx, [ebp - 0x28]
// 005c110a  51                   push ecx
// 005c110b  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c110e  e8adf9ffff           call 0x5c0ac0
// 005c1113  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005c1116  8b4218               mov eax, dword ptr [edx + 0x18]
// 005c1119  50                   push eax
// 005c111a  e831090000           call 0x5c1a50
// 005c111f  83c404               add esp, 4
// 005c1122  50                   push eax
// 005c1123  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c1126  83c110               add ecx, 0x10
// 005c1129  e85234ffff           call 0x5b4580
// 005c112e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c1131  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005c1134  52                   push edx
// 005c1135  e826090000           call 0x5c1a60
// 005c113a  83c404               add esp, 4
// 005c113d  50                   push eax
// 005c113e  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c1141  83c110               add ecx, 0x10
// 005c1144  e83734ffff           call 0x5b4580
// 005c1149  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005c114c  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005c114f  51                   push ecx
// 005c1150  e81b090000           call 0x5c1a70
// 005c1155  83c404               add esp, 4
// 005c1158  50                   push eax
// 005c1159  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c115c  83c110               add ecx, 0x10
// 005c115f  e81c34ffff           call 0x5b4580
// 005c1164  6a01                 push 1
// 005c1166  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005c1169  8b4218               mov eax, dword ptr [edx + 0x18]
// 005c116c  50                   push eax
// 005c116d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c1170  83c10c               add ecx, 0xc
// 005c1173  e828cdffff           call 0x5bdea0
// 005c1178  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005c117b  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 005c1182  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005c1185  c7421c00000000       mov dword ptr [edx + 0x1c], 0
// 005c118c  8be5                 mov esp, ebp
// 005c118e  5d                   pop ebp
// 005c118f  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp