// roc 2011-06 00903cda  unit: CXTIconHandle  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903cda
//
// 00903cda  8bff                 mov edi, edi
// 00903cdc  56                   push esi
// 00903cdd  8bf1                 mov esi, ecx
// 00903cdf  e876ffffff           call 0x903c5a
// 00903ce4  56                   push esi
// 00903ce5  c7062c000000         mov dword ptr [esi], 0x2c
// 00903ceb  e816ffffff           call 0x903c06
// 00903cf0  85c0                 test eax, eax
// 00903cf2  7d0a                 jge 0x903cfe
// 00903cf4  c6054039cb0001       mov byte ptr [0xcb3940], 1
// 00903cfb  832600               and dword ptr [esi], 0
// 00903cfe  8bc6                 mov eax, esi
// 00903d00  5e                   pop esi
// 00903d01  c3                   ret 
// copied from an identical function in another client (function ??0CAtlWinModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlwinmodule.obj