// roc 2010-06 00816e70  unit: CXTPToolTipContext  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00816e70
//
// 00816e70  53                   push ebx
// 00816e71  55                   push ebp
// 00816e72  56                   push esi
// 00816e73  8bf1                 mov esi, ecx
// 00816e75  57                   push edi
// 00816e76  8d7e70               lea edi, [esi + 0x70]
// 00816e79  8bcf                 mov ecx, edi
// 00816e7b  ff1588c69e00         call dword ptr [0x9ec688]
// 00816e81  8b1de4ba9e00         mov ebx, dword ptr [0x9ebae4]
// 00816e87  33ed                 xor ebp, ebp
// 00816e89  8d470c               lea eax, [edi + 0xc]
// 00816e8c  50                   push eax
// 00816e8d  896f08               mov dword ptr [edi + 8], ebp
// 00816e90  896f20               mov dword ptr [edi + 0x20], ebp
// 00816e93  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00816e9a  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00816e9d  ffd3                 call ebx
// 00816e9f  83c728               add edi, 0x28
// 00816ea2  57                   push edi
// 00816ea3  ffd3                 call ebx
// 00816ea5  8dbea8000000         lea edi, [esi + 0xa8]
// 00816eab  8bcf                 mov ecx, edi
// 00816ead  ff1588c69e00         call dword ptr [0x9ec688]
// 00816eb3  8d4f0c               lea ecx, [edi + 0xc]
// 00816eb6  51                   push ecx
// 00816eb7  896f08               mov dword ptr [edi + 8], ebp
// 00816eba  896f20               mov dword ptr [edi + 0x20], ebp
// 00816ebd  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00816ec4  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00816ec7  ffd3                 call ebx
// 00816ec9  83c728               add edi, 0x28
// 00816ecc  57                   push edi
// 00816ecd  ffd3                 call ebx
// 00816ecf  8dbee0000000         lea edi, [esi + 0xe0]
// 00816ed5  8bcf                 mov ecx, edi
// 00816ed7  ff1588c69e00         call dword ptr [0x9ec688]
// 00816edd  8d570c               lea edx, [edi + 0xc]
// 00816ee0  52                   push edx
// 00816ee1  896f08               mov dword ptr [edi + 8], ebp
// 00816ee4  896f20               mov dword ptr [edi + 0x20], ebp
// 00816ee7  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00816eee  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00816ef1  ffd3                 call ebx
// 00816ef3  83c728               add edi, 0x28
// 00816ef6  57                   push edi
// 00816ef7  ffd3                 call ebx
// 00816ef9  33ff                 xor edi, edi
// 00816efb  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00816efe  7e2a                 jle 0x816f2a
// 00816f00  3bfd                 cmp edi, ebp
// 00816f02  7c5e                 jl 0x816f62
// 00816f04  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00816f07  7d59                 jge 0x816f62
// 00816f09  8b4658               mov eax, dword ptr [esi + 0x58]
// 00816f0c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00816f0f  3bdd                 cmp ebx, ebp
// 00816f11  7411                 je 0x816f24
// 00816f13  8bcb                 mov ecx, ebx
// 00816f15  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00816f1b  53                   push ebx
// 00816f1c  e8790af9ff           call 0x7a799a
// 00816f21  83c404               add esp, 4
// 00816f24  47                   inc edi
// 00816f25  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00816f28  7cd6                 jl 0x816f00
// 00816f2a  6aff                 push -1
// 00816f2c  55                   push ebp
// 00816f2d  8d4e54               lea ecx, [esi + 0x54]
// 00816f30  e8cba3fcff           call 0x7e1300
// 00816f35  8d8e28010000         lea ecx, [esi + 0x128]
// 00816f3b  ff1588c69e00         call dword ptr [0x9ec688]
// 00816f41  55                   push ebp
// 00816f42  8bce                 mov ecx, esi
// 00816f44  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 00816f4a  e8d1f0ffff           call 0x816020
// 00816f4f  55                   push ebp
// 00816f50  8bce                 mov ecx, esi
// 00816f52  e889fdffff           call 0x816ce0
// 00816f57  5f                   pop edi
// 00816f58  8bce                 mov ecx, esi
// 00816f5a  5e                   pop esi
// 00816f5b  5d                   pop ebp
// 00816f5c  5b                   pop ebx
// 00816f5d  e9fa14f9ff           jmp 0x7a845c
// 00816f62  e8e50cf9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnDestroy@CXTPToolTipContextToolTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp