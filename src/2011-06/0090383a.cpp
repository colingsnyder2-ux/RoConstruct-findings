// roc 2011-06 0090383a  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0090383a
//
// 0090383a  8bff                 mov edi, edi
// 0090383c  55                   push ebp
// 0090383d  8bec                 mov ebp, esp
// 0090383f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00903842  8b01                 mov eax, dword ptr [ecx]
// 00903844  5d                   pop ebp
// 00903845  ff6004               jmp dword ptr [eax + 4]
// copied from an identical function in another client (function ?Free@CAtlStringMgr@ATL@@UAEXPAUCStringData@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj