// from server: 100% by auto
// roc 2007-08 00511630  unit: G3D::Sphere  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511630
//
// 00511630  83ec0c               sub esp, 0xc
// 00511633  53                   push ebx
// 00511634  bb01000000           mov ebx, 1
// 00511639  841d480c8c00         test byte ptr [0x8c0c48], bl
// 0051163f  56                   push esi
// 00511640  8bf1                 mov esi, ecx
// 00511642  751e                 jne 0x511662
// 00511644  d9054cfe7900         fld dword ptr [0x79fe4c]
// 0051164a  091d480c8c00         or dword ptr [0x8c0c48], ebx
// 00511650  d9153c0c8c00         fst dword ptr [0x8c0c3c]
// 00511656  d915400c8c00         fst dword ptr [0x8c0c40]
// 0051165c  d91d440c8c00         fstp dword ptr [0x8c0c44]
// 00511662  841d380c8c00         test byte ptr [0x8c0c38], bl
// 00511668  751e                 jne 0x511688
// 0051166a  d90548fe7900         fld dword ptr [0x79fe48]
// 00511670  091d380c8c00         or dword ptr [0x8c0c38], ebx
// 00511676  d9152c0c8c00         fst dword ptr [0x8c0c2c]
// 0051167c  d915300c8c00         fst dword ptr [0x8c0c30]
// 00511682  d91d340c8c00         fstp dword ptr [0x8c0c34]
// 00511688  683c0c8c00           push 0x8c0c3c
// 0051168d  682c0c8c00           push 0x8c0c2c
// 00511692  8d442410             lea eax, [esp + 0x10]
// 00511696  50                   push eax
// 00511697  8d4c2424             lea ecx, [esp + 0x24]
// 0051169b  e800eef8ff           call 0x4a04a0
// 005116a0  d900                 fld dword ptr [eax]
// 005116a2  d95c2418             fstp dword ptr [esp + 0x18]
// 005116a6  d94004               fld dword ptr [eax + 4]
// 005116a9  d95c241c             fstp dword ptr [esp + 0x1c]
// 005116ad  d94008               fld dword ptr [eax + 8]
// 005116b0  d95c2420             fstp dword ptr [esp + 0x20]
// 005116b4  d94608               fld dword ptr [esi + 8]
// 005116b7  d84c241c             fmul dword ptr [esp + 0x1c]
// 005116bb  d94604               fld dword ptr [esi + 4]
// 005116be  d84c2418             fmul dword ptr [esp + 0x18]
// 005116c2  dec1                 faddp st(1)
// 005116c4  d9460c               fld dword ptr [esi + 0xc]
// 005116c7  d84c2420             fmul dword ptr [esp + 0x20]
// 005116cb  dec1                 faddp st(1)
// 005116cd  d95c2418             fstp dword ptr [esp + 0x18]
// 005116d1  d9442418             fld dword ptr [esp + 0x18]
// 005116d5  d94610               fld dword ptr [esi + 0x10]
// 005116d8  ded9                 fcompp 
// 005116da  dfe0                 fnstsw ax
// 005116dc  f6c441               test ah, 0x41
// 005116df  7a0a                 jp 0x5116eb
// 005116e1  5e                   pop esi
// 005116e2  8bc3                 mov eax, ebx
// 005116e4  5b                   pop ebx
// 005116e5  83c40c               add esp, 0xc
// 005116e8  c20c00               ret 0xc
// 005116eb  5e                   pop esi
// 005116ec  33c0                 xor eax, eax
// 005116ee  5b                   pop ebx
// 005116ef  83c40c               add esp, 0xc
// 005116f2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?halfSpaceContains@Plane@G3D@@QBE_NVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
