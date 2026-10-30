// roc 2009-12 00862ec0  unit: CXTPToolTipContext  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862ec0
//
// 00862ec0  53                   push ebx
// 00862ec1  55                   push ebp
// 00862ec2  56                   push esi
// 00862ec3  8bf1                 mov esi, ecx
// 00862ec5  57                   push edi
// 00862ec6  8d7e70               lea edi, [esi + 0x70]
// 00862ec9  8bcf                 mov ecx, edi
// 00862ecb  ff1590d69800         call dword ptr [0x98d690]
// 00862ed1  8b1d9cca9800         mov ebx, dword ptr [0x98ca9c]
// 00862ed7  33ed                 xor ebp, ebp
// 00862ed9  8d470c               lea eax, [edi + 0xc]
// 00862edc  50                   push eax
// 00862edd  896f08               mov dword ptr [edi + 8], ebp
// 00862ee0  896f20               mov dword ptr [edi + 0x20], ebp
// 00862ee3  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00862eea  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00862eed  ffd3                 call ebx
// 00862eef  83c728               add edi, 0x28
// 00862ef2  57                   push edi
// 00862ef3  ffd3                 call ebx
// 00862ef5  8dbea8000000         lea edi, [esi + 0xa8]
// 00862efb  8bcf                 mov ecx, edi
// 00862efd  ff1590d69800         call dword ptr [0x98d690]
// 00862f03  8d4f0c               lea ecx, [edi + 0xc]
// 00862f06  51                   push ecx
// 00862f07  896f08               mov dword ptr [edi + 8], ebp
// 00862f0a  896f20               mov dword ptr [edi + 0x20], ebp
// 00862f0d  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00862f14  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00862f17  ffd3                 call ebx
// 00862f19  83c728               add edi, 0x28
// 00862f1c  57                   push edi
// 00862f1d  ffd3                 call ebx
// 00862f1f  8dbee0000000         lea edi, [esi + 0xe0]
// 00862f25  8bcf                 mov ecx, edi
// 00862f27  ff1590d69800         call dword ptr [0x98d690]
// 00862f2d  8d570c               lea edx, [edi + 0xc]
// 00862f30  52                   push edx
// 00862f31  896f08               mov dword ptr [edi + 8], ebp
// 00862f34  896f20               mov dword ptr [edi + 0x20], ebp
// 00862f37  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00862f3e  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00862f41  ffd3                 call ebx
// 00862f43  83c728               add edi, 0x28
// 00862f46  57                   push edi
// 00862f47  ffd3                 call ebx
// 00862f49  33ff                 xor edi, edi
// 00862f4b  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00862f4e  7e2a                 jle 0x862f7a
// 00862f50  3bfd                 cmp edi, ebp
// 00862f52  7c5e                 jl 0x862fb2
// 00862f54  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00862f57  7d59                 jge 0x862fb2
// 00862f59  8b4658               mov eax, dword ptr [esi + 0x58]
// 00862f5c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00862f5f  3bdd                 cmp ebx, ebp
// 00862f61  7411                 je 0x862f74
// 00862f63  8bcb                 mov ecx, ebx
// 00862f65  ff15c0de9800         call dword ptr [0x98dec0]
// 00862f6b  53                   push ebx
// 00862f6c  e8e908f9ff           call 0x7f385a
// 00862f71  83c404               add esp, 4
// 00862f74  47                   inc edi
// 00862f75  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00862f78  7cd6                 jl 0x862f50
// 00862f7a  6aff                 push -1
// 00862f7c  55                   push ebp
// 00862f7d  8d4e54               lea ecx, [esi + 0x54]
// 00862f80  e81b24ffff           call 0x8553a0
// 00862f85  8d8e28010000         lea ecx, [esi + 0x128]
// 00862f8b  ff1590d69800         call dword ptr [0x98d690]
// 00862f91  55                   push ebp
// 00862f92  8bce                 mov ecx, esi
// 00862f94  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 00862f9a  e8b1f0ffff           call 0x862050
// 00862f9f  55                   push ebp
// 00862fa0  8bce                 mov ecx, esi
// 00862fa2  e889fdffff           call 0x862d30
// 00862fa7  5f                   pop edi
// 00862fa8  8bce                 mov ecx, esi
// 00862faa  5e                   pop esi
// 00862fab  5d                   pop ebp
// 00862fac  5b                   pop ebx
// 00862fad  e96a13f9ff           jmp 0x7f431c
// 00862fb2  e8550bf9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnDestroy@CXTPToolTipContextToolTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp