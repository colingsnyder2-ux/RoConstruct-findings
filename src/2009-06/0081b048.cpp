// roc 2009-06 0081b048  unit: CXTIconHandle  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081b048
//
// 0081b048  8bff                 mov edi, edi
// 0081b04a  56                   push esi
// 0081b04b  8bf1                 mov esi, ecx
// 0081b04d  57                   push edi
// 0081b04e  8d7e10               lea edi, [esi + 0x10]
// 0081b051  8bcf                 mov ecx, edi
// 0081b053  e8a87ebeff           call 0x402f00
// 0081b058  832600               and dword ptr [esi], 0
// 0081b05b  8bcf                 mov ecx, edi
// 0081b05d  c7460400004000       mov dword ptr [esi + 4], 0x400000
// 0081b064  c746085c129c00       mov dword ptr [esi + 8], 0x9c125c
// 0081b06b  c7460c60129c00       mov dword ptr [esi + 0xc], 0x9c1260
// 0081b072  e8a97ebeff           call 0x402f20
// 0081b077  85c0                 test eax, eax
// 0081b079  7d09                 jge 0x81b084
// 0081b07b  c60550b1a30001       mov byte ptr [0xa3b150], 1
// 0081b082  eb06                 jmp 0x81b08a
// 0081b084  c70628000000         mov dword ptr [esi], 0x28
// 0081b08a  5f                   pop edi
// 0081b08b  8bc6                 mov eax, esi
// 0081b08d  5e                   pop esi
// 0081b08e  c3                   ret 
// copied from an identical function in another client (function ??0CAtlComModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlcommodule.obj