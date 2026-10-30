// roc 2009-06 0075c540  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075c540
//
// 0075c540  53                   push ebx
// 0075c541  55                   push ebp
// 0075c542  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0075c546  57                   push edi
// 0075c547  33ff                 xor edi, edi
// 0075c549  397d0c               cmp dword ptr [ebp + 0xc], edi
// 0075c54c  8bd9                 mov ebx, ecx
// 0075c54e  7e5a                 jle 0x75c5aa
// 0075c550  56                   push esi
// 0075c551  85ff                 test edi, edi
// 0075c553  7c5b                 jl 0x75c5b0
// 0075c555  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0075c558  7d56                 jge 0x75c5b0
// 0075c55a  8b4508               mov eax, dword ptr [ebp + 8]
// 0075c55d  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0075c560  85f6                 test esi, esi
// 0075c562  743f                 je 0x75c5a3
// 0075c564  8b0e                 mov ecx, dword ptr [esi]
// 0075c566  51                   push ecx
// 0075c567  8bcb                 mov ecx, ebx
// 0075c569  e842dbfcff           call 0x72a0b0
// 0075c56e  894638               mov dword ptr [esi + 0x38], eax
// 0075c571  85c0                 test eax, eax
// 0075c573  742e                 je 0x75c5a3
// 0075c575  837e0800             cmp dword ptr [esi + 8], 0
// 0075c579  740a                 je 0x75c585
// 0075c57b  50                   push eax
// 0075c57c  8bcb                 mov ecx, ebx
// 0075c57e  e8bdcffcff           call 0x729540
// 0075c583  eb15                 jmp 0x75c59a
// 0075c585  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 0075c58b  8b10                 mov edx, dword ptr [eax]
// 0075c58d  8b920c020000         mov edx, dword ptr [edx + 0x20c]
// 0075c593  6a00                 push 0
// 0075c595  51                   push ecx
// 0075c596  8bc8                 mov ecx, eax
// 0075c598  ffd2                 call edx
// 0075c59a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0075c59d  56                   push esi
// 0075c59e  e8dddcffff           call 0x75a280
// 0075c5a3  47                   inc edi
// 0075c5a4  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0075c5a7  7ca8                 jl 0x75c551
// 0075c5a9  5e                   pop esi
// 0075c5aa  5f                   pop edi
// 0075c5ab  5d                   pop ebp
// 0075c5ac  5b                   pop ebx
// 0075c5ad  c20400               ret 4
// 0075c5b0  e82fc7fbff           call 0x718ce4
// copied from an identical function in another client (function ?SetDockState@CXTPCommandBars@@IAEXAAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp