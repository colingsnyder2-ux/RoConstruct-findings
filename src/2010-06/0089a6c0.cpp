// roc 2010-06 0089a6c0  unit: CXTCaptionButton  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a6c0
//
// 0089a6c0  6aff                 push -1
// 0089a6c2  68b8c09b00           push 0x9bc0b8
// 0089a6c7  64a100000000         mov eax, dword ptr fs:[0]
// 0089a6cd  50                   push eax
// 0089a6ce  83ec48               sub esp, 0x48
// 0089a6d1  53                   push ebx
// 0089a6d2  56                   push esi
// 0089a6d3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089a6d8  33c4                 xor eax, esp
// 0089a6da  50                   push eax
// 0089a6db  8d442454             lea eax, [esp + 0x54]
// 0089a6df  64a300000000         mov dword ptr fs:[0], eax
// 0089a6e5  8bf1                 mov esi, ecx
// 0089a6e7  8d4c2430             lea ecx, [esp + 0x30]
// 0089a6eb  e89042f2ff           call 0x7be980
// 0089a6f0  33db                 xor ebx, ebx
// 0089a6f2  8d4c240c             lea ecx, [esp + 0xc]
// 0089a6f6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0089a6fa  e88142f2ff           call 0x7be980
// 0089a6ff  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089a703  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0089a707  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0089a70b  6a01                 push 1
// 0089a70d  50                   push eax
// 0089a70e  51                   push ecx
// 0089a70f  52                   push edx
// 0089a710  8d4c2440             lea ecx, [esp + 0x40]
// 0089a714  c644246c01           mov byte ptr [esp + 0x6c], 1
// 0089a719  e85271f2ff           call 0x7c1870
// 0089a71e  8d4c2430             lea ecx, [esp + 0x30]
// 0089a722  e8c942f2ff           call 0x7be9f0
// 0089a727  85c0                 test eax, eax
// 0089a729  7434                 je 0x89a75f
// 0089a72b  8d4c240c             lea ecx, [esp + 0xc]
// 0089a72f  885c245c             mov byte ptr [esp + 0x5c], bl
// 0089a733  e84867f2ff           call 0x7c0e80
// 0089a738  8d4c2430             lea ecx, [esp + 0x30]
// 0089a73c  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0089a744  e83767f2ff           call 0x7c0e80
// 0089a749  33c0                 xor eax, eax
// 0089a74b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089a74f  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a756  59                   pop ecx
// 0089a757  5e                   pop esi
// 0089a758  5b                   pop ebx
// 0089a759  83c454               add esp, 0x54
// 0089a75c  c21400               ret 0x14
// 0089a75f  8b442470             mov eax, dword ptr [esp + 0x70]
// 0089a763  3bc3                 cmp eax, ebx
// 0089a765  7423                 je 0x89a78a
// 0089a767  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089a76b  8b542464             mov edx, dword ptr [esp + 0x64]
// 0089a76f  6a01                 push 1
// 0089a771  51                   push ecx
// 0089a772  52                   push edx
// 0089a773  50                   push eax
// 0089a774  8d4c241c             lea ecx, [esp + 0x1c]
// 0089a778  e8f370f2ff           call 0x7c1870
// 0089a77d  8d4c240c             lea ecx, [esp + 0xc]
// 0089a781  e86a42f2ff           call 0x7be9f0
// 0089a786  85c0                 test eax, eax
// 0089a788  75a1                 jne 0x89a72b
// 0089a78a  8b442474             mov eax, dword ptr [esp + 0x74]
// 0089a78e  50                   push eax
// 0089a78f  83ec24               sub esp, 0x24
// 0089a792  8d542434             lea edx, [esp + 0x34]
// 0089a796  8bcc                 mov ecx, esp
// 0089a798  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0089a79f  52                   push edx
// 0089a7a0  e8eb41f2ff           call 0x7be990
// 0089a7a5  83ec24               sub esp, 0x24
// 0089a7a8  8d44247c             lea eax, [esp + 0x7c]
// 0089a7ac  8bcc                 mov ecx, esp
// 0089a7ae  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 0089a7b5  50                   push eax
// 0089a7b6  c68424ac00000002     mov byte ptr [esp + 0xac], 2
// 0089a7be  e8cd41f2ff           call 0x7be990
// 0089a7c3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0089a7ca  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 0089a7d1  51                   push ecx
// 0089a7d2  52                   push edx
// 0089a7d3  8bce                 mov ecx, esi
// 0089a7d5  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 0089a7dd  e84efaffff           call 0x89a230
// 0089a7e2  8d4c240c             lea ecx, [esp + 0xc]
// 0089a7e6  8bf0                 mov esi, eax
// 0089a7e8  885c245c             mov byte ptr [esp + 0x5c], bl
// 0089a7ec  e88f66f2ff           call 0x7c0e80
// 0089a7f1  8d4c2430             lea ecx, [esp + 0x30]
// 0089a7f5  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0089a7fd  e87e66f2ff           call 0x7c0e80
// 0089a802  8bc6                 mov eax, esi
// 0089a804  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089a808  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a80f  59                   pop ecx
// 0089a810  5e                   pop esi
// 0089a811  5b                   pop ebx
// 0089a812  83c454               add esp, 0x54
// 0089a815  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp