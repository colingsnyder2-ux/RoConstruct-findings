// roc 2009-06 0081adde  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081adde
//
// 0081adde  33d2                 xor edx, edx
// 0081ade0  8d4114               lea eax, [ecx + 0x14]
// 0081ade3  42                   inc edx
// 0081ade4  f00fc110             lock xadd dword ptr [eax], edx
// 0081ade8  8d4108               lea eax, [ecx + 8]
// 0081adeb  c3                   ret 
// copied from an identical function in another client (function ?GetNilString@CAtlStringMgr@ATL@@UAEPAUCStringData@2@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj