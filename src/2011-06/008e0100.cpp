// roc 2011-06 008e0100  unit: VCEdit::?$CXTMaskEditT  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e0100
//
// 008e0100  8b442404             mov eax, dword ptr [esp + 4]
// 008e0104  53                   push ebx
// 008e0105  55                   push ebp
// 008e0106  56                   push esi
// 008e0107  8bf1                 mov esi, ecx
// 008e0109  57                   push edi
// 008e010a  8d7e70               lea edi, [esi + 0x70]
// 008e010d  50                   push eax
// 008e010e  8bcf                 mov ecx, edi
// 008e0110  ff15a42da400         call dword ptr [0xa42da4]
// 008e0116  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008e011a  8dae84000000         lea ebp, [esi + 0x84]
// 008e0120  53                   push ebx
// 008e0121  8bcd                 mov ecx, ebp
// 008e0123  ff15a42da400         call dword ptr [0xa42da4]
// 008e0129  8bcd                 mov ecx, ebp
// 008e012b  ff15a826a400         call dword ptr [0xa426a8]
// 008e0131  8bcf                 mov ecx, edi
// 008e0133  89442414             mov dword ptr [esp + 0x14], eax
// 008e0137  ff15a826a400         call dword ptr [0xa426a8]
// 008e013d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e0141  3bc1                 cmp eax, ecx
// 008e0143  7409                 je 0x8e014e
// 008e0145  5f                   pop edi
// 008e0146  5e                   pop esi
// 008e0147  5d                   pop ebp
// 008e0148  33c0                 xor eax, eax
// 008e014a  5b                   pop ebx
// 008e014b  c20c00               ret 0xc
// 008e014e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e0152  8dbe80000000         lea edi, [esi + 0x80]
// 008e0158  85c0                 test eax, eax
// 008e015a  750f                 jne 0x8e016b
// 008e015c  53                   push ebx
// 008e015d  8d4e74               lea ecx, [esi + 0x74]
// 008e0160  ff15a42da400         call dword ptr [0xa42da4]
// 008e0166  50                   push eax
// 008e0167  8bcf                 mov ecx, edi
// 008e0169  eb48                 jmp 0x8e01b3
// 008e016b  8d5e74               lea ebx, [esi + 0x74]
// 008e016e  50                   push eax
// 008e016f  8bcb                 mov ecx, ebx
// 008e0171  ff15a42da400         call dword ptr [0xa42da4]
// 008e0177  50                   push eax
// 008e0178  8bcf                 mov ecx, edi
// 008e017a  ff156425a400         call dword ptr [0xa42564]
// 008e0180  8bcb                 mov ecx, ebx
// 008e0182  ff15a826a400         call dword ptr [0xa426a8]
// 008e0188  8bcd                 mov ecx, ebp
// 008e018a  89442414             mov dword ptr [esp + 0x14], eax
// 008e018e  ff15a826a400         call dword ptr [0xa426a8]
// 008e0194  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e0198  3bc8                 cmp ecx, eax
// 008e019a  741d                 je 0x8e01b9
// 008e019c  6a00                 push 0
// 008e019e  6a00                 push 0
// 008e01a0  8bcb                 mov ecx, ebx
// 008e01a2  ff15c82da400         call dword ptr [0xa42dc8]
// 008e01a8  50                   push eax
// 008e01a9  8bce                 mov ecx, esi
// 008e01ab  e870f8ffff           call 0x8dfa20
// 008e01b0  57                   push edi
// 008e01b1  8bcb                 mov ecx, ebx
// 008e01b3  ff156425a400         call dword ptr [0xa42564]
// 008e01b9  33c0                 xor eax, eax
// 008e01bb  8bcf                 mov ecx, edi
// 008e01bd  894664               mov dword ptr [esi + 0x64], eax
// 008e01c0  894668               mov dword ptr [esi + 0x68], eax
// 008e01c3  ff15c82da400         call dword ptr [0xa42dc8]
// 008e01c9  50                   push eax
// 008e01ca  8bce                 mov ecx, esi
// 008e01cc  e841a2f2ff           call 0x80a412
// 008e01d1  57                   push edi
// 008e01d2  8d4e78               lea ecx, [esi + 0x78]
// 008e01d5  ff156425a400         call dword ptr [0xa42564]
// 008e01db  5f                   pop edi
// 008e01dc  5e                   pop esi
// 008e01dd  5d                   pop ebp
// 008e01de  b801000000           mov eax, 1
// 008e01e3  5b                   pop ebx
// 008e01e4  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetEditMask@?$CXTMaskEditT@VCEdit@@@@UAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp