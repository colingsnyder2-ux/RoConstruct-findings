// roc 2009-06 007a3c50  unit: XTPPaintThemes::CXTPDefaultTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a3c50
//
// 007a3c50  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 007a3c55  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a3c59  56                   push esi
// 007a3c5a  57                   push edi
// 007a3c5b  8bf1                 mov esi, ecx
// 007a3c5d  7549                 jne 0x7a3ca8
// 007a3c5f  85c0                 test eax, eax
// 007a3c61  7545                 jne 0x7a3ca8
// 007a3c63  39442420             cmp dword ptr [esp + 0x20], eax
// 007a3c67  750a                 jne 0x7a3c73
// 007a3c69  39442424             cmp dword ptr [esp + 0x24], eax
// 007a3c6d  0f8426010000         je 0x7a3d99
// 007a3c73  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a3c77  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a3c7b  6a0d                 push 0xd
// 007a3c7d  6a0d                 push 0xd
// 007a3c7f  83ec10               sub esp, 0x10
// 007a3c82  8bc4                 mov eax, esp
// 007a3c84  8908                 mov dword ptr [eax], ecx
// 007a3c86  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a3c8a  895004               mov dword ptr [eax + 4], edx
// 007a3c8d  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a3c91  894808               mov dword ptr [eax + 8], ecx
// 007a3c94  89500c               mov dword ptr [eax + 0xc], edx
// 007a3c97  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a3c9b  50                   push eax
// 007a3c9c  8bce                 mov ecx, esi
// 007a3c9e  e84dfbf7ff           call 0x7237f0
// 007a3ca3  5f                   pop edi
// 007a3ca4  5e                   pop esi
// 007a3ca5  c23000               ret 0x30
// 007a3ca8  837c242800           cmp dword ptr [esp + 0x28], 0
// 007a3cad  7577                 jne 0x7a3d26
// 007a3caf  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a3cb3  85c0                 test eax, eax
// 007a3cb5  742c                 je 0x7a3ce3
// 007a3cb7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a3cbb  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a3cbf  6a14                 push 0x14
// 007a3cc1  6a10                 push 0x10
// 007a3cc3  83ec10               sub esp, 0x10
// 007a3cc6  8bc4                 mov eax, esp
// 007a3cc8  8908                 mov dword ptr [eax], ecx
// 007a3cca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a3cce  895004               mov dword ptr [eax + 4], edx
// 007a3cd1  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a3cd5  894808               mov dword ptr [eax + 8], ecx
// 007a3cd8  57                   push edi
// 007a3cd9  8bce                 mov ecx, esi
// 007a3cdb  89500c               mov dword ptr [eax + 0xc], edx
// 007a3cde  e89decf7ff           call 0x722980
// 007a3ce3  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a3ce7  83f802               cmp eax, 2
// 007a3cea  7409                 je 0x7a3cf5
// 007a3cec  83f803               cmp eax, 3
// 007a3cef  0f85a4000000         jne 0x7a3d99
// 007a3cf5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a3cf9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a3cfd  6a14                 push 0x14
// 007a3cff  6a10                 push 0x10
// 007a3d01  83ec10               sub esp, 0x10
// 007a3d04  8bc4                 mov eax, esp
// 007a3d06  8908                 mov dword ptr [eax], ecx
// 007a3d08  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a3d0c  895004               mov dword ptr [eax + 4], edx
// 007a3d0f  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a3d13  894808               mov dword ptr [eax + 8], ecx
// 007a3d16  57                   push edi
// 007a3d17  8bce                 mov ecx, esi
// 007a3d19  89500c               mov dword ptr [eax + 0xc], edx
// 007a3d1c  e85fecf7ff           call 0x722980
// 007a3d21  5f                   pop edi
// 007a3d22  5e                   pop esi
// 007a3d23  c23000               ret 0x30
// 007a3d26  85c0                 test eax, eax
// 007a3d28  741f                 je 0x7a3d49
// 007a3d2a  837c242000           cmp dword ptr [esp + 0x20], 0
// 007a3d2f  7538                 jne 0x7a3d69
// 007a3d31  837c242400           cmp dword ptr [esp + 0x24], 0
// 007a3d36  7531                 jne 0x7a3d69
// 007a3d38  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a3d3c  8d442410             lea eax, [esp + 0x10]
// 007a3d40  50                   push eax
// 007a3d41  57                   push edi
// 007a3d42  e8b9ebffff           call 0x7a2900
// 007a3d47  ebac                 jmp 0x7a3cf5
// 007a3d49  837c243000           cmp dword ptr [esp + 0x30], 0
// 007a3d4e  7519                 jne 0x7a3d69
// 007a3d50  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a3d54  83f802               cmp eax, 2
// 007a3d57  7410                 je 0x7a3d69
// 007a3d59  83f803               cmp eax, 3
// 007a3d5c  740b                 je 0x7a3d69
// 007a3d5e  837c242000           cmp dword ptr [esp + 0x20], 0
// 007a3d63  7439                 je 0x7a3d9e
// 007a3d65  85c0                 test eax, eax
// 007a3d67  7439                 je 0x7a3da2
// 007a3d69  6a14                 push 0x14
// 007a3d6b  6a10                 push 0x10
// 007a3d6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a3d71  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a3d75  83ec10               sub esp, 0x10
// 007a3d78  8bc4                 mov eax, esp
// 007a3d7a  8908                 mov dword ptr [eax], ecx
// 007a3d7c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a3d80  895004               mov dword ptr [eax + 4], edx
// 007a3d83  8b542434             mov edx, dword ptr [esp + 0x34]
// 007a3d87  894808               mov dword ptr [eax + 8], ecx
// 007a3d8a  89500c               mov dword ptr [eax + 0xc], edx
// 007a3d8d  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a3d91  50                   push eax
// 007a3d92  8bce                 mov ecx, esi
// 007a3d94  e8e7ebf7ff           call 0x722980
// 007a3d99  5f                   pop edi
// 007a3d9a  5e                   pop esi
// 007a3d9b  c23000               ret 0x30
// 007a3d9e  85c0                 test eax, eax
// 007a3da0  74f7                 je 0x7a3d99
// 007a3da2  6a10                 push 0x10
// 007a3da4  6a14                 push 0x14
// 007a3da6  ebc5                 jmp 0x7a3d6d
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
