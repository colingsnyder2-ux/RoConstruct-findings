// roc 2010-06 008a9c10  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9c10
//
// 008a9c10  8bff                 mov edi, edi
// 008a9c12  55                   push ebp
// 008a9c13  8bec                 mov ebp, esp
// 008a9c15  8b4904               mov ecx, dword ptr [ecx + 4]
// 008a9c18  8b01                 mov eax, dword ptr [ecx]
// 008a9c1a  5d                   pop ebp
// 008a9c1b  ff6004               jmp dword ptr [eax + 4]
// copied from an identical function in another client (function ?Free@CAtlStringMgr@ATL@@UAEXPAUCStringData@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj