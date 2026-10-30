// roc 2011-06 007cc480  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007cc480
//
// 007cc480  51                   push ecx
// 007cc481  8b542410             mov edx, dword ptr [esp + 0x10]
// 007cc485  56                   push esi
// 007cc486  8bf1                 mov esi, ecx
// 007cc488  8b4604               mov eax, dword ptr [esi + 4]
// 007cc48b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007cc48f  3b08                 cmp ecx, dword ptr [eax]
// 007cc491  7537                 jne 0x7cc4ca
// 007cc493  3bd0                 cmp edx, eax
// 007cc495  7533                 jne 0x7cc4ca
// 007cc497  8b4004               mov eax, dword ptr [eax + 4]
// 007cc49a  50                   push eax
// 007cc49b  8bce                 mov ecx, esi
// 007cc49d  e82ef7ffff           call 0x7cbbd0
// 007cc4a2  8b4604               mov eax, dword ptr [esi + 4]
// 007cc4a5  894004               mov dword ptr [eax + 4], eax
// 007cc4a8  8b4604               mov eax, dword ptr [esi + 4]
// 007cc4ab  c7460800000000       mov dword ptr [esi + 8], 0
// 007cc4b2  8900                 mov dword ptr [eax], eax
// 007cc4b4  8b4604               mov eax, dword ptr [esi + 4]
// 007cc4b7  894008               mov dword ptr [eax + 8], eax
// 007cc4ba  8b4e04               mov ecx, dword ptr [esi + 4]
// 007cc4bd  8b11                 mov edx, dword ptr [ecx]
// 007cc4bf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007cc4c3  8910                 mov dword ptr [eax], edx
// 007cc4c5  5e                   pop esi
// 007cc4c6  59                   pop ecx
// 007cc4c7  c20c00               ret 0xc
// 007cc4ca  3bca                 cmp ecx, edx
// 007cc4cc  7471                 je 0x7cc53f
// 007cc4ce  8bff                 mov edi, edi
// 007cc4d0  80793d00             cmp byte ptr [ecx + 0x3d], 0
// 007cc4d4  8bd1                 mov edx, ecx
// 007cc4d6  7550                 jne 0x7cc528
// 007cc4d8  8b4108               mov eax, dword ptr [ecx + 8]
// 007cc4db  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007cc4df  751f                 jne 0x7cc500
// 007cc4e1  8bc8                 mov ecx, eax
// 007cc4e3  8b01                 mov eax, dword ptr [ecx]
// 007cc4e5  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007cc4e9  750f                 jne 0x7cc4fa
// 007cc4eb  eb03                 jmp 0x7cc4f0
// 007cc4ed  8d4900               lea ecx, [ecx]
// 007cc4f0  8bc8                 mov ecx, eax
// 007cc4f2  8b01                 mov eax, dword ptr [ecx]
// 007cc4f4  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007cc4f8  74f6                 je 0x7cc4f0
// 007cc4fa  894c2410             mov dword ptr [esp + 0x10], ecx
// 007cc4fe  eb28                 jmp 0x7cc528
// 007cc500  8b4104               mov eax, dword ptr [ecx + 4]
// 007cc503  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007cc507  751b                 jne 0x7cc524
// 007cc509  8da42400000000       lea esp, [esp]
// 007cc510  3b4808               cmp ecx, dword ptr [eax + 8]
// 007cc513  750f                 jne 0x7cc524
// 007cc515  8bc8                 mov ecx, eax
// 007cc517  894c2410             mov dword ptr [esp + 0x10], ecx
// 007cc51b  8b4004               mov eax, dword ptr [eax + 4]
// 007cc51e  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007cc522  74ec                 je 0x7cc510
// 007cc524  89442410             mov dword ptr [esp + 0x10], eax
// 007cc528  52                   push edx
// 007cc529  8d442408             lea eax, [esp + 8]
// 007cc52d  50                   push eax
// 007cc52e  8bce                 mov ecx, esi
// 007cc530  e8abf9ffff           call 0x7cbee0
// 007cc535  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007cc539  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 007cc53d  7591                 jne 0x7cc4d0
// 007cc53f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007cc543  8908                 mov dword ptr [eax], ecx
// 007cc545  5e                   pop esi
// 007cc546  59                   pop ecx
// 007cc547  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x3d) - 0xd bytes.
struct Value { int words[11]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;