// roc 2011-06 008f7ad0  unit: CXTPRibbonGroup  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7ad0
//
// 008f7ad0  53                   push ebx
// 008f7ad1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008f7ad5  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008f7ad8  55                   push ebp
// 008f7ad9  56                   push esi
// 008f7ada  57                   push edi
// 008f7adb  8bf9                 mov edi, ecx
// 008f7add  894760               mov dword ptr [edi + 0x60], eax
// 008f7ae0  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 008f7ae3  894f64               mov dword ptr [edi + 0x64], ecx
// 008f7ae6  8b5374               mov edx, dword ptr [ebx + 0x74]
// 008f7ae9  8d4328               lea eax, [ebx + 0x28]
// 008f7aec  50                   push eax
// 008f7aed  8d4f28               lea ecx, [edi + 0x28]
// 008f7af0  895774               mov dword ptr [edi + 0x74], edx
// 008f7af3  ff156425a400         call dword ptr [0xa42564]
// 008f7af9  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 008f7afc  894f30               mov dword ptr [edi + 0x30], ecx
// 008f7aff  8b5324               mov edx, dword ptr [ebx + 0x24]
// 008f7b02  895724               mov dword ptr [edi + 0x24], edx
// 008f7b05  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008f7b08  8b5768               mov edx, dword ptr [edi + 0x68]
// 008f7b0b  894720               mov dword ptr [edi + 0x20], eax
// 008f7b0e  8b4b78               mov ecx, dword ptr [ebx + 0x78]
// 008f7b11  894f78               mov dword ptr [edi + 0x78], ecx
// 008f7b14  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008f7b1a  89442414             mov dword ptr [esp + 0x14], eax
// 008f7b1e  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 008f7b21  33ed                 xor ebp, ebp
// 008f7b23  85c0                 test eax, eax
// 008f7b25  7e73                 jle 0x8f7b9a
// 008f7b27  85ed                 test ebp, ebp
// 008f7b29  7c15                 jl 0x8f7b40
// 008f7b2b  3be8                 cmp ebp, eax
// 008f7b2d  7d11                 jge 0x8f7b40
// 008f7b2f  3b6b4c               cmp ebp, dword ptr [ebx + 0x4c]
// 008f7b32  0f8dc5000000         jge 0x8f7bfd
// 008f7b38  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 008f7b3b  8b04a9               mov eax, dword ptr [ecx + ebp*4]
// 008f7b3e  eb02                 jmp 0x8f7b42
// 008f7b40  33c0                 xor eax, eax
// 008f7b42  8b5758               mov edx, dword ptr [edi + 0x58]
// 008f7b45  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008f7b4b  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f7b4f  6a00                 push 0
// 008f7b51  03d5                 add edx, ebp
// 008f7b53  52                   push edx
// 008f7b54  50                   push eax
// 008f7b55  e8e611f6ff           call 0x858d40
// 008f7b5a  8bf0                 mov esi, eax
// 008f7b5c  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008f7b62  8b06                 mov eax, dword ptr [esi]
// 008f7b64  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008f7b6a  81e17fffffff         and ecx, 0xffffff7f
// 008f7b70  51                   push ecx
// 008f7b71  8bce                 mov ecx, esi
// 008f7b73  89be58010000         mov dword ptr [esi + 0x158], edi
// 008f7b79  ffd2                 call edx
// 008f7b7b  8b474c               mov eax, dword ptr [edi + 0x4c]
// 008f7b7e  8d4f44               lea ecx, [edi + 0x44]
// 008f7b81  56                   push esi
// 008f7b82  50                   push eax
// 008f7b83  e80871f4ff           call 0x83ec90
// 008f7b88  83c604               add esi, 4
// 008f7b8b  56                   push esi
// 008f7b8c  ff154c03a400         call dword ptr [0xa4034c]
// 008f7b92  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 008f7b95  45                   inc ebp
// 008f7b96  3be8                 cmp ebp, eax
// 008f7b98  7c8d                 jl 0x8f7b27
// 008f7b9a  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 008f7b9d  8b11                 mov edx, dword ptr [ecx]
// 008f7b9f  8b4368               mov eax, dword ptr [ebx + 0x68]
// 008f7ba2  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 008f7ba8  6a00                 push 0
// 008f7baa  50                   push eax
// 008f7bab  ffd2                 call edx
// 008f7bad  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 008f7bb0  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 008f7bb6  8b01                 mov eax, dword ptr [ecx]
// 008f7bb8  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008f7bbe  81e27fffffff         and edx, 0xffffff7f
// 008f7bc4  52                   push edx
// 008f7bc5  ffd0                 call eax
// 008f7bc7  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008f7bca  8b11                 mov edx, dword ptr [ecx]
// 008f7bcc  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 008f7bcf  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 008f7bd5  6a00                 push 0
// 008f7bd7  50                   push eax
// 008f7bd8  ffd2                 call edx
// 008f7bda  8b7f6c               mov edi, dword ptr [edi + 0x6c]
// 008f7bdd  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 008f7be3  8b07                 mov eax, dword ptr [edi]
// 008f7be5  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008f7beb  81e17fffffff         and ecx, 0xffffff7f
// 008f7bf1  51                   push ecx
// 008f7bf2  8bcf                 mov ecx, edi
// 008f7bf4  ffd2                 call edx
// 008f7bf6  5f                   pop edi
// 008f7bf7  5e                   pop esi
// 008f7bf8  5d                   pop ebp
// 008f7bf9  5b                   pop ebx
// 008f7bfa  c20400               ret 4
// 008f7bfd  e80827f1ff           call 0x80a30a
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroup@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp