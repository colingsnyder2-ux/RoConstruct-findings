// roc 2009-12 008f5d28  unit: CXTIconHandle  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5d28
//
// 008f5d28  8bff                 mov edi, edi
// 008f5d2a  56                   push esi
// 008f5d2b  8bf1                 mov esi, ecx
// 008f5d2d  57                   push edi
// 008f5d2e  8d7e10               lea edi, [esi + 0x10]
// 008f5d31  8bcf                 mov ecx, edi
// 008f5d33  e898ceb0ff           call 0x402bd0
// 008f5d38  832600               and dword ptr [esi], 0
// 008f5d3b  8bcf                 mov ecx, edi
// 008f5d3d  c7460400004000       mov dword ptr [esi + 4], 0x400000
// 008f5d44  c74608fc45ae00       mov dword ptr [esi + 8], 0xae45fc
// 008f5d4b  c7460c0046ae00       mov dword ptr [esi + 0xc], 0xae4600
// 008f5d52  e899ceb0ff           call 0x402bf0
// 008f5d57  85c0                 test eax, eax
// 008f5d59  7d09                 jge 0x8f5d64
// 008f5d5b  c60500b4b70001       mov byte ptr [0xb7b400], 1
// 008f5d62  eb06                 jmp 0x8f5d6a
// 008f5d64  c70628000000         mov dword ptr [esi], 0x28
// 008f5d6a  5f                   pop edi
// 008f5d6b  8bc6                 mov eax, esi
// 008f5d6d  5e                   pop esi
// 008f5d6e  c3                   ret 
// copied from an identical function in another client (function ??0CAtlComModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlcommodule.obj