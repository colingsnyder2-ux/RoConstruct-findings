// roc 2012-06 009f6e50  unit: CXTCaptionButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6e50
//
// 009f6e50  53                   push ebx
// 009f6e51  56                   push esi
// 009f6e52  8bf1                 mov esi, ecx
// 009f6e54  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f6e57  8b9e80000000         mov ebx, dword ptr [esi + 0x80]
// 009f6e5d  57                   push edi
// 009f6e5e  85c0                 test eax, eax
// 009f6e60  740f                 je 0x9f6e71
// 009f6e62  50                   push eax
// 009f6e63  ff15503ab200         call dword ptr [0xb23a50]
// 009f6e69  50                   push eax
// 009f6e6a  e8f7b7f8ff           call 0x982666
// 009f6e6f  eb02                 jmp 0x9f6e73
// 009f6e71  33c0                 xor eax, eax
// 009f6e73  50                   push eax
// 009f6e74  e857fdffff           call 0x9f6bd0
// 009f6e79  50                   push eax
// 009f6e7a  e867b6f8ff           call 0x9824e6
// 009f6e7f  8bf8                 mov edi, eax
// 009f6e81  83c408               add esp, 8
// 009f6e84  85ff                 test edi, edi
// 009f6e86  747a                 je 0x9f6f02
// 009f6e88  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 009f6e8b  8b06                 mov eax, dword ptr [esi]
// 009f6e8d  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 009f6e93  51                   push ecx
// 009f6e94  8bce                 mov ecx, esi
// 009f6e96  ffd2                 call edx
// 009f6e98  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 009f6e9b  8b06                 mov eax, dword ptr [esi]
// 009f6e9d  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 009f6ea3  51                   push ecx
// 009f6ea4  8bce                 mov ecx, esi
// 009f6ea6  ffd2                 call edx
// 009f6ea8  e8b369fcff           call 0x9bd860
// 009f6ead  6a15                 push 0x15
// 009f6eaf  8bc8                 mov ecx, eax
// 009f6eb1  e82a61fcff           call 0x9bcfe0
// 009f6eb6  8b16                 mov edx, dword ptr [esi]
// 009f6eb8  50                   push eax
// 009f6eb9  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 009f6ebf  8bce                 mov ecx, esi
// 009f6ec1  ffd0                 call eax
// 009f6ec3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009f6ec6  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009f6ecc  6a00                 push 0
// 009f6ece  6a00                 push 0
// 009f6ed0  6a31                 push 0x31
// 009f6ed2  51                   push ecx
// 009f6ed3  ffd7                 call edi
// 009f6ed5  50                   push eax
// 009f6ed6  e813bdf8ff           call 0x982bee
// 009f6edb  85c0                 test eax, eax
// 009f6edd  7403                 je 0x9f6ee2
// 009f6edf  8b4004               mov eax, dword ptr [eax + 4]
// 009f6ee2  8b5620               mov edx, dword ptr [esi + 0x20]
// 009f6ee5  6a01                 push 1
// 009f6ee7  50                   push eax
// 009f6ee8  6a30                 push 0x30
// 009f6eea  52                   push edx
// 009f6eeb  ffd7                 call edi
// 009f6eed  837c241400           cmp dword ptr [esp + 0x14], 0
// 009f6ef2  740e                 je 0x9f6f02
// 009f6ef4  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f6ef7  6a01                 push 1
// 009f6ef9  6a00                 push 0
// 009f6efb  50                   push eax
// 009f6efc  ff15ec3bb200         call dword ptr [0xb23bec]
// 009f6f02  5f                   pop edi
// 009f6f03  5e                   pop esi
// 009f6f04  8bc3                 mov eax, ebx
// 009f6f06  5b                   pop ebx
// 009f6f07  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTCaptionButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp