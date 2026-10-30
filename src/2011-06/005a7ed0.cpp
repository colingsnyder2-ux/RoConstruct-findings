// roc 2011-06 005a7ed0  unit: RBX::VFriendService::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7ed0
//
// 005a7ed0  51                   push ecx
// 005a7ed1  8b5104               mov edx, dword ptr [ecx + 4]
// 005a7ed4  8b4204               mov eax, dword ptr [edx + 4]
// 005a7ed7  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005a7edb  57                   push edi
// 005a7edc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a7ee0  7518                 jne 0x5a7efa
// 005a7ee2  56                   push esi
// 005a7ee3  8b37                 mov esi, dword ptr [edi]
// 005a7ee5  39700c               cmp dword ptr [eax + 0xc], esi
// 005a7ee8  7d05                 jge 0x5a7eef
// 005a7eea  8b4008               mov eax, dword ptr [eax + 8]
// 005a7eed  eb04                 jmp 0x5a7ef3
// 005a7eef  8bd0                 mov edx, eax
// 005a7ef1  8b00                 mov eax, dword ptr [eax]
// 005a7ef3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005a7ef7  74ec                 je 0x5a7ee5
// 005a7ef9  5e                   pop esi
// 005a7efa  8b4104               mov eax, dword ptr [ecx + 4]
// 005a7efd  89542410             mov dword ptr [esp + 0x10], edx
// 005a7f01  3bd0                 cmp edx, eax
// 005a7f03  7418                 je 0x5a7f1d
// 005a7f05  8b0f                 mov ecx, dword ptr [edi]
// 005a7f07  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 005a7f0a  7c11                 jl 0x5a7f1d
// 005a7f0c  8d442410             lea eax, [esp + 0x10]
// 005a7f10  8b10                 mov edx, dword ptr [eax]
// 005a7f12  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a7f16  8910                 mov dword ptr [eax], edx
// 005a7f18  5f                   pop edi
// 005a7f19  59                   pop ecx
// 005a7f1a  c20800               ret 8
// 005a7f1d  89442404             mov dword ptr [esp + 4], eax
// 005a7f21  8d442404             lea eax, [esp + 4]
// 005a7f25  8b10                 mov edx, dword ptr [eax]
// 005a7f27  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a7f2b  8910                 mov dword ptr [eax], edx
// 005a7f2d  5f                   pop edi
// 005a7f2e  59                   pop ecx
// 005a7f2f  c20800               ret 8
// copied from an identical function in another client (function ?find@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;