// from server: 100% by auto
// roc 2011-06 00880490  unit: CXTPResourceManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880490
//
// 00880490  83c8ff               or eax, 0xffffffff
// 00880493  0bc8                 or ecx, eax
// 00880495  a3ec8ed100           mov dword ptr [0xd18eec], eax
// 0088049a  83ec08               sub esp, 8
// 0088049d  8d0424               lea eax, [esp]
// 008804a0  50                   push eax
// 008804a1  890df08ed100         mov dword ptr [0xd18ef0], ecx
// 008804a7  ff15c819a400         call dword ptr [0xa419c8]
// 008804ad  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008804b1  8b1424               mov edx, dword ptr [esp]
// 008804b4  51                   push ecx
// 008804b5  52                   push edx
// 008804b6  ff15bc1ba400         call dword ptr [0xa41bbc]
// 008804bc  83c408               add esp, 8
// 008804bf  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?RefreshCursor@CXTPMouseManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
