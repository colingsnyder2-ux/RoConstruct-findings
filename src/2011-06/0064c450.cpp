// roc 2011-06 0064c450  unit: RBX::GameBasicSettings  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064c450
//
// 0064c450  51                   push ecx
// 0064c451  55                   push ebp
// 0064c452  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0064c456  56                   push esi
// 0064c457  57                   push edi
// 0064c458  8bf9                 mov edi, ecx
// 0064c45a  8b7704               mov esi, dword ptr [edi + 4]
// 0064c45d  8b4604               mov eax, dword ptr [esi + 4]
// 0064c460  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c464  b101                 mov cl, 1
// 0064c466  884c240c             mov byte ptr [esp + 0xc], cl
// 0064c46a  7521                 jne 0x64c48d
// 0064c46c  8b5500               mov edx, dword ptr [ebp]
// 0064c46f  90                   nop 
// 0064c470  3b500c               cmp edx, dword ptr [eax + 0xc]
// 0064c473  8bf0                 mov esi, eax
// 0064c475  0f9cc1               setl cl
// 0064c478  884c240c             mov byte ptr [esp + 0xc], cl
// 0064c47c  84c9                 test cl, cl
// 0064c47e  7404                 je 0x64c484
// 0064c480  8b00                 mov eax, dword ptr [eax]
// 0064c482  eb03                 jmp 0x64c487
// 0064c484  8b4008               mov eax, dword ptr [eax + 8]
// 0064c487  80782100             cmp byte ptr [eax + 0x21], 0
// 0064c48b  74e3                 je 0x64c470
// 0064c48d  8bd6                 mov edx, esi
// 0064c48f  89542418             mov dword ptr [esp + 0x18], edx
// 0064c493  84c9                 test cl, cl
// 0064c495  7433                 je 0x64c4ca
// 0064c497  8b4704               mov eax, dword ptr [edi + 4]
// 0064c49a  8d4c2418             lea ecx, [esp + 0x18]
// 0064c49e  3b30                 cmp esi, dword ptr [eax]
// 0064c4a0  751f                 jne 0x64c4c1
// 0064c4a2  55                   push ebp
// 0064c4a3  56                   push esi
// 0064c4a4  6a01                 push 1
// 0064c4a6  51                   push ecx
// 0064c4a7  8bcf                 mov ecx, edi
// 0064c4a9  e8a2fbffff           call 0x64c050
// 0064c4ae  8b10                 mov edx, dword ptr [eax]
// 0064c4b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c4b4  5f                   pop edi
// 0064c4b5  5e                   pop esi
// 0064c4b6  c6400401             mov byte ptr [eax + 4], 1
// 0064c4ba  8910                 mov dword ptr [eax], edx
// 0064c4bc  5d                   pop ebp
// 0064c4bd  59                   pop ecx
// 0064c4be  c20800               ret 8
// 0064c4c1  e88af5ffff           call 0x64ba50
// 0064c4c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064c4ca  8b420c               mov eax, dword ptr [edx + 0xc]
// 0064c4cd  3b4500               cmp eax, dword ptr [ebp]
// 0064c4d0  7d26                 jge 0x64c4f8
// 0064c4d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064c4d6  55                   push ebp
// 0064c4d7  56                   push esi
// 0064c4d8  51                   push ecx
// 0064c4d9  8d542424             lea edx, [esp + 0x24]
// 0064c4dd  52                   push edx
// 0064c4de  8bcf                 mov ecx, edi
// 0064c4e0  e86bfbffff           call 0x64c050
// 0064c4e5  8b08                 mov ecx, dword ptr [eax]
// 0064c4e7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c4eb  5f                   pop edi
// 0064c4ec  5e                   pop esi
// 0064c4ed  8908                 mov dword ptr [eax], ecx
// 0064c4ef  c6400401             mov byte ptr [eax + 4], 1
// 0064c4f3  5d                   pop ebp
// 0064c4f4  59                   pop ecx
// 0064c4f5  c20800               ret 8
// 0064c4f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c4fc  5f                   pop edi
// 0064c4fd  5e                   pop esi
// 0064c4fe  c6400400             mov byte ptr [eax + 4], 0
// 0064c502  8910                 mov dword ptr [eax], edx
// 0064c504  5d                   pop ebp
// 0064c505  59                   pop ecx
// 0064c506  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHUValue16@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;