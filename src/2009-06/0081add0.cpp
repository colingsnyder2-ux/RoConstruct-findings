// roc 2009-06 0081add0  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081add0
//
// 0081add0  8bff                 mov edi, edi
// 0081add2  55                   push ebp
// 0081add3  8bec                 mov ebp, esp
// 0081add5  8b4904               mov ecx, dword ptr [ecx + 4]
// 0081add8  8b01                 mov eax, dword ptr [ecx]
// 0081adda  5d                   pop ebp
// 0081addb  ff6004               jmp dword ptr [eax + 4]
// copied from an identical function in another client (function ?Free@CAtlStringMgr@ATL@@UAEXPAUCStringData@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj