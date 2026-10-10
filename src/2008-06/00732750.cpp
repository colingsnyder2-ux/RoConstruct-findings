// roc 2008-06 00732750  unit: CXTPControlGallery  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732750
//
// 00732750  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00732754  8b542404             mov edx, dword ptr [esp + 4]
// 00732758  83ec20               sub esp, 0x20
// 0073275b  55                   push ebp
// 0073275c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00732760  56                   push esi
// 00732761  c7450000000000       mov dword ptr [ebp], 0
// 00732768  8bf1                 mov esi, ecx
// 0073276a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073276e  c70000000000         mov dword ptr [eax], 0
// 00732774  57                   push edi
// 00732775  c70100000000         mov dword ptr [ecx], 0
// 0073277b  8d442440             lea eax, [esp + 0x40]
// 0073277f  50                   push eax
// 00732780  8bce                 mov ecx, esi
// 00732782  c70200000000         mov dword ptr [edx], 0
// 00732788  e8135bfbff           call 0x6e82a0
// 0073278d  8bf8                 mov edi, eax
// 0073278f  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 00732795  85c0                 test eax, eax
// 00732797  0f84b4000000         je 0x732851
// 0073279d  83782000             cmp dword ptr [eax + 0x20], 0
// 007327a1  0f84aa000000         je 0x732851
// 007327a7  8b56e0               mov edx, dword ptr [esi - 0x20]
// 007327aa  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007327b0  53                   push ebx
// 007327b1  8d5ee0               lea ebx, [esi - 0x20]
// 007327b4  6a00                 push 0
// 007327b6  8bcb                 mov ecx, ebx
// 007327b8  ffd0                 call eax
// 007327ba  85c0                 test eax, eax
// 007327bc  0f848e000000         je 0x732850
// 007327c2  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007327c8  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 007327ce  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007327d4  894c2410             mov dword ptr [esp + 0x10], ecx
// 007327d8  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 007327de  89542414             mov dword ptr [esp + 0x14], edx
// 007327e2  89442418             mov dword ptr [esp + 0x18], eax
// 007327e6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007327ea  85ff                 test edi, edi
// 007327ec  7429                 je 0x732817
// 007327ee  4f                   dec edi
// 007327ef  57                   push edi
// 007327f0  8d542424             lea edx, [esp + 0x24]
// 007327f4  52                   push edx
// 007327f5  8bcb                 mov ecx, ebx
// 007327f7  e864ecffff           call 0x731460
// 007327fc  8b08                 mov ecx, dword ptr [eax]
// 007327fe  894c2410             mov dword ptr [esp + 0x10], ecx
// 00732802  8b5004               mov edx, dword ptr [eax + 4]
// 00732805  89542414             mov dword ptr [esp + 0x14], edx
// 00732809  8b4808               mov ecx, dword ptr [eax + 8]
// 0073280c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00732810  8b500c               mov edx, dword ptr [eax + 0xc]
// 00732813  8954241c             mov dword ptr [esp + 0x1c], edx
// 00732817  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0073281d  8d442410             lea eax, [esp + 0x10]
// 00732821  50                   push eax
// 00732822  e80be4f6ff           call 0x6a0c32
// 00732827  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073282b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073282f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00732833  8901                 mov dword ptr [ecx], eax
// 00732835  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00732839  890a                 mov dword ptr [edx], ecx
// 0073283b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073283f  2bd0                 sub edx, eax
// 00732841  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00732845  8910                 mov dword ptr [eax], edx
// 00732847  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073284b  2bd1                 sub edx, ecx
// 0073284d  895500               mov dword ptr [ebp], edx
// 00732850  5b                   pop ebx
// 00732851  5f                   pop edi
// 00732852  5e                   pop esi
// 00732853  33c0                 xor eax, eax
// 00732855  5d                   pop ebp
// 00732856  83c420               add esp, 0x20
// 00732859  c22000               ret 0x20
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?AccessibleLocation@CXTPControlGallery@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
