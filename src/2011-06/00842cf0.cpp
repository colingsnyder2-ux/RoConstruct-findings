// roc 2011-06 00842cf0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842cf0
//
// 00842cf0  6aff                 push -1
// 00842cf2  681853a000           push 0xa05318
// 00842cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00842cfd  50                   push eax
// 00842cfe  83ec10               sub esp, 0x10
// 00842d01  53                   push ebx
// 00842d02  55                   push ebp
// 00842d03  56                   push esi
// 00842d04  57                   push edi
// 00842d05  a12058c900           mov eax, dword ptr [0xc95820]
// 00842d0a  33c4                 xor eax, esp
// 00842d0c  50                   push eax
// 00842d0d  8d442424             lea eax, [esp + 0x24]
// 00842d11  64a300000000         mov dword ptr fs:[0], eax
// 00842d17  8bf9                 mov edi, ecx
// 00842d19  897c2414             mov dword ptr [esp + 0x14], edi
// 00842d1d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00842d21  8b03                 mov eax, dword ptr [ebx]
// 00842d23  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00842d29  68384dac00           push 0xac4d38
// 00842d2e  8bcb                 mov ecx, ebx
// 00842d30  ffd2                 call edx
// 00842d32  8bf0                 mov esi, eax
// 00842d34  8974241c             mov dword ptr [esp + 0x1c], esi
// 00842d38  33ed                 xor ebp, ebp
// 00842d3a  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00842d3e  8bcf                 mov ecx, edi
// 00842d40  396b28               cmp dword ptr [ebx + 0x28], ebp
// 00842d43  0f85aa000000         jne 0x842df3
// 00842d49  e892030000           call 0x8430e0
// 00842d4e  8bd8                 mov ebx, eax
// 00842d50  8b06                 mov eax, dword ptr [esi]
// 00842d52  8b5004               mov edx, dword ptr [eax + 4]
// 00842d55  6a01                 push 1
// 00842d57  53                   push ebx
// 00842d58  8bce                 mov ecx, esi
// 00842d5a  ffd2                 call edx
// 00842d5c  3bdd                 cmp ebx, ebp
// 00842d5e  89442418             mov dword ptr [esp + 0x18], eax
// 00842d62  7f30                 jg 0x842d94
// 00842d64  8b06                 mov eax, dword ptr [esi]
// 00842d66  8b10                 mov edx, dword ptr [eax]
// 00842d68  6a01                 push 1
// 00842d6a  8bce                 mov ecx, esi
// 00842d6c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00842d74  ffd2                 call edx
// 00842d76  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00842d7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00842d81  59                   pop ecx
// 00842d82  5f                   pop edi
// 00842d83  5e                   pop esi
// 00842d84  5d                   pop ebp
// 00842d85  5b                   pop ebx
// 00842d86  83c41c               add esp, 0x1c
// 00842d89  c20400               ret 4
// 00842d8c  8d642400             lea esp, [esp]
// 00842d90  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00842d94  55                   push ebp
// 00842d95  8bcf                 mov ecx, edi
// 00842d97  e8a4faffff           call 0x842840
// 00842d9c  89442434             mov dword ptr [esp + 0x34], eax
// 00842da0  8b06                 mov eax, dword ptr [esi]
// 00842da2  8b5008               mov edx, dword ptr [eax + 8]
// 00842da5  8d4c2418             lea ecx, [esp + 0x18]
// 00842da9  51                   push ecx
// 00842daa  8bce                 mov ecx, esi
// 00842dac  ffd2                 call edx
// 00842dae  8bf8                 mov edi, eax
// 00842db0  897c2420             mov dword ptr [esp + 0x20], edi
// 00842db4  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00842db9  e862dbffff           call 0x840920
// 00842dbe  8b17                 mov edx, dword ptr [edi]
// 00842dc0  8b5264               mov edx, dword ptr [edx + 0x64]
// 00842dc3  50                   push eax
// 00842dc4  8d442438             lea eax, [esp + 0x38]
// 00842dc8  50                   push eax
// 00842dc9  8bcf                 mov ecx, edi
// 00842dcb  ffd2                 call edx
// 00842dcd  85c0                 test eax, eax
// 00842dcf  740c                 je 0x842ddd
// 00842dd1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00842dd5  8b01                 mov eax, dword ptr [ecx]
// 00842dd7  8b5060               mov edx, dword ptr [eax + 0x60]
// 00842dda  57                   push edi
// 00842ddb  ffd2                 call edx
// 00842ddd  8bcf                 mov ecx, edi
// 00842ddf  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00842de4  e8f177fcff           call 0x80a5da
// 00842de9  45                   inc ebp
// 00842dea  3beb                 cmp ebp, ebx
// 00842dec  7ca2                 jl 0x842d90
// 00842dee  e971ffffff           jmp 0x842d64
// 00842df3  e878f9ffff           call 0x842770
// 00842df8  8b06                 mov eax, dword ptr [esi]
// 00842dfa  8b5004               mov edx, dword ptr [eax + 4]
// 00842dfd  6a01                 push 1
// 00842dff  55                   push ebp
// 00842e00  8bce                 mov ecx, esi
// 00842e02  ffd2                 call edx
// 00842e04  89442418             mov dword ptr [esp + 0x18], eax
// 00842e08  3bc5                 cmp eax, ebp
// 00842e0a  0f8454ffffff         je 0x842d64
// 00842e10  b302                 mov bl, 2
// 00842e12  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00842e1a  8b06                 mov eax, dword ptr [esi]
// 00842e1c  8b5008               mov edx, dword ptr [eax + 8]
// 00842e1f  8d4c2418             lea ecx, [esp + 0x18]
// 00842e23  51                   push ecx
// 00842e24  8bce                 mov ecx, esi
// 00842e26  ffd2                 call edx
// 00842e28  8bf8                 mov edi, eax
// 00842e2a  897c2420             mov dword ptr [esp + 0x20], edi
// 00842e2e  885c242c             mov byte ptr [esp + 0x2c], bl
// 00842e32  e8e9daffff           call 0x840920
// 00842e37  8b17                 mov edx, dword ptr [edi]
// 00842e39  8b5264               mov edx, dword ptr [edx + 0x64]
// 00842e3c  50                   push eax
// 00842e3d  8d442438             lea eax, [esp + 0x38]
// 00842e41  50                   push eax
// 00842e42  8bcf                 mov ecx, edi
// 00842e44  ffd2                 call edx
// 00842e46  85c0                 test eax, eax
// 00842e48  740c                 je 0x842e56
// 00842e4a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00842e4e  8b01                 mov eax, dword ptr [ecx]
// 00842e50  8b5060               mov edx, dword ptr [eax + 0x60]
// 00842e53  57                   push edi
// 00842e54  ffd2                 call edx
// 00842e56  8b442434             mov eax, dword ptr [esp + 0x34]
// 00842e5a  85c0                 test eax, eax
// 00842e5c  7422                 je 0x842e80
// 00842e5e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00842e62  50                   push eax
// 00842e63  e808feffff           call 0x842c70
// 00842e68  8bcf                 mov ecx, edi
// 00842e6a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00842e6f  e86677fcff           call 0x80a5da
// 00842e74  837c241800           cmp dword ptr [esp + 0x18], 0
// 00842e79  7597                 jne 0x842e12
// 00842e7b  e9e4feffff           jmp 0x842d64
// 00842e80  6a00                 push 0
// 00842e82  6a06                 push 6
// 00842e84  e84b7dfcff           call 0x80abd4
// copied from an identical function in another client (function ?_DoPropExchange@CXTPReportRecords@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp