// roc 2011-06 0064bf00  unit: RBX::GameBasicSettings  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064bf00
//
// 0064bf00  51                   push ecx
// 0064bf01  8b5104               mov edx, dword ptr [ecx + 4]
// 0064bf04  8b4204               mov eax, dword ptr [edx + 4]
// 0064bf07  80781500             cmp byte ptr [eax + 0x15], 0
// 0064bf0b  57                   push edi
// 0064bf0c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064bf10  7518                 jne 0x64bf2a
// 0064bf12  56                   push esi
// 0064bf13  8b37                 mov esi, dword ptr [edi]
// 0064bf15  39700c               cmp dword ptr [eax + 0xc], esi
// 0064bf18  7d05                 jge 0x64bf1f
// 0064bf1a  8b4008               mov eax, dword ptr [eax + 8]
// 0064bf1d  eb04                 jmp 0x64bf23
// 0064bf1f  8bd0                 mov edx, eax
// 0064bf21  8b00                 mov eax, dword ptr [eax]
// 0064bf23  80781500             cmp byte ptr [eax + 0x15], 0
// 0064bf27  74ec                 je 0x64bf15
// 0064bf29  5e                   pop esi
// 0064bf2a  8b4104               mov eax, dword ptr [ecx + 4]
// 0064bf2d  89542410             mov dword ptr [esp + 0x10], edx
// 0064bf31  3bd0                 cmp edx, eax
// 0064bf33  7418                 je 0x64bf4d
// 0064bf35  8b0f                 mov ecx, dword ptr [edi]
// 0064bf37  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0064bf3a  7c11                 jl 0x64bf4d
// 0064bf3c  8d442410             lea eax, [esp + 0x10]
// 0064bf40  8b10                 mov edx, dword ptr [eax]
// 0064bf42  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064bf46  8910                 mov dword ptr [eax], edx
// 0064bf48  5f                   pop edi
// 0064bf49  59                   pop ecx
// 0064bf4a  c20800               ret 8
// 0064bf4d  89442404             mov dword ptr [esp + 4], eax
// 0064bf51  8d442404             lea eax, [esp + 4]
// 0064bf55  8b10                 mov edx, dword ptr [eax]
// 0064bf57  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064bf5b  8910                 mov dword ptr [eax], edx
// 0064bf5d  5f                   pop edi
// 0064bf5e  59                   pop ecx
// 0064bf5f  c20800               ret 8
// copied from an identical function in another client (function ?find@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;