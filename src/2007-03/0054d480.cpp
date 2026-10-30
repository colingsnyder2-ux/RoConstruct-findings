// roc 2007-03 0054d480  unit: seg_00540000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d480
//
// 0054d480  83ec10               sub esp, 0x10
// 0054d483  53                   push ebx
// 0054d484  55                   push ebp
// 0054d485  56                   push esi
// 0054d486  57                   push edi
// 0054d487  8bf9                 mov edi, ecx
// 0054d489  8b07                 mov eax, dword ptr [edi]
// 0054d48b  f6402401             test byte ptr [eax + 0x24], 1
// 0054d48f  7512                 jne 0x54d4a3
// 0054d491  83482401             or dword ptr [eax + 0x24], 1
// 0054d495  8b07                 mov eax, dword ptr [edi]
// 0054d497  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d49a  83c014               add eax, 0x14
// 0054d49d  894808               mov dword ptr [eax + 8], ecx
// 0054d4a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0054d4a3  8b07                 mov eax, dword ptr [edi]
// 0054d4a5  8b7024               mov esi, dword ptr [eax + 0x24]
// 0054d4a8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054d4ac  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0054d4b0  c1ee02               shr esi, 2
// 0054d4b3  f7d6                 not esi
// 0054d4b5  83e601               and esi, 1
// 0054d4b8  894c2410             mov dword ptr [esp + 0x10], ecx
// 0054d4bc  03ca                 add ecx, edx
// 0054d4be  8d6820               lea ebp, [eax + 0x20]
// 0054d4c1  83ce04               or esi, 4
// 0054d4c4  83c01c               add eax, 0x1c
// 0054d4c7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0054d4cb  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0054d4cf  89442414             mov dword ptr [esp + 0x14], eax
// 0054d4d3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054d4d7  8b00                 mov eax, dword ptr [eax]
// 0054d4d9  8b4d00               mov ecx, dword ptr [ebp]
// 0054d4dc  83fe04               cmp esi, 4
// 0054d4df  0f94c3               sete bl
// 0054d4e2  3bc1                 cmp eax, ecx
// 0054d4e4  7504                 jne 0x54d4ea
// 0054d4e6  84db                 test bl, bl
// 0054d4e8  7470                 je 0x54d55a
// 0054d4ea  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054d4ee  8b2f                 mov ebp, dword ptr [edi]
// 0054d4f0  52                   push edx
// 0054d4f1  89442430             mov dword ptr [esp + 0x30], eax
// 0054d4f5  8d442414             lea eax, [esp + 0x14]
// 0054d4f9  50                   push eax
// 0054d4fa  51                   push ecx
// 0054d4fb  8d4c2438             lea ecx, [esp + 0x38]
// 0054d4ff  51                   push ecx
// 0054d500  8bcd                 mov ecx, ebp
// 0054d502  e879a20700           call 0x5c7780
// 0054d507  84db                 test bl, bl
// 0054d509  a13ca67b00           mov eax, dword ptr [0x7ba63c]
// 0054d50e  7505                 jne 0x54d515
// 0054d510  a140a67b00           mov eax, dword ptr [0x7ba640]
// 0054d515  50                   push eax
// 0054d516  8bcd                 mov ecx, ebp
// 0054d518  e8f3a20700           call 0x5c7810
// 0054d51d  6a01                 push 1
// 0054d51f  8d542414             lea edx, [esp + 0x14]
// 0054d523  8bd8                 mov ebx, eax
// 0054d525  52                   push edx
// 0054d526  8d442434             lea eax, [esp + 0x34]
// 0054d52a  50                   push eax
// 0054d52b  8bcd                 mov ecx, ebp
// 0054d52d  e87ea20700           call 0x5c77b0
// 0054d532  53                   push ebx
// 0054d533  e898a10700           call 0x5c76d0
// 0054d538  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0054d53c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054d540  83c404               add esp, 4
// 0054d543  3b1d24a67b00         cmp ebx, dword ptr [0x7ba624]
// 0054d549  890a                 mov dword ptr [edx], ecx
// 0054d54b  0f94c0               sete al
// 0054d54e  84c0                 test al, al
// 0054d550  0f8586000000         jne 0x54d5dc
// 0054d556  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054d55a  83fe06               cmp esi, 6
// 0054d55d  750f                 jne 0x54d56e
// 0054d55f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054d563  8b08                 mov ecx, dword ptr [eax]
// 0054d565  3b4d00               cmp ecx, dword ptr [ebp]
// 0054d568  0f8485000000         je 0x54d5f3
// 0054d56e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054d572  3b542418             cmp edx, dword ptr [esp + 0x18]
// 0054d576  747b                 je 0x54d5f3
// 0054d578  83fe05               cmp esi, 5
// 0054d57b  0f8552ffffff         jne 0x54d4d3
// 0054d581  8b07                 mov eax, dword ptr [edi]
// 0054d583  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054d586  8b4014               mov eax, dword ptr [eax + 0x14]
// 0054d589  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054d58d  51                   push ecx
// 0054d58e  50                   push eax
// 0054d58f  8bce                 mov ecx, esi
// 0054d591  ff155ce77700         call dword ptr [0x77e75c]
// 0054d597  85c0                 test eax, eax
// 0054d599  7404                 je 0x54d59f
// 0054d59b  8bd0                 mov edx, eax
// 0054d59d  eb07                 jmp 0x54d5a6
// 0054d59f  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0054d5a2  f6da                 neg dl
// 0054d5a4  1bd2                 sbb edx, edx
// 0054d5a6  83faff               cmp edx, -1
// 0054d5a9  8b07                 mov eax, dword ptr [edi]
// 0054d5ab  750d                 jne 0x54d5ba
// 0054d5ad  be04000000           mov esi, 4
// 0054d5b2  097024               or dword ptr [eax + 0x24], esi
// 0054d5b5  e919ffffff           jmp 0x54d4d3
// 0054d5ba  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054d5bd  83c014               add eax, 0x14
// 0054d5c0  894808               mov dword ptr [eax + 8], ecx
// 0054d5c3  03ca                 add ecx, edx
// 0054d5c5  89480c               mov dword ptr [eax + 0xc], ecx
// 0054d5c8  8b07                 mov eax, dword ptr [edi]
// 0054d5ca  33c9                 xor ecx, ecx
// 0054d5cc  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0054d5cf  0f95c1               setne cl
// 0054d5d2  83c105               add ecx, 5
// 0054d5d5  8bf1                 mov esi, ecx
// 0054d5d7  e9f7feffff           jmp 0x54d4d3
// 0054d5dc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054d5e0  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054d5e4  7515                 jne 0x54d5fb
// 0054d5e6  5f                   pop edi
// 0054d5e7  5e                   pop esi
// 0054d5e8  5d                   pop ebp
// 0054d5e9  83c8ff               or eax, 0xffffffff
// 0054d5ec  5b                   pop ebx
// 0054d5ed  83c410               add esp, 0x10
// 0054d5f0  c20c00               ret 0xc
// 0054d5f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054d5f7  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054d5fb  5f                   pop edi
// 0054d5fc  5e                   pop esi
// 0054d5fd  5d                   pop ebp
// 0054d5fe  5b                   pop ebx
// 0054d5ff  83c410               add esp, 0x10
// 0054d602  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$symmetric_filter@V?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp