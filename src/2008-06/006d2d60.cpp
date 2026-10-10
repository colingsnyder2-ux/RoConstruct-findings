// roc 2008-06 006d2d60  unit: CXTPReportControl  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d2d60
//
// 006d2d60  83ec28               sub esp, 0x28
// 006d2d63  56                   push esi
// 006d2d64  8bf1                 mov esi, ecx
// 006d2d66  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 006d2d6d  0f8549010000         jne 0x6d2ebc
// 006d2d73  8b442434             mov eax, dword ptr [esp + 0x34]
// 006d2d77  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006d2d7b  57                   push edi
// 006d2d7c  8d542408             lea edx, [esp + 8]
// 006d2d80  89442408             mov dword ptr [esp + 8], eax
// 006d2d84  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d2d87  52                   push edx
// 006d2d88  50                   push eax
// 006d2d89  894c2414             mov dword ptr [esp + 0x14], ecx
// 006d2d8d  ff15a02d8000         call dword ptr [0x802da0]
// 006d2d93  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2d97  8b542408             mov edx, dword ptr [esp + 8]
// 006d2d9b  8b3d2c2d8000         mov edi, dword ptr [0x802d2c]
// 006d2da1  51                   push ecx
// 006d2da2  52                   push edx
// 006d2da3  8d4670               lea eax, [esi + 0x70]
// 006d2da6  50                   push eax
// 006d2da7  ffd7                 call edi
// 006d2da9  85c0                 test eax, eax
// 006d2dab  0f8563010000         jne 0x6d2f14
// 006d2db1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2db5  8b542408             mov edx, dword ptr [esp + 8]
// 006d2db9  51                   push ecx
// 006d2dba  52                   push edx
// 006d2dbb  8d4660               lea eax, [esi + 0x60]
// 006d2dbe  50                   push eax
// 006d2dbf  ffd7                 call edi
// 006d2dc1  85c0                 test eax, eax
// 006d2dc3  0f854b010000         jne 0x6d2f14
// 006d2dc9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2dcd  8b542408             mov edx, dword ptr [esp + 8]
// 006d2dd1  53                   push ebx
// 006d2dd2  51                   push ecx
// 006d2dd3  52                   push edx
// 006d2dd4  8d9e90000000         lea ebx, [esi + 0x90]
// 006d2dda  53                   push ebx
// 006d2ddb  ffd7                 call edi
// 006d2ddd  85c0                 test eax, eax
// 006d2ddf  0f85de000000         jne 0x6d2ec3
// 006d2de5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d2de9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2ded  50                   push eax
// 006d2dee  51                   push ecx
// 006d2def  8d96a0000000         lea edx, [esi + 0xa0]
// 006d2df5  52                   push edx
// 006d2df6  ffd7                 call edi
// 006d2df8  85c0                 test eax, eax
// 006d2dfa  0f85c3000000         jne 0x6d2ec3
// 006d2e00  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d2e04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2e08  50                   push eax
// 006d2e09  51                   push ecx
// 006d2e0a  8d8eb0000000         lea ecx, [esi + 0xb0]
// 006d2e10  e84bb1d7ff           call 0x44df60
// 006d2e15  85c0                 test eax, eax
// 006d2e17  0f85a6000000         jne 0x6d2ec3
// 006d2e1d  83c8ff               or eax, 0xffffffff
// 006d2e20  0bc8                 or ecx, eax
// 006d2e22  51                   push ecx
// 006d2e23  50                   push eax
// 006d2e24  8d4c2444             lea ecx, [esp + 0x44]
// 006d2e28  e853f0d4ff           call 0x421e80
// 006d2e2d  85c0                 test eax, eax
// 006d2e2f  0f8485000000         je 0x6d2eba
// 006d2e35  8bce                 mov ecx, esi
// 006d2e37  e87482ffff           call 0x6cb0b0
// 006d2e3c  8bf8                 mov edi, eax
// 006d2e3e  85ff                 test edi, edi
// 006d2e40  7446                 je 0x6d2e88
// 006d2e42  8b17                 mov edx, dword ptr [edi]
// 006d2e44  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 006d2e4a  8d442414             lea eax, [esp + 0x14]
// 006d2e4e  50                   push eax
// 006d2e4f  8bcf                 mov ecx, edi
// 006d2e51  ffd2                 call edx
// 006d2e53  8b700c               mov esi, dword ptr [eax + 0xc]
// 006d2e56  8b07                 mov eax, dword ptr [edi]
// 006d2e58  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 006d2e5e  8d4c2424             lea ecx, [esp + 0x24]
// 006d2e62  51                   push ecx
// 006d2e63  8bcf                 mov ecx, edi
// 006d2e65  ffd2                 call edx
// 006d2e67  8b00                 mov eax, dword ptr [eax]
// 006d2e69  8944240c             mov dword ptr [esp + 0xc], eax
// 006d2e6d  89742410             mov dword ptr [esp + 0x10], esi
// 006d2e71  8b17                 mov edx, dword ptr [edi]
// 006d2e73  56                   push esi
// 006d2e74  50                   push eax
// 006d2e75  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 006d2e7b  8bcf                 mov ecx, edi
// 006d2e7d  ffd0                 call eax
// 006d2e7f  5b                   pop ebx
// 006d2e80  5f                   pop edi
// 006d2e81  5e                   pop esi
// 006d2e82  83c428               add esp, 0x28
// 006d2e85  c20c00               ret 0xc
// 006d2e88  8b0b                 mov ecx, dword ptr [ebx]
// 006d2e8a  8b5304               mov edx, dword ptr [ebx + 4]
// 006d2e8d  8d44243c             lea eax, [esp + 0x3c]
// 006d2e91  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006d2e95  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d2e98  50                   push eax
// 006d2e99  51                   push ecx
// 006d2e9a  89542448             mov dword ptr [esp + 0x48], edx
// 006d2e9e  ff15802d8000         call dword ptr [0x802d80]
// 006d2ea4  6aff                 push -1
// 006d2ea6  8d542440             lea edx, [esp + 0x40]
// 006d2eaa  52                   push edx
// 006d2eab  6afb                 push -5
// 006d2ead  6a00                 push 0
// 006d2eaf  6a00                 push 0
// 006d2eb1  6a00                 push 0
// 006d2eb3  8bce                 mov ecx, esi
// 006d2eb5  e8f6ceffff           call 0x6cfdb0
// 006d2eba  5b                   pop ebx
// 006d2ebb  5f                   pop edi
// 006d2ebc  5e                   pop esi
// 006d2ebd  83c428               add esp, 0x28
// 006d2ec0  c20c00               ret 0xc
// 006d2ec3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d2ec7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2ecb  50                   push eax
// 006d2ecc  51                   push ecx
// 006d2ecd  8bce                 mov ecx, esi
// 006d2ecf  e85c72ffff           call 0x6ca130
// 006d2ed4  8bf8                 mov edi, eax
// 006d2ed6  85ff                 test edi, edi
// 006d2ed8  7431                 je 0x6d2f0b
// 006d2eda  8b17                 mov edx, dword ptr [edi]
// 006d2edc  8b4274               mov eax, dword ptr [edx + 0x74]
// 006d2edf  8bcf                 mov ecx, edi
// 006d2ee1  ffd0                 call eax
// 006d2ee3  50                   push eax
// 006d2ee4  57                   push edi
// 006d2ee5  8bce                 mov ecx, esi
// 006d2ee7  e864f5ffff           call 0x6d2450
// 006d2eec  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d2ef0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d2ef4  8b17                 mov edx, dword ptr [edi]
// 006d2ef6  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 006d2efc  50                   push eax
// 006d2efd  51                   push ecx
// 006d2efe  8bcf                 mov ecx, edi
// 006d2f00  ffd2                 call edx
// 006d2f02  5b                   pop ebx
// 006d2f03  5f                   pop edi
// 006d2f04  5e                   pop esi
// 006d2f05  83c428               add esp, 0x28
// 006d2f08  c20c00               ret 0xc
// 006d2f0b  6aff                 push -1
// 006d2f0d  8d442440             lea eax, [esp + 0x40]
// 006d2f11  50                   push eax
// 006d2f12  eb97                 jmp 0x6d2eab
// 006d2f14  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 006d2f1a  85c9                 test ecx, ecx
// 006d2f1c  749d                 je 0x6d2ebb
// 006d2f1e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d2f22  8b11                 mov edx, dword ptr [ecx]
// 006d2f24  8b5270               mov edx, dword ptr [edx + 0x70]
// 006d2f27  50                   push eax
// 006d2f28  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d2f2c  50                   push eax
// 006d2f2d  ffd2                 call edx
// 006d2f2f  5f                   pop edi
// 006d2f30  5e                   pop esi
// 006d2f31  83c428               add esp, 0x28
// 006d2f34  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnContextMenu@CXTPReportControl@@IAEXPAVCWnd@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
