// roc 2011-06 007c8600  unit: RBX::AdornBillboarder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c8600
//
// 007c8600  8b01                 mov eax, dword ptr [ecx]
// 007c8602  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8606  7542                 jne 0x7c864a
// 007c8608  8b5008               mov edx, dword ptr [eax + 8]
// 007c860b  807a5900             cmp byte ptr [edx + 0x59], 0
// 007c860f  751c                 jne 0x7c862d
// 007c8611  8b02                 mov eax, dword ptr [edx]
// 007c8613  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8617  7511                 jne 0x7c862a
// 007c8619  8da42400000000       lea esp, [esp]
// 007c8620  8bd0                 mov edx, eax
// 007c8622  8b02                 mov eax, dword ptr [edx]
// 007c8624  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8628  74f6                 je 0x7c8620
// 007c862a  8911                 mov dword ptr [ecx], edx
// 007c862c  c3                   ret 
// 007c862d  8b4004               mov eax, dword ptr [eax + 4]
// 007c8630  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8634  7512                 jne 0x7c8648
// 007c8636  8b11                 mov edx, dword ptr [ecx]
// 007c8638  3b5008               cmp edx, dword ptr [eax + 8]
// 007c863b  750b                 jne 0x7c8648
// 007c863d  8901                 mov dword ptr [ecx], eax
// 007c863f  8b4004               mov eax, dword ptr [eax + 4]
// 007c8642  80785900             cmp byte ptr [eax + 0x59], 0
// 007c8646  74ee                 je 0x7c8636
// 007c8648  8901                 mov dword ptr [ecx], eax
// 007c864a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x59) - 0xd bytes.
struct Value { int words[18]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;