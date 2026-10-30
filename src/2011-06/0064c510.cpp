// roc 2011-06 0064c510  unit: RBX::GameBasicSettings  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064c510
//
// 0064c510  51                   push ecx
// 0064c511  55                   push ebp
// 0064c512  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0064c516  56                   push esi
// 0064c517  57                   push edi
// 0064c518  8bf9                 mov edi, ecx
// 0064c51a  8b7704               mov esi, dword ptr [edi + 4]
// 0064c51d  8b4604               mov eax, dword ptr [esi + 4]
// 0064c520  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064c524  b101                 mov cl, 1
// 0064c526  884c240c             mov byte ptr [esp + 0xc], cl
// 0064c52a  7521                 jne 0x64c54d
// 0064c52c  8b5500               mov edx, dword ptr [ebp]
// 0064c52f  90                   nop 
// 0064c530  3b500c               cmp edx, dword ptr [eax + 0xc]
// 0064c533  8bf0                 mov esi, eax
// 0064c535  0f9cc1               setl cl
// 0064c538  884c240c             mov byte ptr [esp + 0xc], cl
// 0064c53c  84c9                 test cl, cl
// 0064c53e  7404                 je 0x64c544
// 0064c540  8b00                 mov eax, dword ptr [eax]
// 0064c542  eb03                 jmp 0x64c547
// 0064c544  8b4008               mov eax, dword ptr [eax + 8]
// 0064c547  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064c54b  74e3                 je 0x64c530
// 0064c54d  8bd6                 mov edx, esi
// 0064c54f  89542418             mov dword ptr [esp + 0x18], edx
// 0064c553  84c9                 test cl, cl
// 0064c555  7433                 je 0x64c58a
// 0064c557  8b4704               mov eax, dword ptr [edi + 4]
// 0064c55a  8d4c2418             lea ecx, [esp + 0x18]
// 0064c55e  3b30                 cmp esi, dword ptr [eax]
// 0064c560  751f                 jne 0x64c581
// 0064c562  55                   push ebp
// 0064c563  56                   push esi
// 0064c564  6a01                 push 1
// 0064c566  51                   push ecx
// 0064c567  8bcf                 mov ecx, edi
// 0064c569  e8e2fcffff           call 0x64c250
// 0064c56e  8b10                 mov edx, dword ptr [eax]
// 0064c570  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c574  5f                   pop edi
// 0064c575  5e                   pop esi
// 0064c576  c6400401             mov byte ptr [eax + 4], 1
// 0064c57a  8910                 mov dword ptr [eax], edx
// 0064c57c  5d                   pop ebp
// 0064c57d  59                   pop ecx
// 0064c57e  c20800               ret 8
// 0064c581  e81adeffff           call 0x64a3a0
// 0064c586  8b542418             mov edx, dword ptr [esp + 0x18]
// 0064c58a  8b420c               mov eax, dword ptr [edx + 0xc]
// 0064c58d  3b4500               cmp eax, dword ptr [ebp]
// 0064c590  7d26                 jge 0x64c5b8
// 0064c592  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064c596  55                   push ebp
// 0064c597  56                   push esi
// 0064c598  51                   push ecx
// 0064c599  8d542424             lea edx, [esp + 0x24]
// 0064c59d  52                   push edx
// 0064c59e  8bcf                 mov ecx, edi
// 0064c5a0  e8abfcffff           call 0x64c250
// 0064c5a5  8b08                 mov ecx, dword ptr [eax]
// 0064c5a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c5ab  5f                   pop edi
// 0064c5ac  5e                   pop esi
// 0064c5ad  8908                 mov dword ptr [eax], ecx
// 0064c5af  c6400401             mov byte ptr [eax + 4], 1
// 0064c5b3  5d                   pop ebp
// 0064c5b4  59                   pop ecx
// 0064c5b5  c20800               ret 8
// 0064c5b8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c5bc  5f                   pop edi
// 0064c5bd  5e                   pop esi
// 0064c5be  c6400400             mov byte ptr [eax + 4], 0
// 0064c5c2  8910                 mov dword ptr [eax], edx
// 0064c5c4  5d                   pop ebp
// 0064c5c5  59                   pop ecx
// 0064c5c6  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x2d (isnil = 0xd + sizeof(pair)).
struct Value { int words[7]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;