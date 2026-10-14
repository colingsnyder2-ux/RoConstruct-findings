// roc 2008-06 00606170  unit: RBX::PointToPointBreakConnector  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606170
//
// 00606170  d9442414             fld dword ptr [esp + 0x14]
// 00606174  8b542408             mov edx, dword ptr [esp + 8]
// 00606178  d9442418             fld dword ptr [esp + 0x18]
// 0060617c  8bc1                 mov eax, ecx
// 0060617e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00606182  dcc9                 fmul st(1), st(0)
// 00606184  c74004ffffffff       mov dword ptr [eax + 4], 0xffffffff
// 0060618b  89480c               mov dword ptr [eax + 0xc], ecx
// 0060618e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00606192  dec9                 fmulp st(1)
// 00606194  895010               mov dword ptr [eax + 0x10], edx
// 00606197  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060619b  d95808               fstp dword ptr [eax + 8]
// 0060619e  894814               mov dword ptr [eax + 0x14], ecx
// 006061a1  d9ee                 fldz 
// 006061a3  c70004288400         mov dword ptr [eax], 0x842804
// 006061a9  d9501c               fst dword ptr [eax + 0x1c]
// 006061ac  895018               mov dword ptr [eax + 0x18], edx
// 006061af  33c9                 xor ecx, ecx
// 006061b1  894820               mov dword ptr [eax + 0x20], ecx
// 006061b4  d95024               fst dword ptr [eax + 0x24]
// 006061b7  d95028               fst dword ptr [eax + 0x28]
// 006061ba  884830               mov byte ptr [eax + 0x30], cl
// 006061bd  d9582c               fstp dword ptr [eax + 0x2c]
// 006061c0  c21800               ret 0x18
// library rbxgs-dll/v8kernel\Connector.cpp (function ??0RotateConnector@RBX@@QAE@PAVPoint@1@000MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/Connector.cpp
