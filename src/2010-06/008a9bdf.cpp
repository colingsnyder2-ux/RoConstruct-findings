// roc 2010-06 008a9bdf  unit: CXTIconHandle  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9bdf
//
// 008a9bdf  8bff                 mov edi, edi
// 008a9be1  55                   push ebp
// 008a9be2  8bec                 mov ebp, esp
// 008a9be4  8bc1                 mov eax, ecx
// 008a9be6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008a9be9  894804               mov dword ptr [eax + 4], ecx
// 008a9bec  c700e43fa700         mov dword ptr [eax], 0xa73fe4
// 008a9bf2  33c9                 xor ecx, ecx
// 008a9bf4  c7401402000000       mov dword ptr [eax + 0x14], 2
// 008a9bfb  89480c               mov dword ptr [eax + 0xc], ecx
// 008a9bfe  894810               mov dword ptr [eax + 0x10], ecx
// 008a9c01  66894818             mov word ptr [eax + 0x18], cx
// 008a9c05  6689481a             mov word ptr [eax + 0x1a], cx
// 008a9c09  894008               mov dword ptr [eax + 8], eax
// 008a9c0c  5d                   pop ebp
// 008a9c0d  c20400               ret 4
// copied from an identical function in another client (function ??0CAtlStringMgr@ATL@@QAE@PAUIAtlMemMgr@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj