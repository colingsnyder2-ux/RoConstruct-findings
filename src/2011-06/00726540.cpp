// roc 2011-06 00726540  unit: RBX::VBadgeService::?$BoundYieldFuncDesc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00726540
//
// 00726540  51                   push ecx
// 00726541  8b542410             mov edx, dword ptr [esp + 0x10]
// 00726545  56                   push esi
// 00726546  8bf1                 mov esi, ecx
// 00726548  8b4604               mov eax, dword ptr [esi + 4]
// 0072654b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072654f  3b08                 cmp ecx, dword ptr [eax]
// 00726551  7537                 jne 0x72658a
// 00726553  3bd0                 cmp edx, eax
// 00726555  7533                 jne 0x72658a
// 00726557  8b4004               mov eax, dword ptr [eax + 4]
// 0072655a  50                   push eax
// 0072655b  8bce                 mov ecx, esi
// 0072655d  e87ef3ffff           call 0x7258e0
// 00726562  8b4604               mov eax, dword ptr [esi + 4]
// 00726565  894004               mov dword ptr [eax + 4], eax
// 00726568  8b4604               mov eax, dword ptr [esi + 4]
// 0072656b  c7460800000000       mov dword ptr [esi + 8], 0
// 00726572  8900                 mov dword ptr [eax], eax
// 00726574  8b4604               mov eax, dword ptr [esi + 4]
// 00726577  894008               mov dword ptr [eax + 8], eax
// 0072657a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0072657d  8b11                 mov edx, dword ptr [ecx]
// 0072657f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00726583  8910                 mov dword ptr [eax], edx
// 00726585  5e                   pop esi
// 00726586  59                   pop ecx
// 00726587  c20c00               ret 0xc
// 0072658a  3bca                 cmp ecx, edx
// 0072658c  7471                 je 0x7265ff
// 0072658e  8bff                 mov edi, edi
// 00726590  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00726594  8bd1                 mov edx, ecx
// 00726596  7550                 jne 0x7265e8
// 00726598  8b4108               mov eax, dword ptr [ecx + 8]
// 0072659b  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0072659f  751f                 jne 0x7265c0
// 007265a1  8bc8                 mov ecx, eax
// 007265a3  8b01                 mov eax, dword ptr [ecx]
// 007265a5  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007265a9  750f                 jne 0x7265ba
// 007265ab  eb03                 jmp 0x7265b0
// 007265ad  8d4900               lea ecx, [ecx]
// 007265b0  8bc8                 mov ecx, eax
// 007265b2  8b01                 mov eax, dword ptr [ecx]
// 007265b4  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007265b8  74f6                 je 0x7265b0
// 007265ba  894c2410             mov dword ptr [esp + 0x10], ecx
// 007265be  eb28                 jmp 0x7265e8
// 007265c0  8b4104               mov eax, dword ptr [ecx + 4]
// 007265c3  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007265c7  751b                 jne 0x7265e4
// 007265c9  8da42400000000       lea esp, [esp]
// 007265d0  3b4808               cmp ecx, dword ptr [eax + 8]
// 007265d3  750f                 jne 0x7265e4
// 007265d5  8bc8                 mov ecx, eax
// 007265d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 007265db  8b4004               mov eax, dword ptr [eax + 4]
// 007265de  80781d00             cmp byte ptr [eax + 0x1d], 0
// 007265e2  74ec                 je 0x7265d0
// 007265e4  89442410             mov dword ptr [esp + 0x10], eax
// 007265e8  52                   push edx
// 007265e9  8d442408             lea eax, [esp + 8]
// 007265ed  50                   push eax
// 007265ee  8bce                 mov ecx, esi
// 007265f0  e8fbefffff           call 0x7255f0
// 007265f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007265f9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007265fd  7591                 jne 0x726590
// 007265ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00726603  8908                 mov dword ptr [eax], ecx
// 00726605  5e                   pop esi
// 00726606  59                   pop ecx
// 00726607  c20c00               ret 0xc
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