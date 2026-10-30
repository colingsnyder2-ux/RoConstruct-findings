// roc 2011-06 007a96d0  unit: RBX::ParallelRampPoly  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a96d0
//
// 007a96d0  8b01                 mov eax, dword ptr [ecx]
// 007a96d2  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007a96d6  7406                 je 0x7a96de
// 007a96d8  8b4008               mov eax, dword ptr [eax + 8]
// 007a96db  8901                 mov dword ptr [ecx], eax
// 007a96dd  c3                   ret 
// 007a96de  8b10                 mov edx, dword ptr [eax]
// 007a96e0  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 007a96e4  7518                 jne 0x7a96fe
// 007a96e6  8b4208               mov eax, dword ptr [edx + 8]
// 007a96e9  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007a96ed  750c                 jne 0x7a96fb
// 007a96ef  90                   nop 
// 007a96f0  8bd0                 mov edx, eax
// 007a96f2  8b4208               mov eax, dword ptr [edx + 8]
// 007a96f5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007a96f9  74f5                 je 0x7a96f0
// 007a96fb  8911                 mov dword ptr [ecx], edx
// 007a96fd  c3                   ret 
// 007a96fe  8b4004               mov eax, dword ptr [eax + 4]
// 007a9701  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007a9705  7511                 jne 0x7a9718
// 007a9707  8b11                 mov edx, dword ptr [ecx]
// 007a9709  3b10                 cmp edx, dword ptr [eax]
// 007a970b  750b                 jne 0x7a9718
// 007a970d  8901                 mov dword ptr [ecx], eax
// 007a970f  8b4004               mov eax, dword ptr [eax + 4]
// 007a9712  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007a9716  74ef                 je 0x7a9707
// 007a9718  8b11                 mov edx, dword ptr [ecx]
// 007a971a  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 007a971e  7502                 jne 0x7a9722
// 007a9720  8901                 mov dword ptr [ecx], eax
// 007a9722  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;