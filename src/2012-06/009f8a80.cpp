// from server: 100% by auto
// roc 2012-06 009f8a80  unit: CXTPResourceManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8a80
//
// 009f8a80  83c8ff               or eax, 0xffffffff
// 009f8a83  0bc8                 or ecx, eax
// 009f8a85  a35ca0e500           mov dword ptr [0xe5a05c], eax
// 009f8a8a  83ec08               sub esp, 8
// 009f8a8d  8d0424               lea eax, [esp]
// 009f8a90  50                   push eax
// 009f8a91  890d60a0e500         mov dword ptr [0xe5a060], ecx
// 009f8a97  ff158c3ab200         call dword ptr [0xb23a8c]
// 009f8a9d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009f8aa1  8b1424               mov edx, dword ptr [esp]
// 009f8aa4  51                   push ecx
// 009f8aa5  52                   push edx
// 009f8aa6  ff157c3bb200         call dword ptr [0xb23b7c]
// 009f8aac  83c408               add esp, 8
// 009f8aaf  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?RefreshCursor@CXTPMouseManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
