// from server: 100% by auto
// roc 2007-08 004c1260  unit: RakPeer  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1260
//
// 004c1260  51                   push ecx
// 004c1261  8b442408             mov eax, dword ptr [esp + 8]
// 004c1265  85c0                 test eax, eax
// 004c1267  55                   push ebp
// 004c1268  8be9                 mov ebp, ecx
// 004c126a  896c2404             mov dword ptr [esp + 4], ebp
// 004c126e  0f84b6000000         je 0x4c132a
// 004c1274  8a4d04               mov cl, byte ptr [ebp + 4]
// 004c1277  84c9                 test cl, cl
// 004c1279  0f85ab000000         jne 0x4c132a
// 004c127f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c1283  3b9518070000         cmp edx, dword ptr [ebp + 0x718]
// 004c1289  0f839b000000         jae 0x4c132a
// 004c128f  53                   push ebx
// 004c1290  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004c1294  81fbff000000         cmp ebx, 0xff
// 004c129a  7e05                 jle 0x4c12a1
// 004c129c  bbff000000           mov ebx, 0xff
// 004c12a1  837c241800           cmp dword ptr [esp + 0x18], 0
// 004c12a6  7502                 jne 0x4c12aa
// 004c12a8  33db                 xor ebx, ebx
// 004c12aa  8a08                 mov cl, byte ptr [eax]
// 004c12ac  80f930               cmp cl, 0x30
// 004c12af  7c05                 jl 0x4c12b6
// 004c12b1  80f932               cmp cl, 0x32
// 004c12b4  7e17                 jle 0x4c12cd
// 004c12b6  50                   push eax
// 004c12b7  b9e9ef8b00           mov ecx, 0x8befe9
// 004c12bc  e83f340000           call 0x4c4700
// 004c12c1  85c0                 test eax, eax
// 004c12c3  7508                 jne 0x4c12cd
// 004c12c5  5b                   pop ebx
// 004c12c6  32c0                 xor al, al
// 004c12c8  5d                   pop ebp
// 004c12c9  59                   pop ecx
// 004c12ca  c21400               ret 0x14
// 004c12cd  56                   push esi
// 004c12ce  57                   push edi
// 004c12cf  33d2                 xor edx, edx
// 004c12d1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c12d5  bf98ef7900           mov edi, 0x79ef98
// 004c12da  8bf0                 mov esi, eax
// 004c12dc  b90a000000           mov ecx, 0xa
// 004c12e1  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 004c12e3  7416                 je 0x4c12fb
// 004c12e5  33ed                 xor ebp, ebp
// 004c12e7  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004c12eb  bf90ef7900           mov edi, 0x79ef90
// 004c12f0  8bf0                 mov esi, eax
// 004c12f2  b908000000           mov ecx, 8
// 004c12f7  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 004c12f9  7513                 jne 0x4c130e
// 004c12fb  663b9524010000       cmp dx, word ptr [ebp + 0x124]
// 004c1302  750a                 jne 0x4c130e
// 004c1304  5f                   pop edi
// 004c1305  5e                   pop esi
// 004c1306  5b                   pop ebx
// 004c1307  32c0                 xor al, al
// 004c1309  5d                   pop ebp
// 004c130a  59                   pop ecx
// 004c130b  c21400               ret 0x14
// 004c130e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c1312  51                   push ecx
// 004c1313  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c1317  53                   push ebx
// 004c1318  51                   push ecx
// 004c1319  52                   push edx
// 004c131a  50                   push eax
// 004c131b  8bcd                 mov ecx, ebp
// 004c131d  e80ee1ffff           call 0x4bf430
// 004c1322  5f                   pop edi
// 004c1323  5e                   pop esi
// 004c1324  5b                   pop ebx
// 004c1325  5d                   pop ebp
// 004c1326  59                   pop ecx
// 004c1327  c21400               ret 0x14
// 004c132a  32c0                 xor al, al
// 004c132c  5d                   pop ebp
// 004c132d  59                   pop ecx
// 004c132e  c21400               ret 0x14

// from server: 37% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp