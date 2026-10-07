// roc 2011-06 008a1790  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a1790
//
// 008a1790  8b442404             mov eax, dword ptr [esp + 4]
// 008a1794  56                   push esi
// 008a1795  8bf1                 mov esi, ecx
// 008a1797  57                   push edi
// 008a1798  8d4e18               lea ecx, [esi + 0x18]
// 008a179b  33ff                 xor edi, edi
// 008a179d  51                   push ecx
// 008a179e  c7060027ad00         mov dword ptr [esi], 0xad2700
// 008a17a4  894604               mov dword ptr [esi + 4], eax
// 008a17a7  897e14               mov dword ptr [esi + 0x14], edi
// 008a17aa  ff15ac19a400         call dword ptr [0xa419ac]
// 008a17b0  897e28               mov dword ptr [esi + 0x28], edi
// 008a17b3  897e2c               mov dword ptr [esi + 0x2c], edi
// 008a17b6  897e08               mov dword ptr [esi + 8], edi
// 008a17b9  5f                   pop edi
// 008a17ba  8bc6                 mov eax, esi
// 008a17bc  5e                   pop esi
// 008a17bd  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDockContext.cpp (function ??0CXTPDockContext@@QAE@PAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockContext.cpp
