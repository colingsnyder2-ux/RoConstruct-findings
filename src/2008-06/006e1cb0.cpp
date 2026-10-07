// roc 2008-06 006e1cb0  unit: CXTPControls  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1cb0
//
// 006e1cb0  837c240800           cmp dword ptr [esp + 8], 0
// 006e1cb5  53                   push ebx
// 006e1cb6  55                   push ebp
// 006e1cb7  56                   push esi
// 006e1cb8  57                   push edi
// 006e1cb9  8bf1                 mov esi, ecx
// 006e1cbb  0f84f8000000         je 0x6e1db9
// 006e1cc1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e1cc5  6a00                 push 0
// 006e1cc7  56                   push esi
// 006e1cc8  6884658500           push 0x856584
// 006e1ccd  57                   push edi
// 006e1cce  e83db60100           call 0x6fd310
// 006e1cd3  6a01                 push 1
// 006e1cd5  8d4604               lea eax, [esi + 4]
// 006e1cd8  50                   push eax
// 006e1cd9  6814e58100           push 0x81e514
// 006e1cde  57                   push edi
// 006e1cdf  e8bcb60100           call 0x6fd3a0
// 006e1ce4  6a00                 push 0
// 006e1ce6  8d4e08               lea ecx, [esi + 8]
// 006e1ce9  51                   push ecx
// 006e1cea  6878658500           push 0x856578
// 006e1cef  57                   push edi
// 006e1cf0  e8abb60100           call 0x6fd3a0
// 006e1cf5  8d5614               lea edx, [esi + 0x14]
// 006e1cf8  52                   push edx
// 006e1cf9  686c658500           push 0x85656c
// 006e1cfe  57                   push edi
// 006e1cff  e83cb60100           call 0x6fd340
// 006e1d04  6a00                 push 0
// 006e1d06  8d4618               lea eax, [esi + 0x18]
// 006e1d09  50                   push eax
// 006e1d0a  685c658500           push 0x85655c
// 006e1d0f  57                   push edi
// 006e1d10  e8fbb50100           call 0x6fd310
// 006e1d15  83c44c               add esp, 0x4c
// 006e1d18  33c9                 xor ecx, ecx
// 006e1d1a  51                   push ecx
// 006e1d1b  33c0                 xor eax, eax
// 006e1d1d  50                   push eax
// 006e1d1e  8d4e0c               lea ecx, [esi + 0xc]
// 006e1d21  51                   push ecx
// 006e1d22  6850658500           push 0x856550
// 006e1d27  57                   push edi
// 006e1d28  e863b70100           call 0x6fd490
// 006e1d2d  83c404               add esp, 4
// 006e1d30  8bc4                 mov eax, esp
// 006e1d32  33c9                 xor ecx, ecx
// 006e1d34  33d2                 xor edx, edx
// 006e1d36  8908                 mov dword ptr [eax], ecx
// 006e1d38  895004               mov dword ptr [eax + 4], edx
// 006e1d3b  8d561c               lea edx, [esi + 0x1c]
// 006e1d3e  52                   push edx
// 006e1d3f  33db                 xor ebx, ebx
// 006e1d41  6844658500           push 0x856544
// 006e1d46  33ed                 xor ebp, ebp
// 006e1d48  895808               mov dword ptr [eax + 8], ebx
// 006e1d4b  57                   push edi
// 006e1d4c  89680c               mov dword ptr [eax + 0xc], ebp
// 006e1d4f  e86cb70100           call 0x6fd4c0
// 006e1d54  33c9                 xor ecx, ecx
// 006e1d56  51                   push ecx
// 006e1d57  33c0                 xor eax, eax
// 006e1d59  50                   push eax
// 006e1d5a  8d4630               lea eax, [esi + 0x30]
// 006e1d5d  50                   push eax
// 006e1d5e  6838658500           push 0x856538
// 006e1d63  57                   push edi
// 006e1d64  e827b70100           call 0x6fd490
// 006e1d69  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006e1d6d  83c430               add esp, 0x30
// 006e1d70  833906               cmp dword ptr [ecx], 6
// 006e1d73  7644                 jbe 0x6e1db9
// 006e1d75  55                   push ebp
// 006e1d76  8d5e3c               lea ebx, [esi + 0x3c]
// 006e1d79  53                   push ebx
// 006e1d7a  682c658500           push 0x85652c
// 006e1d7f  57                   push edi
// 006e1d80  e81bb60100           call 0x6fd3a0
// 006e1d85  83c410               add esp, 0x10
// 006e1d88  392b                 cmp dword ptr [ebx], ebp
// 006e1d8a  742d                 je 0x6e1db9
// 006e1d8c  33c9                 xor ecx, ecx
// 006e1d8e  51                   push ecx
// 006e1d8f  33c0                 xor eax, eax
// 006e1d91  50                   push eax
// 006e1d92  8d5640               lea edx, [esi + 0x40]
// 006e1d95  52                   push edx
// 006e1d96  6810658500           push 0x856510
// 006e1d9b  57                   push edi
// 006e1d9c  e8efb60100           call 0x6fd490
// 006e1da1  33c9                 xor ecx, ecx
// 006e1da3  51                   push ecx
// 006e1da4  33c0                 xor eax, eax
// 006e1da6  50                   push eax
// 006e1da7  83c648               add esi, 0x48
// 006e1daa  56                   push esi
// 006e1dab  68f4648500           push 0x8564f4
// 006e1db0  57                   push edi
// 006e1db1  e8dab60100           call 0x6fd490
// 006e1db6  83c428               add esp, 0x28
// 006e1db9  5f                   pop edi
// 006e1dba  5e                   pop esi
// 006e1dbb  5d                   pop ebp
// 006e1dbc  5b                   pop ebx
// 006e1dbd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CToolBarInfo@CXTPToolBar@@QAEXPAVCXTPPropExchange@@PAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
