// roc 2011-06 005aa7a0  unit: RBX::FriendService::W4FriendEventType::?$EnumDesc  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005aa7a0
//
// 005aa7a0  51                   push ecx
// 005aa7a1  55                   push ebp
// 005aa7a2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005aa7a6  56                   push esi
// 005aa7a7  57                   push edi
// 005aa7a8  8bf9                 mov edi, ecx
// 005aa7aa  8b7704               mov esi, dword ptr [edi + 4]
// 005aa7ad  8b4604               mov eax, dword ptr [esi + 4]
// 005aa7b0  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005aa7b4  b101                 mov cl, 1
// 005aa7b6  884c240c             mov byte ptr [esp + 0xc], cl
// 005aa7ba  7521                 jne 0x5aa7dd
// 005aa7bc  8b5500               mov edx, dword ptr [ebp]
// 005aa7bf  90                   nop 
// 005aa7c0  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005aa7c3  8bf0                 mov esi, eax
// 005aa7c5  0f9cc1               setl cl
// 005aa7c8  884c240c             mov byte ptr [esp + 0xc], cl
// 005aa7cc  84c9                 test cl, cl
// 005aa7ce  7404                 je 0x5aa7d4
// 005aa7d0  8b00                 mov eax, dword ptr [eax]
// 005aa7d2  eb03                 jmp 0x5aa7d7
// 005aa7d4  8b4008               mov eax, dword ptr [eax + 8]
// 005aa7d7  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005aa7db  74e3                 je 0x5aa7c0
// 005aa7dd  8bd6                 mov edx, esi
// 005aa7df  89542418             mov dword ptr [esp + 0x18], edx
// 005aa7e3  84c9                 test cl, cl
// 005aa7e5  7433                 je 0x5aa81a
// 005aa7e7  8b4704               mov eax, dword ptr [edi + 4]
// 005aa7ea  8d4c2418             lea ecx, [esp + 0x18]
// 005aa7ee  3b30                 cmp esi, dword ptr [eax]
// 005aa7f0  751f                 jne 0x5aa811
// 005aa7f2  55                   push ebp
// 005aa7f3  56                   push esi
// 005aa7f4  6a01                 push 1
// 005aa7f6  51                   push ecx
// 005aa7f7  8bcf                 mov ecx, edi
// 005aa7f9  e8d2f5ffff           call 0x5a9dd0
// 005aa7fe  8b10                 mov edx, dword ptr [eax]
// 005aa800  8b442414             mov eax, dword ptr [esp + 0x14]
// 005aa804  5f                   pop edi
// 005aa805  5e                   pop esi
// 005aa806  c6400401             mov byte ptr [eax + 4], 1
// 005aa80a  8910                 mov dword ptr [eax], edx
// 005aa80c  5d                   pop ebp
// 005aa80d  59                   pop ecx
// 005aa80e  c20800               ret 8
// 005aa811  e8baee1f00           call 0x7a96d0
// 005aa816  8b542418             mov edx, dword ptr [esp + 0x18]
// 005aa81a  8b420c               mov eax, dword ptr [edx + 0xc]
// 005aa81d  3b4500               cmp eax, dword ptr [ebp]
// 005aa820  7d26                 jge 0x5aa848
// 005aa822  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005aa826  55                   push ebp
// 005aa827  56                   push esi
// 005aa828  51                   push ecx
// 005aa829  8d542424             lea edx, [esp + 0x24]
// 005aa82d  52                   push edx
// 005aa82e  8bcf                 mov ecx, edi
// 005aa830  e89bf5ffff           call 0x5a9dd0
// 005aa835  8b08                 mov ecx, dword ptr [eax]
// 005aa837  8b442414             mov eax, dword ptr [esp + 0x14]
// 005aa83b  5f                   pop edi
// 005aa83c  5e                   pop esi
// 005aa83d  8908                 mov dword ptr [eax], ecx
// 005aa83f  c6400401             mov byte ptr [eax + 4], 1
// 005aa843  5d                   pop ebp
// 005aa844  59                   pop ecx
// 005aa845  c20800               ret 8
// 005aa848  8b442414             mov eax, dword ptr [esp + 0x14]
// 005aa84c  5f                   pop edi
// 005aa84d  5e                   pop esi
// 005aa84e  c6400400             mov byte ptr [eax + 4], 0
// 005aa852  8910                 mov dword ptr [eax], edx
// 005aa854  5d                   pop ebp
// 005aa855  59                   pop ecx
// 005aa856  c20800               ret 8
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