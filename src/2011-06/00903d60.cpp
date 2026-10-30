// roc 2011-06 00903d60  unit: CXTIconHandle  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903d60
//
// 00903d60  8bff                 mov edi, edi
// 00903d62  56                   push esi
// 00903d63  8bf1                 mov esi, ecx
// 00903d65  57                   push edi
// 00903d66  8d7e10               lea edi, [esi + 0x10]
// 00903d69  8bcf                 mov ecx, edi
// 00903d6b  e880f8afff           call 0x4035f0
// 00903d70  832600               and dword ptr [esi], 0
// 00903d73  8bcf                 mov ecx, edi
// 00903d75  c7460400004000       mov dword ptr [esi + 4], 0x400000
// 00903d7c  c74608188ebe00       mov dword ptr [esi + 8], 0xbe8e18
// 00903d83  c7460c208ebe00       mov dword ptr [esi + 0xc], 0xbe8e20
// 00903d8a  e881f8afff           call 0x403610
// 00903d8f  85c0                 test eax, eax
// 00903d91  7d09                 jge 0x903d9c
// 00903d93  c6054039cb0001       mov byte ptr [0xcb3940], 1
// 00903d9a  eb06                 jmp 0x903da2
// 00903d9c  c70628000000         mov dword ptr [esi], 0x28
// 00903da2  5f                   pop edi
// 00903da3  8bc6                 mov eax, esi
// 00903da5  5e                   pop esi
// 00903da6  c3                   ret 
// copied from an identical function in another client (function ??0CAtlComModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlcommodule.obj