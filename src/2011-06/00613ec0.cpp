// roc 2011-06 00613ec0  unit: TextXmlParser  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00613ec0
//
// 00613ec0  51                   push ecx
// 00613ec1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00613ec5  56                   push esi
// 00613ec6  8bf1                 mov esi, ecx
// 00613ec8  8b4604               mov eax, dword ptr [esi + 4]
// 00613ecb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00613ecf  3b08                 cmp ecx, dword ptr [eax]
// 00613ed1  7537                 jne 0x613f0a
// 00613ed3  3bd0                 cmp edx, eax
// 00613ed5  7533                 jne 0x613f0a
// 00613ed7  8b4004               mov eax, dword ptr [eax + 4]
// 00613eda  50                   push eax
// 00613edb  8bce                 mov ecx, esi
// 00613edd  e89effffff           call 0x613e80
// 00613ee2  8b4604               mov eax, dword ptr [esi + 4]
// 00613ee5  894004               mov dword ptr [eax + 4], eax
// 00613ee8  8b4604               mov eax, dword ptr [esi + 4]
// 00613eeb  c7460800000000       mov dword ptr [esi + 8], 0
// 00613ef2  8900                 mov dword ptr [eax], eax
// 00613ef4  8b4604               mov eax, dword ptr [esi + 4]
// 00613ef7  894008               mov dword ptr [eax + 8], eax
// 00613efa  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613efd  8b11                 mov edx, dword ptr [ecx]
// 00613eff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00613f03  8910                 mov dword ptr [eax], edx
// 00613f05  5e                   pop esi
// 00613f06  59                   pop ecx
// 00613f07  c20c00               ret 0xc
// 00613f0a  3bca                 cmp ecx, edx
// 00613f0c  7471                 je 0x613f7f
// 00613f0e  8bff                 mov edi, edi
// 00613f10  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 00613f14  8bd1                 mov edx, ecx
// 00613f16  7550                 jne 0x613f68
// 00613f18  8b4108               mov eax, dword ptr [ecx + 8]
// 00613f1b  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00613f1f  751f                 jne 0x613f40
// 00613f21  8bc8                 mov ecx, eax
// 00613f23  8b01                 mov eax, dword ptr [ecx]
// 00613f25  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00613f29  750f                 jne 0x613f3a
// 00613f2b  eb03                 jmp 0x613f30
// 00613f2d  8d4900               lea ecx, [ecx]
// 00613f30  8bc8                 mov ecx, eax
// 00613f32  8b01                 mov eax, dword ptr [ecx]
// 00613f34  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00613f38  74f6                 je 0x613f30
// 00613f3a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00613f3e  eb28                 jmp 0x613f68
// 00613f40  8b4104               mov eax, dword ptr [ecx + 4]
// 00613f43  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00613f47  751b                 jne 0x613f64
// 00613f49  8da42400000000       lea esp, [esp]
// 00613f50  3b4808               cmp ecx, dword ptr [eax + 8]
// 00613f53  750f                 jne 0x613f64
// 00613f55  8bc8                 mov ecx, eax
// 00613f57  894c2410             mov dword ptr [esp + 0x10], ecx
// 00613f5b  8b4004               mov eax, dword ptr [eax + 4]
// 00613f5e  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00613f62  74ec                 je 0x613f50
// 00613f64  89442410             mov dword ptr [esp + 0x10], eax
// 00613f68  52                   push edx
// 00613f69  8d442408             lea eax, [esp + 8]
// 00613f6d  50                   push eax
// 00613f6e  8bce                 mov ecx, esi
// 00613f70  e83bfcffff           call 0x613bb0
// 00613f75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00613f79  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00613f7d  7591                 jne 0x613f10
// 00613f7f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00613f83  8908                 mov dword ptr [eax], ecx
// 00613f85  5e                   pop esi
// 00613f86  59                   pop ecx
// 00613f87  c20c00               ret 0xc
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