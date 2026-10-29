// roc 2009-12 008f5ab0  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5ab0
//
// 008f5ab0  8bff                 mov edi, edi
// 008f5ab2  55                   push ebp
// 008f5ab3  8bec                 mov ebp, esp
// 008f5ab5  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f5ab8  8b01                 mov eax, dword ptr [ecx]
// 008f5aba  5d                   pop ebp
// 008f5abb  ff6004               jmp dword ptr [eax + 4]
// copied from an identical function in another client (function ?Free@CAtlStringMgr@ATL@@UAEXPAUCStringData@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj