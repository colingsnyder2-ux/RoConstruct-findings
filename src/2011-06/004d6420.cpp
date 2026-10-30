// roc 2011-06 004d6420  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d6420
//
// 004d6420  51                   push ecx
// 004d6421  55                   push ebp
// 004d6422  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d6426  56                   push esi
// 004d6427  57                   push edi
// 004d6428  8bf9                 mov edi, ecx
// 004d642a  8b7704               mov esi, dword ptr [edi + 4]
// 004d642d  8b4604               mov eax, dword ptr [esi + 4]
// 004d6430  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d6434  b101                 mov cl, 1
// 004d6436  884c240c             mov byte ptr [esp + 0xc], cl
// 004d643a  7521                 jne 0x4d645d
// 004d643c  8b5500               mov edx, dword ptr [ebp]
// 004d643f  90                   nop 
// 004d6440  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004d6443  8bf0                 mov esi, eax
// 004d6445  0f9cc1               setl cl
// 004d6448  884c240c             mov byte ptr [esp + 0xc], cl
// 004d644c  84c9                 test cl, cl
// 004d644e  7404                 je 0x4d6454
// 004d6450  8b00                 mov eax, dword ptr [eax]
// 004d6452  eb03                 jmp 0x4d6457
// 004d6454  8b4008               mov eax, dword ptr [eax + 8]
// 004d6457  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004d645b  74e3                 je 0x4d6440
// 004d645d  8bd6                 mov edx, esi
// 004d645f  89542418             mov dword ptr [esp + 0x18], edx
// 004d6463  84c9                 test cl, cl
// 004d6465  7433                 je 0x4d649a
// 004d6467  8b4704               mov eax, dword ptr [edi + 4]
// 004d646a  8d4c2418             lea ecx, [esp + 0x18]
// 004d646e  3b30                 cmp esi, dword ptr [eax]
// 004d6470  751f                 jne 0x4d6491
// 004d6472  55                   push ebp
// 004d6473  56                   push esi
// 004d6474  6a01                 push 1
// 004d6476  51                   push ecx
// 004d6477  8bcf                 mov ecx, edi
// 004d6479  e872f6ffff           call 0x4d5af0
// 004d647e  8b10                 mov edx, dword ptr [eax]
// 004d6480  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d6484  5f                   pop edi
// 004d6485  5e                   pop esi
// 004d6486  c6400401             mov byte ptr [eax + 4], 1
// 004d648a  8910                 mov dword ptr [eax], edx
// 004d648c  5d                   pop ebp
// 004d648d  59                   pop ecx
// 004d648e  c20800               ret 8
// 004d6491  e83a322d00           call 0x7a96d0
// 004d6496  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d649a  8b420c               mov eax, dword ptr [edx + 0xc]
// 004d649d  3b4500               cmp eax, dword ptr [ebp]
// 004d64a0  7d26                 jge 0x4d64c8
// 004d64a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d64a6  55                   push ebp
// 004d64a7  56                   push esi
// 004d64a8  51                   push ecx
// 004d64a9  8d542424             lea edx, [esp + 0x24]
// 004d64ad  52                   push edx
// 004d64ae  8bcf                 mov ecx, edi
// 004d64b0  e83bf6ffff           call 0x4d5af0
// 004d64b5  8b08                 mov ecx, dword ptr [eax]
// 004d64b7  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d64bb  5f                   pop edi
// 004d64bc  5e                   pop esi
// 004d64bd  8908                 mov dword ptr [eax], ecx
// 004d64bf  c6400401             mov byte ptr [eax + 4], 1
// 004d64c3  5d                   pop ebp
// 004d64c4  59                   pop ecx
// 004d64c5  c20800               ret 8
// 004d64c8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d64cc  5f                   pop edi
// 004d64cd  5e                   pop esi
// 004d64ce  c6400400             mov byte ptr [eax + 4], 0
// 004d64d2  8910                 mov dword ptr [eax], edx
// 004d64d4  5d                   pop ebp
// 004d64d5  59                   pop ecx
// 004d64d6  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;