// from server: 100% by auto
// roc 2008-06 006bb600  unit: CXTPImageManagerResource::CBitmapDC  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bb600
//
// 006bb600  8b442408             mov eax, dword ptr [esp + 8]
// 006bb604  83ec2c               sub esp, 0x2c
// 006bb607  56                   push esi
// 006bb608  8b742434             mov esi, dword ptr [esp + 0x34]
// 006bb60c  c70600000000         mov dword ptr [esi], 0
// 006bb612  c7460400000000       mov dword ptr [esi + 4], 0
// 006bb619  85c0                 test eax, eax
// 006bb61b  7468                 je 0x6bb685
// 006bb61d  8d4c2404             lea ecx, [esp + 4]
// 006bb621  51                   push ecx
// 006bb622  50                   push eax
// 006bb623  ff15882b8000         call dword ptr [0x802b88]
// 006bb629  85c0                 test eax, eax
// 006bb62b  7458                 je 0x6bb685
// 006bb62d  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bb631  8d542418             lea edx, [esp + 0x18]
// 006bb635  52                   push edx
// 006bb636  6a18                 push 0x18
// 006bb638  50                   push eax
// 006bb639  ff1554218000         call dword ptr [0x802154]
// 006bb63f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006bb643  85c0                 test eax, eax
// 006bb645  7419                 je 0x6bb660
// 006bb647  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006bb64b  8b442420             mov eax, dword ptr [esp + 0x20]
// 006bb64f  8916                 mov dword ptr [esi], edx
// 006bb651  894604               mov dword ptr [esi + 4], eax
// 006bb654  85c9                 test ecx, ecx
// 006bb656  7508                 jne 0x6bb660
// 006bb658  99                   cdq 
// 006bb659  2bc2                 sub eax, edx
// 006bb65b  d1f8                 sar eax, 1
// 006bb65d  894604               mov dword ptr [esi + 4], eax
// 006bb660  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bb664  57                   push edi
// 006bb665  8b3d50218000         mov edi, dword ptr [0x802150]
// 006bb66b  85c0                 test eax, eax
// 006bb66d  7407                 je 0x6bb676
// 006bb66f  50                   push eax
// 006bb670  ffd7                 call edi
// 006bb672  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006bb676  85c9                 test ecx, ecx
// 006bb678  7403                 je 0x6bb67d
// 006bb67a  51                   push ecx
// 006bb67b  ffd7                 call edi
// 006bb67d  5f                   pop edi
// 006bb67e  8bc6                 mov eax, esi
// 006bb680  5e                   pop esi
// 006bb681  83c42c               add esp, 0x2c
// 006bb684  c3                   ret 
// 006bb685  8bc6                 mov eax, esi
// 006bb687  5e                   pop esi
// 006bb688  83c42c               add esp, 0x2c
// 006bb68b  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?GetExtent@CXTPImageManagerIcon@@SA?AVCSize@@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
