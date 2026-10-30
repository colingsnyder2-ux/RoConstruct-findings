// roc 2011-06 0064bf70  unit: RBX::GameBasicSettings  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064bf70
//
// 0064bf70  51                   push ecx
// 0064bf71  8b5104               mov edx, dword ptr [ecx + 4]
// 0064bf74  8b4204               mov eax, dword ptr [edx + 4]
// 0064bf77  80782100             cmp byte ptr [eax + 0x21], 0
// 0064bf7b  57                   push edi
// 0064bf7c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064bf80  7518                 jne 0x64bf9a
// 0064bf82  56                   push esi
// 0064bf83  8b37                 mov esi, dword ptr [edi]
// 0064bf85  39700c               cmp dword ptr [eax + 0xc], esi
// 0064bf88  7d05                 jge 0x64bf8f
// 0064bf8a  8b4008               mov eax, dword ptr [eax + 8]
// 0064bf8d  eb04                 jmp 0x64bf93
// 0064bf8f  8bd0                 mov edx, eax
// 0064bf91  8b00                 mov eax, dword ptr [eax]
// 0064bf93  80782100             cmp byte ptr [eax + 0x21], 0
// 0064bf97  74ec                 je 0x64bf85
// 0064bf99  5e                   pop esi
// 0064bf9a  8b4104               mov eax, dword ptr [ecx + 4]
// 0064bf9d  89542410             mov dword ptr [esp + 0x10], edx
// 0064bfa1  3bd0                 cmp edx, eax
// 0064bfa3  7418                 je 0x64bfbd
// 0064bfa5  8b0f                 mov ecx, dword ptr [edi]
// 0064bfa7  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0064bfaa  7c11                 jl 0x64bfbd
// 0064bfac  8d442410             lea eax, [esp + 0x10]
// 0064bfb0  8b10                 mov edx, dword ptr [eax]
// 0064bfb2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064bfb6  8910                 mov dword ptr [eax], edx
// 0064bfb8  5f                   pop edi
// 0064bfb9  59                   pop ecx
// 0064bfba  c20800               ret 8
// 0064bfbd  89442404             mov dword ptr [esp + 4], eax
// 0064bfc1  8d442404             lea eax, [esp + 4]
// 0064bfc5  8b10                 mov edx, dword ptr [eax]
// 0064bfc7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064bfcb  8910                 mov dword ptr [eax], edx
// 0064bfcd  5f                   pop edi
// 0064bfce  59                   pop ecx
// 0064bfcf  c20800               ret 8
// copied from an identical function in another client (function ?find@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;