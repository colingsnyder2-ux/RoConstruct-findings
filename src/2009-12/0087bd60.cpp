// roc 2009-12 0087bd60  unit: CXTPControlGallery  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087bd60
//
// 0087bd60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087bd64  8b542404             mov edx, dword ptr [esp + 4]
// 0087bd68  83ec20               sub esp, 0x20
// 0087bd6b  55                   push ebp
// 0087bd6c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0087bd70  56                   push esi
// 0087bd71  c7450000000000       mov dword ptr [ebp], 0
// 0087bd78  8bf1                 mov esi, ecx
// 0087bd7a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087bd7e  c70000000000         mov dword ptr [eax], 0
// 0087bd84  57                   push edi
// 0087bd85  c70100000000         mov dword ptr [ecx], 0
// 0087bd8b  8d442440             lea eax, [esp + 0x40]
// 0087bd8f  50                   push eax
// 0087bd90  8bce                 mov ecx, esi
// 0087bd92  c70200000000         mov dword ptr [edx], 0
// 0087bd98  e803fcfbff           call 0x83b9a0
// 0087bd9d  8bf8                 mov edi, eax
// 0087bd9f  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0087bda5  85c0                 test eax, eax
// 0087bda7  0f84b4000000         je 0x87be61
// 0087bdad  83782000             cmp dword ptr [eax + 0x20], 0
// 0087bdb1  0f84aa000000         je 0x87be61
// 0087bdb7  8b56e0               mov edx, dword ptr [esi - 0x20]
// 0087bdba  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0087bdc0  53                   push ebx
// 0087bdc1  8d5ee0               lea ebx, [esi - 0x20]
// 0087bdc4  6a00                 push 0
// 0087bdc6  8bcb                 mov ecx, ebx
// 0087bdc8  ffd0                 call eax
// 0087bdca  85c0                 test eax, eax
// 0087bdcc  0f848e000000         je 0x87be60
// 0087bdd2  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0087bdd8  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 0087bdde  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0087bde4  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087bde8  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0087bdee  89542414             mov dword ptr [esp + 0x14], edx
// 0087bdf2  89442418             mov dword ptr [esp + 0x18], eax
// 0087bdf6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0087bdfa  85ff                 test edi, edi
// 0087bdfc  7429                 je 0x87be27
// 0087bdfe  4f                   dec edi
// 0087bdff  57                   push edi
// 0087be00  8d542424             lea edx, [esp + 0x24]
// 0087be04  52                   push edx
// 0087be05  8bcb                 mov ecx, ebx
// 0087be07  e864ecffff           call 0x87aa70
// 0087be0c  8b08                 mov ecx, dword ptr [eax]
// 0087be0e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087be12  8b5004               mov edx, dword ptr [eax + 4]
// 0087be15  89542414             mov dword ptr [esp + 0x14], edx
// 0087be19  8b4808               mov ecx, dword ptr [eax + 8]
// 0087be1c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087be20  8b500c               mov edx, dword ptr [eax + 0xc]
// 0087be23  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087be27  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0087be2d  8d442410             lea eax, [esp + 0x10]
// 0087be31  50                   push eax
// 0087be32  e8c37ff7ff           call 0x7f3dfa
// 0087be37  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087be3b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087be3f  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087be43  8901                 mov dword ptr [ecx], eax
// 0087be45  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087be49  890a                 mov dword ptr [edx], ecx
// 0087be4b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087be4f  2bd0                 sub edx, eax
// 0087be51  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087be55  8910                 mov dword ptr [eax], edx
// 0087be57  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087be5b  2bd1                 sub edx, ecx
// 0087be5d  895500               mov dword ptr [ebp], edx
// 0087be60  5b                   pop ebx
// 0087be61  5f                   pop edi
// 0087be62  5e                   pop esi
// 0087be63  33c0                 xor eax, eax
// 0087be65  5d                   pop ebp
// 0087be66  83c420               add esp, 0x20
// 0087be69  c22000               ret 0x20
// copied from an identical function in another client (function ?AccessibleLocation@CXTPControlGallery@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp