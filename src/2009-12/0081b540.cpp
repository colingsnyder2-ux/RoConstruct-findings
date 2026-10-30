// roc 2009-12 0081b540  unit: CInstanceRecord::CNameItem  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b540
//
// 0081b540  6aff                 push -1
// 0081b542  6848ab9500           push 0x95ab48
// 0081b547  64a100000000         mov eax, dword ptr fs:[0]
// 0081b54d  50                   push eax
// 0081b54e  83ec60               sub esp, 0x60
// 0081b551  53                   push ebx
// 0081b552  55                   push ebp
// 0081b553  56                   push esi
// 0081b554  57                   push edi
// 0081b555  a10052b600           mov eax, dword ptr [0xb65200]
// 0081b55a  33c4                 xor eax, esp
// 0081b55c  50                   push eax
// 0081b55d  8d442474             lea eax, [esp + 0x74]
// 0081b561  64a300000000         mov dword ptr fs:[0], eax
// 0081b567  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081b56b  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 0081b572  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0081b575  33c0                 xor eax, eax
// 0081b577  8944245c             mov dword ptr [esp + 0x5c], eax
// 0081b57b  89442470             mov dword ptr [esp + 0x70], eax
// 0081b57f  8944244c             mov dword ptr [esp + 0x4c], eax
// 0081b583  89442450             mov dword ptr [esp + 0x50], eax
// 0081b587  89442454             mov dword ptr [esp + 0x54], eax
// 0081b58b  89442458             mov dword ptr [esp + 0x58], eax
// 0081b58f  89442460             mov dword ptr [esp + 0x60], eax
// 0081b593  89442464             mov dword ptr [esp + 0x64], eax
// 0081b597  89442468             mov dword ptr [esp + 0x68], eax
// 0081b59b  8944246c             mov dword ptr [esp + 0x6c], eax
// 0081b59f  8d44244c             lea eax, [esp + 0x4c]
// 0081b5a3  50                   push eax
// 0081b5a4  894c2460             mov dword ptr [esp + 0x60], ecx
// 0081b5a8  6ac6                 push -0x3a
// 0081b5aa  8bcf                 mov ecx, edi
// 0081b5ac  89742478             mov dword ptr [esp + 0x78], esi
// 0081b5b0  e8bb7c0000           call 0x823270
// 0081b5b5  83f801               cmp eax, 1
// 0081b5b8  0f84c1000000         je 0x81b67f
// 0081b5be  837e7865             cmp dword ptr [esi + 0x78], 0x65
// 0081b5c2  0f85b7000000         jne 0x81b67f
// 0081b5c8  8b6e68               mov ebp, dword ptr [esi + 0x68]
// 0081b5cb  8b8f2c020000         mov ecx, dword ptr [edi + 0x22c]
// 0081b5d1  8b5e5c               mov ebx, dword ptr [esi + 0x5c]
// 0081b5d4  8b4660               mov eax, dword ptr [esi + 0x60]
// 0081b5d7  8b5664               mov edx, dword ptr [esi + 0x64]
// 0081b5da  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0081b5de  8b6e6c               mov ebp, dword ptr [esi + 0x6c]
// 0081b5e1  896c2440             mov dword ptr [esp + 0x40], ebp
// 0081b5e5  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 0081b5e8  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0081b5ef  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0081b5f2  896c2444             mov dword ptr [esp + 0x44], ebp
// 0081b5f6  8b6e74               mov ebp, dword ptr [esi + 0x74]
// 0081b5f9  c7442428ec479f00     mov dword ptr [esp + 0x28], 0x9f47ec
// 0081b601  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0081b605  895c2430             mov dword ptr [esp + 0x30], ebx
// 0081b609  89442434             mov dword ptr [esp + 0x34], eax
// 0081b60d  89542438             mov dword ptr [esp + 0x38], edx
// 0081b611  896c2448             mov dword ptr [esp + 0x48], ebp
// 0081b615  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0081b61d  85c0                 test eax, eax
// 0081b61f  750c                 jne 0x81b62d
// 0081b621  85c9                 test ecx, ecx
// 0081b623  7508                 jne 0x81b62d
// 0081b625  85d2                 test edx, edx
// 0081b627  7504                 jne 0x81b62d
// 0081b629  85db                 test ebx, ebx
// 0081b62b  7452                 je 0x81b67f
// 0081b62d  56                   push esi
// 0081b62e  8d4c241c             lea ecx, [esp + 0x1c]
// 0081b632  e839fc0200           call 0x84b270
// 0081b637  8d542418             lea edx, [esp + 0x18]
// 0081b63b  52                   push edx
// 0081b63c  8bcf                 mov ecx, edi
// 0081b63e  e89591fdff           call 0x7f47d8
// 0081b643  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081b647  8b542434             mov edx, dword ptr [esp + 0x34]
// 0081b64b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081b64f  894c2448             mov dword ptr [esp + 0x48], ecx
// 0081b653  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081b657  52                   push edx
// 0081b658  89442448             mov dword ptr [esp + 0x48], eax
// 0081b65c  e84ffeffff           call 0x81b4b0
// 0081b661  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0081b664  e817260300           call 0x84dc80
// 0081b669  85c0                 test eax, eax
// 0081b66b  7e12                 jle 0x81b67f
// 0081b66d  51                   push ecx
// 0081b66e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0081b675  8d44242c             lea eax, [esp + 0x2c]
// 0081b679  50                   push eax
// 0081b67a  e8216a0800           call 0x8a20a0
// 0081b67f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0081b683  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b68a  59                   pop ecx
// 0081b68b  5f                   pop edi
// 0081b68c  5e                   pop esi
// 0081b68d  5d                   pop ebp
// 0081b68e  5b                   pop ebx
// 0081b68f  83c46c               add esp, 0x6c
// 0081b692  c20400               ret 4
// copied from an identical function in another client (function ?OnInplaceButtonDown@CXTPReportRecordItem@@UAEXPAVCXTPReportInplaceButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp