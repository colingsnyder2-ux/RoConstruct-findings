// roc 2009-06 00787e90  unit: CXTPToolTipContext  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00787e90
//
// 00787e90  53                   push ebx
// 00787e91  55                   push ebp
// 00787e92  56                   push esi
// 00787e93  8bf1                 mov esi, ecx
// 00787e95  57                   push edi
// 00787e96  8d7e70               lea edi, [esi + 0x70]
// 00787e99  8bcf                 mov ecx, edi
// 00787e9b  ff15f4ff8900         call dword ptr [0x89fff4]
// 00787ea1  8b1dc8ee8900         mov ebx, dword ptr [0x89eec8]
// 00787ea7  33ed                 xor ebp, ebp
// 00787ea9  8d470c               lea eax, [edi + 0xc]
// 00787eac  50                   push eax
// 00787ead  896f08               mov dword ptr [edi + 8], ebp
// 00787eb0  896f20               mov dword ptr [edi + 0x20], ebp
// 00787eb3  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00787eba  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00787ebd  ffd3                 call ebx
// 00787ebf  83c728               add edi, 0x28
// 00787ec2  57                   push edi
// 00787ec3  ffd3                 call ebx
// 00787ec5  8dbea8000000         lea edi, [esi + 0xa8]
// 00787ecb  8bcf                 mov ecx, edi
// 00787ecd  ff15f4ff8900         call dword ptr [0x89fff4]
// 00787ed3  8d4f0c               lea ecx, [edi + 0xc]
// 00787ed6  51                   push ecx
// 00787ed7  896f08               mov dword ptr [edi + 8], ebp
// 00787eda  896f20               mov dword ptr [edi + 0x20], ebp
// 00787edd  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00787ee4  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00787ee7  ffd3                 call ebx
// 00787ee9  83c728               add edi, 0x28
// 00787eec  57                   push edi
// 00787eed  ffd3                 call ebx
// 00787eef  8dbee0000000         lea edi, [esi + 0xe0]
// 00787ef5  8bcf                 mov ecx, edi
// 00787ef7  ff15f4ff8900         call dword ptr [0x89fff4]
// 00787efd  8d570c               lea edx, [edi + 0xc]
// 00787f00  52                   push edx
// 00787f01  896f08               mov dword ptr [edi + 8], ebp
// 00787f04  896f20               mov dword ptr [edi + 0x20], ebp
// 00787f07  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 00787f0e  896f1c               mov dword ptr [edi + 0x1c], ebp
// 00787f11  ffd3                 call ebx
// 00787f13  83c728               add edi, 0x28
// 00787f16  57                   push edi
// 00787f17  ffd3                 call ebx
// 00787f19  33ff                 xor edi, edi
// 00787f1b  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00787f1e  7e2a                 jle 0x787f4a
// 00787f20  3bfd                 cmp edi, ebp
// 00787f22  7c5e                 jl 0x787f82
// 00787f24  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00787f27  7d59                 jge 0x787f82
// 00787f29  8b4658               mov eax, dword ptr [esi + 0x58]
// 00787f2c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00787f2f  3bdd                 cmp ebx, ebp
// 00787f31  7411                 je 0x787f44
// 00787f33  8bcb                 mov ecx, ebx
// 00787f35  ff1510fd8900         call dword ptr [0x89fd10]
// 00787f3b  53                   push ebx
// 00787f3c  e8f10af9ff           call 0x718a32
// 00787f41  83c404               add esp, 4
// 00787f44  47                   inc edi
// 00787f45  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00787f48  7cd6                 jl 0x787f20
// 00787f4a  6aff                 push -1
// 00787f4c  55                   push ebp
// 00787f4d  8d4e54               lea ecx, [esi + 0x54]
// 00787f50  e8bba5fcff           call 0x752510
// 00787f55  8d8e28010000         lea ecx, [esi + 0x128]
// 00787f5b  ff15f4ff8900         call dword ptr [0x89fff4]
// 00787f61  55                   push ebp
// 00787f62  8bce                 mov ecx, esi
// 00787f64  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 00787f6a  e8c1f0ffff           call 0x787030
// 00787f6f  55                   push ebp
// 00787f70  8bce                 mov ecx, esi
// 00787f72  e889fdffff           call 0x787d00
// 00787f77  5f                   pop edi
// 00787f78  8bce                 mov ecx, esi
// 00787f7a  5e                   pop esi
// 00787f7b  5d                   pop ebp
// 00787f7c  5b                   pop ebx
// 00787f7d  e96c15f9ff           jmp 0x7194ee
// 00787f82  e85d0df9ff           call 0x718ce4
// copied from an identical function in another client (function ?OnDestroy@CXTPToolTipContextToolTip@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp