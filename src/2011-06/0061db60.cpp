// roc 2011-06 0061db60  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061db60
//
// 0061db60  83ec08               sub esp, 8
// 0061db63  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061db67  53                   push ebx
// 0061db68  56                   push esi
// 0061db69  57                   push edi
// 0061db6a  8bf1                 mov esi, ecx
// 0061db6c  50                   push eax
// 0061db6d  8d4c2410             lea ecx, [esp + 0x10]
// 0061db71  51                   push ecx
// 0061db72  8bce                 mov ecx, esi
// 0061db74  e847c4ffff           call 0x619fc0
// 0061db79  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061db7d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061db81  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061db89  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061db8d  52                   push edx
// 0061db8e  8d44241c             lea eax, [esp + 0x1c]
// 0061db92  50                   push eax
// 0061db93  57                   push edi
// 0061db94  53                   push ebx
// 0061db95  e856d4ffff           call 0x61aff0
// 0061db9a  83c410               add esp, 0x10
// 0061db9d  57                   push edi
// 0061db9e  53                   push ebx
// 0061db9f  8d4c2414             lea ecx, [esp + 0x14]
// 0061dba3  51                   push ecx
// 0061dba4  8bce                 mov ecx, esi
// 0061dba6  e875fcffff           call 0x61d820
// 0061dbab  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061dbaf  5f                   pop edi
// 0061dbb0  5e                   pop esi
// 0061dbb1  5b                   pop ebx
// 0061dbb2  83c408               add esp, 8
// 0061dbb5  c20400               ret 4
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEIABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;