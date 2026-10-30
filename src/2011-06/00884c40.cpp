// roc 2011-06 00884c40  unit: CXTPControlGallery  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00884c40
//
// 00884c40  83ec20               sub esp, 0x20
// 00884c43  57                   push edi
// 00884c44  8bf9                 mov edi, ecx
// 00884c46  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00884c4c  83f8ff               cmp eax, -1
// 00884c4f  750f                 jne 0x884c60
// 00884c51  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00884c57  85c9                 test ecx, ecx
// 00884c59  7405                 je 0x884c60
// 00884c5b  e80080f8ff           call 0x80cc60
// 00884c60  85c0                 test eax, eax
// 00884c62  750a                 jne 0x884c6e
// 00884c64  83c8ff               or eax, 0xffffffff
// 00884c67  5f                   pop edi
// 00884c68  83c420               add esp, 0x20
// 00884c6b  c20c00               ret 0xc
// 00884c6e  8bcf                 mov ecx, edi
// 00884c70  e8ebc9ffff           call 0x881660
// 00884c75  85c0                 test eax, eax
// 00884c77  75eb                 jne 0x884c64
// 00884c79  53                   push ebx
// 00884c7a  55                   push ebp
// 00884c7b  56                   push esi
// 00884c7c  8d442420             lea eax, [esp + 0x20]
// 00884c80  50                   push eax
// 00884c81  8bcf                 mov ecx, edi
// 00884c83  e858daffff           call 0x8826e0
// 00884c88  33ed                 xor ebp, ebp
// 00884c8a  39af54020000         cmp dword ptr [edi + 0x254], ebp
// 00884c90  7e6f                 jle 0x884d01
// 00884c92  33db                 xor ebx, ebx
// 00884c94  85db                 test ebx, ebx
// 00884c96  0f8caa000000         jl 0x884d46
// 00884c9c  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 00884ca2  0f8d9e000000         jge 0x884d46
// 00884ca8  8bb750020000         mov esi, dword ptr [edi + 0x250]
// 00884cae  03f3                 add esi, ebx
// 00884cb0  56                   push esi
// 00884cb1  8d4c2414             lea ecx, [esp + 0x14]
// 00884cb5  51                   push ecx
// 00884cb6  ff15681ca400         call dword ptr [0xa41c68]
// 00884cbc  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 00884cc2  f7da                 neg edx
// 00884cc4  52                   push edx
// 00884cc5  6a00                 push 0
// 00884cc7  8d442418             lea eax, [esp + 0x18]
// 00884ccb  50                   push eax
// 00884ccc  ff15601ca400         call dword ptr [0xa41c60]
// 00884cd2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00884cd6  394c2414             cmp dword ptr [esp + 0x14], ecx
// 00884cda  7d25                 jge 0x884d01
// 00884cdc  8b542438             mov edx, dword ptr [esp + 0x38]
// 00884ce0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00884ce4  52                   push edx
// 00884ce5  50                   push eax
// 00884ce6  8d4c2418             lea ecx, [esp + 0x18]
// 00884cea  51                   push ecx
// 00884ceb  ff15101ca400         call dword ptr [0xa41c10]
// 00884cf1  85c0                 test eax, eax
// 00884cf3  7519                 jne 0x884d0e
// 00884cf5  45                   inc ebp
// 00884cf6  83c318               add ebx, 0x18
// 00884cf9  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 00884cff  7c93                 jl 0x884c94
// 00884d01  5e                   pop esi
// 00884d02  5d                   pop ebp
// 00884d03  5b                   pop ebx
// 00884d04  83c8ff               or eax, 0xffffffff
// 00884d07  5f                   pop edi
// 00884d08  83c420               add esp, 0x20
// 00884d0b  c20c00               ret 0xc
// 00884d0e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00884d12  85c0                 test eax, eax
// 00884d14  741b                 je 0x884d31
// 00884d16  8b542410             mov edx, dword ptr [esp + 0x10]
// 00884d1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00884d1e  8910                 mov dword ptr [eax], edx
// 00884d20  8b542418             mov edx, dword ptr [esp + 0x18]
// 00884d24  894804               mov dword ptr [eax + 4], ecx
// 00884d27  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00884d2b  895008               mov dword ptr [eax + 8], edx
// 00884d2e  89480c               mov dword ptr [eax + 0xc], ecx
// 00884d31  8b5610               mov edx, dword ptr [esi + 0x10]
// 00884d34  837a4800             cmp dword ptr [edx + 0x48], 0
// 00884d38  75c7                 jne 0x884d01
// 00884d3a  5e                   pop esi
// 00884d3b  8bc5                 mov eax, ebp
// 00884d3d  5d                   pop ebp
// 00884d3e  5b                   pop ebx
// 00884d3f  5f                   pop edi
// 00884d40  83c420               add esp, 0x20
// 00884d43  c20c00               ret 0xc
// 00884d46  e8bf55f8ff           call 0x80a30a
// copied from an identical function in another client (function ?HitTestItem@CXTPControlGallery@@QBEHVCPoint@@PAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp