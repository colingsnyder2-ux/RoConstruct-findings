// roc 2009-06 0081ad9f  unit: CXTIconHandle  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ad9f
//
// 0081ad9f  8bff                 mov edi, edi
// 0081ada1  55                   push ebp
// 0081ada2  8bec                 mov ebp, esp
// 0081ada4  8bc1                 mov eax, ecx
// 0081ada6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0081ada9  894804               mov dword ptr [eax + 4], ecx
// 0081adac  c7007cf89000         mov dword ptr [eax], 0x90f87c
// 0081adb2  33c9                 xor ecx, ecx
// 0081adb4  c7401402000000       mov dword ptr [eax + 0x14], 2
// 0081adbb  89480c               mov dword ptr [eax + 0xc], ecx
// 0081adbe  894810               mov dword ptr [eax + 0x10], ecx
// 0081adc1  66894818             mov word ptr [eax + 0x18], cx
// 0081adc5  6689481a             mov word ptr [eax + 0x1a], cx
// 0081adc9  894008               mov dword ptr [eax + 8], eax
// 0081adcc  5d                   pop ebp
// 0081adcd  c20400               ret 4
// copied from an identical function in another client (function ??0CAtlStringMgr@ATL@@QAE@PAUIAtlMemMgr@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj