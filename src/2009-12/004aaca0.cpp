// roc 2009-12 004aaca0  unit: Ogre::RbxSceneUpdater::?1??debugCheckFrame::NodeVisiter  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004aaca0
//
// 004aaca0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aaca4  83ec0c               sub esp, 0xc
// 004aaca7  85c9                 test ecx, ecx
// 004aaca9  7715                 ja 0x4aacc0
// 004aacab  33c9                 xor ecx, ecx
// 004aacad  8d1489               lea edx, [ecx + ecx*4]
// 004aacb0  c1e204               shl edx, 4
// 004aacb3  52                   push edx
// 004aacb4  e8a78b3400           call 0x7f3860
// 004aacb9  83c404               add esp, 4
// 004aacbc  83c40c               add esp, 0xc
// 004aacbf  c3                   ret 
// 004aacc0  83c8ff               or eax, 0xffffffff
// 004aacc3  33d2                 xor edx, edx
// 004aacc5  f7f1                 div ecx
// 004aacc7  83f850               cmp eax, 0x50
// 004aacca  73e1                 jae 0x4aacad
// 004aaccc  8d442410             lea eax, [esp + 0x10]
// 004aacd0  50                   push eax
// 004aacd1  8d4c2404             lea ecx, [esp + 4]
// 004aacd5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004aacdd  ff1548b79800         call dword ptr [0x98b748]
// 004aace3  6838efa800           push 0xa8ef38
// 004aace8  8d4c2404             lea ecx, [esp + 4]
// 004aacec  51                   push ecx
// 004aaced  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 004aacf5  e87e9b3400           call 0x7f4878
// standard library set<pod64> (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tset_traits@UE@@U?$less@UE@@@std@@V?$allocator@UE@@@3@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tset_traits@UE@@U?$less@UE@@@std@@V?$allocator@UE@@@3@$0A@@std@@@0@IPAU120@@Z)

// stl: set<pod64>
struct E { int v[16]; };
#include <set>
bool operator<(const E&, const E&);
template class std::set<E>;
