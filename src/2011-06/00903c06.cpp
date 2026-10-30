// roc 2011-06 00903c06  unit: CXTIconHandle  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903c06
//
// 00903c06  8bff                 mov edi, edi
// 00903c08  55                   push ebp
// 00903c09  8bec                 mov ebp, esp
// 00903c0b  8b4508               mov eax, dword ptr [ebp + 8]
// 00903c0e  85c0                 test eax, eax
// 00903c10  7507                 jne 0x903c19
// 00903c12  b857000780           mov eax, 0x80070057
// 00903c17  eb11                 jmp 0x903c2a
// 00903c19  83382c               cmp dword ptr [eax], 0x2c
// 00903c1c  75f4                 jne 0x903c12
// 00903c1e  83601c00             and dword ptr [eax + 0x1c], 0
// 00903c22  8d4804               lea ecx, [eax + 4]
// 00903c25  e8e6f9afff           call 0x403610
// 00903c2a  5d                   pop ebp
// 00903c2b  c20400               ret 4
// copied from an identical function in another client (function ?AtlWinModuleInit@ATL@@YGJPAU_ATL_WIN_MODULE70@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlwinmodule.obj