// roc 2008-06 006e19f0  unit: VCMDIFrameWnd::?$CXTPFrameWndBase  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e19f0
//
// 006e19f0  53                   push ebx
// 006e19f1  56                   push esi
// 006e19f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e19f6  8b4608               mov eax, dword ptr [esi + 8]
// 006e19f9  33db                 xor ebx, ebx
// 006e19fb  85c0                 test eax, eax
// 006e19fd  0f94c3               sete bl
// 006e1a00  57                   push edi
// 006e1a01  8bf9                 mov edi, ecx
// 006e1a03  83cb14               or ebx, 0x14
// 006e1a06  85c0                 test eax, eax
// 006e1a08  750b                 jne 0x6e1a15
// 006e1a0a  398780010000         cmp dword ptr [edi + 0x180], eax
// 006e1a10  7503                 jne 0x6e1a15
// 006e1a12  83cb02               or ebx, 2
// 006e1a15  8b4614               mov eax, dword ptr [esi + 0x14]
// 006e1a18  8987c8000000         mov dword ptr [edi + 0xc8], eax
// 006e1a1e  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 006e1a22  7432                 je 0x6e1a56
// 006e1a24  8b17                 mov edx, dword ptr [edi]
// 006e1a26  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 006e1a2c  ffd0                 call eax
// 006e1a2e  85c0                 test eax, eax
// 006e1a30  7424                 je 0x6e1a56
// 006e1a32  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 006e1a35  898fd0010000         mov dword ptr [edi + 0x1d0], ecx
// 006e1a3b  8b5644               mov edx, dword ptr [esi + 0x44]
// 006e1a3e  8997d4010000         mov dword ptr [edi + 0x1d4], edx
// 006e1a44  8b4648               mov eax, dword ptr [esi + 0x48]
// 006e1a47  8987d8010000         mov dword ptr [edi + 0x1d8], eax
// 006e1a4d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006e1a50  898fdc010000         mov dword ptr [edi + 0x1dc], ecx
// 006e1a56  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 006e1a5c  85c0                 test eax, eax
// 006e1a5e  7479                 je 0x6e1ad9
// 006e1a60  8b5618               mov edx, dword ptr [esi + 0x18]
// 006e1a63  895014               mov dword ptr [eax + 0x14], edx
// 006e1a66  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 006e1a6c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006e1a6f  894818               mov dword ptr [eax + 0x18], ecx
// 006e1a72  8b5620               mov edx, dword ptr [esi + 0x20]
// 006e1a75  89501c               mov dword ptr [eax + 0x1c], edx
// 006e1a78  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006e1a7b  83c018               add eax, 0x18
// 006e1a7e  894808               mov dword ptr [eax + 8], ecx
// 006e1a81  8b5628               mov edx, dword ptr [esi + 0x28]
// 006e1a84  89500c               mov dword ptr [eax + 0xc], edx
// 006e1a87  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 006e1a8d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006e1a90  894828               mov dword ptr [eax + 0x28], ecx
// 006e1a93  8b5634               mov edx, dword ptr [esi + 0x34]
// 006e1a96  89502c               mov dword ptr [eax + 0x2c], edx
// 006e1a99  8b4604               mov eax, dword ptr [esi + 4]
// 006e1a9c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e1a9f  8b560c               mov edx, dword ptr [esi + 0xc]
// 006e1aa2  f7d8                 neg eax
// 006e1aa4  1bc0                 sbb eax, eax
// 006e1aa6  83e0c0               and eax, 0xffffffc0
// 006e1aa9  83e880               sub eax, -0x80
// 006e1aac  0bc3                 or eax, ebx
// 006e1aae  50                   push eax
// 006e1aaf  6a00                 push 0
// 006e1ab1  6a00                 push 0
// 006e1ab3  51                   push ecx
// 006e1ab4  52                   push edx
// 006e1ab5  6a00                 push 0
// 006e1ab7  8bcf                 mov ecx, edi
// 006e1ab9  e888effbff           call 0x6a0a46
// 006e1abe  8b4604               mov eax, dword ptr [esi + 4]
// 006e1ac1  8987dc000000         mov dword ptr [edi + 0xdc], eax
// 006e1ac7  837e0800             cmp dword ptr [esi + 8], 0
// 006e1acb  740c                 je 0x6e1ad9
// 006e1acd  8b17                 mov edx, dword ptr [edi]
// 006e1acf  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006e1ad5  8bcf                 mov ecx, edi
// 006e1ad7  ffd0                 call eax
// 006e1ad9  5f                   pop edi
// 006e1ada  5e                   pop esi
// 006e1adb  5b                   pop ebx
// 006e1adc  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ?SetBarInfo@CXTPToolBar@@QAEXPAVCToolBarInfo@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
