// roc 2010-06 004e9370  unit: G3D::VRay::?$holder  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e9370
//
// 004e9370  51                   push ecx
// 004e9371  53                   push ebx
// 004e9372  55                   push ebp
// 004e9373  56                   push esi
// 004e9374  57                   push edi
// 004e9375  8bf9                 mov edi, ecx
// 004e9377  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e937a  8b7004               mov esi, dword ptr [eax + 4]
// 004e937d  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e9381  897c2410             mov dword ptr [esp + 0x10], edi
// 004e9385  8be8                 mov ebp, eax
// 004e9387  8bd8                 mov ebx, eax
// 004e9389  7541                 jne 0x4e93cc
// 004e938b  eb03                 jmp 0x4e9390
// 004e938d  8d4900               lea ecx, [ecx]
// 004e9390  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e9394  8d7e0c               lea edi, [esi + 0xc]
// 004e9397  50                   push eax
// 004e9398  8bcf                 mov ecx, edi
// 004e939a  e831101200           call 0x60a3d0
// 004e939f  84c0                 test al, al
// 004e93a1  7405                 je 0x4e93a8
// 004e93a3  8b7608               mov esi, dword ptr [esi + 8]
// 004e93a6  eb1a                 jmp 0x4e93c2
// 004e93a8  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e93ac  7410                 je 0x4e93be
// 004e93ae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e93b2  57                   push edi
// 004e93b3  e818101200           call 0x60a3d0
// 004e93b8  84c0                 test al, al
// 004e93ba  7402                 je 0x4e93be
// 004e93bc  8bde                 mov ebx, esi
// 004e93be  8bee                 mov ebp, esi
// 004e93c0  8b36                 mov esi, dword ptr [esi]
// 004e93c2  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e93c6  74c8                 je 0x4e9390
// 004e93c8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e93cc  807b1900             cmp byte ptr [ebx + 0x19], 0
// 004e93d0  7408                 je 0x4e93da
// 004e93d2  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004e93d5  8b7104               mov esi, dword ptr [ecx + 4]
// 004e93d8  eb02                 jmp 0x4e93dc
// 004e93da  8b33                 mov esi, dword ptr [ebx]
// 004e93dc  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e93e0  7520                 jne 0x4e9402
// 004e93e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e93e6  8d560c               lea edx, [esi + 0xc]
// 004e93e9  52                   push edx
// 004e93ea  e8e10f1200           call 0x60a3d0
// 004e93ef  84c0                 test al, al
// 004e93f1  7406                 je 0x4e93f9
// 004e93f3  8bde                 mov ebx, esi
// 004e93f5  8b36                 mov esi, dword ptr [esi]
// 004e93f7  eb03                 jmp 0x4e93fc
// 004e93f9  8b7608               mov esi, dword ptr [esi + 8]
// 004e93fc  807e1900             cmp byte ptr [esi + 0x19], 0
// 004e9400  74e0                 je 0x4e93e2
// 004e9402  8b0f                 mov ecx, dword ptr [edi]
// 004e9404  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e9408  5f                   pop edi
// 004e9409  5e                   pop esi
// 004e940a  896804               mov dword ptr [eax + 4], ebp
// 004e940d  5d                   pop ebp
// 004e940e  89580c               mov dword ptr [eax + 0xc], ebx
// 004e9411  8908                 mov dword ptr [eax], ecx
// 004e9413  894808               mov dword ptr [eax + 8], ecx
// 004e9416  5b                   pop ebx
// 004e9417  59                   pop ecx
// 004e9418  c20800               ret 8
// library rbxgs-net/IdManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@V123@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
