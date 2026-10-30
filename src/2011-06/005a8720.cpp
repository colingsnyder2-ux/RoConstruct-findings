// roc 2011-06 005a8720  unit: RBX::VFriendService::?$FactoryProduct  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a8720
//
// 005a8720  83ec08               sub esp, 8
// 005a8723  56                   push esi
// 005a8724  57                   push edi
// 005a8725  8bf9                 mov edi, ecx
// 005a8727  837f0800             cmp dword ptr [edi + 8], 0
// 005a872b  7521                 jne 0x5a874e
// 005a872d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a8731  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a8734  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a8738  50                   push eax
// 005a8739  51                   push ecx
// 005a873a  6a01                 push 1
// 005a873c  56                   push esi
// 005a873d  8bcf                 mov ecx, edi
// 005a873f  e85cf8ffff           call 0x5a7fa0
// 005a8744  5f                   pop edi
// 005a8745  8bc6                 mov eax, esi
// 005a8747  5e                   pop esi
// 005a8748  83c408               add esp, 8
// 005a874b  c20c00               ret 0xc
// 005a874e  8b4704               mov eax, dword ptr [edi + 4]
// 005a8751  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005a8755  53                   push ebx
// 005a8756  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a875a  55                   push ebp
// 005a875b  3b18                 cmp ebx, dword ptr [eax]
// 005a875d  7525                 jne 0x5a8784
// 005a875f  8b16                 mov edx, dword ptr [esi]
// 005a8761  3b530c               cmp edx, dword ptr [ebx + 0xc]
// 005a8764  0f8df9000000         jge 0x5a8863
// 005a876a  56                   push esi
// 005a876b  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a876f  53                   push ebx
// 005a8770  6a01                 push 1
// 005a8772  56                   push esi
// 005a8773  e828f8ffff           call 0x5a7fa0
// 005a8778  5d                   pop ebp
// 005a8779  5b                   pop ebx
// 005a877a  5f                   pop edi
// 005a877b  8bc6                 mov eax, esi
// 005a877d  5e                   pop esi
// 005a877e  83c408               add esp, 8
// 005a8781  c20c00               ret 0xc
// 005a8784  3bd8                 cmp ebx, eax
// 005a8786  752a                 jne 0x5a87b2
// 005a8788  8b4008               mov eax, dword ptr [eax + 8]
// 005a878b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005a878e  3b0e                 cmp ecx, dword ptr [esi]
// 005a8790  0f8dcd000000         jge 0x5a8863
// 005a8796  56                   push esi
// 005a8797  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a879b  50                   push eax
// 005a879c  6a00                 push 0
// 005a879e  56                   push esi
// 005a879f  8bcf                 mov ecx, edi
// 005a87a1  e8faf7ffff           call 0x5a7fa0
// 005a87a6  5d                   pop ebp
// 005a87a7  5b                   pop ebx
// 005a87a8  5f                   pop edi
// 005a87a9  8bc6                 mov eax, esi
// 005a87ab  5e                   pop esi
// 005a87ac  83c408               add esp, 8
// 005a87af  c20c00               ret 0xc
// 005a87b2  8b2e                 mov ebp, dword ptr [esi]
// 005a87b4  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 005a87b7  7e53                 jle 0x5a880c
// 005a87b9  8d4c2424             lea ecx, [esp + 0x24]
// 005a87bd  895c2424             mov dword ptr [esp + 0x24], ebx
// 005a87c1  e82a92eaff           call 0x4519f0
// 005a87c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a87ca  39680c               cmp dword ptr [eax + 0xc], ebp
// 005a87cd  7d3a                 jge 0x5a8809
// 005a87cf  8b5008               mov edx, dword ptr [eax + 8]
// 005a87d2  807a1500             cmp byte ptr [edx + 0x15], 0
// 005a87d6  56                   push esi
// 005a87d7  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a87db  8bcf                 mov ecx, edi
// 005a87dd  7415                 je 0x5a87f4
// 005a87df  50                   push eax
// 005a87e0  6a00                 push 0
// 005a87e2  56                   push esi
// 005a87e3  e8b8f7ffff           call 0x5a7fa0
// 005a87e8  5d                   pop ebp
// 005a87e9  5b                   pop ebx
// 005a87ea  5f                   pop edi
// 005a87eb  8bc6                 mov eax, esi
// 005a87ed  5e                   pop esi
// 005a87ee  83c408               add esp, 8
// 005a87f1  c20c00               ret 0xc
// 005a87f4  53                   push ebx
// 005a87f5  6a01                 push 1
// 005a87f7  56                   push esi
// 005a87f8  e8a3f7ffff           call 0x5a7fa0
// 005a87fd  5d                   pop ebp
// 005a87fe  5b                   pop ebx
// 005a87ff  5f                   pop edi
// 005a8800  8bc6                 mov eax, esi
// 005a8802  5e                   pop esi
// 005a8803  83c408               add esp, 8
// 005a8806  c20c00               ret 0xc
// 005a8809  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 005a880c  7d55                 jge 0x5a8863
// 005a880e  8d4c2424             lea ecx, [esp + 0x24]
// 005a8812  895c2424             mov dword ptr [esp + 0x24], ebx
// 005a8816  e8556e0100           call 0x5bf670
// 005a881b  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a881f  3b4704               cmp eax, dword ptr [edi + 4]
// 005a8822  7405                 je 0x5a8829
// 005a8824  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 005a8827  7d3a                 jge 0x5a8863
// 005a8829  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005a882c  80791500             cmp byte ptr [ecx + 0x15], 0
// 005a8830  56                   push esi
// 005a8831  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a8835  8bcf                 mov ecx, edi
// 005a8837  7415                 je 0x5a884e
// 005a8839  53                   push ebx
// 005a883a  6a00                 push 0
// 005a883c  56                   push esi
// 005a883d  e85ef7ffff           call 0x5a7fa0
// 005a8842  5d                   pop ebp
// 005a8843  5b                   pop ebx
// 005a8844  5f                   pop edi
// 005a8845  8bc6                 mov eax, esi
// 005a8847  5e                   pop esi
// 005a8848  83c408               add esp, 8
// 005a884b  c20c00               ret 0xc
// 005a884e  50                   push eax
// 005a884f  6a01                 push 1
// 005a8851  56                   push esi
// 005a8852  e849f7ffff           call 0x5a7fa0
// 005a8857  5d                   pop ebp
// 005a8858  5b                   pop ebx
// 005a8859  5f                   pop edi
// 005a885a  8bc6                 mov eax, esi
// 005a885c  5e                   pop esi
// 005a885d  83c408               add esp, 8
// 005a8860  c20c00               ret 0xc
// 005a8863  56                   push esi
// 005a8864  8d542414             lea edx, [esp + 0x14]
// 005a8868  52                   push edx
// 005a8869  8bcf                 mov ecx, edi
// 005a886b  e870fdffff           call 0x5a85e0
// 005a8870  8b08                 mov ecx, dword ptr [eax]
// 005a8872  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a8876  5d                   pop ebp
// 005a8877  5b                   pop ebx
// 005a8878  5f                   pop edi
// 005a8879  8908                 mov dword ptr [eax], ecx
// 005a887b  5e                   pop esi
// 005a887c  83c408               add esp, 8
// 005a887f  c20c00               ret 0xc
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@ABU?$pair@$$CBHH@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;