// roc 2011-06 0087e8a0  unit: CXTCaptionButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e8a0
//
// 0087e8a0  53                   push ebx
// 0087e8a1  56                   push esi
// 0087e8a2  8bf1                 mov esi, ecx
// 0087e8a4  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087e8a7  8b9e80000000         mov ebx, dword ptr [esi + 0x80]
// 0087e8ad  57                   push edi
// 0087e8ae  85c0                 test eax, eax
// 0087e8b0  740f                 je 0x87e8c1
// 0087e8b2  50                   push eax
// 0087e8b3  ff15b819a400         call dword ptr [0xa419b8]
// 0087e8b9  50                   push eax
// 0087e8ba  e869baf8ff           call 0x80a328
// 0087e8bf  eb02                 jmp 0x87e8c3
// 0087e8c1  33c0                 xor eax, eax
// 0087e8c3  50                   push eax
// 0087e8c4  e857fdffff           call 0x87e620
// 0087e8c9  50                   push eax
// 0087e8ca  e86dbbf8ff           call 0x80a43c
// 0087e8cf  8bf8                 mov edi, eax
// 0087e8d1  83c408               add esp, 8
// 0087e8d4  85ff                 test edi, edi
// 0087e8d6  747a                 je 0x87e952
// 0087e8d8  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0087e8db  8b06                 mov eax, dword ptr [esi]
// 0087e8dd  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0087e8e3  51                   push ecx
// 0087e8e4  8bce                 mov ecx, esi
// 0087e8e6  ffd2                 call edx
// 0087e8e8  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0087e8eb  8b06                 mov eax, dword ptr [esi]
// 0087e8ed  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0087e8f3  51                   push ecx
// 0087e8f4  8bce                 mov ecx, esi
// 0087e8f6  ffd2                 call edx
// 0087e8f8  e8e36afcff           call 0x8453e0
// 0087e8fd  6a15                 push 0x15
// 0087e8ff  8bc8                 mov ecx, eax
// 0087e901  e8aa62fcff           call 0x844bb0
// 0087e906  8b16                 mov edx, dword ptr [esi]
// 0087e908  50                   push eax
// 0087e909  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 0087e90f  8bce                 mov ecx, esi
// 0087e911  ffd0                 call eax
// 0087e913  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0087e916  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 0087e91c  6a00                 push 0
// 0087e91e  6a00                 push 0
// 0087e920  6a31                 push 0x31
// 0087e922  51                   push ecx
// 0087e923  ffd7                 call edi
// 0087e925  50                   push eax
// 0087e926  e83dc2f8ff           call 0x80ab68
// 0087e92b  85c0                 test eax, eax
// 0087e92d  7403                 je 0x87e932
// 0087e92f  8b4004               mov eax, dword ptr [eax + 4]
// 0087e932  8b5620               mov edx, dword ptr [esi + 0x20]
// 0087e935  6a01                 push 1
// 0087e937  50                   push eax
// 0087e938  6a30                 push 0x30
// 0087e93a  52                   push edx
// 0087e93b  ffd7                 call edi
// 0087e93d  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087e942  740e                 je 0x87e952
// 0087e944  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087e947  6a01                 push 1
// 0087e949  6a00                 push 0
// 0087e94b  50                   push eax
// 0087e94c  ff15ec19a400         call dword ptr [0xa419ec]
// 0087e952  5f                   pop edi
// 0087e953  5e                   pop esi
// 0087e954  8bc3                 mov eax, ebx
// 0087e956  5b                   pop ebx
// 0087e957  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTCaptionButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp