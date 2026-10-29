// roc 2011-06 00903809  unit: CXTIconHandle  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903809
//
// 00903809  8bff                 mov edi, edi
// 0090380b  55                   push ebp
// 0090380c  8bec                 mov ebp, esp
// 0090380e  8bc1                 mov eax, ecx
// 00903810  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00903813  894804               mov dword ptr [eax + 4], ecx
// 00903816  c7003c04ae00         mov dword ptr [eax], 0xae043c
// 0090381c  33c9                 xor ecx, ecx
// 0090381e  c7401402000000       mov dword ptr [eax + 0x14], 2
// 00903825  89480c               mov dword ptr [eax + 0xc], ecx
// 00903828  894810               mov dword ptr [eax + 0x10], ecx
// 0090382b  66894818             mov word ptr [eax + 0x18], cx
// 0090382f  6689481a             mov word ptr [eax + 0x1a], cx
// 00903833  894008               mov dword ptr [eax + 8], eax
// 00903836  5d                   pop ebp
// 00903837  c20400               ret 4
// copied from an identical function in another client (function ??0CAtlStringMgr@ATL@@QAE@PAUIAtlMemMgr@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj