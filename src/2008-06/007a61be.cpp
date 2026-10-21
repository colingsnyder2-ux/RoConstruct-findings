// roc 2008-06 007a61be  unit: CXTIconHandle  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a61be
//
// 007a61be  8bff                 mov edi, edi
// 007a61c0  56                   push esi
// 007a61c1  ff35acf29700         push dword ptr [0x97f2ac]
// 007a61c7  8bf1                 mov esi, ecx
// 007a61c9  56                   push esi
// 007a61ca  e863ffffff           call 0x7a6132
// 007a61cf  8d4e20               lea ecx, [esi + 0x20]
// 007a61d2  5e                   pop esi
// 007a61d3  e92cfaffff           jmp 0x7a5c04
// CRT atls.lib/f:\dd\vctools\vc7libs\ship\atlmfc\src\atl\atls\staticrelease\obj1r\i386\atlwinmodule.obj (function ??1CAtlWinModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: 
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlwinmodule.obj
