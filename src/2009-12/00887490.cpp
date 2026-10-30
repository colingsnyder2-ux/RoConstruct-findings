// roc 2009-12 00887490  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887490
//
// 00887490  83ec40               sub esp, 0x40
// 00887493  53                   push ebx
// 00887494  56                   push esi
// 00887495  8bd9                 mov ebx, ecx
// 00887497  e874f7ffff           call 0x886c10
// 0088749c  8b742454             mov esi, dword ptr [esp + 0x54]
// 008874a0  85c0                 test eax, eax
// 008874a2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008874a6  0f845b010000         je 0x887607
// 008874ac  85c0                 test eax, eax
// 008874ae  0f8453010000         je 0x887607
// 008874b4  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 008874bb  0f8446010000         je 0x887607
// 008874c1  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 008874c8  0f8439010000         je 0x887607
// 008874ce  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008874d1  57                   push edi
// 008874d2  8d44243c             lea eax, [esp + 0x3c]
// 008874d6  50                   push eax
// 008874d7  51                   push ecx
// 008874d8  ff1550cc9800         call dword ptr [0x98cc50]
// 008874de  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008874e2  8d54242c             lea edx, [esp + 0x2c]
// 008874e6  52                   push edx
// 008874e7  8bcf                 mov ecx, edi
// 008874e9  e8c2e6f6ff           call 0x7f5bb0
// 008874ee  8d44240c             lea eax, [esp + 0xc]
// 008874f2  50                   push eax
// 008874f3  8bcf                 mov ecx, edi
// 008874f5  e866ccf7ff           call 0x804160
// 008874fa  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00887500  51                   push ecx
// 00887501  e8fa08baff           call 0x427e00
// 00887506  83c404               add esp, 4
// 00887509  85c0                 test eax, eax
// 0088750b  7461                 je 0x88756e
// 0088750d  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00887514  7510                 jne 0x887526
// 00887516  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088751a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0088751e  8d48fa               lea ecx, [eax - 6]
// 00887521  e991000000           jmp 0x8875b7
// 00887526  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088752a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0088752e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00887532  83c005               add eax, 5
// 00887535  89442424             mov dword ptr [esp + 0x24], eax
// 00887539  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088753d  89442428             mov dword ptr [esp + 0x28], eax
// 00887541  8b442454             mov eax, dword ptr [esp + 0x54]
// 00887545  83c204               add edx, 4
// 00887548  89542420             mov dword ptr [esp + 0x20], edx
// 0088754c  85c0                 test eax, eax
// 0088754e  750e                 jne 0x88755e
// 00887550  50                   push eax
// 00887551  8d4c2420             lea ecx, [esp + 0x20]
// 00887555  51                   push ecx
// 00887556  50                   push eax
// 00887557  6a05                 push 5
// 00887559  e983000000           jmp 0x8875e1
// 0088755e  8b4004               mov eax, dword ptr [eax + 4]
// 00887561  6a00                 push 0
// 00887563  8d4c2420             lea ecx, [esp + 0x20]
// 00887567  51                   push ecx
// 00887568  6a00                 push 0
// 0088756a  6a05                 push 5
// 0088756c  eb73                 jmp 0x8875e1
// 0088756e  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 00887575  7532                 jne 0x8875a9
// 00887577  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088757b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088757f  8d50fa               lea edx, [eax - 6]
// 00887582  89442424             mov dword ptr [esp + 0x24], eax
// 00887586  8b442454             mov eax, dword ptr [esp + 0x54]
// 0088758a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0088758e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00887592  894c2420             mov dword ptr [esp + 0x20], ecx
// 00887596  89542428             mov dword ptr [esp + 0x28], edx
// 0088759a  85c0                 test eax, eax
// 0088759c  75c0                 jne 0x88755e
// 0088759e  50                   push eax
// 0088759f  8d4c2420             lea ecx, [esp + 0x20]
// 008875a3  51                   push ecx
// 008875a4  50                   push eax
// 008875a5  6a05                 push 5
// 008875a7  eb38                 jmp 0x8875e1
// 008875a9  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008875ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 008875b1  83c204               add edx, 4
// 008875b4  8d48fb               lea ecx, [eax - 5]
// 008875b7  89442428             mov dword ptr [esp + 0x28], eax
// 008875bb  8b442454             mov eax, dword ptr [esp + 0x54]
// 008875bf  8954241c             mov dword ptr [esp + 0x1c], edx
// 008875c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008875c7  894c2420             mov dword ptr [esp + 0x20], ecx
// 008875cb  89542424             mov dword ptr [esp + 0x24], edx
// 008875cf  85c0                 test eax, eax
// 008875d1  7403                 je 0x8875d6
// 008875d3  8b4004               mov eax, dword ptr [eax + 4]
// 008875d6  6a00                 push 0
// 008875d8  8d4c2420             lea ecx, [esp + 0x20]
// 008875dc  51                   push ecx
// 008875dd  6a00                 push 0
// 008875df  6a06                 push 6
// 008875e1  50                   push eax
// 008875e2  8d8b6c040000         lea ecx, [ebx + 0x46c]
// 008875e8  e85342feff           call 0x86b840
// 008875ed  8b442450             mov eax, dword ptr [esp + 0x50]
// 008875f1  5f                   pop edi
// 008875f2  5e                   pop esi
// 008875f3  c70000000000         mov dword ptr [eax], 0
// 008875f9  c7400400000000       mov dword ptr [eax + 4], 0
// 00887600  5b                   pop ebx
// 00887601  83c440               add esp, 0x40
// 00887604  c21400               ret 0x14
// 00887607  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088760b  50                   push eax
// 0088760c  8b442454             mov eax, dword ptr [esp + 0x54]
// 00887610  52                   push edx
// 00887611  56                   push esi
// 00887612  8b742458             mov esi, dword ptr [esp + 0x58]
// 00887616  50                   push eax
// 00887617  56                   push esi
// 00887618  8bcb                 mov ecx, ebx
// 0088761a  e8116affff           call 0x87e030
// 0088761f  8bc6                 mov eax, esi
// 00887621  5e                   pop esi
// 00887622  5b                   pop ebx
// 00887623  83c440               add esp, 0x40
// 00887626  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBarSeparator@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp