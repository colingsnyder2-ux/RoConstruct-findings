// roc 2011-06 00739c00  unit: RBX::VInstance::?$NonFactoryProduct  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00739c00
//
// 00739c00  51                   push ecx
// 00739c01  55                   push ebp
// 00739c02  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00739c06  56                   push esi
// 00739c07  57                   push edi
// 00739c08  8bf9                 mov edi, ecx
// 00739c0a  8b7704               mov esi, dword ptr [edi + 4]
// 00739c0d  8b4604               mov eax, dword ptr [esi + 4]
// 00739c10  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00739c14  b101                 mov cl, 1
// 00739c16  884c240c             mov byte ptr [esp + 0xc], cl
// 00739c1a  7521                 jne 0x739c3d
// 00739c1c  8b5500               mov edx, dword ptr [ebp]
// 00739c1f  90                   nop 
// 00739c20  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00739c23  8bf0                 mov esi, eax
// 00739c25  0f9cc1               setl cl
// 00739c28  884c240c             mov byte ptr [esp + 0xc], cl
// 00739c2c  84c9                 test cl, cl
// 00739c2e  7404                 je 0x739c34
// 00739c30  8b00                 mov eax, dword ptr [eax]
// 00739c32  eb03                 jmp 0x739c37
// 00739c34  8b4008               mov eax, dword ptr [eax + 8]
// 00739c37  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00739c3b  74e3                 je 0x739c20
// 00739c3d  8bd6                 mov edx, esi
// 00739c3f  89542418             mov dword ptr [esp + 0x18], edx
// 00739c43  84c9                 test cl, cl
// 00739c45  7433                 je 0x739c7a
// 00739c47  8b4704               mov eax, dword ptr [edi + 4]
// 00739c4a  8d4c2418             lea ecx, [esp + 0x18]
// 00739c4e  3b30                 cmp esi, dword ptr [eax]
// 00739c50  751f                 jne 0x739c71
// 00739c52  55                   push ebp
// 00739c53  56                   push esi
// 00739c54  6a01                 push 1
// 00739c56  51                   push ecx
// 00739c57  8bcf                 mov ecx, edi
// 00739c59  e852fcffff           call 0x7398b0
// 00739c5e  8b10                 mov edx, dword ptr [eax]
// 00739c60  8b442414             mov eax, dword ptr [esp + 0x14]
// 00739c64  5f                   pop edi
// 00739c65  5e                   pop esi
// 00739c66  c6400401             mov byte ptr [eax + 4], 1
// 00739c6a  8910                 mov dword ptr [eax], edx
// 00739c6c  5d                   pop ebp
// 00739c6d  59                   pop ecx
// 00739c6e  c20800               ret 8
// 00739c71  e85afa0600           call 0x7a96d0
// 00739c76  8b542418             mov edx, dword ptr [esp + 0x18]
// 00739c7a  8b420c               mov eax, dword ptr [edx + 0xc]
// 00739c7d  3b4500               cmp eax, dword ptr [ebp]
// 00739c80  7d26                 jge 0x739ca8
// 00739c82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00739c86  55                   push ebp
// 00739c87  56                   push esi
// 00739c88  51                   push ecx
// 00739c89  8d542424             lea edx, [esp + 0x24]
// 00739c8d  52                   push edx
// 00739c8e  8bcf                 mov ecx, edi
// 00739c90  e81bfcffff           call 0x7398b0
// 00739c95  8b08                 mov ecx, dword ptr [eax]
// 00739c97  8b442414             mov eax, dword ptr [esp + 0x14]
// 00739c9b  5f                   pop edi
// 00739c9c  5e                   pop esi
// 00739c9d  8908                 mov dword ptr [eax], ecx
// 00739c9f  c6400401             mov byte ptr [eax + 4], 1
// 00739ca3  5d                   pop ebp
// 00739ca4  59                   pop ecx
// 00739ca5  c20800               ret 8
// 00739ca8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00739cac  5f                   pop edi
// 00739cad  5e                   pop esi
// 00739cae  c6400400             mov byte ptr [eax + 4], 0
// 00739cb2  8910                 mov dword ptr [eax], edx
// 00739cb4  5d                   pop ebp
// 00739cb5  59                   pop ecx
// 00739cb6  c20800               ret 8
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