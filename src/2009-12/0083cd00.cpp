// roc 2009-12 0083cd00  unit: CXTPControlPopupColor  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083cd00
//
// 0083cd00  6aff                 push -1
// 0083cd02  6840c89500           push 0x95c840
// 0083cd07  64a100000000         mov eax, dword ptr fs:[0]
// 0083cd0d  50                   push eax
// 0083cd0e  83ec6c               sub esp, 0x6c
// 0083cd11  55                   push ebp
// 0083cd12  56                   push esi
// 0083cd13  57                   push edi
// 0083cd14  a10052b600           mov eax, dword ptr [0xb65200]
// 0083cd19  33c4                 xor eax, esp
// 0083cd1b  50                   push eax
// 0083cd1c  8d44247c             lea eax, [esp + 0x7c]
// 0083cd20  64a300000000         mov dword ptr fs:[0], eax
// 0083cd26  8be9                 mov ebp, ecx
// 0083cd28  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083cd2f  e80cc4fcff           call 0x809140
// 0083cd34  8bf0                 mov esi, eax
// 0083cd36  8bce                 mov ecx, esi
// 0083cd38  e863dbfcff           call 0x80a8a0
// 0083cd3d  85c0                 test eax, eax
// 0083cd3f  0f85bd010000         jne 0x83cf02
// 0083cd45  56                   push esi
// 0083cd46  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 0083cd4d  8bce                 mov ecx, esi
// 0083cd4f  e86c0efdff           call 0x80dbc0
// 0083cd54  8bce                 mov ecx, esi
// 0083cd56  e895c3fcff           call 0x8090f0
// 0083cd5b  8bce                 mov ecx, esi
// 0083cd5d  85c0                 test eax, eax
// 0083cd5f  0f8539010000         jne 0x83ce9e
// 0083cd65  8d442428             lea eax, [esp + 0x28]
// 0083cd69  50                   push eax
// 0083cd6a  e80129cfff           call 0x52f670
// 0083cd6f  50                   push eax
// 0083cd70  ff15ecc99800         call dword ptr [0x98c9ec]
// 0083cd76  85c0                 test eax, eax
// 0083cd78  0f8484010000         je 0x83cf02
// 0083cd7e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083cd82  51                   push ecx
// 0083cd83  e8dc75fbff           call 0x7f4364
// 0083cd88  50                   push eax
// 0083cd89  6a00                 push 0
// 0083cd8b  8d4c2458             lea ecx, [esp + 0x58]
// 0083cd8f  e8ecea0000           call 0x84b880
// 0083cd94  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083cd98  52                   push edx
// 0083cd99  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0083cda4  e8bb75fbff           call 0x7f4364
// 0083cda9  50                   push eax
// 0083cdaa  6a00                 push 0
// 0083cdac  8d4c2444             lea ecx, [esp + 0x44]
// 0083cdb0  e8cbea0000           call 0x84b880
// 0083cdb5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083cdb9  33c0                 xor eax, eax
// 0083cdbb  89442464             mov dword ptr [esp + 0x64], eax
// 0083cdbf  89442468             mov dword ptr [esp + 0x68], eax
// 0083cdc3  8944246c             mov dword ptr [esp + 0x6c], eax
// 0083cdc7  89442470             mov dword ptr [esp + 0x70], eax
// 0083cdcb  89442474             mov dword ptr [esp + 0x74], eax
// 0083cdcf  89442478             mov dword ptr [esp + 0x78], eax
// 0083cdd3  8d442464             lea eax, [esp + 0x64]
// 0083cdd7  50                   push eax
// 0083cdd8  6a18                 push 0x18
// 0083cdda  51                   push ecx
// 0083cddb  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0083cde3  ff155cb19800         call dword ptr [0x98b15c]
// 0083cde9  db44246c             fild dword ptr [esp + 0x6c]
// 0083cded  dc3530159b00         fdiv qword ptr [0x9b1530]
// 0083cdf3  e8f87efbff           call 0x7f4cf0
// 0083cdf8  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0083cdfc  8bca                 mov ecx, edx
// 0083cdfe  2bc8                 sub ecx, eax
// 0083ce00  8b442468             mov eax, dword ptr [esp + 0x68]
// 0083ce04  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0083ce08  8b8d84010000         mov ecx, dword ptr [ebp + 0x184]
// 0083ce0e  89542424             mov dword ptr [esp + 0x24], edx
// 0083ce12  51                   push ecx
// 0083ce13  8d54241c             lea edx, [esp + 0x1c]
// 0083ce17  52                   push edx
// 0083ce18  8d4c2458             lea ecx, [esp + 0x58]
// 0083ce1c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0083ce24  89442428             mov dword ptr [esp + 0x28], eax
// 0083ce28  e8d177fbff           call 0x7f45fe
// 0083ce2d  6a01                 push 1
// 0083ce2f  8d44241c             lea eax, [esp + 0x1c]
// 0083ce33  50                   push eax
// 0083ce34  8d4c2444             lea ecx, [esp + 0x44]
// 0083ce38  e8c177fbff           call 0x7f45fe
// 0083ce3d  8d4c243c             lea ecx, [esp + 0x3c]
// 0083ce41  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0083ce49  e842eb0000           call 0x84b990
// 0083ce4e  8d4c2450             lea ecx, [esp + 0x50]
// 0083ce52  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 0083ce5d  e82eeb0000           call 0x84b990
// 0083ce62  8d4c2428             lea ecx, [esp + 0x28]
// 0083ce66  51                   push ecx
// 0083ce67  ff1584ca9800         call dword ptr [0x98ca84]
// 0083ce6d  50                   push eax
// 0083ce6e  8bce                 mov ecx, esi
// 0083ce70  e8ebfefcff           call 0x80cd60
// 0083ce75  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083ce79  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 0083ce7f  52                   push edx
// 0083ce80  ffd6                 call esi
// 0083ce82  8b442438             mov eax, dword ptr [esp + 0x38]
// 0083ce86  50                   push eax
// 0083ce87  ffd6                 call esi
// 0083ce89  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0083ce8d  64890d00000000       mov dword ptr fs:[0], ecx
// 0083ce94  59                   pop ecx
// 0083ce95  5f                   pop edi
// 0083ce96  5e                   pop esi
// 0083ce97  5d                   pop ebp
// 0083ce98  83c478               add esp, 0x78
// 0083ce9b  c20800               ret 8
// 0083ce9e  e89d01fdff           call 0x80d040
// 0083cea3  85c0                 test eax, eax
// 0083cea5  745b                 je 0x83cf02
// 0083cea7  8bce                 mov ecx, esi
// 0083cea9  e89201fdff           call 0x80d040
// 0083ceae  8d4c2410             lea ecx, [esp + 0x10]
// 0083ceb2  51                   push ecx
// 0083ceb3  8bce                 mov ecx, esi
// 0083ceb5  8bf8                 mov edi, eax
// 0083ceb7  e854c2fcff           call 0x809110
// 0083cebc  0fb6b584010000       movzx esi, byte ptr [ebp + 0x184]
// 0083cec3  0fb69585010000       movzx edx, byte ptr [ebp + 0x185]
// 0083ceca  0fb68586010000       movzx eax, byte ptr [ebp + 0x186]
// 0083ced1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083ced5  81ce00ffffff         or esi, 0xffffff00
// 0083cedb  c1e608               shl esi, 8
// 0083cede  0bf2                 or esi, edx
// 0083cee0  c1e608               shl esi, 8
// 0083cee3  0bf0                 or esi, eax
// 0083cee5  b867666666           mov eax, 0x66666667
// 0083ceea  f7e9                 imul ecx
// 0083ceec  d1fa                 sar edx, 1
// 0083ceee  8bca                 mov ecx, edx
// 0083cef0  c1e91f               shr ecx, 0x1f
// 0083cef3  03ca                 add ecx, edx
// 0083cef5  0faf4c2410           imul ecx, dword ptr [esp + 0x10]
// 0083cefa  85c9                 test ecx, ecx
// 0083cefc  7e04                 jle 0x83cf02
// 0083cefe  8bc6                 mov eax, esi
// 0083cf00  f3ab                 rep stosd dword ptr es:[edi], eax
// 0083cf02  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0083cf06  64890d00000000       mov dword ptr fs:[0], ecx
// 0083cf0d  59                   pop ecx
// 0083cf0e  5f                   pop edi
// 0083cf0f  5e                   pop esi
// 0083cf10  5d                   pop ebp
// 0083cf11  83c478               add esp, 0x78
// 0083cf14  c20800               ret 8
// copied from an identical function in another client (function ?RedrawIcon@CXTPControlPopupColor@@AAEXPAVCXTPImageManagerIcon@@AAVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopupColor.cpp