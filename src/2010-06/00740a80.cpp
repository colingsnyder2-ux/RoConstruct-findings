// roc 2010-06 00740a80  unit: seg_00740000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00740a80
//
// 00740a80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00740a84  56                   push esi
// 00740a85  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00740a89  57                   push edi
// 00740a8a  8b3d8ca49e00         mov edi, dword ptr [0x9ea48c]
// 00740a90  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00740a94  741e                 je 0x740ab4
// 00740a96  8d4108               lea eax, [ecx + 8]
// 00740a99  56                   push esi
// 00740a9a  50                   push eax
// 00740a9b  ffd7                 call edi
// 00740a9d  83c408               add esp, 8
// 00740aa0  84c0                 test al, al
// 00740aa2  750c                 jne 0x740ab0
// 00740aa4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00740aa8  8b08                 mov ecx, dword ptr [eax]
// 00740aaa  894c2414             mov dword ptr [esp + 0x14], ecx
// 00740aae  ebe0                 jmp 0x740a90
// 00740ab0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00740ab4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00740ab8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00740abc  5f                   pop edi
// 00740abd  8910                 mov dword ptr [eax], edx
// 00740abf  894804               mov dword ptr [eax + 4], ecx
// 00740ac2  5e                   pop esi
// 00740ac3  c3                   ret 
// copied from an identical function in another client (function ??$_Find@V?$_Iterator@$0A@@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@std@@YA?AV?$_Iterator@$0A@@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@0@V120@0ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc 2008-06 0040f7c0: std::find over std::list<std::string> (checked iterators, imported string operator==)
#include <string>
#include <list>
#include <algorithm>

typedef std::list<std::string> List;

List::iterator __cdecl find(List::iterator first, List::iterator last, const std::string& value)
{
    return std::find(first, last, value);
}