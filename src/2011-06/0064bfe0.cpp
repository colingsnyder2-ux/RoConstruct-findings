// roc 2011-06 0064bfe0  unit: RBX::GameBasicSettings  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064bfe0
//
// 0064bfe0  51                   push ecx
// 0064bfe1  8b5104               mov edx, dword ptr [ecx + 4]
// 0064bfe4  8b4204               mov eax, dword ptr [edx + 4]
// 0064bfe7  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064bfeb  57                   push edi
// 0064bfec  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064bff0  7518                 jne 0x64c00a
// 0064bff2  56                   push esi
// 0064bff3  8b37                 mov esi, dword ptr [edi]
// 0064bff5  39700c               cmp dword ptr [eax + 0xc], esi
// 0064bff8  7d05                 jge 0x64bfff
// 0064bffa  8b4008               mov eax, dword ptr [eax + 8]
// 0064bffd  eb04                 jmp 0x64c003
// 0064bfff  8bd0                 mov edx, eax
// 0064c001  8b00                 mov eax, dword ptr [eax]
// 0064c003  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064c007  74ec                 je 0x64bff5
// 0064c009  5e                   pop esi
// 0064c00a  8b4104               mov eax, dword ptr [ecx + 4]
// 0064c00d  89542410             mov dword ptr [esp + 0x10], edx
// 0064c011  3bd0                 cmp edx, eax
// 0064c013  7418                 je 0x64c02d
// 0064c015  8b0f                 mov ecx, dword ptr [edi]
// 0064c017  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0064c01a  7c11                 jl 0x64c02d
// 0064c01c  8d442410             lea eax, [esp + 0x10]
// 0064c020  8b10                 mov edx, dword ptr [eax]
// 0064c022  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064c026  8910                 mov dword ptr [eax], edx
// 0064c028  5f                   pop edi
// 0064c029  59                   pop ecx
// 0064c02a  c20800               ret 8
// 0064c02d  89442404             mov dword ptr [esp + 4], eax
// 0064c031  8d442404             lea eax, [esp + 4]
// 0064c035  8b10                 mov edx, dword ptr [eax]
// 0064c037  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064c03b  8910                 mov dword ptr [eax], edx
// 0064c03d  5f                   pop edi
// 0064c03e  59                   pop ecx
// 0064c03f  c20800               ret 8
// copied from an identical function in another client (function ?find@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x2d (isnil = 0xd + sizeof(pair)).
struct Value { int words[7]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;