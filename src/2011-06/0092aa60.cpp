// roc 2011-06 0092aa60  unit: ResourceGroupHelper::UpdateMaterialRenderableVisitor  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092aa60
//
// 0092aa60  51                   push ecx
// 0092aa61  8b542410             mov edx, dword ptr [esp + 0x10]
// 0092aa65  56                   push esi
// 0092aa66  8bf1                 mov esi, ecx
// 0092aa68  8b4604               mov eax, dword ptr [esi + 4]
// 0092aa6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0092aa6f  3b08                 cmp ecx, dword ptr [eax]
// 0092aa71  7537                 jne 0x92aaaa
// 0092aa73  3bd0                 cmp edx, eax
// 0092aa75  7533                 jne 0x92aaaa
// 0092aa77  8b4004               mov eax, dword ptr [eax + 4]
// 0092aa7a  50                   push eax
// 0092aa7b  8bce                 mov ecx, esi
// 0092aa7d  e81efcffff           call 0x92a6a0
// 0092aa82  8b4604               mov eax, dword ptr [esi + 4]
// 0092aa85  894004               mov dword ptr [eax + 4], eax
// 0092aa88  8b4604               mov eax, dword ptr [esi + 4]
// 0092aa8b  c7460800000000       mov dword ptr [esi + 8], 0
// 0092aa92  8900                 mov dword ptr [eax], eax
// 0092aa94  8b4604               mov eax, dword ptr [esi + 4]
// 0092aa97  894008               mov dword ptr [eax + 8], eax
// 0092aa9a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0092aa9d  8b11                 mov edx, dword ptr [ecx]
// 0092aa9f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0092aaa3  8910                 mov dword ptr [eax], edx
// 0092aaa5  5e                   pop esi
// 0092aaa6  59                   pop ecx
// 0092aaa7  c20c00               ret 0xc
// 0092aaaa  3bca                 cmp ecx, edx
// 0092aaac  7471                 je 0x92ab1f
// 0092aaae  8bff                 mov edi, edi
// 0092aab0  80793900             cmp byte ptr [ecx + 0x39], 0
// 0092aab4  8bd1                 mov edx, ecx
// 0092aab6  7550                 jne 0x92ab08
// 0092aab8  8b4108               mov eax, dword ptr [ecx + 8]
// 0092aabb  80783900             cmp byte ptr [eax + 0x39], 0
// 0092aabf  751f                 jne 0x92aae0
// 0092aac1  8bc8                 mov ecx, eax
// 0092aac3  8b01                 mov eax, dword ptr [ecx]
// 0092aac5  80783900             cmp byte ptr [eax + 0x39], 0
// 0092aac9  750f                 jne 0x92aada
// 0092aacb  eb03                 jmp 0x92aad0
// 0092aacd  8d4900               lea ecx, [ecx]
// 0092aad0  8bc8                 mov ecx, eax
// 0092aad2  8b01                 mov eax, dword ptr [ecx]
// 0092aad4  80783900             cmp byte ptr [eax + 0x39], 0
// 0092aad8  74f6                 je 0x92aad0
// 0092aada  894c2410             mov dword ptr [esp + 0x10], ecx
// 0092aade  eb28                 jmp 0x92ab08
// 0092aae0  8b4104               mov eax, dword ptr [ecx + 4]
// 0092aae3  80783900             cmp byte ptr [eax + 0x39], 0
// 0092aae7  751b                 jne 0x92ab04
// 0092aae9  8da42400000000       lea esp, [esp]
// 0092aaf0  3b4808               cmp ecx, dword ptr [eax + 8]
// 0092aaf3  750f                 jne 0x92ab04
// 0092aaf5  8bc8                 mov ecx, eax
// 0092aaf7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0092aafb  8b4004               mov eax, dword ptr [eax + 4]
// 0092aafe  80783900             cmp byte ptr [eax + 0x39], 0
// 0092ab02  74ec                 je 0x92aaf0
// 0092ab04  89442410             mov dword ptr [esp + 0x10], eax
// 0092ab08  52                   push edx
// 0092ab09  8d442408             lea eax, [esp + 8]
// 0092ab0d  50                   push eax
// 0092ab0e  8bce                 mov ecx, esi
// 0092ab10  e8bbf8ffff           call 0x92a3d0
// 0092ab15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0092ab19  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0092ab1d  7591                 jne 0x92aab0
// 0092ab1f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0092ab23  8908                 mov dword ptr [eax], ecx
// 0092ab25  5e                   pop esi
// 0092ab26  59                   pop ecx
// 0092ab27  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;