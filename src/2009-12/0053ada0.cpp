// roc 2009-12 0053ada0  unit: G3D::VRay::?$holder  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053ada0
//
// 0053ada0  51                   push ecx
// 0053ada1  53                   push ebx
// 0053ada2  55                   push ebp
// 0053ada3  56                   push esi
// 0053ada4  57                   push edi
// 0053ada5  8bf9                 mov edi, ecx
// 0053ada7  8b4718               mov eax, dword ptr [edi + 0x18]
// 0053adaa  8b7004               mov esi, dword ptr [eax + 4]
// 0053adad  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053adb1  897c2410             mov dword ptr [esp + 0x10], edi
// 0053adb5  8be8                 mov ebp, eax
// 0053adb7  8bd8                 mov ebx, eax
// 0053adb9  7541                 jne 0x53adfc
// 0053adbb  eb03                 jmp 0x53adc0
// 0053adbd  8d4900               lea ecx, [ecx]
// 0053adc0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053adc4  8d7e0c               lea edi, [esi + 0xc]
// 0053adc7  50                   push eax
// 0053adc8  8bcf                 mov ecx, edi
// 0053adca  e841831d00           call 0x713110
// 0053adcf  84c0                 test al, al
// 0053add1  7405                 je 0x53add8
// 0053add3  8b7608               mov esi, dword ptr [esi + 8]
// 0053add6  eb1a                 jmp 0x53adf2
// 0053add8  807b1900             cmp byte ptr [ebx + 0x19], 0
// 0053addc  7410                 je 0x53adee
// 0053adde  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053ade2  57                   push edi
// 0053ade3  e828831d00           call 0x713110
// 0053ade8  84c0                 test al, al
// 0053adea  7402                 je 0x53adee
// 0053adec  8bde                 mov ebx, esi
// 0053adee  8bee                 mov ebp, esi
// 0053adf0  8b36                 mov esi, dword ptr [esi]
// 0053adf2  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053adf6  74c8                 je 0x53adc0
// 0053adf8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053adfc  807b1900             cmp byte ptr [ebx + 0x19], 0
// 0053ae00  7408                 je 0x53ae0a
// 0053ae02  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0053ae05  8b7104               mov esi, dword ptr [ecx + 4]
// 0053ae08  eb02                 jmp 0x53ae0c
// 0053ae0a  8b33                 mov esi, dword ptr [ebx]
// 0053ae0c  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053ae10  7520                 jne 0x53ae32
// 0053ae12  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053ae16  8d560c               lea edx, [esi + 0xc]
// 0053ae19  52                   push edx
// 0053ae1a  e8f1821d00           call 0x713110
// 0053ae1f  84c0                 test al, al
// 0053ae21  7406                 je 0x53ae29
// 0053ae23  8bde                 mov ebx, esi
// 0053ae25  8b36                 mov esi, dword ptr [esi]
// 0053ae27  eb03                 jmp 0x53ae2c
// 0053ae29  8b7608               mov esi, dword ptr [esi + 8]
// 0053ae2c  807e1900             cmp byte ptr [esi + 0x19], 0
// 0053ae30  74e0                 je 0x53ae12
// 0053ae32  8b0f                 mov ecx, dword ptr [edi]
// 0053ae34  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053ae38  5f                   pop edi
// 0053ae39  5e                   pop esi
// 0053ae3a  896804               mov dword ptr [eax + 4], ebp
// 0053ae3d  5d                   pop ebp
// 0053ae3e  89580c               mov dword ptr [eax + 0xc], ebx
// 0053ae41  8908                 mov dword ptr [eax], ecx
// 0053ae43  894808               mov dword ptr [eax + 8], ecx
// 0053ae46  5b                   pop ebx
// 0053ae47  59                   pop ecx
// 0053ae48  c20800               ret 8
// library rbxgs-net/IdManager.cpp (function ?_Eqrange@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@IAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@PAVInstance@3@U?$less@UData@Guid@RBX@@@std@@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@PAVInstance@3@@std@@@6@$0A@@std@@@std@@V123@@2@ABUData@Guid@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
