// roc 2009-12 0053ae50  unit: G3D::VRay::?$holder  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053ae50
//
// 0053ae50  51                   push ecx
// 0053ae51  53                   push ebx
// 0053ae52  55                   push ebp
// 0053ae53  56                   push esi
// 0053ae54  57                   push edi
// 0053ae55  8bf9                 mov edi, ecx
// 0053ae57  8b4718               mov eax, dword ptr [edi + 0x18]
// 0053ae5a  8b7004               mov esi, dword ptr [eax + 4]
// 0053ae5d  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053ae61  897c2410             mov dword ptr [esp + 0x10], edi
// 0053ae65  8be8                 mov ebp, eax
// 0053ae67  8bd8                 mov ebx, eax
// 0053ae69  7541                 jne 0x53aeac
// 0053ae6b  eb03                 jmp 0x53ae70
// 0053ae6d  8d4900               lea ecx, [ecx]
// 0053ae70  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053ae74  8d7e0c               lea edi, [esi + 0xc]
// 0053ae77  50                   push eax
// 0053ae78  8bcf                 mov ecx, edi
// 0053ae7a  e8613c1600           call 0x69eae0
// 0053ae7f  84c0                 test al, al
// 0053ae81  7405                 je 0x53ae88
// 0053ae83  8b7608               mov esi, dword ptr [esi + 8]
// 0053ae86  eb1a                 jmp 0x53aea2
// 0053ae88  807b1900             cmp byte ptr [ebx + 0x19], 0
// 0053ae8c  7410                 je 0x53ae9e
// 0053ae8e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053ae92  57                   push edi
// 0053ae93  e8483c1600           call 0x69eae0
// 0053ae98  84c0                 test al, al
// 0053ae9a  7402                 je 0x53ae9e
// 0053ae9c  8bde                 mov ebx, esi
// 0053ae9e  8bee                 mov ebp, esi
// 0053aea0  8b36                 mov esi, dword ptr [esi]
// 0053aea2  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053aea6  74c8                 je 0x53ae70
// 0053aea8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053aeac  807b1900             cmp byte ptr [ebx + 0x19], 0
// 0053aeb0  7408                 je 0x53aeba
// 0053aeb2  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0053aeb5  8b7104               mov esi, dword ptr [ecx + 4]
// 0053aeb8  eb02                 jmp 0x53aebc
// 0053aeba  8b33                 mov esi, dword ptr [ebx]
// 0053aebc  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053aec0  7520                 jne 0x53aee2
// 0053aec2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053aec6  8d560c               lea edx, [esi + 0xc]
// 0053aec9  52                   push edx
// 0053aeca  e8113c1600           call 0x69eae0
// 0053aecf  84c0                 test al, al
// 0053aed1  7406                 je 0x53aed9
// 0053aed3  8bde                 mov ebx, esi
// 0053aed5  8b36                 mov esi, dword ptr [esi]
// 0053aed7  eb03                 jmp 0x53aedc
// 0053aed9  8b7608               mov esi, dword ptr [esi + 8]
// 0053aedc  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053aee0  74e0                 je 0x53aec2
// 0053aee2  8b0f                 mov ecx, dword ptr [edi]
// 0053aee4  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053aee8  5f                   pop edi
// 0053aee9  5e                   pop esi
// 0053aeea  896804               mov dword ptr [eax + 4], ebp
// 0053aeed  5d                   pop ebp
// 0053aeee  89580c               mov dword ptr [eax + 0xc], ebx
// 0053aef1  8908                 mov dword ptr [eax], ecx
// 0053aef3  894808               mov dword ptr [eax + 8], ecx
// 0053aef6  5b                   pop ebx
// 0053aef7  59                   pop ecx
// 0053aef8  c20800               ret 8
// library rbxgs-net/IdManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@V123@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
