// from server: 100% by auto
// roc 2011-06 00820e10  unit: CXTPImageManagerResource::CBitmapDC  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00820e10
//
// 00820e10  8b442408             mov eax, dword ptr [esp + 8]
// 00820e14  83ec2c               sub esp, 0x2c
// 00820e17  56                   push esi
// 00820e18  8b742434             mov esi, dword ptr [esp + 0x34]
// 00820e1c  c70600000000         mov dword ptr [esi], 0
// 00820e22  c7460400000000       mov dword ptr [esi + 4], 0
// 00820e29  85c0                 test eax, eax
// 00820e2b  7468                 je 0x820e95
// 00820e2d  8d4c2404             lea ecx, [esp + 4]
// 00820e31  51                   push ecx
// 00820e32  50                   push eax
// 00820e33  ff156c1ba400         call dword ptr [0xa41b6c]
// 00820e39  85c0                 test eax, eax
// 00820e3b  7458                 je 0x820e95
// 00820e3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00820e41  8d542418             lea edx, [esp + 0x18]
// 00820e45  52                   push edx
// 00820e46  6a18                 push 0x18
// 00820e48  50                   push eax
// 00820e49  ff157c01a400         call dword ptr [0xa4017c]
// 00820e4f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00820e53  85c0                 test eax, eax
// 00820e55  7419                 je 0x820e70
// 00820e57  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00820e5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00820e5f  8916                 mov dword ptr [esi], edx
// 00820e61  894604               mov dword ptr [esi + 4], eax
// 00820e64  85c9                 test ecx, ecx
// 00820e66  7508                 jne 0x820e70
// 00820e68  99                   cdq 
// 00820e69  2bc2                 sub eax, edx
// 00820e6b  d1f8                 sar eax, 1
// 00820e6d  894604               mov dword ptr [esi + 4], eax
// 00820e70  8b442410             mov eax, dword ptr [esp + 0x10]
// 00820e74  57                   push edi
// 00820e75  8b3d9c01a400         mov edi, dword ptr [0xa4019c]
// 00820e7b  85c0                 test eax, eax
// 00820e7d  7407                 je 0x820e86
// 00820e7f  50                   push eax
// 00820e80  ffd7                 call edi
// 00820e82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00820e86  85c9                 test ecx, ecx
// 00820e88  7403                 je 0x820e8d
// 00820e8a  51                   push ecx
// 00820e8b  ffd7                 call edi
// 00820e8d  5f                   pop edi
// 00820e8e  8bc6                 mov eax, esi
// 00820e90  5e                   pop esi
// 00820e91  83c42c               add esp, 0x2c
// 00820e94  c3                   ret 
// 00820e95  8bc6                 mov eax, esi
// 00820e97  5e                   pop esi
// 00820e98  83c42c               add esp, 0x2c
// 00820e9b  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetExtent@CXTPImageManagerIcon@@SA?AVCSize@@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
