// from server: 100% by auto
// roc 2012-06 00a63d90  unit: CXTColorPageCustom  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63d90
//
// 00a63d90  83ec10               sub esp, 0x10
// 00a63d93  56                   push esi
// 00a63d94  57                   push edi
// 00a63d95  8bf1                 mov esi, ecx
// 00a63d97  e866ecf1ff           call 0x982a02
// 00a63d9c  8d8614070000         lea eax, [esi + 0x714]
// 00a63da2  85c0                 test eax, eax
// 00a63da4  7403                 je 0xa63da9
// 00a63da6  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a63da9  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a63daf  6a00                 push 0
// 00a63db1  50                   push eax
// 00a63db2  8b8698030000         mov eax, dword ptr [esi + 0x398]
// 00a63db8  6869040000           push 0x469
// 00a63dbd  50                   push eax
// 00a63dbe  ffd7                 call edi
// 00a63dc0  50                   push eax
// 00a63dc1  e8a0e8f1ff           call 0x982666
// 00a63dc6  8b8e98030000         mov ecx, dword ptr [esi + 0x398]
// 00a63dcc  68ff000000           push 0xff
// 00a63dd1  6a00                 push 0
// 00a63dd3  6865040000           push 0x465
// 00a63dd8  51                   push ecx
// 00a63dd9  ffd7                 call edi
// 00a63ddb  8d866c060000         lea eax, [esi + 0x66c]
// 00a63de1  85c0                 test eax, eax
// 00a63de3  7403                 je 0xa63de8
// 00a63de5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a63de8  8b9640040000         mov edx, dword ptr [esi + 0x440]
// 00a63dee  6a00                 push 0
// 00a63df0  50                   push eax
// 00a63df1  6869040000           push 0x469
// 00a63df6  52                   push edx
// 00a63df7  ffd7                 call edi
// 00a63df9  50                   push eax
// 00a63dfa  e867e8f1ff           call 0x982666
// 00a63dff  8b8640040000         mov eax, dword ptr [esi + 0x440]
// 00a63e05  68ff000000           push 0xff
// 00a63e0a  6a00                 push 0
// 00a63e0c  6865040000           push 0x465
// 00a63e11  50                   push eax
// 00a63e12  ffd7                 call edi
// 00a63e14  8d8670050000         lea eax, [esi + 0x570]
// 00a63e1a  85c0                 test eax, eax
// 00a63e1c  7403                 je 0xa63e21
// 00a63e1e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a63e21  8b8e94040000         mov ecx, dword ptr [esi + 0x494]
// 00a63e27  6a00                 push 0
// 00a63e29  50                   push eax
// 00a63e2a  6869040000           push 0x469
// 00a63e2f  51                   push ecx
// 00a63e30  ffd7                 call edi
// 00a63e32  50                   push eax
// 00a63e33  e82ee8f1ff           call 0x982666
// 00a63e38  8b9694040000         mov edx, dword ptr [esi + 0x494]
// 00a63e3e  68ff000000           push 0xff
// 00a63e43  6a00                 push 0
// 00a63e45  6865040000           push 0x465
// 00a63e4a  52                   push edx
// 00a63e4b  ffd7                 call edi
// 00a63e4d  8d86c0060000         lea eax, [esi + 0x6c0]
// 00a63e53  85c0                 test eax, eax
// 00a63e55  7403                 je 0xa63e5a
// 00a63e57  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a63e5a  6a00                 push 0
// 00a63e5c  50                   push eax
// 00a63e5d  8b86ec030000         mov eax, dword ptr [esi + 0x3ec]
// 00a63e63  6869040000           push 0x469
// 00a63e68  50                   push eax
// 00a63e69  ffd7                 call edi
// 00a63e6b  50                   push eax
// 00a63e6c  e8f5e7f1ff           call 0x982666
// 00a63e71  8b8eec030000         mov ecx, dword ptr [esi + 0x3ec]
// 00a63e77  68ff000000           push 0xff
// 00a63e7c  6a00                 push 0
// 00a63e7e  6865040000           push 0x465
// 00a63e83  51                   push ecx
// 00a63e84  ffd7                 call edi
// 00a63e86  8d86c4050000         lea eax, [esi + 0x5c4]
// 00a63e8c  85c0                 test eax, eax
// 00a63e8e  7403                 je 0xa63e93
// 00a63e90  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a63e93  8b96e8040000         mov edx, dword ptr [esi + 0x4e8]
// 00a63e99  6a00                 push 0
// 00a63e9b  50                   push eax
// 00a63e9c  6869040000           push 0x469
// 00a63ea1  52                   push edx
// 00a63ea2  ffd7                 call edi
// 00a63ea4  50                   push eax
// 00a63ea5  e8bce7f1ff           call 0x982666
// 00a63eaa  8b86e8040000         mov eax, dword ptr [esi + 0x4e8]
// 00a63eb0  68ff000000           push 0xff
// 00a63eb5  6a00                 push 0
// 00a63eb7  6865040000           push 0x465
// 00a63ebc  50                   push eax
// 00a63ebd  ffd7                 call edi
// 00a63ebf  8d8618060000         lea eax, [esi + 0x618]
// 00a63ec5  85c0                 test eax, eax
// 00a63ec7  7403                 je 0xa63ecc
// 00a63ec9  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a63ecc  8b8e3c050000         mov ecx, dword ptr [esi + 0x53c]
// 00a63ed2  6a00                 push 0
// 00a63ed4  50                   push eax
// 00a63ed5  6869040000           push 0x469
// 00a63eda  51                   push ecx
// 00a63edb  ffd7                 call edi
// 00a63edd  50                   push eax
// 00a63ede  e883e7f1ff           call 0x982666
// 00a63ee3  8b963c050000         mov edx, dword ptr [esi + 0x53c]
// 00a63ee9  68ff000000           push 0xff
// 00a63eee  6a00                 push 0
// 00a63ef0  6865040000           push 0x465
// 00a63ef5  52                   push edx
// 00a63ef6  ffd7                 call edi
// 00a63ef8  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00a63efe  8d442408             lea eax, [esp + 8]
// 00a63f02  50                   push eax
// 00a63f03  51                   push ecx
// 00a63f04  ff15f83ab200         call dword ptr [0xb23af8]
// 00a63f0a  8d542408             lea edx, [esp + 8]
// 00a63f0e  52                   push edx
// 00a63f0f  8bce                 mov ecx, esi
// 00a63f11  e888f1f1ff           call 0x98309e
// 00a63f16  6a04                 push 4
// 00a63f18  6a00                 push 0
// 00a63f1a  8d442410             lea eax, [esp + 0x10]
// 00a63f1e  50                   push eax
// 00a63f1f  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a63f25  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a63f29  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a63f2d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a63f31  6a01                 push 1
// 00a63f33  2bc8                 sub ecx, eax
// 00a63f35  51                   push ecx
// 00a63f36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a63f3a  2bd1                 sub edx, ecx
// 00a63f3c  52                   push edx
// 00a63f3d  50                   push eax
// 00a63f3e  51                   push ecx
// 00a63f3f  8d8e08010000         lea ecx, [esi + 0x108]
// 00a63f45  e890e5f1ff           call 0x9824da
// 00a63f4a  5f                   pop edi
// 00a63f4b  b801000000           mov eax, 1
// 00a63f50  5e                   pop esi
// 00a63f51  83c410               add esp, 0x10
// 00a63f54  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnInitDialog@CXTPColorPageCustom@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
