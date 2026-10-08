// roc 2007-03 00567e50  unit: seg_00560000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00567e50
//
// 00567e50  83ec0c               sub esp, 0xc
// 00567e53  53                   push ebx
// 00567e54  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00567e58  55                   push ebp
// 00567e59  56                   push esi
// 00567e5a  8be9                 mov ebp, ecx
// 00567e5c  57                   push edi
// 00567e5d  8b7d04               mov edi, dword ptr [ebp + 4]
// 00567e60  8b7704               mov esi, dword ptr [edi + 4]
// 00567e63  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00567e67  b001                 mov al, 1
// 00567e69  88442410             mov byte ptr [esp + 0x10], al
// 00567e6d  7525                 jne 0x567e94
// 00567e6f  90                   nop 
// 00567e70  8d460c               lea eax, [esi + 0xc]
// 00567e73  50                   push eax
// 00567e74  53                   push ebx
// 00567e75  8bfe                 mov edi, esi
// 00567e77  e8c4c8fdff           call 0x544740
// 00567e7c  83c408               add esp, 8
// 00567e7f  84c0                 test al, al
// 00567e81  88442410             mov byte ptr [esp + 0x10], al
// 00567e85  7404                 je 0x567e8b
// 00567e87  8b36                 mov esi, dword ptr [esi]
// 00567e89  eb03                 jmp 0x567e8e
// 00567e8b  8b7608               mov esi, dword ptr [esi + 8]
// 00567e8e  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00567e92  74dc                 je 0x567e70
// 00567e94  84c0                 test al, al
// 00567e96  8bf7                 mov esi, edi
// 00567e98  89742418             mov dword ptr [esp + 0x18], esi
// 00567e9c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00567ea0  7442                 je 0x567ee4
// 00567ea2  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00567ea5  3b39                 cmp edi, dword ptr [ecx]
// 00567ea7  752e                 jne 0x567ed7
// 00567ea9  53                   push ebx
// 00567eaa  57                   push edi
// 00567eab  6a01                 push 1
// 00567ead  8d542420             lea edx, [esp + 0x20]
// 00567eb1  52                   push edx
// 00567eb2  8bcd                 mov ecx, ebp
// 00567eb4  e897fdffff           call 0x567c50
// 00567eb9  5f                   pop edi
// 00567eba  8bc8                 mov ecx, eax
// 00567ebc  8b11                 mov edx, dword ptr [ecx]
// 00567ebe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00567ec2  8b4904               mov ecx, dword ptr [ecx + 4]
// 00567ec5  5e                   pop esi
// 00567ec6  5d                   pop ebp
// 00567ec7  894804               mov dword ptr [eax + 4], ecx
// 00567eca  c6400801             mov byte ptr [eax + 8], 1
// 00567ece  8910                 mov dword ptr [eax], edx
// 00567ed0  5b                   pop ebx
// 00567ed1  83c40c               add esp, 0xc
// 00567ed4  c20800               ret 8
// 00567ed7  8d4c2414             lea ecx, [esp + 0x14]
// 00567edb  e820020900           call 0x5f8100
// 00567ee0  8b742418             mov esi, dword ptr [esp + 0x18]
// 00567ee4  8d560c               lea edx, [esi + 0xc]
// 00567ee7  53                   push ebx
// 00567ee8  52                   push edx
// 00567ee9  e852c8fdff           call 0x544740
// 00567eee  83c408               add esp, 8
// 00567ef1  84c0                 test al, al
// 00567ef3  7431                 je 0x567f26
// 00567ef5  8b442410             mov eax, dword ptr [esp + 0x10]
// 00567ef9  53                   push ebx
// 00567efa  57                   push edi
// 00567efb  50                   push eax
// 00567efc  8d4c2420             lea ecx, [esp + 0x20]
// 00567f00  51                   push ecx
// 00567f01  8bcd                 mov ecx, ebp
// 00567f03  e848fdffff           call 0x567c50
// 00567f08  5f                   pop edi
// 00567f09  8bc8                 mov ecx, eax
// 00567f0b  8b11                 mov edx, dword ptr [ecx]
// 00567f0d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00567f11  8b4904               mov ecx, dword ptr [ecx + 4]
// 00567f14  5e                   pop esi
// 00567f15  5d                   pop ebp
// 00567f16  894804               mov dword ptr [eax + 4], ecx
// 00567f19  c6400801             mov byte ptr [eax + 8], 1
// 00567f1d  8910                 mov dword ptr [eax], edx
// 00567f1f  5b                   pop ebx
// 00567f20  83c40c               add esp, 0xc
// 00567f23  c20800               ret 8
// 00567f26  8b442420             mov eax, dword ptr [esp + 0x20]
// 00567f2a  8b542414             mov edx, dword ptr [esp + 0x14]
// 00567f2e  5f                   pop edi
// 00567f2f  897004               mov dword ptr [eax + 4], esi
// 00567f32  5e                   pop esi
// 00567f33  5d                   pop ebp
// 00567f34  c6400800             mov byte ptr [eax + 8], 0
// 00567f38  8910                 mov dword ptr [eax], edx
// 00567f3a  5b                   pop ebx
// 00567f3b  83c40c               add esp, 0xc
// 00567f3e  c20800               ret 8
// library rbxgs/v8xml\XmlSerializer.cpp (function ?insert@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@_N@2@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
