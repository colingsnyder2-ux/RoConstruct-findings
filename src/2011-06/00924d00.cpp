// roc 2011-06 00924d00  unit: RBX::AdornRbxGfx  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00924d00
//
// 00924d00  51                   push ecx
// 00924d01  8b542410             mov edx, dword ptr [esp + 0x10]
// 00924d05  56                   push esi
// 00924d06  8bf1                 mov esi, ecx
// 00924d08  8b4604               mov eax, dword ptr [esi + 4]
// 00924d0b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00924d0f  3b08                 cmp ecx, dword ptr [eax]
// 00924d11  7537                 jne 0x924d4a
// 00924d13  3bd0                 cmp edx, eax
// 00924d15  7533                 jne 0x924d4a
// 00924d17  8b4004               mov eax, dword ptr [eax + 4]
// 00924d1a  50                   push eax
// 00924d1b  8bce                 mov ecx, esi
// 00924d1d  e8fef9ffff           call 0x924720
// 00924d22  8b4604               mov eax, dword ptr [esi + 4]
// 00924d25  894004               mov dword ptr [eax + 4], eax
// 00924d28  8b4604               mov eax, dword ptr [esi + 4]
// 00924d2b  c7460800000000       mov dword ptr [esi + 8], 0
// 00924d32  8900                 mov dword ptr [eax], eax
// 00924d34  8b4604               mov eax, dword ptr [esi + 4]
// 00924d37  894008               mov dword ptr [eax + 8], eax
// 00924d3a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00924d3d  8b11                 mov edx, dword ptr [ecx]
// 00924d3f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00924d43  8910                 mov dword ptr [eax], edx
// 00924d45  5e                   pop esi
// 00924d46  59                   pop ecx
// 00924d47  c20c00               ret 0xc
// 00924d4a  3bca                 cmp ecx, edx
// 00924d4c  7471                 je 0x924dbf
// 00924d4e  8bff                 mov edi, edi
// 00924d50  80793900             cmp byte ptr [ecx + 0x39], 0
// 00924d54  8bd1                 mov edx, ecx
// 00924d56  7550                 jne 0x924da8
// 00924d58  8b4108               mov eax, dword ptr [ecx + 8]
// 00924d5b  80783900             cmp byte ptr [eax + 0x39], 0
// 00924d5f  751f                 jne 0x924d80
// 00924d61  8bc8                 mov ecx, eax
// 00924d63  8b01                 mov eax, dword ptr [ecx]
// 00924d65  80783900             cmp byte ptr [eax + 0x39], 0
// 00924d69  750f                 jne 0x924d7a
// 00924d6b  eb03                 jmp 0x924d70
// 00924d6d  8d4900               lea ecx, [ecx]
// 00924d70  8bc8                 mov ecx, eax
// 00924d72  8b01                 mov eax, dword ptr [ecx]
// 00924d74  80783900             cmp byte ptr [eax + 0x39], 0
// 00924d78  74f6                 je 0x924d70
// 00924d7a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00924d7e  eb28                 jmp 0x924da8
// 00924d80  8b4104               mov eax, dword ptr [ecx + 4]
// 00924d83  80783900             cmp byte ptr [eax + 0x39], 0
// 00924d87  751b                 jne 0x924da4
// 00924d89  8da42400000000       lea esp, [esp]
// 00924d90  3b4808               cmp ecx, dword ptr [eax + 8]
// 00924d93  750f                 jne 0x924da4
// 00924d95  8bc8                 mov ecx, eax
// 00924d97  894c2410             mov dword ptr [esp + 0x10], ecx
// 00924d9b  8b4004               mov eax, dword ptr [eax + 4]
// 00924d9e  80783900             cmp byte ptr [eax + 0x39], 0
// 00924da2  74ec                 je 0x924d90
// 00924da4  89442410             mov dword ptr [esp + 0x10], eax
// 00924da8  52                   push edx
// 00924da9  8d442408             lea eax, [esp + 8]
// 00924dad  50                   push eax
// 00924dae  8bce                 mov ecx, esi
// 00924db0  e81bf0ffff           call 0x923dd0
// 00924db5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00924db9  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00924dbd  7591                 jne 0x924d50
// 00924dbf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00924dc3  8908                 mov dword ptr [eax], ecx
// 00924dc5  5e                   pop esi
// 00924dc6  59                   pop ecx
// 00924dc7  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;