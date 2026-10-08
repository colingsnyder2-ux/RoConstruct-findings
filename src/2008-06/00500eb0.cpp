// roc 2008-06 00500eb0  unit: RBX::ViewNew::PBBBuilder  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500eb0
//
// 00500eb0  56                   push esi
// 00500eb1  8bf1                 mov esi, ecx
// 00500eb3  8b4614               mov eax, dword ptr [esi + 0x14]
// 00500eb6  8b4018               mov eax, dword ptr [eax + 0x18]
// 00500eb9  83e802               sub eax, 2
// 00500ebc  746f                 je 0x500f2d
// 00500ebe  83e803               sub eax, 3
// 00500ec1  0f85fc000000         jne 0x500fc3
// 00500ec7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00500ecb  6a01                 push 1
// 00500ecd  51                   push ecx
// 00500ece  e8ed700400           call 0x547fc0
// 00500ed3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00500ed7  6a01                 push 1
// 00500ed9  52                   push edx
// 00500eda  89442424             mov dword ptr [esp + 0x24], eax
// 00500ede  e8dd700400           call 0x547fc0
// 00500ee3  89442420             mov dword ptr [esp + 0x20], eax
// 00500ee7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00500eeb  6a01                 push 1
// 00500eed  50                   push eax
// 00500eee  e8cd700400           call 0x547fc0
// 00500ef3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00500ef7  6a01                 push 1
// 00500ef9  51                   push ecx
// 00500efa  8944242c             mov dword ptr [esp + 0x2c], eax
// 00500efe  e8bd700400           call 0x547fc0
// 00500f03  83c420               add esp, 0x20
// 00500f06  8d542414             lea edx, [esp + 0x14]
// 00500f0a  52                   push edx
// 00500f0b  8944240c             mov dword ptr [esp + 0xc], eax
// 00500f0f  8d442414             lea eax, [esp + 0x14]
// 00500f13  50                   push eax
// 00500f14  8d4c2414             lea ecx, [esp + 0x14]
// 00500f18  51                   push ecx
// 00500f19  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00500f1c  8d542414             lea edx, [esp + 0x14]
// 00500f20  52                   push edx
// 00500f21  83c10c               add ecx, 0xc
// 00500f24  e877b7fdff           call 0x4dc6a0
// 00500f29  5e                   pop esi
// 00500f2a  c21000               ret 0x10
// 00500f2d  53                   push ebx
// 00500f2e  57                   push edi
// 00500f2f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00500f33  6a01                 push 1
// 00500f35  57                   push edi
// 00500f36  e885700400           call 0x547fc0
// 00500f3b  89442420             mov dword ptr [esp + 0x20], eax
// 00500f3f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00500f43  6a01                 push 1
// 00500f45  50                   push eax
// 00500f46  e875700400           call 0x547fc0
// 00500f4b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00500f4f  6a01                 push 1
// 00500f51  53                   push ebx
// 00500f52  8944242c             mov dword ptr [esp + 0x2c], eax
// 00500f56  e865700400           call 0x547fc0
// 00500f5b  83c418               add esp, 0x18
// 00500f5e  8d4c2418             lea ecx, [esp + 0x18]
// 00500f62  51                   push ecx
// 00500f63  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00500f66  8d542418             lea edx, [esp + 0x18]
// 00500f6a  89442414             mov dword ptr [esp + 0x14], eax
// 00500f6e  52                   push edx
// 00500f6f  8d442418             lea eax, [esp + 0x18]
// 00500f73  50                   push eax
// 00500f74  83c10c               add ecx, 0xc
// 00500f77  e814f7ffff           call 0x500690
// 00500f7c  6a01                 push 1
// 00500f7e  53                   push ebx
// 00500f7f  e83c700400           call 0x547fc0
// 00500f84  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00500f88  6a01                 push 1
// 00500f8a  51                   push ecx
// 00500f8b  89442428             mov dword ptr [esp + 0x28], eax
// 00500f8f  e82c700400           call 0x547fc0
// 00500f94  6a01                 push 1
// 00500f96  57                   push edi
// 00500f97  8944242c             mov dword ptr [esp + 0x2c], eax
// 00500f9b  e820700400           call 0x547fc0
// 00500fa0  83c418               add esp, 0x18
// 00500fa3  8d542418             lea edx, [esp + 0x18]
// 00500fa7  89442410             mov dword ptr [esp + 0x10], eax
// 00500fab  52                   push edx
// 00500fac  8d442418             lea eax, [esp + 0x18]
// 00500fb0  50                   push eax
// 00500fb1  8d4c2418             lea ecx, [esp + 0x18]
// 00500fb5  51                   push ecx
// 00500fb6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00500fb9  83c10c               add ecx, 0xc
// 00500fbc  e8cff6ffff           call 0x500690
// 00500fc1  5f                   pop edi
// 00500fc2  5b                   pop ebx
// 00500fc3  5e                   pop esi
// 00500fc4  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromVertexIndices@LevelBuilder@View@RBX@@IAEXIIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
