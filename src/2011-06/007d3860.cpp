// roc 2011-06 007d3860  unit: RBX::ScoreHud  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d3860
//
// 007d3860  51                   push ecx
// 007d3861  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d3865  56                   push esi
// 007d3866  8bf1                 mov esi, ecx
// 007d3868  8b4604               mov eax, dword ptr [esi + 4]
// 007d386b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007d386f  3b08                 cmp ecx, dword ptr [eax]
// 007d3871  7537                 jne 0x7d38aa
// 007d3873  3bd0                 cmp edx, eax
// 007d3875  7533                 jne 0x7d38aa
// 007d3877  8b4004               mov eax, dword ptr [eax + 4]
// 007d387a  50                   push eax
// 007d387b  8bce                 mov ecx, esi
// 007d387d  e80ef8ffff           call 0x7d3090
// 007d3882  8b4604               mov eax, dword ptr [esi + 4]
// 007d3885  894004               mov dword ptr [eax + 4], eax
// 007d3888  8b4604               mov eax, dword ptr [esi + 4]
// 007d388b  c7460800000000       mov dword ptr [esi + 8], 0
// 007d3892  8900                 mov dword ptr [eax], eax
// 007d3894  8b4604               mov eax, dword ptr [esi + 4]
// 007d3897  894008               mov dword ptr [eax + 8], eax
// 007d389a  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d389d  8b11                 mov edx, dword ptr [ecx]
// 007d389f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d38a3  8910                 mov dword ptr [eax], edx
// 007d38a5  5e                   pop esi
// 007d38a6  59                   pop ecx
// 007d38a7  c20c00               ret 0xc
// 007d38aa  3bca                 cmp ecx, edx
// 007d38ac  7471                 je 0x7d391f
// 007d38ae  8bff                 mov edi, edi
// 007d38b0  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 007d38b4  8bd1                 mov edx, ecx
// 007d38b6  7550                 jne 0x7d3908
// 007d38b8  8b4108               mov eax, dword ptr [ecx + 8]
// 007d38bb  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007d38bf  751f                 jne 0x7d38e0
// 007d38c1  8bc8                 mov ecx, eax
// 007d38c3  8b01                 mov eax, dword ptr [ecx]
// 007d38c5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007d38c9  750f                 jne 0x7d38da
// 007d38cb  eb03                 jmp 0x7d38d0
// 007d38cd  8d4900               lea ecx, [ecx]
// 007d38d0  8bc8                 mov ecx, eax
// 007d38d2  8b01                 mov eax, dword ptr [ecx]
// 007d38d4  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007d38d8  74f6                 je 0x7d38d0
// 007d38da  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d38de  eb28                 jmp 0x7d3908
// 007d38e0  8b4104               mov eax, dword ptr [ecx + 4]
// 007d38e3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007d38e7  751b                 jne 0x7d3904
// 007d38e9  8da42400000000       lea esp, [esp]
// 007d38f0  3b4808               cmp ecx, dword ptr [eax + 8]
// 007d38f3  750f                 jne 0x7d3904
// 007d38f5  8bc8                 mov ecx, eax
// 007d38f7  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d38fb  8b4004               mov eax, dword ptr [eax + 4]
// 007d38fe  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007d3902  74ec                 je 0x7d38f0
// 007d3904  89442410             mov dword ptr [esp + 0x10], eax
// 007d3908  52                   push edx
// 007d3909  8d442408             lea eax, [esp + 8]
// 007d390d  50                   push eax
// 007d390e  8bce                 mov ecx, esi
// 007d3910  e84bf4ffff           call 0x7d2d60
// 007d3915  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007d3919  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007d391d  7591                 jne 0x7d38b0
// 007d391f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d3923  8908                 mov dword ptr [eax], ecx
// 007d3925  5e                   pop esi
// 007d3926  59                   pop ecx
// 007d3927  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;