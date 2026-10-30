// roc 2012-06 00a04df0  unit: CXTPRibbonTheme  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a04df0
//
// 00a04df0  83ec30               sub esp, 0x30
// 00a04df3  53                   push ebx
// 00a04df4  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00a04df8  55                   push ebp
// 00a04df9  56                   push esi
// 00a04dfa  57                   push edi
// 00a04dfb  8d442410             lea eax, [esp + 0x10]
// 00a04dff  8bf9                 mov edi, ecx
// 00a04e01  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a04e04  50                   push eax
// 00a04e05  51                   push ecx
// 00a04e06  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a04e0c  bd05000000           mov ebp, 5
// 00a04e11  8bcf                 mov ecx, edi
// 00a04e13  39ab00010000         cmp dword ptr [ebx + 0x100], ebp
// 00a04e19  7527                 jne 0xa04e42
// 00a04e1b  68b8bfc100           push 0xc1bfb8
// 00a04e20  e84b2a0000           call 0xa07870
// 00a04e25  8bf0                 mov esi, eax
// 00a04e27  85f6                 test esi, esi
// 00a04e29  0f8404010000         je 0xa04f33
// 00a04e2f  6a01                 push 1
// 00a04e31  6a00                 push 0
// 00a04e33  8d542438             lea edx, [esp + 0x38]
// 00a04e37  bd04000000           mov ebp, 4
// 00a04e3c  52                   push edx
// 00a04e3d  e9a4000000           jmp 0xa04ee6
// 00a04e42  53                   push ebx
// 00a04e43  e83834f8ff           call 0x988280
// 00a04e48  85c0                 test eax, eax
// 00a04e4a  7417                 je 0xa04e63
// 00a04e4c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a04e50  53                   push ebx
// 00a04e51  50                   push eax
// 00a04e52  8bcf                 mov ecx, edi
// 00a04e54  e847730000           call 0xa0c1a0
// 00a04e59  5f                   pop edi
// 00a04e5a  5e                   pop esi
// 00a04e5b  5d                   pop ebp
// 00a04e5c  5b                   pop ebx
// 00a04e5d  83c430               add esp, 0x30
// 00a04e60  c20800               ret 8
// 00a04e63  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00a04e69  85c0                 test eax, eax
// 00a04e6b  745a                 je 0xa04ec7
// 00a04e6d  83f801               cmp eax, 1
// 00a04e70  7455                 je 0xa04ec7
// 00a04e72  83f802               cmp eax, 2
// 00a04e75  741c                 je 0xa04e93
// 00a04e77  83f803               cmp eax, 3
// 00a04e7a  7417                 je 0xa04e93
// 00a04e7c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a04e80  53                   push ebx
// 00a04e81  51                   push ecx
// 00a04e82  8bcf                 mov ecx, edi
// 00a04e84  e817730000           call 0xa0c1a0
// 00a04e89  5f                   pop edi
// 00a04e8a  5e                   pop esi
// 00a04e8b  5d                   pop ebp
// 00a04e8c  5b                   pop ebx
// 00a04e8d  83c430               add esp, 0x30
// 00a04e90  c20800               ret 8
// 00a04e93  6830c0c100           push 0xc1c030
// 00a04e98  8bcf                 mov ecx, edi
// 00a04e9a  e8d1290000           call 0xa07870
// 00a04e9f  8bf0                 mov esi, eax
// 00a04ea1  85f6                 test esi, esi
// 00a04ea3  7517                 jne 0xa04ebc
// 00a04ea5  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a04ea9  53                   push ebx
// 00a04eaa  52                   push edx
// 00a04eab  8bcf                 mov ecx, edi
// 00a04ead  e8ee720000           call 0xa0c1a0
// 00a04eb2  5f                   pop edi
// 00a04eb3  5e                   pop esi
// 00a04eb4  5d                   pop ebp
// 00a04eb5  5b                   pop ebx
// 00a04eb6  83c430               add esp, 0x30
// 00a04eb9  c20800               ret 8
// 00a04ebc  6a01                 push 1
// 00a04ebe  6a00                 push 0
// 00a04ec0  8d442438             lea eax, [esp + 0x38]
// 00a04ec4  50                   push eax
// 00a04ec5  eb1f                 jmp 0xa04ee6
// 00a04ec7  6818c0c100           push 0xc1c018
// 00a04ecc  8bcf                 mov ecx, edi
// 00a04ece  e89d290000           call 0xa07870
// 00a04ed3  8bf0                 mov esi, eax
// 00a04ed5  85f6                 test esi, esi
// 00a04ed7  0f846fffffff         je 0xa04e4c
// 00a04edd  6a01                 push 1
// 00a04edf  6a00                 push 0
// 00a04ee1  8d4c2438             lea ecx, [esp + 0x38]
// 00a04ee5  51                   push ecx
// 00a04ee6  8bce                 mov ecx, esi
// 00a04ee8  8bfd                 mov edi, ebp
// 00a04eea  8bdd                 mov ebx, ebp
// 00a04eec  896c2438             mov dword ptr [esp + 0x38], ebp
// 00a04ef0  e8fb0b0600           call 0xa65af0
// 00a04ef5  83ec10               sub esp, 0x10
// 00a04ef8  8bcc                 mov ecx, esp
// 00a04efa  8939                 mov dword ptr [ecx], edi
// 00a04efc  895904               mov dword ptr [ecx + 4], ebx
// 00a04eff  896908               mov dword ptr [ecx + 8], ebp
// 00a04f02  83ec10               sub esp, 0x10
// 00a04f05  8bd5                 mov edx, ebp
// 00a04f07  89510c               mov dword ptr [ecx + 0xc], edx
// 00a04f0a  8b10                 mov edx, dword ptr [eax]
// 00a04f0c  8bcc                 mov ecx, esp
// 00a04f0e  8911                 mov dword ptr [ecx], edx
// 00a04f10  8b5004               mov edx, dword ptr [eax + 4]
// 00a04f13  895104               mov dword ptr [ecx + 4], edx
// 00a04f16  8b5008               mov edx, dword ptr [eax + 8]
// 00a04f19  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a04f1c  895108               mov dword ptr [ecx + 8], edx
// 00a04f1f  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a04f23  89410c               mov dword ptr [ecx + 0xc], eax
// 00a04f26  8d4c2430             lea ecx, [esp + 0x30]
// 00a04f2a  51                   push ecx
// 00a04f2b  52                   push edx
// 00a04f2c  8bce                 mov ecx, esi
// 00a04f2e  e88d040600           call 0xa653c0
// 00a04f33  5f                   pop edi
// 00a04f34  5e                   pop esi
// 00a04f35  5d                   pop ebp
// 00a04f36  5b                   pop ebx
// 00a04f37  83c430               add esp, 0x30
// 00a04f3a  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillCommandBarEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
