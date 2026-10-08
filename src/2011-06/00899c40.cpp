// roc 2011-06 00899c40  unit: XTPPaintThemes::CXTPOfficeTheme  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00899c40
//
// 00899c40  83ec10               sub esp, 0x10
// 00899c43  53                   push ebx
// 00899c44  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00899c48  56                   push esi
// 00899c49  57                   push edi
// 00899c4a  8d44240c             lea eax, [esp + 0xc]
// 00899c4e  8bf9                 mov edi, ecx
// 00899c50  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00899c53  50                   push eax
// 00899c54  51                   push ecx
// 00899c55  ff157c1ca400         call dword ptr [0xa41c7c]
// 00899c5b  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00899c61  83f804               cmp eax, 4
// 00899c64  0f85c6000000         jne 0x899d30
// 00899c6a  6a3d                 push 0x3d
// 00899c6c  8bcf                 mov ecx, edi
// 00899c6e  e83d59f7ff           call 0x80f5b0
// 00899c73  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 00899c7a  8bf0                 mov esi, eax
// 00899c7c  7507                 jne 0x899c85
// 00899c7e  b829000000           mov eax, 0x29
// 00899c83  eb12                 jmp 0x899c97
// 00899c85  53                   push ebx
// 00899c86  8bcf                 mov ecx, edi
// 00899c88  e81363f7ff           call 0x80ffa0
// 00899c8d  f7d8                 neg eax
// 00899c8f  1bc0                 sbb eax, eax
// 00899c91  83e0f1               and eax, 0xfffffff1
// 00899c94  83c01e               add eax, 0x1e
// 00899c97  50                   push eax
// 00899c98  8bcf                 mov ecx, edi
// 00899c9a  e81159f7ff           call 0x80f5b0
// 00899c9f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00899ca3  56                   push esi
// 00899ca4  56                   push esi
// 00899ca5  8d542414             lea edx, [esp + 0x14]
// 00899ca9  52                   push edx
// 00899caa  8bcf                 mov ecx, edi
// 00899cac  8bd8                 mov ebx, eax
// 00899cae  e86711f7ff           call 0x80ae1a
// 00899cb3  6aff                 push -1
// 00899cb5  6aff                 push -1
// 00899cb7  8d442414             lea eax, [esp + 0x14]
// 00899cbb  50                   push eax
// 00899cbc  ff15e41ba400         call dword ptr [0xa41be4]
// 00899cc2  53                   push ebx
// 00899cc3  8d4c2410             lea ecx, [esp + 0x10]
// 00899cc7  51                   push ecx
// 00899cc8  8bcf                 mov ecx, edi
// 00899cca  e85111f7ff           call 0x80ae20
// 00899ccf  56                   push esi
// 00899cd0  56                   push esi
// 00899cd1  8d542414             lea edx, [esp + 0x14]
// 00899cd5  52                   push edx
// 00899cd6  8bcf                 mov ecx, edi
// 00899cd8  e83d11f7ff           call 0x80ae1a
// 00899cdd  8b4704               mov eax, dword ptr [edi + 4]
// 00899ce0  8b1d0c01a400         mov ebx, dword ptr [0xa4010c]
// 00899ce6  56                   push esi
// 00899ce7  6a02                 push 2
// 00899ce9  6a02                 push 2
// 00899ceb  50                   push eax
// 00899cec  ffd3                 call ebx
// 00899cee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00899cf2  8b5704               mov edx, dword ptr [edi + 4]
// 00899cf5  56                   push esi
// 00899cf6  6a02                 push 2
// 00899cf8  83c1fe               add ecx, -2
// 00899cfb  51                   push ecx
// 00899cfc  52                   push edx
// 00899cfd  ffd3                 call ebx
// 00899cff  8b442418             mov eax, dword ptr [esp + 0x18]
// 00899d03  8b4f04               mov ecx, dword ptr [edi + 4]
// 00899d06  56                   push esi
// 00899d07  83c0fe               add eax, -2
// 00899d0a  50                   push eax
// 00899d0b  6a02                 push 2
// 00899d0d  51                   push ecx
// 00899d0e  ffd3                 call ebx
// 00899d10  8b542418             mov edx, dword ptr [esp + 0x18]
// 00899d14  8b442414             mov eax, dword ptr [esp + 0x14]
// 00899d18  8b4f04               mov ecx, dword ptr [edi + 4]
// 00899d1b  56                   push esi
// 00899d1c  83c2fe               add edx, -2
// 00899d1f  52                   push edx
// 00899d20  83c0fe               add eax, -2
// 00899d23  50                   push eax
// 00899d24  51                   push ecx
// 00899d25  ffd3                 call ebx
// 00899d27  5f                   pop edi
// 00899d28  5e                   pop esi
// 00899d29  5b                   pop ebx
// 00899d2a  83c410               add esp, 0x10
// 00899d2d  c20800               ret 8
// 00899d30  83f805               cmp eax, 5
// 00899d33  754c                 jne 0x899d81
// 00899d35  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00899d39  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00899d3d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00899d41  6a29                 push 0x29
// 00899d43  6a2b                 push 0x2b
// 00899d45  83ec10               sub esp, 0x10
// 00899d48  8bc4                 mov eax, esp
// 00899d4a  8910                 mov dword ptr [eax], edx
// 00899d4c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00899d50  894804               mov dword ptr [eax + 4], ecx
// 00899d53  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00899d57  895008               mov dword ptr [eax + 8], edx
// 00899d5a  89480c               mov dword ptr [eax + 0xc], ecx
// 00899d5d  56                   push esi
// 00899d5e  8bcf                 mov ecx, edi
// 00899d60  e81b69f7ff           call 0x810680
// 00899d65  6a1e                 push 0x1e
// 00899d67  8bcf                 mov ecx, edi
// 00899d69  e84258f7ff           call 0x80f5b0
// 00899d6e  50                   push eax
// 00899d6f  53                   push ebx
// 00899d70  56                   push esi
// 00899d71  8bcf                 mov ecx, edi
// 00899d73  e8d8fdffff           call 0x899b50
// 00899d78  5f                   pop edi
// 00899d79  5e                   pop esi
// 00899d7a  5b                   pop ebx
// 00899d7b  83c410               add esp, 0x10
// 00899d7e  c20800               ret 8
// 00899d81  53                   push ebx
// 00899d82  8bcf                 mov ecx, edi
// 00899d84  e81762f7ff           call 0x80ffa0
// 00899d89  6a0f                 push 0xf
// 00899d8b  8bcf                 mov ecx, edi
// 00899d8d  85c0                 test eax, eax
// 00899d8f  741d                 je 0x899dae
// 00899d91  e81a58f7ff           call 0x80f5b0
// 00899d96  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00899d9a  50                   push eax
// 00899d9b  8d542410             lea edx, [esp + 0x10]
// 00899d9f  52                   push edx
// 00899da0  e87b10f7ff           call 0x80ae20
// 00899da5  5f                   pop edi
// 00899da6  5e                   pop esi
// 00899da7  5b                   pop ebx
// 00899da8  83c410               add esp, 0x10
// 00899dab  c20800               ret 8
// 00899dae  e8fd57f7ff           call 0x80f5b0
// 00899db3  6a1e                 push 0x1e
// 00899db5  8bcf                 mov ecx, edi
// 00899db7  8bf0                 mov esi, eax
// 00899db9  e8f257f7ff           call 0x80f5b0
// 00899dbe  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00899dc2  50                   push eax
// 00899dc3  8d442410             lea eax, [esp + 0x10]
// 00899dc7  50                   push eax
// 00899dc8  8bcf                 mov ecx, edi
// 00899dca  e85110f7ff           call 0x80ae20
// 00899dcf  56                   push esi
// 00899dd0  56                   push esi
// 00899dd1  8d4c2414             lea ecx, [esp + 0x14]
// 00899dd5  51                   push ecx
// 00899dd6  8bcf                 mov ecx, edi
// 00899dd8  e83d10f7ff           call 0x80ae1a
// 00899ddd  8b5704               mov edx, dword ptr [edi + 4]
// 00899de0  8b1d0c01a400         mov ebx, dword ptr [0xa4010c]
// 00899de6  56                   push esi
// 00899de7  6a01                 push 1
// 00899de9  6a01                 push 1
// 00899deb  52                   push edx
// 00899dec  ffd3                 call ebx
// 00899dee  8b442414             mov eax, dword ptr [esp + 0x14]
// 00899df2  8b4f04               mov ecx, dword ptr [edi + 4]
// 00899df5  56                   push esi
// 00899df6  6a01                 push 1
// 00899df8  83c0fe               add eax, -2
// 00899dfb  50                   push eax
// 00899dfc  51                   push ecx
// 00899dfd  ffd3                 call ebx
// 00899dff  8b542418             mov edx, dword ptr [esp + 0x18]
// 00899e03  8b4704               mov eax, dword ptr [edi + 4]
// 00899e06  56                   push esi
// 00899e07  83c2fe               add edx, -2
// 00899e0a  52                   push edx
// 00899e0b  6a01                 push 1
// 00899e0d  50                   push eax
// 00899e0e  ffd3                 call ebx
// 00899e10  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00899e14  8b542414             mov edx, dword ptr [esp + 0x14]
// 00899e18  8b4704               mov eax, dword ptr [edi + 4]
// 00899e1b  56                   push esi
// 00899e1c  83c1fe               add ecx, -2
// 00899e1f  51                   push ecx
// 00899e20  83c2fe               add edx, -2
// 00899e23  52                   push edx
// 00899e24  50                   push eax
// 00899e25  ffd3                 call ebx
// 00899e27  5f                   pop edi
// 00899e28  5e                   pop esi
// 00899e29  5b                   pop ebx
// 00899e2a  83c410               add esp, 0x10
// 00899e2d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillCommandBarEntry@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
