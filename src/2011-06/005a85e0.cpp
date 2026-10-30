// roc 2011-06 005a85e0  unit: RBX::VFriendService::?$FactoryProduct  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a85e0
//
// 005a85e0  51                   push ecx
// 005a85e1  55                   push ebp
// 005a85e2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a85e6  56                   push esi
// 005a85e7  57                   push edi
// 005a85e8  8bf9                 mov edi, ecx
// 005a85ea  8b7704               mov esi, dword ptr [edi + 4]
// 005a85ed  8b4604               mov eax, dword ptr [esi + 4]
// 005a85f0  80781500             cmp byte ptr [eax + 0x15], 0
// 005a85f4  b101                 mov cl, 1
// 005a85f6  884c240c             mov byte ptr [esp + 0xc], cl
// 005a85fa  7521                 jne 0x5a861d
// 005a85fc  8b5500               mov edx, dword ptr [ebp]
// 005a85ff  90                   nop 
// 005a8600  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005a8603  8bf0                 mov esi, eax
// 005a8605  0f9cc1               setl cl
// 005a8608  884c240c             mov byte ptr [esp + 0xc], cl
// 005a860c  84c9                 test cl, cl
// 005a860e  7404                 je 0x5a8614
// 005a8610  8b00                 mov eax, dword ptr [eax]
// 005a8612  eb03                 jmp 0x5a8617
// 005a8614  8b4008               mov eax, dword ptr [eax + 8]
// 005a8617  80781500             cmp byte ptr [eax + 0x15], 0
// 005a861b  74e3                 je 0x5a8600
// 005a861d  8bd6                 mov edx, esi
// 005a861f  89542418             mov dword ptr [esp + 0x18], edx
// 005a8623  84c9                 test cl, cl
// 005a8625  7433                 je 0x5a865a
// 005a8627  8b4704               mov eax, dword ptr [edi + 4]
// 005a862a  8d4c2418             lea ecx, [esp + 0x18]
// 005a862e  3b30                 cmp esi, dword ptr [eax]
// 005a8630  751f                 jne 0x5a8651
// 005a8632  55                   push ebp
// 005a8633  56                   push esi
// 005a8634  6a01                 push 1
// 005a8636  51                   push ecx
// 005a8637  8bcf                 mov ecx, edi
// 005a8639  e862f9ffff           call 0x5a7fa0
// 005a863e  8b10                 mov edx, dword ptr [eax]
// 005a8640  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a8644  5f                   pop edi
// 005a8645  5e                   pop esi
// 005a8646  c6400401             mov byte ptr [eax + 4], 1
// 005a864a  8910                 mov dword ptr [eax], edx
// 005a864c  5d                   pop ebp
// 005a864d  59                   pop ecx
// 005a864e  c20800               ret 8
// 005a8651  e89a93eaff           call 0x4519f0
// 005a8656  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a865a  8b420c               mov eax, dword ptr [edx + 0xc]
// 005a865d  3b4500               cmp eax, dword ptr [ebp]
// 005a8660  7d26                 jge 0x5a8688
// 005a8662  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a8666  55                   push ebp
// 005a8667  56                   push esi
// 005a8668  51                   push ecx
// 005a8669  8d542424             lea edx, [esp + 0x24]
// 005a866d  52                   push edx
// 005a866e  8bcf                 mov ecx, edi
// 005a8670  e82bf9ffff           call 0x5a7fa0
// 005a8675  8b08                 mov ecx, dword ptr [eax]
// 005a8677  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a867b  5f                   pop edi
// 005a867c  5e                   pop esi
// 005a867d  8908                 mov dword ptr [eax], ecx
// 005a867f  c6400401             mov byte ptr [eax + 4], 1
// 005a8683  5d                   pop ebp
// 005a8684  59                   pop ecx
// 005a8685  c20800               ret 8
// 005a8688  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a868c  5f                   pop edi
// 005a868d  5e                   pop esi
// 005a868e  c6400400             mov byte ptr [eax + 4], 0
// 005a8692  8910                 mov dword ptr [eax], edx
// 005a8694  5d                   pop ebp
// 005a8695  59                   pop ecx
// 005a8696  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHH@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;