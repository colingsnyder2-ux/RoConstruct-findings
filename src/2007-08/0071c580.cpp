// roc 2007-08 0071c580  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 1198 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071c580
//
// 0071c580  6aff                 push -1
// 0071c582  6866b27600           push 0x76b266
// 0071c587  64a100000000         mov eax, dword ptr fs:[0]
// 0071c58d  50                   push eax
// 0071c58e  83ec08               sub esp, 8
// 0071c591  55                   push ebp
// 0071c592  56                   push esi
// 0071c593  57                   push edi
// 0071c594  a188518b00           mov eax, dword ptr [0x8b5188]
// 0071c599  33c4                 xor eax, esp
// 0071c59b  50                   push eax
// 0071c59c  8d442418             lea eax, [esp + 0x18]
// 0071c5a0  64a300000000         mov dword ptr fs:[0], eax
// 0071c5a6  8bf1                 mov esi, ecx
// 0071c5a8  e8e3f8ffff           call 0x71be90
// 0071c5ad  e86e49ffff           call 0x710f20
// 0071c5b2  8bc8                 mov ecx, eax
// 0071c5b4  e83730ffff           call 0x70f5f0
// 0071c5b9  85c0                 test eax, eax
// 0071c5bb  0f8467030000         je 0x71c928
// 0071c5c1  51                   push ecx
// 0071c5c2  8bcc                 mov ecx, esp
// 0071c5c4  89642414             mov dword ptr [esp + 0x14], esp
// 0071c5c8  33ff                 xor edi, edi
// 0071c5ca  68100d7e00           push 0x7e0d10
// 0071c5cf  89becc000000         mov dword ptr [esi + 0xcc], edi
// 0071c5d5  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c5db  51                   push ecx
// 0071c5dc  8bcc                 mov ecx, esp
// 0071c5de  8964241c             mov dword ptr [esp + 0x1c], esp
// 0071c5e2  68040d7e00           push 0x7e0d04
// 0071c5e7  897c242c             mov dword ptr [esp + 0x2c], edi
// 0071c5eb  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c5f1  c644242801           mov byte ptr [esp + 0x28], 1
// 0071c5f6  e82549ffff           call 0x710f20
// 0071c5fb  83cfff               or edi, 0xffffffff
// 0071c5fe  8bc8                 mov ecx, eax
// 0071c600  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c604  e81742ffff           call 0x710820
// 0071c609  894648               mov dword ptr [esi + 0x48], eax
// 0071c60c  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0071c60f  3bc7                 cmp eax, edi
// 0071c611  7503                 jne 0x71c616
// 0071c613  8b4648               mov eax, dword ptr [esi + 0x48]
// 0071c616  51                   push ecx
// 0071c617  8bcc                 mov ecx, esp
// 0071c619  89642418             mov dword ptr [esp + 0x18], esp
// 0071c61d  68f80c7e00           push 0x7e0cf8
// 0071c622  898654010000         mov dword ptr [esi + 0x154], eax
// 0071c628  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c62e  51                   push ecx
// 0071c62f  8bcc                 mov ecx, esp
// 0071c631  89642418             mov dword ptr [esp + 0x18], esp
// 0071c635  68040d7e00           push 0x7e0d04
// 0071c63a  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0071c642  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c648  c644242803           mov byte ptr [esp + 0x28], 3
// 0071c64d  e8ce48ffff           call 0x710f20
// 0071c652  8bc8                 mov ecx, eax
// 0071c654  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c658  e8c341ffff           call 0x710820
// 0071c65d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0071c663  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0071c669  3bc7                 cmp eax, edi
// 0071c66b  7506                 jne 0x71c673
// 0071c66d  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0071c673  51                   push ecx
// 0071c674  8bcc                 mov ecx, esp
// 0071c676  89642418             mov dword ptr [esp + 0x18], esp
// 0071c67a  68ec0c7e00           push 0x7e0cec
// 0071c67f  898648010000         mov dword ptr [esi + 0x148], eax
// 0071c685  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c68b  51                   push ecx
// 0071c68c  8bcc                 mov ecx, esp
// 0071c68e  89642418             mov dword ptr [esp + 0x18], esp
// 0071c692  68040d7e00           push 0x7e0d04
// 0071c697  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0071c69f  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c6a5  c644242805           mov byte ptr [esp + 0x28], 5
// 0071c6aa  e87148ffff           call 0x710f20
// 0071c6af  8bc8                 mov ecx, eax
// 0071c6b1  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c6b5  e86641ffff           call 0x710820
// 0071c6ba  898630010000         mov dword ptr [esi + 0x130], eax
// 0071c6c0  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0071c6c6  3bc7                 cmp eax, edi
// 0071c6c8  7506                 jne 0x71c6d0
// 0071c6ca  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0071c6d0  51                   push ecx
// 0071c6d1  8bcc                 mov ecx, esp
// 0071c6d3  89642418             mov dword ptr [esp + 0x18], esp
// 0071c6d7  6878567d00           push 0x7d5678
// 0071c6dc  898660010000         mov dword ptr [esi + 0x160], eax
// 0071c6e2  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0071c6ec  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c6f2  51                   push ecx
// 0071c6f3  8bcc                 mov ecx, esp
// 0071c6f5  89642418             mov dword ptr [esp + 0x18], esp
// 0071c6f9  6870567d00           push 0x7d5670
// 0071c6fe  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 0071c706  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c70c  c644242807           mov byte ptr [esp + 0x28], 7
// 0071c711  e80a48ffff           call 0x710f20
// 0071c716  8bc8                 mov ecx, eax
// 0071c718  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c71c  e8ff40ffff           call 0x710820
// 0071c721  8d6e04               lea ebp, [esi + 4]
// 0071c724  50                   push eax
// 0071c725  8bcd                 mov ecx, ebp
// 0071c727  e894c7f4ff           call 0x668ec0
// 0071c72c  55                   push ebp
// 0071c72d  8d4e24               lea ecx, [esi + 0x24]
// 0071c730  e8dbbdf4ff           call 0x668510
// 0071c735  51                   push ecx
// 0071c736  8bcc                 mov ecx, esp
// 0071c738  89642418             mov dword ptr [esp + 0x18], esp
// 0071c73c  68886a7d00           push 0x7d6a88
// 0071c741  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c747  51                   push ecx
// 0071c748  8bcc                 mov ecx, esp
// 0071c74a  89642418             mov dword ptr [esp + 0x18], esp
// 0071c74e  6850797800           push 0x787950
// 0071c753  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0071c75b  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c761  c644242809           mov byte ptr [esp + 0x28], 9
// 0071c766  e8b547ffff           call 0x710f20
// 0071c76b  8bc8                 mov ecx, eax
// 0071c76d  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c771  e8aa40ffff           call 0x710820
// 0071c776  51                   push ecx
// 0071c777  8bcc                 mov ecx, esp
// 0071c779  89642418             mov dword ptr [esp + 0x18], esp
// 0071c77d  68a4697d00           push 0x7d69a4
// 0071c782  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0071c788  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c78e  51                   push ecx
// 0071c78f  8bcc                 mov ecx, esp
// 0071c791  89642418             mov dword ptr [esp + 0x18], esp
// 0071c795  6850797800           push 0x787950
// 0071c79a  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 0071c7a2  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c7a8  c64424280b           mov byte ptr [esp + 0x28], 0xb
// 0071c7ad  e86e47ffff           call 0x710f20
// 0071c7b2  8bc8                 mov ecx, eax
// 0071c7b4  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c7b8  e86340ffff           call 0x710820
// 0071c7bd  51                   push ecx
// 0071c7be  8bcc                 mov ecx, esp
// 0071c7c0  89642418             mov dword ptr [esp + 0x18], esp
// 0071c7c4  68fc697d00           push 0x7d69fc
// 0071c7c9  894678               mov dword ptr [esi + 0x78], eax
// 0071c7cc  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c7d2  51                   push ecx
// 0071c7d3  8bcc                 mov ecx, esp
// 0071c7d5  89642418             mov dword ptr [esp + 0x18], esp
// 0071c7d9  6850797800           push 0x787950
// 0071c7de  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 0071c7e6  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c7ec  c64424280d           mov byte ptr [esp + 0x28], 0xd
// 0071c7f1  e82a47ffff           call 0x710f20
// 0071c7f6  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c7fa  8bc8                 mov ecx, eax
// 0071c7fc  e81f40ffff           call 0x710820
// 0071c801  51                   push ecx
// 0071c802  8bcc                 mov ecx, esp
// 0071c804  89642418             mov dword ptr [esp + 0x18], esp
// 0071c808  68e46a7d00           push 0x7d6ae4
// 0071c80d  898684000000         mov dword ptr [esi + 0x84], eax
// 0071c813  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c819  51                   push ecx
// 0071c81a  8bcc                 mov ecx, esp
// 0071c81c  89642418             mov dword ptr [esp + 0x18], esp
// 0071c820  6850797800           push 0x787950
// 0071c825  c744242c0e000000     mov dword ptr [esp + 0x2c], 0xe
// 0071c82d  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c833  c64424280f           mov byte ptr [esp + 0x28], 0xf
// 0071c838  e8e346ffff           call 0x710f20
// 0071c83d  8bc8                 mov ecx, eax
// 0071c83f  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c843  e8d83fffff           call 0x710820
// 0071c848  51                   push ecx
// 0071c849  8bcc                 mov ecx, esp
// 0071c84b  89642418             mov dword ptr [esp + 0x18], esp
// 0071c84f  6860567d00           push 0x7d5660
// 0071c854  89860c020000         mov dword ptr [esi + 0x20c], eax
// 0071c85a  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c860  51                   push ecx
// 0071c861  8bcc                 mov ecx, esp
// 0071c863  89642418             mov dword ptr [esp + 0x18], esp
// 0071c867  6870567d00           push 0x7d5670
// 0071c86c  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 0071c874  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c87a  c644242811           mov byte ptr [esp + 0x28], 0x11
// 0071c87f  e89c46ffff           call 0x710f20
// 0071c884  8bc8                 mov ecx, eax
// 0071c886  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c88a  e8913fffff           call 0x710820
// 0071c88f  51                   push ecx
// 0071c890  8bcc                 mov ecx, esp
// 0071c892  89642418             mov dword ptr [esp + 0x18], esp
// 0071c896  6860567d00           push 0x7d5660
// 0071c89b  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0071c8a1  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c8a7  51                   push ecx
// 0071c8a8  8bcc                 mov ecx, esp
// 0071c8aa  89642418             mov dword ptr [esp + 0x18], esp
// 0071c8ae  6870567d00           push 0x7d5670
// 0071c8b3  c744242c12000000     mov dword ptr [esp + 0x2c], 0x12
// 0071c8bb  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c8c1  c644242813           mov byte ptr [esp + 0x28], 0x13
// 0071c8c6  e85546ffff           call 0x710f20
// 0071c8cb  8bc8                 mov ecx, eax
// 0071c8cd  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c8d1  e84a3fffff           call 0x710820
// 0071c8d6  51                   push ecx
// 0071c8d7  8bcc                 mov ecx, esp
// 0071c8d9  89642418             mov dword ptr [esp + 0x18], esp
// 0071c8dd  6850567d00           push 0x7d5650
// 0071c8e2  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0071c8e8  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c8ee  51                   push ecx
// 0071c8ef  8bcc                 mov ecx, esp
// 0071c8f1  89642418             mov dword ptr [esp + 0x18], esp
// 0071c8f5  6870567d00           push 0x7d5670
// 0071c8fa  c744242c14000000     mov dword ptr [esp + 0x2c], 0x14
// 0071c902  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0071c908  c644242815           mov byte ptr [esp + 0x28], 0x15
// 0071c90d  e80e46ffff           call 0x710f20
// 0071c912  8bc8                 mov ecx, eax
// 0071c914  897c2428             mov dword ptr [esp + 0x28], edi
// 0071c918  e8033fffff           call 0x710820
// 0071c91d  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0071c923  e9e9000000           jmp 0x71ca11
// 0071c928  e843c6f4ff           call 0x668f70
// 0071c92d  6a21                 push 0x21
// 0071c92f  8bc8                 mov ecx, eax
// 0071c931  e83abef4ff           call 0x668770
// 0071c936  898690000000         mov dword ptr [esi + 0x90], eax
// 0071c93c  e82fc6f4ff           call 0x668f70
// 0071c941  6a12                 push 0x12
// 0071c943  8bc8                 mov ecx, eax
// 0071c945  e826bef4ff           call 0x668770
// 0071c94a  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0071c950  c746483b619c00       mov dword ptr [esi + 0x48], 0x9c613b
// 0071c957  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0071c95a  83f8ff               cmp eax, -1
// 0071c95d  7503                 jne 0x71c962
// 0071c95f  8b4648               mov eax, dword ptr [esi + 0x48]
// 0071c962  898654010000         mov dword ptr [esi + 0x154], eax
// 0071c968  b800359a00           mov eax, 0x9a3500
// 0071c96d  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0071c973  898648010000         mov dword ptr [esi + 0x148], eax
// 0071c979  b875a6f100           mov eax, 0xf1a675
// 0071c97e  68ffc06f00           push 0x6fc0ff
// 0071c983  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0071c989  898630010000         mov dword ptr [esi + 0x130], eax
// 0071c98f  898660010000         mov dword ptr [esi + 0x160], eax
// 0071c995  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 0071c99f  e81cc5f4ff           call 0x668ec0
// 0071c9a4  6800008000           push 0x800000
// 0071c9a9  8d8e00010000         lea ecx, [esi + 0x100]
// 0071c9af  e80cc5f4ff           call 0x668ec0
// 0071c9b4  d9059c7e7900         fld dword ptr [0x797e9c]
// 0071c9ba  51                   push ecx
// 0071c9bb  d91c24               fstp dword ptr [esp]
// 0071c9be  68fcfdfe00           push 0xfefdfc
// 0071c9c3  68c4dafa00           push 0xfadac4
// 0071c9c8  8d4e04               lea ecx, [esi + 4]
// 0071c9cb  e820bbf4ff           call 0x6684f0
// 0071c9d0  d9059c7e7900         fld dword ptr [0x797e9c]
// 0071c9d6  51                   push ecx
// 0071c9d7  d91c24               fstp dword ptr [esp]
// 0071c9da  68c4dafa00           push 0xfadac4
// 0071c9df  689ebef500           push 0xf5be9e
// 0071c9e4  8d4e24               lea ecx, [esi + 0x24]
// 0071c9e7  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 0071c9f1  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 0071c9f8  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 0071ca02  e8e9baf4ff           call 0x6684f0
// 0071ca07  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 0071ca11  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 0071ca1b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071ca1f  64890d00000000       mov dword ptr fs:[0], ecx
// 0071ca26  59                   pop ecx
// 0071ca27  5f                   pop edi
// 0071ca28  5e                   pop esi
// 0071ca29  5d                   pop ebp
// 0071ca2a  83c414               add esp, 0x14
// 0071ca2d  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2007@CXTPTabPaintManager@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp