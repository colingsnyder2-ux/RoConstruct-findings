// roc 2008-06 006e9f80  unit: CXTPControlColorSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9f80
//
// 006e9f80  53                   push ebx
// 006e9f81  56                   push esi
// 006e9f82  8bf1                 mov esi, ecx
// 006e9f84  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e9f8a  57                   push edi
// 006e9f8b  83f8ff               cmp eax, -1
// 006e9f8e  750f                 jne 0x6e9f9f
// 006e9f90  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e9f96  85c9                 test ecx, ecx
// 006e9f98  7405                 je 0x6e9f9f
// 006e9f9a  e82118fcff           call 0x6ab7c0
// 006e9f9f  85c0                 test eax, eax
// 006e9fa1  7473                 je 0x6ea016
// 006e9fa3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e9fa7  85ff                 test edi, edi
// 006e9fa9  7408                 je 0x6e9fb3
// 006e9fab  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 006e9fb1  eb11                 jmp 0x6e9fc4
// 006e9fb3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e9fb7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e9fbb  50                   push eax
// 006e9fbc  51                   push ecx
// 006e9fbd  8bce                 mov ecx, esi
// 006e9fbf  e82cfdffff           call 0x6e9cf0
// 006e9fc4  83f8ff               cmp eax, -1
// 006e9fc7  744d                 je 0x6ea016
// 006e9fc9  898678010000         mov dword ptr [esi + 0x178], eax
// 006e9fcf  85ff                 test edi, edi
// 006e9fd1  752d                 jne 0x6ea000
// 006e9fd3  83ec10               sub esp, 0x10
// 006e9fd6  8bc4                 mov eax, esp
// 006e9fd8  33c9                 xor ecx, ecx
// 006e9fda  8908                 mov dword ptr [eax], ecx
// 006e9fdc  33d2                 xor edx, edx
// 006e9fde  895004               mov dword ptr [eax + 4], edx
// 006e9fe1  33db                 xor ebx, ebx
// 006e9fe3  897808               mov dword ptr [eax + 8], edi
// 006e9fe6  8bce                 mov ecx, esi
// 006e9fe8  89580c               mov dword ptr [eax + 0xc], ebx
// 006e9feb  e86034fcff           call 0x6ad450
// 006e9ff0  c78678010000ffffffff mov dword ptr [esi + 0x178], 0xffffffff
// 006e9ffa  5f                   pop edi
// 006e9ffb  5e                   pop esi
// 006e9ffc  5b                   pop ebx
// 006e9ffd  c20c00               ret 0xc
// 006ea000  8b16                 mov edx, dword ptr [esi]
// 006ea002  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 006ea008  8bce                 mov ecx, esi
// 006ea00a  ffd0                 call eax
// 006ea00c  c78678010000ffffffff mov dword ptr [esi + 0x178], 0xffffffff
// 006ea016  5f                   pop edi
// 006ea017  5e                   pop esi
// 006ea018  5b                   pop ebx
// 006ea019  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnClick@CXTPControlColorSelector@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopupColor.cpp
