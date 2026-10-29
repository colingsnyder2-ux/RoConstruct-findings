// roc 2011-06 00903848  unit: CXTIconHandle  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903848
//
// 00903848  33d2                 xor edx, edx
// 0090384a  8d4114               lea eax, [ecx + 0x14]
// 0090384d  42                   inc edx
// 0090384e  f00fc110             lock xadd dword ptr [eax], edx
// 00903852  8d4108               lea eax, [ecx + 8]
// 00903855  c3                   ret 
// copied from an identical function in another client (function ?GetNilString@CAtlStringMgr@ATL@@UAEPAUCStringData@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj