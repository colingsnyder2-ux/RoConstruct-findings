// roc 2011-06 008e0e60  unit: VCEdit::?$CXTMaskEditT  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e0e60
//
// 008e0e60  56                   push esi
// 008e0e61  8bf1                 mov esi, ecx
// 008e0e63  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008e0e67  741f                 je 0x8e0e88
// 008e0e69  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e0e6d  7419                 je 0x8e0e88
// 008e0e6f  e8a4b70e00           call 0x9cc618
// 008e0e74  a900080000           test eax, 0x800
// 008e0e79  750d                 jne 0x8e0e88
// 008e0e7b  8d4e70               lea ecx, [esi + 0x70]
// 008e0e7e  ff15b026a400         call dword ptr [0xa426b0]
// 008e0e84  84c0                 test al, al
// 008e0e86  740b                 je 0x8e0e93
// 008e0e88  8bce                 mov ecx, esi
// 008e0e8a  e89f97f2ff           call 0x80a62e
// 008e0e8f  5e                   pop esi
// 008e0e90  c20c00               ret 0xc
// 008e0e93  53                   push ebx
// 008e0e94  57                   push edi
// 008e0e95  8b3d601aa400         mov edi, dword ptr [0xa41a60]
// 008e0e9b  6a10                 push 0x10
// 008e0e9d  ffd7                 call edi
// 008e0e9f  33db                 xor ebx, ebx
// 008e0ea1  6685c0               test ax, ax
// 008e0ea4  6a11                 push 0x11
// 008e0ea6  0f9cc3               setl bl
// 008e0ea9  ffd7                 call edi
// 008e0eab  33c9                 xor ecx, ecx
// 008e0ead  6685c0               test ax, ax
// 008e0eb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e0eb4  0f9cc1               setl cl
// 008e0eb7  83c0f8               add eax, -8
// 008e0eba  83f826               cmp eax, 0x26
// 008e0ebd  0f8787020000         ja 0x8e114a
// 008e0ec3  0fb68074118e00       movzx eax, byte ptr [eax + 0x8e1174]
// 008e0eca  ff248558118e00       jmp dword ptr [eax*4 + 0x8e1158]
// 008e0ed1  8bce                 mov ecx, esi
// 008e0ed3  e85697f2ff           call 0x80a62e
// 008e0ed8  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e0edb  85c0                 test eax, eax
// 008e0edd  7429                 je 0x8e0f08
// 008e0edf  8d4e58               lea ecx, [esi + 0x58]
// 008e0ee2  51                   push ecx
// 008e0ee3  8d5654               lea edx, [esi + 0x54]
// 008e0ee6  52                   push edx
// 008e0ee7  68b0000000           push 0xb0
// 008e0eec  50                   push eax
// 008e0eed  ff15c019a400         call dword ptr [0xa419c0]
// 008e0ef3  8d8680000000         lea eax, [esi + 0x80]
// 008e0ef9  50                   push eax
// 008e0efa  8bce                 mov ecx, esi
// 008e0efc  e84597f2ff           call 0x80a646
// 008e0f01  8bce                 mov ecx, esi
// 008e0f03  e8e8d9ffff           call 0x8de8f0
// 008e0f08  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008e0f0b  6a00                 push 0
// 008e0f0d  8d542414             lea edx, [esp + 0x14]
// 008e0f11  894c2414             mov dword ptr [esp + 0x14], ecx
// 008e0f15  52                   push edx
// 008e0f16  8bce                 mov ecx, esi
// 008e0f18  e843edffff           call 0x8dfc60
// 008e0f1d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e0f21  394654               cmp dword ptr [esi + 0x54], eax
// 008e0f24  0f8dff010000         jge 0x8e1129
// 008e0f2a  894654               mov dword ptr [esi + 0x54], eax
// 008e0f2d  85db                 test ebx, ebx
// 008e0f2f  0f85f4010000         jne 0x8e1129
// 008e0f35  6a01                 push 1
// 008e0f37  8bce                 mov ecx, esi
// 008e0f39  894658               mov dword ptr [esi + 0x58], eax
// 008e0f3c  e83fe7ffff           call 0x8df680
// 008e0f41  5f                   pop edi
// 008e0f42  5b                   pop ebx
// 008e0f43  5e                   pop esi
// 008e0f44  c20c00               ret 0xc
// 008e0f47  8bce                 mov ecx, esi
// 008e0f49  e8e096f2ff           call 0x80a62e
// 008e0f4e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e0f51  85c0                 test eax, eax
// 008e0f53  7429                 je 0x8e0f7e
// 008e0f55  8d4e58               lea ecx, [esi + 0x58]
// 008e0f58  51                   push ecx
// 008e0f59  8d5654               lea edx, [esi + 0x54]
// 008e0f5c  52                   push edx
// 008e0f5d  68b0000000           push 0xb0
// 008e0f62  50                   push eax
// 008e0f63  ff15c019a400         call dword ptr [0xa419c0]
// 008e0f69  8d8680000000         lea eax, [esi + 0x80]
// 008e0f6f  50                   push eax
// 008e0f70  8bce                 mov ecx, esi
// 008e0f72  e8cf96f2ff           call 0x80a646
// 008e0f77  8bce                 mov ecx, esi
// 008e0f79  e872d9ffff           call 0x8de8f0
// 008e0f7e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008e0f81  6a01                 push 1
// 008e0f83  8d542414             lea edx, [esp + 0x14]
// 008e0f87  894c2414             mov dword ptr [esp + 0x14], ecx
// 008e0f8b  52                   push edx
// 008e0f8c  8bce                 mov ecx, esi
// 008e0f8e  e8cdecffff           call 0x8dfc60
// 008e0f93  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e0f97  394658               cmp dword ptr [esi + 0x58], eax
// 008e0f9a  0f8e89010000         jle 0x8e1129
// 008e0fa0  894658               mov dword ptr [esi + 0x58], eax
// 008e0fa3  85db                 test ebx, ebx
// 008e0fa5  0f857e010000         jne 0x8e1129
// 008e0fab  6a01                 push 1
// 008e0fad  8bce                 mov ecx, esi
// 008e0faf  894654               mov dword ptr [esi + 0x54], eax
// 008e0fb2  e8c9e6ffff           call 0x8df680
// 008e0fb7  5f                   pop edi
// 008e0fb8  5b                   pop ebx
// 008e0fb9  5e                   pop esi
// 008e0fba  c20c00               ret 0xc
// 008e0fbd  85c9                 test ecx, ecx
// 008e0fbf  740d                 je 0x8e0fce
// 008e0fc1  8bce                 mov ecx, esi
// 008e0fc3  e868f0ffff           call 0x8e0030
// 008e0fc8  5f                   pop edi
// 008e0fc9  5b                   pop ebx
// 008e0fca  5e                   pop esi
// 008e0fcb  c20c00               ret 0xc
// 008e0fce  85db                 test ebx, ebx
// 008e0fd0  740d                 je 0x8e0fdf
// 008e0fd2  8bce                 mov ecx, esi
// 008e0fd4  e847fcffff           call 0x8e0c20
// 008e0fd9  5f                   pop edi
// 008e0fda  5b                   pop ebx
// 008e0fdb  5e                   pop esi
// 008e0fdc  c20c00               ret 0xc
// 008e0fdf  33c0                 xor eax, eax
// 008e0fe1  394660               cmp dword ptr [esi + 0x60], eax
// 008e0fe4  5f                   pop edi
// 008e0fe5  0f94c0               sete al
// 008e0fe8  5b                   pop ebx
// 008e0fe9  894660               mov dword ptr [esi + 0x60], eax
// 008e0fec  5e                   pop esi
// 008e0fed  c20c00               ret 0xc
// 008e0ff0  6a01                 push 1
// 008e0ff2  8bce                 mov ecx, esi
// 008e0ff4  e8a7edffff           call 0x8dfda0
// 008e0ff9  8b4654               mov eax, dword ptr [esi + 0x54]
// 008e0ffc  3b4658               cmp eax, dword ptr [esi + 0x58]
// 008e0fff  7509                 jne 0x8e100a
// 008e1001  40                   inc eax
// 008e1002  894658               mov dword ptr [esi + 0x58], eax
// 008e1005  e918010000           jmp 0x8e1122
// 008e100a  85db                 test ebx, ebx
// 008e100c  0f8410010000         je 0x8e1122
// 008e1012  8bce                 mov ecx, esi
// 008e1014  e817f0ffff           call 0x8e0030
// 008e1019  e904010000           jmp 0x8e1122
// 008e101e  6a01                 push 1
// 008e1020  8bce                 mov ecx, esi
// 008e1022  e879edffff           call 0x8dfda0
// 008e1027  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008e102a  51                   push ecx
// 008e102b  8bce                 mov ecx, esi
// 008e102d  e88ed8ffff           call 0x8de8c0
// 008e1032  85c0                 test eax, eax
// 008e1034  0f84fe000000         je 0x8e1138
// 008e103a  8b5654               mov edx, dword ptr [esi + 0x54]
// 008e103d  52                   push edx
// 008e103e  8bce                 mov ecx, esi
// 008e1040  e8fbe5ffff           call 0x8df640
// 008e1045  85c0                 test eax, eax
// 008e1047  0f84eb000000         je 0x8e1138
// 008e104d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008e1050  8b06                 mov eax, dword ptr [esi]
// 008e1052  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 008e1058  51                   push ecx
// 008e1059  8d542414             lea edx, [esp + 0x14]
// 008e105d  52                   push edx
// 008e105e  8bce                 mov ecx, esi
// 008e1060  c644241820           mov byte ptr [esp + 0x18], 0x20
// 008e1065  ffd0                 call eax
// 008e1067  85c0                 test eax, eax
// 008e1069  7507                 jne 0x8e1072
// 008e106b  8a4e6c               mov cl, byte ptr [esi + 0x6c]
// 008e106e  884c2410             mov byte ptr [esp + 0x10], cl
// 008e1072  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e1076  52                   push edx
// 008e1077  8bce                 mov ecx, esi
// 008e1079  e8f2f2ffff           call 0x8e0370
// 008e107e  6a01                 push 1
// 008e1080  8bce                 mov ecx, esi
// 008e1082  e8f9e5ffff           call 0x8df680
// 008e1087  5f                   pop edi
// 008e1088  5b                   pop ebx
// 008e1089  5e                   pop esi
// 008e108a  c20c00               ret 0xc
// 008e108d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e1090  85c0                 test eax, eax
// 008e1092  7429                 je 0x8e10bd
// 008e1094  8d4e58               lea ecx, [esi + 0x58]
// 008e1097  51                   push ecx
// 008e1098  8d5654               lea edx, [esi + 0x54]
// 008e109b  52                   push edx
// 008e109c  68b0000000           push 0xb0
// 008e10a1  50                   push eax
// 008e10a2  ff15c019a400         call dword ptr [0xa419c0]
// 008e10a8  8d8680000000         lea eax, [esi + 0x80]
// 008e10ae  50                   push eax
// 008e10af  8bce                 mov ecx, esi
// 008e10b1  e89095f2ff           call 0x80a646
// 008e10b6  8bce                 mov ecx, esi
// 008e10b8  e833d8ffff           call 0x8de8f0
// 008e10bd  837e5400             cmp dword ptr [esi + 0x54], 0
// 008e10c1  8d7e54               lea edi, [esi + 0x54]
// 008e10c4  7e72                 jle 0x8e1138
// 008e10c6  8b1f                 mov ebx, dword ptr [edi]
// 008e10c8  8d8e84000000         lea ecx, [esi + 0x84]
// 008e10ce  ff15a826a400         call dword ptr [0xa426a8]
// 008e10d4  3bd8                 cmp ebx, eax
// 008e10d6  7f60                 jg 0x8e1138
// 008e10d8  3b5e58               cmp ebx, dword ptr [esi + 0x58]
// 008e10db  7545                 jne 0x8e1122
// 008e10dd  6a00                 push 0
// 008e10df  4b                   dec ebx
// 008e10e0  57                   push edi
// 008e10e1  8bce                 mov ecx, esi
// 008e10e3  891f                 mov dword ptr [edi], ebx
// 008e10e5  e876ebffff           call 0x8dfc60
// 008e10ea  837e6000             cmp dword ptr [esi + 0x60], 0
// 008e10ee  7432                 je 0x8e1122
// 008e10f0  8b0f                 mov ecx, dword ptr [edi]
// 008e10f2  51                   push ecx
// 008e10f3  8bce                 mov ecx, esi
// 008e10f5  e8c6d7ffff           call 0x8de8c0
// 008e10fa  85c0                 test eax, eax
// 008e10fc  7424                 je 0x8e1122
// 008e10fe  8b17                 mov edx, dword ptr [edi]
// 008e1100  52                   push edx
// 008e1101  8d4e74               lea ecx, [esi + 0x74]
// 008e1104  ff153c25a400         call dword ptr [0xa4253c]
// 008e110a  8b0f                 mov ecx, dword ptr [edi]
// 008e110c  0fb6c0               movzx eax, al
// 008e110f  50                   push eax
// 008e1110  51                   push ecx
// 008e1111  8d8e80000000         lea ecx, [esi + 0x80]
// 008e1117  ff155c2ca400         call dword ptr [0xa42c5c]
// 008e111d  8b17                 mov edx, dword ptr [edi]
// 008e111f  895658               mov dword ptr [esi + 0x58], edx
// 008e1122  8bce                 mov ecx, esi
// 008e1124  e857f1ffff           call 0x8e0280
// 008e1129  6a01                 push 1
// 008e112b  8bce                 mov ecx, esi
// 008e112d  e84ee5ffff           call 0x8df680
// 008e1132  5f                   pop edi
// 008e1133  5b                   pop ebx
// 008e1134  5e                   pop esi
// 008e1135  c20c00               ret 0xc
// 008e1138  8b06                 mov eax, dword ptr [esi]
// 008e113a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008e1140  8bce                 mov ecx, esi
// 008e1142  ffd2                 call edx
// 008e1144  5f                   pop edi
// 008e1145  5b                   pop ebx
// 008e1146  5e                   pop esi
// 008e1147  c20c00               ret 0xc
// 008e114a  8bce                 mov ecx, esi
// 008e114c  e8dd94f2ff           call 0x80a62e
// 008e1151  5f                   pop edi
// 008e1152  5b                   pop ebx
// 008e1153  5e                   pop esi
// 008e1154  c20c00               ret 0xc
// 008e1157  90                   nop 
// 008e1158  8d10                 lea edx, [eax]
// 008e115a  8e00                 mov es, word ptr [eax]
// 008e115c  1e                   push ds
// 008e115d  108e00470f8e         adc byte ptr [esi - 0x71f0b900], cl
// 008e1163  00d1                 add cl, dl
// 008e1165  0e                   push cs
// 008e1166  8e00                 mov es, word ptr [eax]
// 008e1168  bd0f8e00f0           mov ebp, 0xf0008e0f
// 008e116d  0f8e004a118e         jle 0x8e9f5b73
// 008e1173  0000                 add byte ptr [eax], al
// 008e1175  06                   push es
// 008e1176  06                   push es
// 008e1177  06                   push es
// 008e1178  06                   push es
// 008e1179  06                   push es
// 008e117a  06                   push es
// 008e117b  06                   push es
// 008e117c  06                   push es
// 008e117d  06                   push es
// 008e117e  06                   push es
// 008e117f  06                   push es
// 008e1180  06                   push es
// 008e1181  06                   push es
// 008e1182  06                   push es
// 008e1183  06                   push es
// 008e1184  06                   push es
// 008e1185  06                   push es
// 008e1186  06                   push es
// 008e1187  06                   push es
// 008e1188  06                   push es
// 008e1189  06                   push es
// 008e118a  06                   push es
// 008e118b  06                   push es
// 008e118c  0106                 add dword ptr [esi], eax
// 008e118e  06                   push es
// 008e118f  0203                 add al, byte ptr [ebx]
// 008e1191  0303                 add eax, dword ptr [ebx]
// 008e1193  0202                 add al, byte ptr [edx]
// 008e1195  06                   push es
// 008e1196  06                   push es
// 008e1197  06                   push es
// 008e1198  06                   push es
// 008e1199  0405                 add al, 5
// copied from an identical function in another client (function ?OnKeyDown@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp