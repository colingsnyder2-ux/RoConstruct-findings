// roc 2010-06 00888260  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 568 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00888260
//
// 00888260  53                   push ebx
// 00888261  8bd9                 mov ebx, ecx
// 00888263  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00888266  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0088826a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088826e  0f85a9000000         jne 0x88831d
// 00888274  83e901               sub ecx, 1
// 00888277  0f8486000000         je 0x888303
// 0088827d  83e901               sub ecx, 1
// 00888280  7445                 je 0x8882c7
// 00888282  83e901               sub ecx, 1
// 00888285  0f85f9010000         jne 0x888484
// 0088828b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00888291  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00888294  83c008               add eax, 8
// 00888297  83f9ff               cmp ecx, -1
// 0088829a  7516                 jne 0x8882b2
// 0088829c  8b4004               mov eax, dword ptr [eax + 4]
// 0088829f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008882a3  50                   push eax
// 008882a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008882a8  50                   push eax
// 008882a9  e89004f2ff           call 0x7a873e
// 008882ae  5b                   pop ebx
// 008882af  c20c00               ret 0xc
// 008882b2  8bc1                 mov eax, ecx
// 008882b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008882b8  50                   push eax
// 008882b9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008882bd  50                   push eax
// 008882be  e87b04f2ff           call 0x7a873e
// 008882c3  5b                   pop ebx
// 008882c4  c20c00               ret 0xc
// 008882c7  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008882cd  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008882d0  83c008               add eax, 8
// 008882d3  83f9ff               cmp ecx, -1
// 008882d6  7516                 jne 0x8882ee
// 008882d8  8b4004               mov eax, dword ptr [eax + 4]
// 008882db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008882df  50                   push eax
// 008882e0  51                   push ecx
// 008882e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008882e5  e85404f2ff           call 0x7a873e
// 008882ea  5b                   pop ebx
// 008882eb  c20c00               ret 0xc
// 008882ee  8bc1                 mov eax, ecx
// 008882f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008882f4  50                   push eax
// 008882f5  51                   push ecx
// 008882f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008882fa  e83f04f2ff           call 0x7a873e
// 008882ff  5b                   pop ebx
// 00888300  c20c00               ret 0xc
// 00888303  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00888307  834004fe             add dword ptr [eax + 4], -2
// 0088830b  8300fe               add dword ptr [eax], -2
// 0088830e  b902000000           mov ecx, 2
// 00888313  014808               add dword ptr [eax + 8], ecx
// 00888316  01480c               add dword ptr [eax + 0xc], ecx
// 00888319  5b                   pop ebx
// 0088831a  c20c00               ret 0xc
// 0088831d  83f903               cmp ecx, 3
// 00888320  0f875e010000         ja 0x888484
// 00888326  56                   push esi
// 00888327  57                   push edi
// 00888328  ff248d88848800       jmp dword ptr [ecx*4 + 0x888488]
// 0088832f  e8ecb7f5ff           call 0x7e3b20
// 00888334  6a0f                 push 0xf
// 00888336  8bc8                 mov ecx, eax
// 00888338  e873aff5ff           call 0x7e32b0
// 0088833d  8bf8                 mov edi, eax
// 0088833f  e8dcb7f5ff           call 0x7e3b20
// 00888344  6a0f                 push 0xf
// 00888346  8bc8                 mov ecx, eax
// 00888348  e863aff5ff           call 0x7e32b0
// 0088834d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00888351  8b560c               mov edx, dword ptr [esi + 0xc]
// 00888354  2b5604               sub edx, dword ptr [esi + 4]
// 00888357  57                   push edi
// 00888358  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0088835c  50                   push eax
// 0088835d  8b4608               mov eax, dword ptr [esi + 8]
// 00888360  2b06                 sub eax, dword ptr [esi]
// 00888362  4a                   dec edx
// 00888363  52                   push edx
// 00888364  83e802               sub eax, 2
// 00888367  50                   push eax
// 00888368  6a00                 push 0
// 0088836a  6a01                 push 1
// 0088836c  8bcf                 mov ecx, edi
// 0088836e  e84b520f00           call 0x97d5be
// 00888373  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00888376  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 0088837c  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088837f  83f9ff               cmp ecx, -1
// 00888382  7503                 jne 0x888387
// 00888384  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00888387  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0088838a  83faff               cmp edx, -1
// 0088838d  7505                 jne 0x888394
// 0088838f  8b4048               mov eax, dword ptr [eax + 0x48]
// 00888392  eb02                 jmp 0x888396
// 00888394  8bc2                 mov eax, edx
// 00888396  8b560c               mov edx, dword ptr [esi + 0xc]
// 00888399  2b5604               sub edx, dword ptr [esi + 4]
// 0088839c  51                   push ecx
// 0088839d  50                   push eax
// 0088839e  8b4608               mov eax, dword ptr [esi + 8]
// 008883a1  2b06                 sub eax, dword ptr [esi]
// 008883a3  52                   push edx
// 008883a4  50                   push eax
// 008883a5  6a00                 push 0
// 008883a7  6a00                 push 0
// 008883a9  8bcf                 mov ecx, edi
// 008883ab  e80e520f00           call 0x97d5be
// 008883b0  5f                   pop edi
// 008883b1  5e                   pop esi
// 008883b2  5b                   pop ebx
// 008883b3  c20c00               ret 0xc
// 008883b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 008883ba  ff4804               dec dword ptr [eax + 4]
// 008883bd  5f                   pop edi
// 008883be  5e                   pop esi
// 008883bf  5b                   pop ebx
// 008883c0  c20c00               ret 0xc
// 008883c3  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008883c9  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008883cc  83c050               add eax, 0x50
// 008883cf  83f9ff               cmp ecx, -1
// 008883d2  7505                 jne 0x8883d9
// 008883d4  8b4004               mov eax, dword ptr [eax + 4]
// 008883d7  eb02                 jmp 0x8883db
// 008883d9  8bc1                 mov eax, ecx
// 008883db  8b742414             mov esi, dword ptr [esp + 0x14]
// 008883df  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008883e3  50                   push eax
// 008883e4  56                   push esi
// 008883e5  8bcf                 mov ecx, edi
// 008883e7  e85203f2ff           call 0x7a873e
// 008883ec  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008883ef  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008883f5  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008883f8  83c044               add eax, 0x44
// 008883fb  83f9ff               cmp ecx, -1
// 008883fe  7505                 jne 0x888405
// 00888400  8b4004               mov eax, dword ptr [eax + 4]
// 00888403  eb02                 jmp 0x888407
// 00888405  8bc1                 mov eax, ecx
// 00888407  8b5604               mov edx, dword ptr [esi + 4]
// 0088840a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088840d  50                   push eax
// 0088840e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00888411  2bc2                 sub eax, edx
// 00888413  50                   push eax
// 00888414  6a01                 push 1
// 00888416  49                   dec ecx
// 00888417  52                   push edx
// 00888418  51                   push ecx
// 00888419  8bcf                 mov ecx, edi
// 0088841b  e86a490f00           call 0x97cd8a
// 00888420  5f                   pop edi
// 00888421  5e                   pop esi
// 00888422  5b                   pop ebx
// 00888423  c20c00               ret 0xc
// 00888426  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0088842c  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0088842f  83c050               add eax, 0x50
// 00888432  83f9ff               cmp ecx, -1
// 00888435  7505                 jne 0x88843c
// 00888437  8b4004               mov eax, dword ptr [eax + 4]
// 0088843a  eb02                 jmp 0x88843e
// 0088843c  8bc1                 mov eax, ecx
// 0088843e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00888442  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00888446  50                   push eax
// 00888447  56                   push esi
// 00888448  8bcf                 mov ecx, edi
// 0088844a  e8ef02f2ff           call 0x7a873e
// 0088844f  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00888452  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00888458  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 0088845b  83c044               add eax, 0x44
// 0088845e  83f9ff               cmp ecx, -1
// 00888461  7505                 jne 0x888468
// 00888463  8b4004               mov eax, dword ptr [eax + 4]
// 00888466  eb02                 jmp 0x88846a
// 00888468  8bc1                 mov eax, ecx
// 0088846a  8b16                 mov edx, dword ptr [esi]
// 0088846c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0088846f  50                   push eax
// 00888470  8b4608               mov eax, dword ptr [esi + 8]
// 00888473  6a01                 push 1
// 00888475  2bc2                 sub eax, edx
// 00888477  50                   push eax
// 00888478  49                   dec ecx
// 00888479  51                   push ecx
// 0088847a  52                   push edx
// 0088847b  8bcf                 mov ecx, edi
// 0088847d  e808490f00           call 0x97cd8a
// 00888482  5f                   pop edi
// 00888483  5e                   pop esi
// 00888484  5b                   pop ebx
// 00888485  c20c00               ret 0xc
// 00888488  2f                   das 
// 00888489  838800b6838800       or dword ptr [eax - 0x777c4a00], 0
// 00888490  c3                   ret 
// 00888491  83880026848800       or dword ptr [eax - 0x777bda00], 0
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawWorkspacePart@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAUtagRECT@@W4XTPTabWorkspacePart@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
