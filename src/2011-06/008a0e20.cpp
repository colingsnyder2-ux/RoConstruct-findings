// roc 2011-06 008a0e20  unit: CXTPShortcutManager  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a0e20
//
// 008a0e20  83ec44               sub esp, 0x44
// 008a0e23  56                   push esi
// 008a0e24  6a2c                 push 0x2c
// 008a0e26  33f6                 xor esi, esi
// 008a0e28  8d442420             lea eax, [esp + 0x20]
// 008a0e2c  56                   push esi
// 008a0e2d  50                   push eax
// 008a0e2e  e8b1a4f6ff           call 0x80b2e4
// 008a0e33  8b542460             mov edx, dword ptr [esp + 0x60]
// 008a0e37  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a0e3b  83c40c               add esp, 0xc
// 008a0e3e  56                   push esi
// 008a0e3f  f7da                 neg edx
// 008a0e41  56                   push esi
// 008a0e42  8954242c             mov dword ptr [esp + 0x2c], edx
// 008a0e46  8d542410             lea edx, [esp + 0x10]
// 008a0e4a  52                   push edx
// 008a0e4b  b801000000           mov eax, 1
// 008a0e50  6689442434           mov word ptr [esp + 0x34], ax
// 008a0e55  56                   push esi
// 008a0e56  8d44242c             lea eax, [esp + 0x2c]
// 008a0e5a  894c2430             mov dword ptr [esp + 0x30], ecx
// 008a0e5e  50                   push eax
// 008a0e5f  b920000000           mov ecx, 0x20
// 008a0e64  56                   push esi
// 008a0e65  c744243428000000     mov dword ptr [esp + 0x34], 0x28
// 008a0e6d  66894c2442           mov word ptr [esp + 0x42], cx
// 008a0e72  89742444             mov dword ptr [esp + 0x44], esi
// 008a0e76  ff157801a400         call dword ptr [0xa40178]
// 008a0e7c  8bc8                 mov ecx, eax
// 008a0e7e  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a0e82  3bce                 cmp ecx, esi
// 008a0e84  0f84ad000000         je 0x8a0f37
// 008a0e8a  39742408             cmp dword ptr [esp + 8], esi
// 008a0e8e  0f84a3000000         je 0x8a0f37
// 008a0e94  8b442450             mov eax, dword ptr [esp + 0x50]
// 008a0e98  53                   push ebx
// 008a0e99  57                   push edi
// 008a0e9a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 008a0e9e  8bd8                 mov ebx, eax
// 008a0ea0  0fafdf               imul ebx, edi
// 008a0ea3  3974245c             cmp dword ptr [esp + 0x5c], esi
// 008a0ea7  8d148500000000       lea edx, [eax*4]
// 008a0eae  895c2418             mov dword ptr [esp + 0x18], ebx
// 008a0eb2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008a0eb6  89742414             mov dword ptr [esp + 0x14], esi
// 008a0eba  7e70                 jle 0x8a0f2c
// 008a0ebc  55                   push ebp
// 008a0ebd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 008a0ec1  89742410             mov dword ptr [esp + 0x10], esi
// 008a0ec5  8b742410             mov esi, dword ptr [esp + 0x10]
// 008a0ec9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a0ecd  03ce                 add ecx, esi
// 008a0ecf  33f6                 xor esi, esi
// 008a0ed1  8bd5                 mov edx, ebp
// 008a0ed3  85c0                 test eax, eax
// 008a0ed5  7e37                 jle 0x8a0f0e
// 008a0ed7  8a02                 mov al, byte ptr [edx]
// 008a0ed9  0fb65a01             movzx ebx, byte ptr [edx + 1]
// 008a0edd  42                   inc edx
// 008a0ede  42                   inc edx
// 008a0edf  885c2464             mov byte ptr [esp + 0x64], bl
// 008a0ee3  8a1a                 mov bl, byte ptr [edx]
// 008a0ee5  8819                 mov byte ptr [ecx], bl
// 008a0ee7  0fb65c2464           movzx ebx, byte ptr [esp + 0x64]
// 008a0eec  41                   inc ecx
// 008a0eed  8819                 mov byte ptr [ecx], bl
// 008a0eef  41                   inc ecx
// 008a0ef0  8801                 mov byte ptr [ecx], al
// 008a0ef2  42                   inc edx
// 008a0ef3  41                   inc ecx
// 008a0ef4  32c0                 xor al, al
// 008a0ef6  83ff04               cmp edi, 4
// 008a0ef9  7503                 jne 0x8a0efe
// 008a0efb  8a02                 mov al, byte ptr [edx]
// 008a0efd  42                   inc edx
// 008a0efe  8801                 mov byte ptr [ecx], al
// 008a0f00  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008a0f04  46                   inc esi
// 008a0f05  41                   inc ecx
// 008a0f06  3bf0                 cmp esi, eax
// 008a0f08  7ccd                 jl 0x8a0ed7
// 008a0f0a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008a0f0e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a0f12  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a0f16  01542410             add dword ptr [esp + 0x10], edx
// 008a0f1a  41                   inc ecx
// 008a0f1b  03eb                 add ebp, ebx
// 008a0f1d  3b4c2460             cmp ecx, dword ptr [esp + 0x60]
// 008a0f21  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a0f25  7c9e                 jl 0x8a0ec5
// 008a0f27  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a0f2b  5d                   pop ebp
// 008a0f2c  5f                   pop edi
// 008a0f2d  5b                   pop ebx
// 008a0f2e  8bc1                 mov eax, ecx
// 008a0f30  5e                   pop esi
// 008a0f31  83c444               add esp, 0x44
// 008a0f34  c21000               ret 0x10
// 008a0f37  33c0                 xor eax, eax
// 008a0f39  5e                   pop esi
// 008a0f3a  83c444               add esp, 0x44
// 008a0f3d  c21000               ret 0x10
// library xtp-15.2.1/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?ConvertToBitmap@CXTPGraphicBitmapPng@@ABEPAUHBITMAP__@@PAEVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
