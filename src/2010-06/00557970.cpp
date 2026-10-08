// from server: 100% by auto
// roc 2010-06 00557970  unit: seg_00550000  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557970
//
// 00557970  51                   push ecx
// 00557971  80794800             cmp byte ptr [ecx + 0x48], 0
// 00557975  890c24               mov dword ptr [esp], ecx
// 00557978  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055797c  0f84dc000000         je 0x557a5e
// 00557982  56                   push esi
// 00557983  57                   push edi
// 00557984  68fe08a000           push 0xa008fe
// 00557989  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055798f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00557993  8b4714               mov eax, dword ptr [edi + 0x14]
// 00557996  33f6                 xor esi, esi
// 00557998  85c0                 test eax, eax
// 0055799a  0f86b8000000         jbe 0x557a58
// 005579a0  53                   push ebx
// 005579a1  55                   push ebp
// 005579a2  8d5f04               lea ebx, [edi + 4]
// 005579a5  8d6e01               lea ebp, [esi + 1]
// 005579a8  3bf0                 cmp esi, eax
// 005579aa  7606                 jbe 0x5579b2
// 005579ac  ff150ca99e00         call dword ptr [0x9ea90c]
// 005579b2  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005579b6  7204                 jb 0x5579bc
// 005579b8  8b03                 mov eax, dword ptr [ebx]
// 005579ba  eb02                 jmp 0x5579be
// 005579bc  8bc3                 mov eax, ebx
// 005579be  803c300a             cmp byte ptr [eax + esi], 0xa
// 005579c2  7514                 jne 0x5579d8
// 005579c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005579c8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005579cc  83c054               add eax, 0x54
// 005579cf  50                   push eax
// 005579d0  ff1518a49e00         call dword ptr [0x9ea418]
// 005579d6  eb71                 jmp 0x557a49
// 005579d8  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005579db  7606                 jbe 0x5579e3
// 005579dd  ff150ca99e00         call dword ptr [0x9ea90c]
// 005579e3  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005579e6  83f910               cmp ecx, 0x10
// 005579e9  7204                 jb 0x5579ef
// 005579eb  8b03                 mov eax, dword ptr [ebx]
// 005579ed  eb02                 jmp 0x5579f1
// 005579ef  8bc3                 mov eax, ebx
// 005579f1  803c300d             cmp byte ptr [eax + esi], 0xd
// 005579f5  752c                 jne 0x557a23
// 005579f7  3b6f14               cmp ebp, dword ptr [edi + 0x14]
// 005579fa  7327                 jae 0x557a23
// 005579fc  83f910               cmp ecx, 0x10
// 005579ff  7204                 jb 0x557a05
// 00557a01  8b03                 mov eax, dword ptr [ebx]
// 00557a03  eb02                 jmp 0x557a07
// 00557a05  8bc3                 mov eax, ebx
// 00557a07  803c280a             cmp byte ptr [eax + ebp], 0xa
// 00557a0b  7516                 jne 0x557a23
// 00557a0d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00557a11  83c154               add ecx, 0x54
// 00557a14  51                   push ecx
// 00557a15  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00557a19  ff1518a49e00         call dword ptr [0x9ea418]
// 00557a1f  46                   inc esi
// 00557a20  45                   inc ebp
// 00557a21  eb26                 jmp 0x557a49
// 00557a23  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00557a26  7606                 jbe 0x557a2e
// 00557a28  ff150ca99e00         call dword ptr [0x9ea90c]
// 00557a2e  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00557a32  7204                 jb 0x557a38
// 00557a34  8b03                 mov eax, dword ptr [ebx]
// 00557a36  eb02                 jmp 0x557a3a
// 00557a38  8bc3                 mov eax, ebx
// 00557a3a  0fb61430             movzx edx, byte ptr [eax + esi]
// 00557a3e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00557a42  52                   push edx
// 00557a43  ff15eca69e00         call dword ptr [0x9ea6ec]
// 00557a49  8b4714               mov eax, dword ptr [edi + 0x14]
// 00557a4c  46                   inc esi
// 00557a4d  45                   inc ebp
// 00557a4e  3bf0                 cmp esi, eax
// 00557a50  0f825cffffff         jb 0x5579b2
// 00557a56  5d                   pop ebp
// 00557a57  5b                   pop ebx
// 00557a58  5f                   pop edi
// 00557a59  5e                   pop esi
// 00557a5a  59                   pop ecx
// 00557a5b  c20800               ret 8
// 00557a5e  8b442408             mov eax, dword ptr [esp + 8]
// 00557a62  50                   push eax
// 00557a63  ff1568a49e00         call dword ptr [0x9ea468]
// 00557a69  59                   pop ecx
// 00557a6a  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?convertNewlines@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
