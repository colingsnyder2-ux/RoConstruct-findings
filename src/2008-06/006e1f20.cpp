// roc 2008-06 006e1f20  unit: MyXTPCommandBars  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1f20
//
// 006e1f20  51                   push ecx
// 006e1f21  53                   push ebx
// 006e1f22  55                   push ebp
// 006e1f23  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006e1f27  56                   push esi
// 006e1f28  57                   push edi
// 006e1f29  8bf9                 mov edi, ecx
// 006e1f2b  33db                 xor ebx, ebx
// 006e1f2d  399f84000000         cmp dword ptr [edi + 0x84], ebx
// 006e1f33  c744241000000001     mov dword ptr [esp + 0x10], 0x1000000
// 006e1f3b  7e55                 jle 0x6e1f92
// 006e1f3d  8d4900               lea ecx, [ecx]
// 006e1f40  53                   push ebx
// 006e1f41  8bcf                 mov ecx, edi
// 006e1f43  e8e817fcff           call 0x6a3730
// 006e1f48  8bf0                 mov esi, eax
// 006e1f4a  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 006e1f51  7536                 jne 0x6e1f89
// 006e1f53  837d0400             cmp dword ptr [ebp + 4], 0
// 006e1f57  7419                 je 0x6e1f72
// 006e1f59  83be8801000000       cmp dword ptr [esi + 0x188], 0
// 006e1f60  7410                 je 0x6e1f72
// 006e1f62  8b06                 mov eax, dword ptr [esi]
// 006e1f64  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 006e1f6a  8bce                 mov ecx, esi
// 006e1f6c  ffd2                 call edx
// 006e1f6e  85c0                 test eax, eax
// 006e1f70  7417                 je 0x6e1f89
// 006e1f72  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e1f76  8b06                 mov eax, dword ptr [esi]
// 006e1f78  8b80e8010000         mov eax, dword ptr [eax + 0x1e8]
// 006e1f7e  55                   push ebp
// 006e1f7f  51                   push ecx
// 006e1f80  8d542418             lea edx, [esp + 0x18]
// 006e1f84  52                   push edx
// 006e1f85  8bce                 mov ecx, esi
// 006e1f87  ffd0                 call eax
// 006e1f89  43                   inc ebx
// 006e1f8a  3b9f84000000         cmp ebx, dword ptr [edi + 0x84]
// 006e1f90  7cae                 jl 0x6e1f40
// 006e1f92  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 006e1f95  33db                 xor ebx, ebx
// 006e1f97  e8c47afdff           call 0x6b9a60
// 006e1f9c  85c0                 test eax, eax
// 006e1f9e  7e44                 jle 0x6e1fe4
// 006e1fa0  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 006e1fa3  53                   push ebx
// 006e1fa4  e8d7d0d4ff           call 0x42f080
// 006e1fa9  837d0400             cmp dword ptr [ebp + 4], 0
// 006e1fad  8bf0                 mov esi, eax
// 006e1faf  740f                 je 0x6e1fc0
// 006e1fb1  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006e1fb7  e874140100           call 0x6f3430
// 006e1fbc  85c0                 test eax, eax
// 006e1fbe  7417                 je 0x6e1fd7
// 006e1fc0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e1fc4  8b16                 mov edx, dword ptr [esi]
// 006e1fc6  8b92e8010000         mov edx, dword ptr [edx + 0x1e8]
// 006e1fcc  55                   push ebp
// 006e1fcd  50                   push eax
// 006e1fce  8d4c2418             lea ecx, [esp + 0x18]
// 006e1fd2  51                   push ecx
// 006e1fd3  8bce                 mov ecx, esi
// 006e1fd5  ffd2                 call edx
// 006e1fd7  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 006e1fda  43                   inc ebx
// 006e1fdb  e8807afdff           call 0x6b9a60
// 006e1fe0  3bd8                 cmp ebx, eax
// 006e1fe2  7cbc                 jl 0x6e1fa0
// 006e1fe4  5f                   pop edi
// 006e1fe5  5e                   pop esi
// 006e1fe6  5d                   pop ebp
// 006e1fe7  5b                   pop ebx
// 006e1fe8  59                   pop ecx
// 006e1fe9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPCommandBars@@MAEXPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
