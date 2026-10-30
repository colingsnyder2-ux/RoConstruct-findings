// roc 2011-06 004166c0  unit: CopyVerb  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004166c0
//
// 004166c0  51                   push ecx
// 004166c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004166c5  56                   push esi
// 004166c6  8bf1                 mov esi, ecx
// 004166c8  8b4604               mov eax, dword ptr [esi + 4]
// 004166cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004166cf  3b08                 cmp ecx, dword ptr [eax]
// 004166d1  7537                 jne 0x41670a
// 004166d3  3bd0                 cmp edx, eax
// 004166d5  7533                 jne 0x41670a
// 004166d7  8b4004               mov eax, dword ptr [eax + 4]
// 004166da  50                   push eax
// 004166db  8bce                 mov ecx, esi
// 004166dd  e8befbffff           call 0x4162a0
// 004166e2  8b4604               mov eax, dword ptr [esi + 4]
// 004166e5  894004               mov dword ptr [eax + 4], eax
// 004166e8  8b4604               mov eax, dword ptr [esi + 4]
// 004166eb  c7460800000000       mov dword ptr [esi + 8], 0
// 004166f2  8900                 mov dword ptr [eax], eax
// 004166f4  8b4604               mov eax, dword ptr [esi + 4]
// 004166f7  894008               mov dword ptr [eax + 8], eax
// 004166fa  8b4e04               mov ecx, dword ptr [esi + 4]
// 004166fd  8b11                 mov edx, dword ptr [ecx]
// 004166ff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00416703  8910                 mov dword ptr [eax], edx
// 00416705  5e                   pop esi
// 00416706  59                   pop ecx
// 00416707  c20c00               ret 0xc
// 0041670a  3bca                 cmp ecx, edx
// 0041670c  7471                 je 0x41677f
// 0041670e  8bff                 mov edi, edi
// 00416710  80794500             cmp byte ptr [ecx + 0x45], 0
// 00416714  8bd1                 mov edx, ecx
// 00416716  7550                 jne 0x416768
// 00416718  8b4108               mov eax, dword ptr [ecx + 8]
// 0041671b  80784500             cmp byte ptr [eax + 0x45], 0
// 0041671f  751f                 jne 0x416740
// 00416721  8bc8                 mov ecx, eax
// 00416723  8b01                 mov eax, dword ptr [ecx]
// 00416725  80784500             cmp byte ptr [eax + 0x45], 0
// 00416729  750f                 jne 0x41673a
// 0041672b  eb03                 jmp 0x416730
// 0041672d  8d4900               lea ecx, [ecx]
// 00416730  8bc8                 mov ecx, eax
// 00416732  8b01                 mov eax, dword ptr [ecx]
// 00416734  80784500             cmp byte ptr [eax + 0x45], 0
// 00416738  74f6                 je 0x416730
// 0041673a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0041673e  eb28                 jmp 0x416768
// 00416740  8b4104               mov eax, dword ptr [ecx + 4]
// 00416743  80784500             cmp byte ptr [eax + 0x45], 0
// 00416747  751b                 jne 0x416764
// 00416749  8da42400000000       lea esp, [esp]
// 00416750  3b4808               cmp ecx, dword ptr [eax + 8]
// 00416753  750f                 jne 0x416764
// 00416755  8bc8                 mov ecx, eax
// 00416757  894c2410             mov dword ptr [esp + 0x10], ecx
// 0041675b  8b4004               mov eax, dword ptr [eax + 4]
// 0041675e  80784500             cmp byte ptr [eax + 0x45], 0
// 00416762  74ec                 je 0x416750
// 00416764  89442410             mov dword ptr [esp + 0x10], eax
// 00416768  52                   push edx
// 00416769  8d442408             lea eax, [esp + 8]
// 0041676d  50                   push eax
// 0041676e  8bce                 mov ecx, esi
// 00416770  e83bf8ffff           call 0x415fb0
// 00416775  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00416779  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0041677d  7591                 jne 0x416710
// 0041677f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00416783  8908                 mov dword ptr [eax], ecx
// 00416785  5e                   pop esi
// 00416786  59                   pop ecx
// 00416787  c20c00               ret 0xc
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;