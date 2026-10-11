// roc 2007-03 0056fe20  unit: seg_00560000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056fe20
//
// 0056fe20  83ec08               sub esp, 8
// 0056fe23  57                   push edi
// 0056fe24  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056fe28  85ff                 test edi, edi
// 0056fe2a  7509                 jne 0x56fe35
// 0056fe2c  33c0                 xor eax, eax
// 0056fe2e  5f                   pop edi
// 0056fe2f  83c408               add esp, 8
// 0056fe32  c20400               ret 4
// 0056fe35  8b4704               mov eax, dword ptr [edi + 4]
// 0056fe38  85c0                 test eax, eax
// 0056fe3a  74f0                 je 0x56fe2c
// 0056fe3c  53                   push ebx
// 0056fe3d  55                   push ebp
// 0056fe3e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056fe42  56                   push esi
// 0056fe43  8d4c241c             lea ecx, [esp + 0x1c]
// 0056fe47  51                   push ecx
// 0056fe48  8d542414             lea edx, [esp + 0x14]
// 0056fe4c  52                   push edx
// 0056fe4d  8bc8                 mov ecx, eax
// 0056fe4f  e82c1f0800           call 0x5f1d80
// 0056fe54  8b30                 mov esi, dword ptr [eax]
// 0056fe56  85f6                 test esi, esi
// 0056fe58  8b5804               mov ebx, dword ptr [eax + 4]
// 0056fe5b  8b4704               mov eax, dword ptr [edi + 4]
// 0056fe5e  8b7804               mov edi, dword ptr [eax + 4]
// 0056fe61  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 0056fe67  7404                 je 0x56fe6d
// 0056fe69  3bf0                 cmp esi, eax
// 0056fe6b  7402                 je 0x56fe6f
// 0056fe6d  ffd5                 call ebp
// 0056fe6f  3bdf                 cmp ebx, edi
// 0056fe71  750c                 jne 0x56fe7f
// 0056fe73  5e                   pop esi
// 0056fe74  5d                   pop ebp
// 0056fe75  5b                   pop ebx
// 0056fe76  33c0                 xor eax, eax
// 0056fe78  5f                   pop edi
// 0056fe79  83c408               add esp, 8
// 0056fe7c  c20400               ret 4
// 0056fe7f  85f6                 test esi, esi
// 0056fe81  7502                 jne 0x56fe85
// 0056fe83  ffd5                 call ebp
// 0056fe85  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0056fe88  7502                 jne 0x56fe8c
// 0056fe8a  ffd5                 call ebp
// 0056fe8c  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0056fe8f  5e                   pop esi
// 0056fe90  5d                   pop ebp
// 0056fe91  5b                   pop ebx
// 0056fe92  5f                   pop edi
// 0056fe93  83c408               add esp, 8
// 0056fe96  c20400               ret 4
// library openrbx-client/App\reflection\signal.cpp (function ?findSignalInstance@SignalDescriptor@Reflection@RBX@@IBEPAVSignalInstance@23@PBVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
