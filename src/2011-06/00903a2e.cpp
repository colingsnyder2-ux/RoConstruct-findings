// roc 2011-06 00903a2e  unit: CXTIconHandle  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903a2e
//
// 00903a2e  8bff                 mov edi, edi
// 00903a30  56                   push esi
// 00903a31  8bf1                 mov esi, ecx
// 00903a33  e873ffffff           call 0x9039ab
// 00903a38  b800004000           mov eax, 0x400000
// 00903a3d  8d4e14               lea ecx, [esi + 0x14]
// 00903a40  c70638000000         mov dword ptr [esi], 0x38
// 00903a46  894608               mov dword ptr [esi + 8], eax
// 00903a49  894604               mov dword ptr [esi + 4], eax
// 00903a4c  c7460c00090000       mov dword ptr [esi + 0xc], 0x900
// 00903a53  c746106404ae00       mov dword ptr [esi + 0x10], 0xae0464
// 00903a5a  e8b1fbafff           call 0x403610
// 00903a5f  85c0                 test eax, eax
// 00903a61  7d07                 jge 0x903a6a
// 00903a63  c6054039cb0001       mov byte ptr [0xcb3940], 1
// 00903a6a  8bc6                 mov eax, esi
// 00903a6c  5e                   pop esi
// 00903a6d  c3                   ret 
// copied from an identical function in another client (function ??0CAtlBaseModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj