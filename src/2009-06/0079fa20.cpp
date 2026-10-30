// roc 2009-06 0079fa20  unit: CXTPControlGallery  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079fa20
//
// 0079fa20  83ec20               sub esp, 0x20
// 0079fa23  57                   push edi
// 0079fa24  8bf9                 mov edi, ecx
// 0079fa26  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0079fa2c  83f8ff               cmp eax, -1
// 0079fa2f  750f                 jne 0x79fa40
// 0079fa31  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0079fa37  85c9                 test ecx, ecx
// 0079fa39  7405                 je 0x79fa40
// 0079fa3b  e86004f8ff           call 0x71fea0
// 0079fa40  85c0                 test eax, eax
// 0079fa42  750a                 jne 0x79fa4e
// 0079fa44  83c8ff               or eax, 0xffffffff
// 0079fa47  5f                   pop edi
// 0079fa48  83c420               add esp, 0x20
// 0079fa4b  c20c00               ret 0xc
// 0079fa4e  8bcf                 mov ecx, edi
// 0079fa50  e8ebc9ffff           call 0x79c440
// 0079fa55  85c0                 test eax, eax
// 0079fa57  75eb                 jne 0x79fa44
// 0079fa59  53                   push ebx
// 0079fa5a  55                   push ebp
// 0079fa5b  56                   push esi
// 0079fa5c  8d442420             lea eax, [esp + 0x20]
// 0079fa60  50                   push eax
// 0079fa61  8bcf                 mov ecx, edi
// 0079fa63  e858daffff           call 0x79d4c0
// 0079fa68  33ed                 xor ebp, ebp
// 0079fa6a  39af54020000         cmp dword ptr [edi + 0x254], ebp
// 0079fa70  7e6f                 jle 0x79fae1
// 0079fa72  33db                 xor ebx, ebx
// 0079fa74  85db                 test ebx, ebx
// 0079fa76  0f8caa000000         jl 0x79fb26
// 0079fa7c  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 0079fa82  0f8d9e000000         jge 0x79fb26
// 0079fa88  8bb750020000         mov esi, dword ptr [edi + 0x250]
// 0079fa8e  03f3                 add esi, ebx
// 0079fa90  56                   push esi
// 0079fa91  8d4c2414             lea ecx, [esp + 0x14]
// 0079fa95  51                   push ecx
// 0079fa96  ff1500ee8900         call dword ptr [0x89ee00]
// 0079fa9c  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 0079faa2  f7da                 neg edx
// 0079faa4  52                   push edx
// 0079faa5  6a00                 push 0
// 0079faa7  8d442418             lea eax, [esp + 0x18]
// 0079faab  50                   push eax
// 0079faac  ff15f8ed8900         call dword ptr [0x89edf8]
// 0079fab2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079fab6  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0079faba  7d25                 jge 0x79fae1
// 0079fabc  8b542438             mov edx, dword ptr [esp + 0x38]
// 0079fac0  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079fac4  52                   push edx
// 0079fac5  50                   push eax
// 0079fac6  8d4c2418             lea ecx, [esp + 0x18]
// 0079faca  51                   push ecx
// 0079facb  ff15c0ed8900         call dword ptr [0x89edc0]
// 0079fad1  85c0                 test eax, eax
// 0079fad3  7519                 jne 0x79faee
// 0079fad5  45                   inc ebp
// 0079fad6  83c318               add ebx, 0x18
// 0079fad9  3baf54020000         cmp ebp, dword ptr [edi + 0x254]
// 0079fadf  7c93                 jl 0x79fa74
// 0079fae1  5e                   pop esi
// 0079fae2  5d                   pop ebp
// 0079fae3  5b                   pop ebx
// 0079fae4  83c8ff               or eax, 0xffffffff
// 0079fae7  5f                   pop edi
// 0079fae8  83c420               add esp, 0x20
// 0079faeb  c20c00               ret 0xc
// 0079faee  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0079faf2  85c0                 test eax, eax
// 0079faf4  741b                 je 0x79fb11
// 0079faf6  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079fafa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079fafe  8910                 mov dword ptr [eax], edx
// 0079fb00  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079fb04  894804               mov dword ptr [eax + 4], ecx
// 0079fb07  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079fb0b  895008               mov dword ptr [eax + 8], edx
// 0079fb0e  89480c               mov dword ptr [eax + 0xc], ecx
// 0079fb11  8b5610               mov edx, dword ptr [esi + 0x10]
// 0079fb14  837a4800             cmp dword ptr [edx + 0x48], 0
// 0079fb18  75c7                 jne 0x79fae1
// 0079fb1a  5e                   pop esi
// 0079fb1b  8bc5                 mov eax, ebp
// 0079fb1d  5d                   pop ebp
// 0079fb1e  5b                   pop ebx
// 0079fb1f  5f                   pop edi
// 0079fb20  83c420               add esp, 0x20
// 0079fb23  c20c00               ret 0xc
// 0079fb26  e8b991f7ff           call 0x718ce4
// copied from an identical function in another client (function ?HitTestItem@CXTPControlGallery@@QBEHVCPoint@@PAUtagRECT@@@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp