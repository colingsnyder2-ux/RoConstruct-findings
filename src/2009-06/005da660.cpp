// roc 2009-06 005da660  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da660
//
// 005da660  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da664  56                   push esi
// 005da665  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005da669  57                   push edi
// 005da66a  8b3d44e48900         mov edi, dword ptr [0x89e444]
// 005da670  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 005da674  741e                 je 0x5da694
// 005da676  8d4108               lea eax, [ecx + 8]
// 005da679  56                   push esi
// 005da67a  50                   push eax
// 005da67b  ffd7                 call edi
// 005da67d  83c408               add esp, 8
// 005da680  84c0                 test al, al
// 005da682  750c                 jne 0x5da690
// 005da684  8b442414             mov eax, dword ptr [esp + 0x14]
// 005da688  8b08                 mov ecx, dword ptr [eax]
// 005da68a  894c2414             mov dword ptr [esp + 0x14], ecx
// 005da68e  ebe0                 jmp 0x5da670
// 005da690  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005da694  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005da698  8b542410             mov edx, dword ptr [esp + 0x10]
// 005da69c  5f                   pop edi
// 005da69d  8910                 mov dword ptr [eax], edx
// 005da69f  894804               mov dword ptr [eax + 4], ecx
// 005da6a2  5e                   pop esi
// 005da6a3  c3                   ret 
// copied from an identical function in another client (function ??$_Find@V?$_Iterator@$0A@@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@std@@YA?AV?$_Iterator@$0A@@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@0@V120@0ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z)

// from server: 100% by colin
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