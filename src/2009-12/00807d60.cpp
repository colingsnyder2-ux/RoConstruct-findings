// roc 2009-12 00807d60  unit: CXTPCommandBar  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807d60
//
// 00807d60  83ec0c               sub esp, 0xc
// 00807d63  53                   push ebx
// 00807d64  55                   push ebp
// 00807d65  8bd9                 mov ebx, ecx
// 00807d67  e8c4c9ffff           call 0x804730
// 00807d6c  8be8                 mov ebp, eax
// 00807d6e  33d2                 xor edx, edx
// 00807d70  3bea                 cmp ebp, edx
// 00807d72  0f8410010000         je 0x807e88
// 00807d78  8bcb                 mov ecx, ebx
// 00807d7a  89542408             mov dword ptr [esp + 8], edx
// 00807d7e  8954240c             mov dword ptr [esp + 0xc], edx
// 00807d82  e8c9d4ffff           call 0x805250
// 00807d87  85c0                 test eax, eax
// 00807d89  0f8ef9000000         jle 0x807e88
// 00807d8f  56                   push esi
// 00807d90  57                   push edi
// 00807d91  52                   push edx
// 00807d92  8bcb                 mov ecx, ebx
// 00807d94  e8c7d4ffff           call 0x805260
// 00807d99  8bf0                 mov esi, eax
// 00807d9b  85f6                 test esi, esi
// 00807d9d  0f84bd000000         je 0x807e60
// 00807da3  399e00010000         cmp dword ptr [esi + 0x100], ebx
// 00807da9  0f85b1000000         jne 0x807e60
// 00807daf  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 00807db6  7e4d                 jle 0x807e05
// 00807db8  8d442418             lea eax, [esp + 0x18]
// 00807dbc  50                   push eax
// 00807dbd  55                   push ebp
// 00807dbe  8d8e10010000         lea ecx, [esi + 0x110]
// 00807dc4  e8b74b0000           call 0x80c980
// 00807dc9  8bbed0000000         mov edi, dword ptr [esi + 0xd0]
// 00807dcf  85c0                 test eax, eax
// 00807dd1  7510                 jne 0x807de3
// 00807dd3  8b16                 mov edx, dword ptr [esi]
// 00807dd5  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00807ddb  8bc7                 mov eax, edi
// 00807ddd  83c840               or eax, 0x40
// 00807de0  50                   push eax
// 00807de1  eb0e                 jmp 0x807df1
// 00807de3  8b06                 mov eax, dword ptr [esi]
// 00807de5  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00807deb  8bcf                 mov ecx, edi
// 00807ded  83e1bf               and ecx, 0xffffffbf
// 00807df0  51                   push ecx
// 00807df1  8bce                 mov ecx, esi
// 00807df3  ffd2                 call edx
// 00807df5  3bbed0000000         cmp edi, dword ptr [esi + 0xd0]
// 00807dfb  7408                 je 0x807e05
// 00807dfd  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00807e05  83be3801000000       cmp dword ptr [esi + 0x138], 0
// 00807e0c  7e52                 jle 0x807e60
// 00807e0e  8d442418             lea eax, [esp + 0x18]
// 00807e12  50                   push eax
// 00807e13  55                   push ebp
// 00807e14  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00807e1a  e8614b0000           call 0x80c980
// 00807e1f  8bbed0000000         mov edi, dword ptr [esi + 0xd0]
// 00807e25  f7d8                 neg eax
// 00807e27  1bc0                 sbb eax, eax
// 00807e29  83c001               add eax, 1
// 00807e2c  7510                 jne 0x807e3e
// 00807e2e  8b16                 mov edx, dword ptr [esi]
// 00807e30  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00807e36  8bc7                 mov eax, edi
// 00807e38  83c840               or eax, 0x40
// 00807e3b  50                   push eax
// 00807e3c  eb0e                 jmp 0x807e4c
// 00807e3e  8b06                 mov eax, dword ptr [esi]
// 00807e40  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00807e46  8bcf                 mov ecx, edi
// 00807e48  83e1bf               and ecx, 0xffffffbf
// 00807e4b  51                   push ecx
// 00807e4c  8bce                 mov ecx, esi
// 00807e4e  ffd2                 call edx
// 00807e50  3bbed0000000         cmp edi, dword ptr [esi + 0xd0]
// 00807e56  7408                 je 0x807e60
// 00807e58  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00807e60  8b542414             mov edx, dword ptr [esp + 0x14]
// 00807e64  42                   inc edx
// 00807e65  8bcb                 mov ecx, ebx
// 00807e67  89542414             mov dword ptr [esp + 0x14], edx
// 00807e6b  e8e0d3ffff           call 0x805250
// 00807e70  3bd0                 cmp edx, eax
// 00807e72  0f8c19ffffff         jl 0x807d91
// 00807e78  837c241000           cmp dword ptr [esp + 0x10], 0
// 00807e7d  5f                   pop edi
// 00807e7e  5e                   pop esi
// 00807e7f  7407                 je 0x807e88
// 00807e81  838be800000001       or dword ptr [ebx + 0xe8], 1
// 00807e88  5d                   pop ebp
// 00807e89  5b                   pop ebx
// 00807e8a  83c40c               add esp, 0xc
// 00807e8d  c3                   ret 
// copied from an identical function in another client (function ?UpdateDocTemplateControls@CXTPCommandBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp