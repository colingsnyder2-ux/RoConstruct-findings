// roc 2009-12 008f0dc0  unit: CXTPRibbonControlTab  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0dc0
//
// 008f0dc0  6aff                 push -1
// 008f0dc2  684a699600           push 0x96694a
// 008f0dc7  64a100000000         mov eax, dword ptr fs:[0]
// 008f0dcd  50                   push eax
// 008f0dce  53                   push ebx
// 008f0dcf  56                   push esi
// 008f0dd0  57                   push edi
// 008f0dd1  a10052b600           mov eax, dword ptr [0xb65200]
// 008f0dd6  33c4                 xor eax, esp
// 008f0dd8  50                   push eax
// 008f0dd9  8d442410             lea eax, [esp + 0x10]
// 008f0ddd  64a300000000         mov dword ptr fs:[0], eax
// 008f0de3  8bf1                 mov esi, ecx
// 008f0de5  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f0de9  898674010000         mov dword ptr [esi + 0x174], eax
// 008f0def  85c0                 test eax, eax
// 008f0df1  0f84e7000000         je 0x8f0ede
// 008f0df7  8b9e88010000         mov ebx, dword ptr [esi + 0x188]
// 008f0dfd  85db                 test ebx, ebx
// 008f0dff  0f84b8000000         je 0x8f0ebd
// 008f0e05  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0e0b  e8d043faff           call 0x8951e0
// 008f0e10  85c0                 test eax, eax
// 008f0e12  0f84a5000000         je 0x8f0ebd
// 008f0e18  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008f0e1e  85c9                 test ecx, ecx
// 008f0e20  7405                 je 0x8f0e27
// 008f0e22  e8b52ff0ff           call 0x7f3ddc
// 008f0e27  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0e2d  e89e36f1ff           call 0x8044d0
// 008f0e32  688c020000           push 0x28c
// 008f0e37  8bf8                 mov edi, eax
// 008f0e39  e8222af0ff           call 0x7f3860
// 008f0e3e  83c404               add esp, 4
// 008f0e41  89442420             mov dword ptr [esp + 0x20], eax
// 008f0e45  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008f0e4d  85c0                 test eax, eax
// 008f0e4f  740a                 je 0x8f0e5b
// 008f0e51  53                   push ebx
// 008f0e52  8bc8                 mov ecx, eax
// 008f0e54  e837e3ffff           call 0x8ef190
// 008f0e59  eb02                 jmp 0x8f0e5d
// 008f0e5b  33c0                 xor eax, eax
// 008f0e5d  898678010000         mov dword ptr [esi + 0x178], eax
// 008f0e63  89b804010000         mov dword ptr [eax + 0x104], edi
// 008f0e69  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 008f0e6f  8b07                 mov eax, dword ptr [edi]
// 008f0e71  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 008f0e77  8bcf                 mov ecx, edi
// 008f0e79  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008f0e81  ffd2                 call edx
// 008f0e83  85c0                 test eax, eax
// 008f0e85  7506                 jne 0x8f0e8d
// 008f0e87  898738010000         mov dword ptr [edi + 0x138], eax
// 008f0e8d  8b06                 mov eax, dword ptr [esi]
// 008f0e8f  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008f0e92  8bce                 mov ecx, esi
// 008f0e94  ffd2                 call edx
// 008f0e96  83f802               cmp eax, 2
// 008f0e99  7409                 je 0x8f0ea4
// 008f0e9b  83f803               cmp eax, 3
// 008f0e9e  7404                 je 0x8f0ea4
// 008f0ea0  33c0                 xor eax, eax
// 008f0ea2  eb05                 jmp 0x8f0ea9
// 008f0ea4  b801000000           mov eax, 1
// 008f0ea9  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008f0eaf  8b11                 mov edx, dword ptr [ecx]
// 008f0eb1  50                   push eax
// 008f0eb2  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008f0eb8  56                   push esi
// 008f0eb9  ffd0                 call eax
// 008f0ebb  eb5d                 jmp 0x8f0f1a
// 008f0ebd  c7867401000000000000 mov dword ptr [esi + 0x174], 0
// 008f0ec7  33c0                 xor eax, eax
// 008f0ec9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f0ecd  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0ed4  59                   pop ecx
// 008f0ed5  5f                   pop edi
// 008f0ed6  5e                   pop esi
// 008f0ed7  5b                   pop ebx
// 008f0ed8  83c40c               add esp, 0xc
// 008f0edb  c20400               ret 4
// 008f0ede  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008f0ee4  85c9                 test ecx, ecx
// 008f0ee6  7432                 je 0x8f0f1a
// 008f0ee8  8b11                 mov edx, dword ptr [ecx]
// 008f0eea  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008f0ef0  6a00                 push 0
// 008f0ef2  6a01                 push 1
// 008f0ef4  6a00                 push 0
// 008f0ef6  ffd0                 call eax
// 008f0ef8  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f0efe  e8dd42faff           call 0x8951e0
// 008f0f03  85c0                 test eax, eax
// 008f0f05  7413                 je 0x8f0f1a
// 008f0f07  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 008f0f0d  8b4220               mov eax, dword ptr [edx + 0x20]
// 008f0f10  8d8e84010000         lea ecx, [esi + 0x184]
// 008f0f16  6a00                 push 0
// 008f0f18  ffd0                 call eax
// 008f0f1a  6a01                 push 1
// 008f0f1c  8bce                 mov ecx, esi
// 008f0f1e  e89d57f0ff           call 0x7f66c0
// 008f0f23  b801000000           mov eax, 1
// 008f0f28  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f0f2c  64890d00000000       mov dword ptr fs:[0], ecx
// 008f0f33  59                   pop ecx
// 008f0f34  5f                   pop edi
// 008f0f35  5e                   pop esi
// 008f0f36  5b                   pop ebx
// 008f0f37  83c40c               add esp, 0xc
// 008f0f3a  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CXTPRibbonControlTab@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp