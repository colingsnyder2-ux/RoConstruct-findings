// from server: 100% by auto
// roc 2011-06 0080d160  unit: CRobloxControlColorSelector  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080d160
//
// 0080d160  83ec10               sub esp, 0x10
// 0080d163  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080d167  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080d16b  890424               mov dword ptr [esp], eax
// 0080d16e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080d172  56                   push esi
// 0080d173  8b742418             mov esi, dword ptr [esp + 0x18]
// 0080d177  89442408             mov dword ptr [esp + 8], eax
// 0080d17b  57                   push edi
// 0080d17c  8b3d301ba400         mov edi, dword ptr [0xa41b30]
// 0080d182  83c002               add eax, 2
// 0080d185  8d542408             lea edx, [esp + 8]
// 0080d189  89442414             mov dword ptr [esp + 0x14], eax
// 0080d18d  8b4604               mov eax, dword ptr [esi + 4]
// 0080d190  52                   push edx
// 0080d191  50                   push eax
// 0080d192  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080d196  ffd7                 call edi
// 0080d198  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080d19c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080d1a0  8d50fe               lea edx, [eax - 2]
// 0080d1a3  8954240c             mov dword ptr [esp + 0xc], edx
// 0080d1a7  8d542408             lea edx, [esp + 8]
// 0080d1ab  89442414             mov dword ptr [esp + 0x14], eax
// 0080d1af  8b4604               mov eax, dword ptr [esi + 4]
// 0080d1b2  894c2408             mov dword ptr [esp + 8], ecx
// 0080d1b6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080d1ba  52                   push edx
// 0080d1bb  50                   push eax
// 0080d1bc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080d1c0  ffd7                 call edi
// 0080d1c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080d1c6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080d1ca  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080d1ce  89442408             mov dword ptr [esp + 8], eax
// 0080d1d2  83c002               add eax, 2
// 0080d1d5  83c102               add ecx, 2
// 0080d1d8  89442410             mov dword ptr [esp + 0x10], eax
// 0080d1dc  8d442408             lea eax, [esp + 8]
// 0080d1e0  894c240c             mov dword ptr [esp + 0xc], ecx
// 0080d1e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080d1e7  50                   push eax
// 0080d1e8  83c2fe               add edx, -2
// 0080d1eb  51                   push ecx
// 0080d1ec  8954241c             mov dword ptr [esp + 0x1c], edx
// 0080d1f0  ffd7                 call edi
// 0080d1f2  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080d1f6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080d1fa  8d50fe               lea edx, [eax - 2]
// 0080d1fd  83c102               add ecx, 2
// 0080d200  89542408             mov dword ptr [esp + 8], edx
// 0080d204  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080d208  89442410             mov dword ptr [esp + 0x10], eax
// 0080d20c  8d442408             lea eax, [esp + 8]
// 0080d210  894c240c             mov dword ptr [esp + 0xc], ecx
// 0080d214  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080d217  50                   push eax
// 0080d218  83c2fe               add edx, -2
// 0080d21b  51                   push ecx
// 0080d21c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0080d220  ffd7                 call edi
// 0080d222  5f                   pop edi
// 0080d223  5e                   pop esi
// 0080d224  83c410               add esp, 0x10
// 0080d227  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnInvertTracker@CXTPControl@@AAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
