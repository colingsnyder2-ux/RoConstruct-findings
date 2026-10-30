// roc 2010-06 008a9c1e  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9c1e
//
// 008a9c1e  33d2                 xor edx, edx
// 008a9c20  8d4114               lea eax, [ecx + 0x14]
// 008a9c23  42                   inc edx
// 008a9c24  f00fc110             lock xadd dword ptr [eax], edx
// 008a9c28  8d4108               lea eax, [ecx + 8]
// 008a9c2b  c3                   ret 
// copied from an identical function in another client (function ?GetNilString@CAtlStringMgr@ATL@@UAEPAUCStringData@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj