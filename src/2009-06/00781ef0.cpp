// roc 2009-06 00781ef0  unit: CXTPDockingPane  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781ef0
//
// 00781ef0  56                   push esi
// 00781ef1  57                   push edi
// 00781ef2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00781ef6  8bf1                 mov esi, ecx
// 00781ef8  8b06                 mov eax, dword ptr [esi]
// 00781efa  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00781efd  57                   push edi
// 00781efe  ffd2                 call edx
// 00781f00  8b442420             mov eax, dword ptr [esp + 0x20]
// 00781f04  85c0                 test eax, eax
// 00781f06  7409                 je 0x781f11
// 00781f08  833800               cmp dword ptr [eax], 0
// 00781f0b  0f8486000000         je 0x781f97
// 00781f11  8b442410             mov eax, dword ptr [esp + 0x10]
// 00781f15  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00781f19  8b542418             mov edx, dword ptr [esp + 0x18]
// 00781f1d  89461c               mov dword ptr [esi + 0x1c], eax
// 00781f20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00781f24  894e20               mov dword ptr [esi + 0x20], ecx
// 00781f27  895624               mov dword ptr [esi + 0x24], edx
// 00781f2a  894628               mov dword ptr [esi + 0x28], eax
// 00781f2d  85ff                 test edi, edi
// 00781f2f  7466                 je 0x781f97
// 00781f31  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00781f34  85c9                 test ecx, ecx
// 00781f36  745f                 je 0x781f97
// 00781f38  8b01                 mov eax, dword ptr [ecx]
// 00781f3a  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00781f3d  6a02                 push 2
// 00781f3f  8d542414             lea edx, [esp + 0x14]
// 00781f43  52                   push edx
// 00781f44  8b5020               mov edx, dword ptr [eax + 0x20]
// 00781f47  ffd2                 call edx
// 00781f49  50                   push eax
// 00781f4a  57                   push edi
// 00781f4b  ff15b0ee8900         call dword ptr [0x89eeb0]
// 00781f51  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00781f57  85c0                 test eax, eax
// 00781f59  7421                 je 0x781f7c
// 00781f5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00781f5f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00781f63  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00781f67  6a01                 push 1
// 00781f69  2bd1                 sub edx, ecx
// 00781f6b  52                   push edx
// 00781f6c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00781f70  2bfa                 sub edi, edx
// 00781f72  57                   push edi
// 00781f73  51                   push ecx
// 00781f74  52                   push edx
// 00781f75  50                   push eax
// 00781f76  ff1584ed8900         call dword ptr [0x89ed84]
// 00781f7c  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00781f82  85c0                 test eax, eax
// 00781f84  7411                 je 0x781f97
// 00781f86  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00781f8c  83e101               and ecx, 1
// 00781f8f  51                   push ecx
// 00781f90  50                   push eax
// 00781f91  ff15a0ee8900         call dword ptr [0x89eea0]
// 00781f97  5f                   pop edi
// 00781f98  5e                   pop esi
// 00781f99  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?OnSizeParent@CXTPDockingPane@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
