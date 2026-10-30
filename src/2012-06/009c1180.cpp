// roc 2012-06 009c1180  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1180
//
// 009c1180  51                   push ecx
// 009c1181  56                   push esi
// 009c1182  8bf1                 mov esi, ecx
// 009c1184  837e0400             cmp dword ptr [esi + 4], 0
// 009c1188  0f84d2000000         je 0x9c1260
// 009c118e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c1192  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c1196  53                   push ebx
// 009c1197  55                   push ebp
// 009c1198  57                   push edi
// 009c1199  8d442410             lea eax, [esp + 0x10]
// 009c119d  50                   push eax
// 009c119e  51                   push ecx
// 009c119f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c11a2  52                   push edx
// 009c11a3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009c11ab  e8e218fcff           call 0x982a92
// 009c11b0  8b2d043cb200         mov ebp, dword ptr [0xb23c04]
// 009c11b6  6a00                 push 0
// 009c11b8  8bd8                 mov ebx, eax
// 009c11ba  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c11bd  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c11c0  6a09                 push 9
// 009c11c2  680a110000           push 0x110a
// 009c11c7  50                   push eax
// 009c11c8  ffd5                 call ebp
// 009c11ca  f644241050           test byte ptr [esp + 0x10], 0x50
// 009c11cf  8bf8                 mov edi, eax
// 009c11d1  7537                 jne 0x9c120a
// 009c11d3  8bce                 mov ecx, esi
// 009c11d5  e8d6e4ffff           call 0x9bf6b0
// 009c11da  84c0                 test al, al
// 009c11dc  7460                 je 0x9c123e
// 009c11de  f64424180c           test byte ptr [esp + 0x18], 0xc
// 009c11e3  8a442410             mov al, byte ptr [esp + 0x10]
// 009c11e7  7531                 jne 0x9c121a
// 009c11e9  a804                 test al, 4
// 009c11eb  742d                 je 0x9c121a
// 009c11ed  807e3900             cmp byte ptr [esi + 0x39], 0
// 009c11f1  7427                 je 0x9c121a
// 009c11f3  3bdf                 cmp ebx, edi
// 009c11f5  7523                 jne 0x9c121a
// 009c11f7  6a00                 push 0
// 009c11f9  6a00                 push 0
// 009c11fb  8bce                 mov ecx, esi
// 009c11fd  e89ef2ffff           call 0x9c04a0
// 009c1202  53                   push ebx
// 009c1203  8bce                 mov ecx, esi
// 009c1205  e856f1ffff           call 0x9c0360
// 009c120a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c120d  e8cc14fcff           call 0x9826de
// 009c1212  5f                   pop edi
// 009c1213  5d                   pop ebp
// 009c1214  5b                   pop ebx
// 009c1215  5e                   pop esi
// 009c1216  59                   pop ecx
// 009c1217  c20c00               ret 0xc
// 009c121a  a846                 test al, 0x46
// 009c121c  7506                 jne 0x9c1224
// 009c121e  c6463900             mov byte ptr [esi + 0x39], 0
// 009c1222  eb1a                 jmp 0x9c123e
// 009c1224  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1227  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c122a  6a00                 push 0
// 009c122c  6a09                 push 9
// 009c122e  680a110000           push 0x110a
// 009c1233  51                   push ecx
// 009c1234  ffd5                 call ebp
// 009c1236  3bc7                 cmp eax, edi
// 009c1238  7504                 jne 0x9c123e
// 009c123a  c6463901             mov byte ptr [esi + 0x39], 1
// 009c123e  8b442420             mov eax, dword ptr [esp + 0x20]
// 009c1242  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009c1246  8b16                 mov edx, dword ptr [esi]
// 009c1248  8b5254               mov edx, dword ptr [edx + 0x54]
// 009c124b  50                   push eax
// 009c124c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c1250  51                   push ecx
// 009c1251  50                   push eax
// 009c1252  6a01                 push 1
// 009c1254  8bce                 mov ecx, esi
// 009c1256  ffd2                 call edx
// 009c1258  5f                   pop edi
// 009c1259  5d                   pop ebp
// 009c125a  5b                   pop ebx
// 009c125b  5e                   pop esi
// 009c125c  59                   pop ecx
// 009c125d  c20c00               ret 0xc
// 009c1260  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1263  e87614fcff           call 0x9826de
// 009c1268  5e                   pop esi
// 009c1269  59                   pop ecx
// 009c126a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp