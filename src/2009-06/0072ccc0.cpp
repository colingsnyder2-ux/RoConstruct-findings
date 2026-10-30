// roc 2009-06 0072ccc0  unit: MyXTPCommandBars  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072ccc0
//
// 0072ccc0  51                   push ecx
// 0072ccc1  53                   push ebx
// 0072ccc2  55                   push ebp
// 0072ccc3  56                   push esi
// 0072ccc4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072ccc8  57                   push edi
// 0072ccc9  33db                 xor ebx, ebx
// 0072cccb  8bf9                 mov edi, ecx
// 0072cccd  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0072ccd0  895e40               mov dword ptr [esi + 0x40], ebx
// 0072ccd3  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 0072ccd9  e822cdffff           call 0x729a00
// 0072ccde  8bc8                 mov ecx, eax
// 0072cce0  e80b5bffff           call 0x7227f0
// 0072cce5  89442410             mov dword ptr [esp + 0x10], eax
// 0072cce9  6a20                 push 0x20
// 0072cceb  8d44241c             lea eax, [esp + 0x1c]
// 0072ccef  50                   push eax
// 0072ccf0  68442b8f00           push 0x8f2b44
// 0072ccf5  56                   push esi
// 0072ccf6  c744242820000000     mov dword ptr [esp + 0x28], 0x20
// 0072ccfe  e89d8f0400           call 0x775ca0
// 0072cd03  6a01                 push 1
// 0072cd05  8d4f20               lea ecx, [edi + 0x20]
// 0072cd08  51                   push ecx
// 0072cd09  68302b8f00           push 0x8f2b30
// 0072cd0e  56                   push esi
// 0072cd0f  e8ec8f0400           call 0x775d00
// 0072cd14  6a01                 push 1
// 0072cd16  8d5724               lea edx, [edi + 0x24]
// 0072cd19  52                   push edx
// 0072cd1a  681c2b8f00           push 0x8f2b1c
// 0072cd1f  56                   push esi
// 0072cd20  e8db8f0400           call 0x775d00
// 0072cd25  6a01                 push 1
// 0072cd27  8d4728               lea eax, [edi + 0x28]
// 0072cd2a  50                   push eax
// 0072cd2b  68082b8f00           push 0x8f2b08
// 0072cd30  56                   push esi
// 0072cd31  e8ca8f0400           call 0x775d00
// 0072cd36  83c440               add esp, 0x40
// 0072cd39  53                   push ebx
// 0072cd3a  8d4f2c               lea ecx, [edi + 0x2c]
// 0072cd3d  51                   push ecx
// 0072cd3e  68f42a8f00           push 0x8f2af4
// 0072cd43  56                   push esi
// 0072cd44  e8b78f0400           call 0x775d00
// 0072cd49  53                   push ebx
// 0072cd4a  8d5730               lea edx, [edi + 0x30]
// 0072cd4d  52                   push edx
// 0072cd4e  68e82a8f00           push 0x8f2ae8
// 0072cd53  56                   push esi
// 0072cd54  e8a78f0400           call 0x775d00
// 0072cd59  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0072cd5d  83c420               add esp, 0x20
// 0072cd60  837c241807           cmp dword ptr [esp + 0x18], 7
// 0072cd65  7639                 jbe 0x72cda0
// 0072cd67  395e28               cmp dword ptr [esi + 0x28], ebx
// 0072cd6a  7518                 jne 0x72cd84
// 0072cd6c  8b06                 mov eax, dword ptr [esi]
// 0072cd6e  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0072cd74  8bce                 mov ecx, esi
// 0072cd76  ffd2                 call edx
// 0072cd78  85c0                 test eax, eax
// 0072cd7a  7408                 je 0x72cd84
// 0072cd7c  399fb4000000         cmp dword ptr [edi + 0xb4], ebx
// 0072cd82  7415                 je 0x72cd99
// 0072cd84  8d87a8000000         lea eax, [edi + 0xa8]
// 0072cd8a  50                   push eax
// 0072cd8b  68d82a8f00           push 0x8f2ad8
// 0072cd90  56                   push esi
// 0072cd91  e86afdffff           call 0x72cb00
// 0072cd96  83c40c               add esp, 0xc
// 0072cd99  837c241807           cmp dword ptr [esp + 0x18], 7
// 0072cd9e  7704                 ja 0x72cda4
// 0072cda0  3beb                 cmp ebp, ebx
// 0072cda2  741b                 je 0x72cdbf
// 0072cda4  53                   push ebx
// 0072cda5  8d4f54               lea ecx, [edi + 0x54]
// 0072cda8  51                   push ecx
// 0072cda9  68cc2a8f00           push 0x8f2acc
// 0072cdae  56                   push esi
// 0072cdaf  e8ec8e0400           call 0x775ca0
// 0072cdb4  83c410               add esp, 0x10
// 0072cdb7  3beb                 cmp ebp, ebx
// 0072cdb9  0f8583010000         jne 0x72cf42
// 0072cdbf  6a01                 push 1
// 0072cdc1  8d5f34               lea ebx, [edi + 0x34]
// 0072cdc4  53                   push ebx
// 0072cdc5  68b82a8f00           push 0x8f2ab8
// 0072cdca  56                   push esi
// 0072cdcb  e8308f0400           call 0x775d00
// 0072cdd0  6a01                 push 1
// 0072cdd2  8d6f38               lea ebp, [edi + 0x38]
// 0072cdd5  55                   push ebp
// 0072cdd6  68a02a8f00           push 0x8f2aa0
// 0072cddb  56                   push esi
// 0072cddc  e81f8f0400           call 0x775d00
// 0072cde1  33c9                 xor ecx, ecx
// 0072cde3  51                   push ecx
// 0072cde4  33c0                 xor eax, eax
// 0072cde6  50                   push eax
// 0072cde7  8d5764               lea edx, [edi + 0x64]
// 0072cdea  52                   push edx
// 0072cdeb  68942a8f00           push 0x8f2a94
// 0072cdf0  56                   push esi
// 0072cdf1  e8fa8f0400           call 0x775df0
// 0072cdf6  33c9                 xor ecx, ecx
// 0072cdf8  51                   push ecx
// 0072cdf9  33c0                 xor eax, eax
// 0072cdfb  50                   push eax
// 0072cdfc  8d476c               lea eax, [edi + 0x6c]
// 0072cdff  50                   push eax
// 0072ce00  68842a8f00           push 0x8f2a84
// 0072ce05  56                   push esi
// 0072ce06  e8e58f0400           call 0x775df0
// 0072ce0b  83c448               add esp, 0x48
// 0072ce0e  837e2800             cmp dword ptr [esi + 0x28], 0
// 0072ce12  7519                 jne 0x72ce2d
// 0072ce14  8b16                 mov edx, dword ptr [esi]
// 0072ce16  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0072ce1c  8bce                 mov ecx, esi
// 0072ce1e  ffd0                 call eax
// 0072ce20  85c0                 test eax, eax
// 0072ce22  7409                 je 0x72ce2d
// 0072ce24  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 0072ce2b  7415                 je 0x72ce42
// 0072ce2d  8d8f8c000000         lea ecx, [edi + 0x8c]
// 0072ce33  51                   push ecx
// 0072ce34  68742a8f00           push 0x8f2a74
// 0072ce39  56                   push esi
// 0072ce3a  e8c1fcffff           call 0x72cb00
// 0072ce3f  83c40c               add esp, 0xc
// 0072ce42  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072ce46  6a00                 push 0
// 0072ce48  83c208               add edx, 8
// 0072ce4b  52                   push edx
// 0072ce4c  68642a8f00           push 0x8f2a64
// 0072ce51  56                   push esi
// 0072ce52  e8a98e0400           call 0x775d00
// 0072ce57  8b442420             mov eax, dword ptr [esp + 0x20]
// 0072ce5b  6a01                 push 1
// 0072ce5d  83c004               add eax, 4
// 0072ce60  50                   push eax
// 0072ce61  68502a8f00           push 0x8f2a50
// 0072ce66  56                   push esi
// 0072ce67  e8948e0400           call 0x775d00
// 0072ce6c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072ce70  6a01                 push 1
// 0072ce72  51                   push ecx
// 0072ce73  68402a8f00           push 0x8f2a40
// 0072ce78  56                   push esi
// 0072ce79  e8828e0400           call 0x775d00
// 0072ce7e  83c430               add esp, 0x30
// 0072ce81  837c241807           cmp dword ptr [esp + 0x18], 7
// 0072ce86  767b                 jbe 0x72cf03
// 0072ce88  6a01                 push 1
// 0072ce8a  53                   push ebx
// 0072ce8b  68b82a8f00           push 0x8f2ab8
// 0072ce90  56                   push esi
// 0072ce91  e86a8e0400           call 0x775d00
// 0072ce96  6a01                 push 1
// 0072ce98  55                   push ebp
// 0072ce99  68a02a8f00           push 0x8f2aa0
// 0072ce9e  56                   push esi
// 0072ce9f  e85c8e0400           call 0x775d00
// 0072cea4  6a00                 push 0
// 0072cea6  8d573c               lea edx, [edi + 0x3c]
// 0072cea9  52                   push edx
// 0072ceaa  68302a8f00           push 0x8f2a30
// 0072ceaf  56                   push esi
// 0072ceb0  e84b8e0400           call 0x775d00
// 0072ceb5  6a00                 push 0
// 0072ceb7  8d4740               lea eax, [edi + 0x40]
// 0072ceba  50                   push eax
// 0072cebb  681c2a8f00           push 0x8f2a1c
// 0072cec0  56                   push esi
// 0072cec1  e83a8e0400           call 0x775d00
// 0072cec6  83c440               add esp, 0x40
// 0072cec9  6a01                 push 1
// 0072cecb  8d4f44               lea ecx, [edi + 0x44]
// 0072cece  51                   push ecx
// 0072cecf  68042a8f00           push 0x8f2a04
// 0072ced4  56                   push esi
// 0072ced5  e8268e0400           call 0x775d00
// 0072ceda  6a01                 push 1
// 0072cedc  8d5748               lea edx, [edi + 0x48]
// 0072cedf  52                   push edx
// 0072cee0  68ec298f00           push 0x8f29ec
// 0072cee5  56                   push esi
// 0072cee6  e8158e0400           call 0x775d00
// 0072ceeb  33c9                 xor ecx, ecx
// 0072ceed  51                   push ecx
// 0072ceee  33c0                 xor eax, eax
// 0072cef0  50                   push eax
// 0072cef1  8d4774               lea eax, [edi + 0x74]
// 0072cef4  50                   push eax
// 0072cef5  68dc298f00           push 0x8f29dc
// 0072cefa  56                   push esi
// 0072cefb  e8f08e0400           call 0x775df0
// 0072cf00  83c434               add esp, 0x34
// 0072cf03  837c241808           cmp dword ptr [esp + 0x18], 8
// 0072cf08  7638                 jbe 0x72cf42
// 0072cf0a  6a01                 push 1
// 0072cf0c  8d4f5c               lea ecx, [edi + 0x5c]
// 0072cf0f  51                   push ecx
// 0072cf10  68cc298f00           push 0x8f29cc
// 0072cf15  56                   push esi
// 0072cf16  e8858d0400           call 0x775ca0
// 0072cf1b  6a00                 push 0
// 0072cf1d  8d9fcc000000         lea ebx, [edi + 0xcc]
// 0072cf23  53                   push ebx
// 0072cf24  68b8298f00           push 0x8f29b8
// 0072cf29  56                   push esi
// 0072cf2a  e8718d0400           call 0x775ca0
// 0072cf2f  83c420               add esp, 0x20
// 0072cf32  837e2800             cmp dword ptr [esi + 0x28], 0
// 0072cf36  740a                 je 0x72cf42
// 0072cf38  8b13                 mov edx, dword ptr [ebx]
// 0072cf3a  52                   push edx
// 0072cf3b  8bcf                 mov ecx, edi
// 0072cf3d  e87ec3ffff           call 0x7292c0
// 0072cf42  5f                   pop edi
// 0072cf43  5e                   pop esi
// 0072cf44  5d                   pop ebp
// 0072cf45  5b                   pop ebx
// 0072cf46  59                   pop ecx
// 0072cf47  c20800               ret 8
// copied from an identical function in another client (function ?DoPropExchange@CXTPCommandBarsOptions@@QAEXPAVCXTPPropExchange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp