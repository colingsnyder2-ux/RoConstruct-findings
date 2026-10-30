// roc 2011-06 00967840  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00967840
//
// 00967840  51                   push ecx
// 00967841  8b542410             mov edx, dword ptr [esp + 0x10]
// 00967845  56                   push esi
// 00967846  8bf1                 mov esi, ecx
// 00967848  8b4604               mov eax, dword ptr [esi + 4]
// 0096784b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0096784f  3b08                 cmp ecx, dword ptr [eax]
// 00967851  7537                 jne 0x96788a
// 00967853  3bd0                 cmp edx, eax
// 00967855  7533                 jne 0x96788a
// 00967857  8b4004               mov eax, dword ptr [eax + 4]
// 0096785a  50                   push eax
// 0096785b  8bce                 mov ecx, esi
// 0096785d  e86efcffff           call 0x9674d0
// 00967862  8b4604               mov eax, dword ptr [esi + 4]
// 00967865  894004               mov dword ptr [eax + 4], eax
// 00967868  8b4604               mov eax, dword ptr [esi + 4]
// 0096786b  c7460800000000       mov dword ptr [esi + 8], 0
// 00967872  8900                 mov dword ptr [eax], eax
// 00967874  8b4604               mov eax, dword ptr [esi + 4]
// 00967877  894008               mov dword ptr [eax + 8], eax
// 0096787a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0096787d  8b11                 mov edx, dword ptr [ecx]
// 0096787f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00967883  8910                 mov dword ptr [eax], edx
// 00967885  5e                   pop esi
// 00967886  59                   pop ecx
// 00967887  c20c00               ret 0xc
// 0096788a  3bca                 cmp ecx, edx
// 0096788c  7471                 je 0x9678ff
// 0096788e  8bff                 mov edi, edi
// 00967890  80795d00             cmp byte ptr [ecx + 0x5d], 0
// 00967894  8bd1                 mov edx, ecx
// 00967896  7550                 jne 0x9678e8
// 00967898  8b4108               mov eax, dword ptr [ecx + 8]
// 0096789b  80785d00             cmp byte ptr [eax + 0x5d], 0
// 0096789f  751f                 jne 0x9678c0
// 009678a1  8bc8                 mov ecx, eax
// 009678a3  8b01                 mov eax, dword ptr [ecx]
// 009678a5  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009678a9  750f                 jne 0x9678ba
// 009678ab  eb03                 jmp 0x9678b0
// 009678ad  8d4900               lea ecx, [ecx]
// 009678b0  8bc8                 mov ecx, eax
// 009678b2  8b01                 mov eax, dword ptr [ecx]
// 009678b4  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009678b8  74f6                 je 0x9678b0
// 009678ba  894c2410             mov dword ptr [esp + 0x10], ecx
// 009678be  eb28                 jmp 0x9678e8
// 009678c0  8b4104               mov eax, dword ptr [ecx + 4]
// 009678c3  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009678c7  751b                 jne 0x9678e4
// 009678c9  8da42400000000       lea esp, [esp]
// 009678d0  3b4808               cmp ecx, dword ptr [eax + 8]
// 009678d3  750f                 jne 0x9678e4
// 009678d5  8bc8                 mov ecx, eax
// 009678d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 009678db  8b4004               mov eax, dword ptr [eax + 4]
// 009678de  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009678e2  74ec                 je 0x9678d0
// 009678e4  89442410             mov dword ptr [esp + 0x10], eax
// 009678e8  52                   push edx
// 009678e9  8d442408             lea eax, [esp + 8]
// 009678ed  50                   push eax
// 009678ee  8bce                 mov ecx, esi
// 009678f0  e8ebf8ffff           call 0x9671e0
// 009678f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009678f9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 009678fd  7591                 jne 0x967890
// 009678ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00967903  8908                 mov dword ptr [eax], ecx
// 00967905  5e                   pop esi
// 00967906  59                   pop ecx
// 00967907  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;