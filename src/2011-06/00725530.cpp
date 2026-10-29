// roc 2011-06 00725530  unit: RBX::VBadgeService::?$BoundFuncDesc  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00725530
//
// 00725530  51                   push ecx
// 00725531  55                   push ebp
// 00725532  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00725536  56                   push esi
// 00725537  57                   push edi
// 00725538  8bf9                 mov edi, ecx
// 0072553a  8b7704               mov esi, dword ptr [edi + 4]
// 0072553d  8b4604               mov eax, dword ptr [esi + 4]
// 00725540  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00725544  b101                 mov cl, 1
// 00725546  884c240c             mov byte ptr [esp + 0xc], cl
// 0072554a  7521                 jne 0x72556d
// 0072554c  8b5500               mov edx, dword ptr [ebp]
// 0072554f  90                   nop 
// 00725550  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00725553  8bf0                 mov esi, eax
// 00725555  0f9cc1               setl cl
// 00725558  884c240c             mov byte ptr [esp + 0xc], cl
// 0072555c  84c9                 test cl, cl
// 0072555e  7404                 je 0x725564
// 00725560  8b00                 mov eax, dword ptr [eax]
// 00725562  eb03                 jmp 0x725567
// 00725564  8b4008               mov eax, dword ptr [eax + 8]
// 00725567  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0072556b  74e3                 je 0x725550
// 0072556d  8bd6                 mov edx, esi
// 0072556f  89542418             mov dword ptr [esp + 0x18], edx
// 00725573  84c9                 test cl, cl
// 00725575  7433                 je 0x7255aa
// 00725577  8b4704               mov eax, dword ptr [edi + 4]
// 0072557a  8d4c2418             lea ecx, [esp + 0x18]
// 0072557e  3b30                 cmp esi, dword ptr [eax]
// 00725580  751f                 jne 0x7255a1
// 00725582  55                   push ebp
// 00725583  56                   push esi
// 00725584  6a01                 push 1
// 00725586  51                   push ecx
// 00725587  8bcf                 mov ecx, edi
// 00725589  e802f3ffff           call 0x724890
// 0072558e  8b10                 mov edx, dword ptr [eax]
// 00725590  8b442414             mov eax, dword ptr [esp + 0x14]
// 00725594  5f                   pop edi
// 00725595  5e                   pop esi
// 00725596  c6400401             mov byte ptr [eax + 4], 1
// 0072559a  8910                 mov dword ptr [eax], edx
// 0072559c  5d                   pop ebp
// 0072559d  59                   pop ecx
// 0072559e  c20800               ret 8
// 007255a1  e82a410800           call 0x7a96d0
// 007255a6  8b542418             mov edx, dword ptr [esp + 0x18]
// 007255aa  8b420c               mov eax, dword ptr [edx + 0xc]
// 007255ad  3b4500               cmp eax, dword ptr [ebp]
// 007255b0  7d26                 jge 0x7255d8
// 007255b2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007255b6  55                   push ebp
// 007255b7  56                   push esi
// 007255b8  51                   push ecx
// 007255b9  8d542424             lea edx, [esp + 0x24]
// 007255bd  52                   push edx
// 007255be  8bcf                 mov ecx, edi
// 007255c0  e8cbf2ffff           call 0x724890
// 007255c5  8b08                 mov ecx, dword ptr [eax]
// 007255c7  8b442414             mov eax, dword ptr [esp + 0x14]
// 007255cb  5f                   pop edi
// 007255cc  5e                   pop esi
// 007255cd  8908                 mov dword ptr [eax], ecx
// 007255cf  c6400401             mov byte ptr [eax + 4], 1
// 007255d3  5d                   pop ebp
// 007255d4  59                   pop ecx
// 007255d5  c20800               ret 8
// 007255d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007255dc  5f                   pop edi
// 007255dd  5e                   pop esi
// 007255de  c6400400             mov byte ptr [eax + 4], 0
// 007255e2  8910                 mov dword ptr [eax], edx
// 007255e4  5d                   pop ebp
// 007255e5  59                   pop ecx
// 007255e6  c20800               ret 8
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