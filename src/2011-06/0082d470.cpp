// roc 2011-06 0082d470  unit: MyXTPCommandBars  size: 650 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082d470
//
// 0082d470  51                   push ecx
// 0082d471  53                   push ebx
// 0082d472  55                   push ebp
// 0082d473  56                   push esi
// 0082d474  8b742414             mov esi, dword ptr [esp + 0x14]
// 0082d478  57                   push edi
// 0082d479  33db                 xor ebx, ebx
// 0082d47b  8bf9                 mov edi, ecx
// 0082d47d  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0082d480  895e40               mov dword ptr [esi + 0x40], ebx
// 0082d483  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 0082d489  e8a2cdffff           call 0x82a230
// 0082d48e  8bc8                 mov ecx, eax
// 0082d490  e88b21feff           call 0x80f620
// 0082d495  89442410             mov dword ptr [esp + 0x10], eax
// 0082d499  6a20                 push 0x20
// 0082d49b  8d44241c             lea eax, [esp + 0x1c]
// 0082d49f  50                   push eax
// 0082d4a0  682040ac00           push 0xac4020
// 0082d4a5  56                   push esi
// 0082d4a6  c744242820000000     mov dword ptr [esp + 0x28], 0x20
// 0082d4ae  e89d2a0300           call 0x85ff50
// 0082d4b3  6a01                 push 1
// 0082d4b5  8d4f20               lea ecx, [edi + 0x20]
// 0082d4b8  51                   push ecx
// 0082d4b9  680c40ac00           push 0xac400c
// 0082d4be  56                   push esi
// 0082d4bf  e8ec2a0300           call 0x85ffb0
// 0082d4c4  6a01                 push 1
// 0082d4c6  8d5724               lea edx, [edi + 0x24]
// 0082d4c9  52                   push edx
// 0082d4ca  68f83fac00           push 0xac3ff8
// 0082d4cf  56                   push esi
// 0082d4d0  e8db2a0300           call 0x85ffb0
// 0082d4d5  6a01                 push 1
// 0082d4d7  8d4728               lea eax, [edi + 0x28]
// 0082d4da  50                   push eax
// 0082d4db  68e43fac00           push 0xac3fe4
// 0082d4e0  56                   push esi
// 0082d4e1  e8ca2a0300           call 0x85ffb0
// 0082d4e6  83c440               add esp, 0x40
// 0082d4e9  53                   push ebx
// 0082d4ea  8d4f2c               lea ecx, [edi + 0x2c]
// 0082d4ed  51                   push ecx
// 0082d4ee  68d03fac00           push 0xac3fd0
// 0082d4f3  56                   push esi
// 0082d4f4  e8b72a0300           call 0x85ffb0
// 0082d4f9  53                   push ebx
// 0082d4fa  8d5730               lea edx, [edi + 0x30]
// 0082d4fd  52                   push edx
// 0082d4fe  68c43fac00           push 0xac3fc4
// 0082d503  56                   push esi
// 0082d504  e8a72a0300           call 0x85ffb0
// 0082d509  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0082d50d  83c420               add esp, 0x20
// 0082d510  837c241807           cmp dword ptr [esp + 0x18], 7
// 0082d515  7639                 jbe 0x82d550
// 0082d517  395e28               cmp dword ptr [esi + 0x28], ebx
// 0082d51a  7518                 jne 0x82d534
// 0082d51c  8b06                 mov eax, dword ptr [esi]
// 0082d51e  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0082d524  8bce                 mov ecx, esi
// 0082d526  ffd2                 call edx
// 0082d528  85c0                 test eax, eax
// 0082d52a  7408                 je 0x82d534
// 0082d52c  399fb4000000         cmp dword ptr [edi + 0xb4], ebx
// 0082d532  7415                 je 0x82d549
// 0082d534  8d87a8000000         lea eax, [edi + 0xa8]
// 0082d53a  50                   push eax
// 0082d53b  68b43fac00           push 0xac3fb4
// 0082d540  56                   push esi
// 0082d541  e86afdffff           call 0x82d2b0
// 0082d546  83c40c               add esp, 0xc
// 0082d549  837c241807           cmp dword ptr [esp + 0x18], 7
// 0082d54e  7704                 ja 0x82d554
// 0082d550  3beb                 cmp ebp, ebx
// 0082d552  741b                 je 0x82d56f
// 0082d554  53                   push ebx
// 0082d555  8d4f54               lea ecx, [edi + 0x54]
// 0082d558  51                   push ecx
// 0082d559  6800d5a900           push 0xa9d500
// 0082d55e  56                   push esi
// 0082d55f  e8ec290300           call 0x85ff50
// 0082d564  83c410               add esp, 0x10
// 0082d567  3beb                 cmp ebp, ebx
// 0082d569  0f8583010000         jne 0x82d6f2
// 0082d56f  6a01                 push 1
// 0082d571  8d5f34               lea ebx, [edi + 0x34]
// 0082d574  53                   push ebx
// 0082d575  68a03fac00           push 0xac3fa0
// 0082d57a  56                   push esi
// 0082d57b  e8302a0300           call 0x85ffb0
// 0082d580  6a01                 push 1
// 0082d582  8d6f38               lea ebp, [edi + 0x38]
// 0082d585  55                   push ebp
// 0082d586  68883fac00           push 0xac3f88
// 0082d58b  56                   push esi
// 0082d58c  e81f2a0300           call 0x85ffb0
// 0082d591  33c9                 xor ecx, ecx
// 0082d593  51                   push ecx
// 0082d594  33c0                 xor eax, eax
// 0082d596  50                   push eax
// 0082d597  8d5764               lea edx, [edi + 0x64]
// 0082d59a  52                   push edx
// 0082d59b  687c3fac00           push 0xac3f7c
// 0082d5a0  56                   push esi
// 0082d5a1  e8fa2a0300           call 0x8600a0
// 0082d5a6  33c9                 xor ecx, ecx
// 0082d5a8  51                   push ecx
// 0082d5a9  33c0                 xor eax, eax
// 0082d5ab  50                   push eax
// 0082d5ac  8d476c               lea eax, [edi + 0x6c]
// 0082d5af  50                   push eax
// 0082d5b0  686c3fac00           push 0xac3f6c
// 0082d5b5  56                   push esi
// 0082d5b6  e8e52a0300           call 0x8600a0
// 0082d5bb  83c448               add esp, 0x48
// 0082d5be  837e2800             cmp dword ptr [esi + 0x28], 0
// 0082d5c2  7519                 jne 0x82d5dd
// 0082d5c4  8b16                 mov edx, dword ptr [esi]
// 0082d5c6  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0082d5cc  8bce                 mov ecx, esi
// 0082d5ce  ffd0                 call eax
// 0082d5d0  85c0                 test eax, eax
// 0082d5d2  7409                 je 0x82d5dd
// 0082d5d4  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 0082d5db  7415                 je 0x82d5f2
// 0082d5dd  8d8f8c000000         lea ecx, [edi + 0x8c]
// 0082d5e3  51                   push ecx
// 0082d5e4  685c3fac00           push 0xac3f5c
// 0082d5e9  56                   push esi
// 0082d5ea  e8c1fcffff           call 0x82d2b0
// 0082d5ef  83c40c               add esp, 0xc
// 0082d5f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082d5f6  6a00                 push 0
// 0082d5f8  83c208               add edx, 8
// 0082d5fb  52                   push edx
// 0082d5fc  684c3fac00           push 0xac3f4c
// 0082d601  56                   push esi
// 0082d602  e8a9290300           call 0x85ffb0
// 0082d607  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082d60b  6a01                 push 1
// 0082d60d  83c004               add eax, 4
// 0082d610  50                   push eax
// 0082d611  68383fac00           push 0xac3f38
// 0082d616  56                   push esi
// 0082d617  e894290300           call 0x85ffb0
// 0082d61c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0082d620  6a01                 push 1
// 0082d622  51                   push ecx
// 0082d623  68283fac00           push 0xac3f28
// 0082d628  56                   push esi
// 0082d629  e882290300           call 0x85ffb0
// 0082d62e  83c430               add esp, 0x30
// 0082d631  837c241807           cmp dword ptr [esp + 0x18], 7
// 0082d636  767b                 jbe 0x82d6b3
// 0082d638  6a01                 push 1
// 0082d63a  53                   push ebx
// 0082d63b  68a03fac00           push 0xac3fa0
// 0082d640  56                   push esi
// 0082d641  e86a290300           call 0x85ffb0
// 0082d646  6a01                 push 1
// 0082d648  55                   push ebp
// 0082d649  68883fac00           push 0xac3f88
// 0082d64e  56                   push esi
// 0082d64f  e85c290300           call 0x85ffb0
// 0082d654  6a00                 push 0
// 0082d656  8d573c               lea edx, [edi + 0x3c]
// 0082d659  52                   push edx
// 0082d65a  68183fac00           push 0xac3f18
// 0082d65f  56                   push esi
// 0082d660  e84b290300           call 0x85ffb0
// 0082d665  6a00                 push 0
// 0082d667  8d4740               lea eax, [edi + 0x40]
// 0082d66a  50                   push eax
// 0082d66b  68043fac00           push 0xac3f04
// 0082d670  56                   push esi
// 0082d671  e83a290300           call 0x85ffb0
// 0082d676  83c440               add esp, 0x40
// 0082d679  6a01                 push 1
// 0082d67b  8d4f44               lea ecx, [edi + 0x44]
// 0082d67e  51                   push ecx
// 0082d67f  68ec3eac00           push 0xac3eec
// 0082d684  56                   push esi
// 0082d685  e826290300           call 0x85ffb0
// 0082d68a  6a01                 push 1
// 0082d68c  8d5748               lea edx, [edi + 0x48]
// 0082d68f  52                   push edx
// 0082d690  68d43eac00           push 0xac3ed4
// 0082d695  56                   push esi
// 0082d696  e815290300           call 0x85ffb0
// 0082d69b  33c9                 xor ecx, ecx
// 0082d69d  51                   push ecx
// 0082d69e  33c0                 xor eax, eax
// 0082d6a0  50                   push eax
// 0082d6a1  8d4774               lea eax, [edi + 0x74]
// 0082d6a4  50                   push eax
// 0082d6a5  68c43eac00           push 0xac3ec4
// 0082d6aa  56                   push esi
// 0082d6ab  e8f0290300           call 0x8600a0
// 0082d6b0  83c434               add esp, 0x34
// 0082d6b3  837c241808           cmp dword ptr [esp + 0x18], 8
// 0082d6b8  7638                 jbe 0x82d6f2
// 0082d6ba  6a01                 push 1
// 0082d6bc  8d4f5c               lea ecx, [edi + 0x5c]
// 0082d6bf  51                   push ecx
// 0082d6c0  68b43eac00           push 0xac3eb4
// 0082d6c5  56                   push esi
// 0082d6c6  e885280300           call 0x85ff50
// 0082d6cb  6a00                 push 0
// 0082d6cd  8d9fcc000000         lea ebx, [edi + 0xcc]
// 0082d6d3  53                   push ebx
// 0082d6d4  68a03eac00           push 0xac3ea0
// 0082d6d9  56                   push esi
// 0082d6da  e871280300           call 0x85ff50
// 0082d6df  83c420               add esp, 0x20
// 0082d6e2  837e2800             cmp dword ptr [esi + 0x28], 0
// 0082d6e6  740a                 je 0x82d6f2
// 0082d6e8  8b13                 mov edx, dword ptr [ebx]
// 0082d6ea  52                   push edx
// 0082d6eb  8bcf                 mov ecx, edi
// 0082d6ed  e80ec4ffff           call 0x829b00
// 0082d6f2  5f                   pop edi
// 0082d6f3  5e                   pop esi
// 0082d6f4  5d                   pop ebp
// 0082d6f5  5b                   pop ebx
// 0082d6f6  59                   pop ecx
// 0082d6f7  c20800               ret 8
// copied from an identical function in another client (function ?DoPropExchange@CXTPCommandBarsOptions@@QAEXPAVCXTPPropExchange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp