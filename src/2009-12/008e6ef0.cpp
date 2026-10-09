// roc 2009-12 008e6ef0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6ef0
//
// 008e6ef0  83ec10               sub esp, 0x10
// 008e6ef3  56                   push esi
// 008e6ef4  8bf1                 mov esi, ecx
// 008e6ef6  57                   push edi
// 008e6ef7  8d8e08020000         lea ecx, [esi + 0x208]
// 008e6efd  e8be4cf8ff           call 0x86bbc0
// 008e6f02  85c0                 test eax, eax
// 008e6f04  0f84b9000000         je 0x8e6fc3
// 008e6f0a  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 008e6f10  8b742430             mov esi, dword ptr [esp + 0x30]
// 008e6f14  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008e6f1a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008e6f1e  8b11                 mov edx, dword ptr [ecx]
// 008e6f20  8b520c               mov edx, dword ptr [edx + 0xc]
// 008e6f23  56                   push esi
// 008e6f24  83ec10               sub esp, 0x10
// 008e6f27  8bc4                 mov eax, esp
// 008e6f29  8938                 mov dword ptr [eax], edi
// 008e6f2b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008e6f2f  897804               mov dword ptr [eax + 4], edi
// 008e6f32  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008e6f36  897808               mov dword ptr [eax + 8], edi
// 008e6f39  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008e6f3d  89780c               mov dword ptr [eax + 0xc], edi
// 008e6f40  8d44241c             lea eax, [esp + 0x1c]
// 008e6f44  50                   push eax
// 008e6f45  ffd2                 call edx
// 008e6f47  8b06                 mov eax, dword ptr [esi]
// 008e6f49  8b5048               mov edx, dword ptr [eax + 0x48]
// 008e6f4c  8bce                 mov ecx, esi
// 008e6f4e  ffd2                 call edx
// 008e6f50  83f803               cmp eax, 3
// 008e6f53  776e                 ja 0x8e6fc3
// 008e6f55  ff2485cc6f8e00       jmp dword ptr [eax*4 + 0x8e6fcc]
// 008e6f5c  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e6f60  8d48ff               lea ecx, [eax - 1]
// 008e6f63  51                   push ecx
// 008e6f64  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e6f68  8d5101               lea edx, [ecx + 1]
// 008e6f6b  52                   push edx
// 008e6f6c  83c0fe               add eax, -2
// 008e6f6f  50                   push eax
// 008e6f70  51                   push ecx
// 008e6f71  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e6f75  e8d8f90300           call 0x926952
// 008e6f7a  5f                   pop edi
// 008e6f7b  5e                   pop esi
// 008e6f7c  83c410               add esp, 0x10
// 008e6f7f  c21800               ret 0x18
// 008e6f82  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e6f86  8d4801               lea ecx, [eax + 1]
// 008e6f89  51                   push ecx
// 008e6f8a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e6f8e  8d5101               lea edx, [ecx + 1]
// 008e6f91  52                   push edx
// 008e6f92  50                   push eax
// 008e6f93  51                   push ecx
// 008e6f94  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e6f98  e8b5f90300           call 0x926952
// 008e6f9d  5f                   pop edi
// 008e6f9e  5e                   pop esi
// 008e6f9f  83c410               add esp, 0x10
// 008e6fa2  c21800               ret 0x18
// 008e6fa5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e6fa9  8d4801               lea ecx, [eax + 1]
// 008e6fac  51                   push ecx
// 008e6fad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e6fb1  8d51ff               lea edx, [ecx - 1]
// 008e6fb4  52                   push edx
// 008e6fb5  83c1fe               add ecx, -2
// 008e6fb8  50                   push eax
// 008e6fb9  51                   push ecx
// 008e6fba  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e6fbe  e88ff90300           call 0x926952
// 008e6fc3  5f                   pop edi
// 008e6fc4  5e                   pop esi
// 008e6fc5  83c410               add esp, 0x10
// 008e6fc8  c21800               ret 0x18
// 008e6fcb  90                   nop 
// 008e6fcc  826f8e00             sub byte ptr [edi - 0x72], 0
// 008e6fd0  826f8e00             sub byte ptr [edi - 0x72], 0
// 008e6fd4  5c                   pop esp
// 008e6fd5  6f                   outsd dx, dword ptr [esi]
// 008e6fd6  8e00                 mov es, word ptr [eax]
// 008e6fd8  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 008e6fd9  6f                   outsd dx, dword ptr [esi]
// 008e6fda  8e00                 mov es, word ptr [eax]
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
