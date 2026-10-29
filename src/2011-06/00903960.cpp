// roc 2011-06 00903960  unit: CXTIconHandle  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903960
//
// 00903960  8bff                 mov edi, edi
// 00903962  56                   push esi
// 00903963  8bf1                 mov esi, ecx
// 00903965  8b06                 mov eax, dword ptr [esi]
// 00903967  85c0                 test eax, eax
// 00903969  740a                 je 0x903975
// 0090396b  50                   push eax
// 0090396c  e8d776f0ff           call 0x80b048
// 00903971  832600               and dword ptr [esi], 0
// 00903974  59                   pop ecx
// 00903975  83660400             and dword ptr [esi + 4], 0
// 00903979  83660800             and dword ptr [esi + 8], 0
// 0090397d  5e                   pop esi
// 0090397e  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@?$CSimpleArray@UCModuleInfo@CTraceSnapshot@@V?$CSimpleArrayEqualHelper@UCModuleInfo@CTraceSnapshot@@@ATL@@@ATL@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/Externs.obj