// roc 2009-12 008372b0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008372b0
//
// 008372b0  53                   push ebx
// 008372b1  55                   push ebp
// 008372b2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008372b6  57                   push edi
// 008372b7  33ff                 xor edi, edi
// 008372b9  397d0c               cmp dword ptr [ebp + 0xc], edi
// 008372bc  8bd9                 mov ebx, ecx
// 008372be  7e5a                 jle 0x83731a
// 008372c0  56                   push esi
// 008372c1  85ff                 test edi, edi
// 008372c3  7c5b                 jl 0x837320
// 008372c5  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 008372c8  7d56                 jge 0x837320
// 008372ca  8b4508               mov eax, dword ptr [ebp + 8]
// 008372cd  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008372d0  85f6                 test esi, esi
// 008372d2  743f                 je 0x837313
// 008372d4  8b0e                 mov ecx, dword ptr [esi]
// 008372d6  51                   push ecx
// 008372d7  8bcb                 mov ecx, ebx
// 008372d9  e882dafdff           call 0x814d60
// 008372de  894638               mov dword ptr [esi + 0x38], eax
// 008372e1  85c0                 test eax, eax
// 008372e3  742e                 je 0x837313
// 008372e5  837e0800             cmp dword ptr [esi + 8], 0
// 008372e9  740a                 je 0x8372f5
// 008372eb  50                   push eax
// 008372ec  8bcb                 mov ecx, ebx
// 008372ee  e83dcffdff           call 0x814230
// 008372f3  eb15                 jmp 0x83730a
// 008372f5  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 008372fb  8b10                 mov edx, dword ptr [eax]
// 008372fd  8b920c020000         mov edx, dword ptr [edx + 0x20c]
// 00837303  6a00                 push 0
// 00837305  51                   push ecx
// 00837306  8bc8                 mov ecx, eax
// 00837308  ffd2                 call edx
// 0083730a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0083730d  56                   push esi
// 0083730e  e88dddffff           call 0x8350a0
// 00837313  47                   inc edi
// 00837314  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 00837317  7ca8                 jl 0x8372c1
// 00837319  5e                   pop esi
// 0083731a  5f                   pop edi
// 0083731b  5d                   pop ebp
// 0083731c  5b                   pop ebx
// 0083731d  c20400               ret 4
// 00837320  e8e7c7fbff           call 0x7f3b0c
// copied from an identical function in another client (function ?SetDockState@CXTPCommandBars@@IAEXAAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp