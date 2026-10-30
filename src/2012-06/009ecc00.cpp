// roc 2012-06 009ecc00  unit: CXTPToolTipContext  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ecc00
//
// 009ecc00  53                   push ebx
// 009ecc01  55                   push ebp
// 009ecc02  56                   push esi
// 009ecc03  8bf1                 mov esi, ecx
// 009ecc05  57                   push edi
// 009ecc06  8d7e70               lea edi, [esi + 0x70]
// 009ecc09  8bcf                 mov ecx, edi
// 009ecc0b  ff150448b200         call dword ptr [0xb24804]
// 009ecc11  8b1d903ab200         mov ebx, dword ptr [0xb23a90]
// 009ecc17  33ed                 xor ebp, ebp
// 009ecc19  8d470c               lea eax, [edi + 0xc]
// 009ecc1c  50                   push eax
// 009ecc1d  896f08               mov dword ptr [edi + 8], ebp
// 009ecc20  896f20               mov dword ptr [edi + 0x20], ebp
// 009ecc23  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 009ecc2a  896f1c               mov dword ptr [edi + 0x1c], ebp
// 009ecc2d  ffd3                 call ebx
// 009ecc2f  83c728               add edi, 0x28
// 009ecc32  57                   push edi
// 009ecc33  ffd3                 call ebx
// 009ecc35  8dbea8000000         lea edi, [esi + 0xa8]
// 009ecc3b  8bcf                 mov ecx, edi
// 009ecc3d  ff150448b200         call dword ptr [0xb24804]
// 009ecc43  8d4f0c               lea ecx, [edi + 0xc]
// 009ecc46  51                   push ecx
// 009ecc47  896f08               mov dword ptr [edi + 8], ebp
// 009ecc4a  896f20               mov dword ptr [edi + 0x20], ebp
// 009ecc4d  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 009ecc54  896f1c               mov dword ptr [edi + 0x1c], ebp
// 009ecc57  ffd3                 call ebx
// 009ecc59  83c728               add edi, 0x28
// 009ecc5c  57                   push edi
// 009ecc5d  ffd3                 call ebx
// 009ecc5f  8dbee0000000         lea edi, [esi + 0xe0]
// 009ecc65  8bcf                 mov ecx, edi
// 009ecc67  ff150448b200         call dword ptr [0xb24804]
// 009ecc6d  8d570c               lea edx, [edi + 0xc]
// 009ecc70  52                   push edx
// 009ecc71  896f08               mov dword ptr [edi + 8], ebp
// 009ecc74  896f20               mov dword ptr [edi + 0x20], ebp
// 009ecc77  c74724ffffffff       mov dword ptr [edi + 0x24], 0xffffffff
// 009ecc7e  896f1c               mov dword ptr [edi + 0x1c], ebp
// 009ecc81  ffd3                 call ebx
// 009ecc83  83c728               add edi, 0x28
// 009ecc86  57                   push edi
// 009ecc87  ffd3                 call ebx
// 009ecc89  33ff                 xor edi, edi
// 009ecc8b  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 009ecc8e  7e2a                 jle 0x9eccba
// 009ecc90  3bfd                 cmp edi, ebp
// 009ecc92  7c5e                 jl 0x9eccf2
// 009ecc94  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 009ecc97  7d59                 jge 0x9eccf2
// 009ecc99  8b4658               mov eax, dword ptr [esi + 0x58]
// 009ecc9c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 009ecc9f  3bdd                 cmp ebx, ebp
// 009ecca1  7411                 je 0x9eccb4
// 009ecca3  8bcb                 mov ecx, ebx
// 009ecca5  ff15d047b200         call dword ptr [0xb247d0]
// 009eccab  53                   push ebx
// 009eccac  e86354f9ff           call 0x982114
// 009eccb1  83c404               add esp, 4
// 009eccb4  47                   inc edi
// 009eccb5  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 009eccb8  7cd6                 jl 0x9ecc90
// 009eccba  6aff                 push -1
// 009eccbc  55                   push ebp
// 009eccbd  8d4e54               lea ecx, [esi + 0x54]
// 009eccc0  e89bb5faff           call 0x998260
// 009eccc5  8d8e28010000         lea ecx, [esi + 0x128]
// 009ecccb  ff150448b200         call dword ptr [0xb24804]
// 009eccd1  55                   push ebp
// 009eccd2  8bce                 mov ecx, esi
// 009eccd4  89ae2c010000         mov dword ptr [esi + 0x12c], ebp
// 009eccda  e8d1f0ffff           call 0x9ebdb0
// 009eccdf  55                   push ebp
// 009ecce0  8bce                 mov ecx, esi
// 009ecce2  e889fdffff           call 0x9eca70
// 009ecce7  5f                   pop edi
// 009ecce8  8bce                 mov ecx, esi
// 009eccea  5e                   pop esi
// 009ecceb  5d                   pop ebp
// 009eccec  5b                   pop ebx
// 009ecced  e9b45ef9ff           jmp 0x982ba6
// 009eccf2  e8c956f9ff           call 0x9823c0
// copied from an identical function in another client (function ?OnDestroy@CXTPToolTipContextToolTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp