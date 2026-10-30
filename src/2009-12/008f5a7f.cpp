// roc 2009-12 008f5a7f  unit: CXTIconHandle  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5a7f
//
// 008f5a7f  8bff                 mov edi, edi
// 008f5a81  55                   push ebp
// 008f5a82  8bec                 mov ebp, esp
// 008f5a84  8bc1                 mov eax, ecx
// 008f5a86  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008f5a89  894804               mov dword ptr [eax + 4], ecx
// 008f5a8c  c700ecfca000         mov dword ptr [eax], 0xa0fcec
// 008f5a92  33c9                 xor ecx, ecx
// 008f5a94  c7401402000000       mov dword ptr [eax + 0x14], 2
// 008f5a9b  89480c               mov dword ptr [eax + 0xc], ecx
// 008f5a9e  894810               mov dword ptr [eax + 0x10], ecx
// 008f5aa1  66894818             mov word ptr [eax + 0x18], cx
// 008f5aa5  6689481a             mov word ptr [eax + 0x1a], cx
// 008f5aa9  894008               mov dword ptr [eax + 8], eax
// 008f5aac  5d                   pop ebp
// 008f5aad  c20400               ret 4
// copied from an identical function in another client (function ??0CAtlStringMgr@ATL@@QAE@PAUIAtlMemMgr@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj