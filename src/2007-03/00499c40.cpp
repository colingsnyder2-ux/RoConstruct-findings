// roc 2007-03 00499c40  unit: seg_00490000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499c40
//
// 00499c40  83ec0c               sub esp, 0xc
// 00499c43  55                   push ebp
// 00499c44  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00499c48  56                   push esi
// 00499c49  57                   push edi
// 00499c4a  8bf9                 mov edi, ecx
// 00499c4c  8b7704               mov esi, dword ptr [edi + 4]
// 00499c4f  8b4604               mov eax, dword ptr [esi + 4]
// 00499c52  80782100             cmp byte ptr [eax + 0x21], 0
// 00499c56  b101                 mov cl, 1
// 00499c58  884c240c             mov byte ptr [esp + 0xc], cl
// 00499c5c  7520                 jne 0x499c7e
// 00499c5e  8b5500               mov edx, dword ptr [ebp]
// 00499c61  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00499c64  8bf0                 mov esi, eax
// 00499c66  0f9cc1               setl cl
// 00499c69  84c9                 test cl, cl
// 00499c6b  884c240c             mov byte ptr [esp + 0xc], cl
// 00499c6f  7404                 je 0x499c75
// 00499c71  8b00                 mov eax, dword ptr [eax]
// 00499c73  eb03                 jmp 0x499c78
// 00499c75  8b4008               mov eax, dword ptr [eax + 8]
// 00499c78  80782100             cmp byte ptr [eax + 0x21], 0
// 00499c7c  74e3                 je 0x499c61
// 00499c7e  84c9                 test cl, cl
// 00499c80  8bd6                 mov edx, esi
// 00499c82  89542414             mov dword ptr [esp + 0x14], edx
// 00499c86  897c2410             mov dword ptr [esp + 0x10], edi
// 00499c8a  743d                 je 0x499cc9
// 00499c8c  8b4704               mov eax, dword ptr [edi + 4]
// 00499c8f  3b30                 cmp esi, dword ptr [eax]
// 00499c91  8d4c2410             lea ecx, [esp + 0x10]
// 00499c95  7529                 jne 0x499cc0
// 00499c97  55                   push ebp
// 00499c98  56                   push esi
// 00499c99  6a01                 push 1
// 00499c9b  51                   push ecx
// 00499c9c  8bcf                 mov ecx, edi
// 00499c9e  e8adfdffff           call 0x499a50
// 00499ca3  8bc8                 mov ecx, eax
// 00499ca5  8b11                 mov edx, dword ptr [ecx]
// 00499ca7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00499cab  8b4904               mov ecx, dword ptr [ecx + 4]
// 00499cae  5f                   pop edi
// 00499caf  5e                   pop esi
// 00499cb0  8910                 mov dword ptr [eax], edx
// 00499cb2  894804               mov dword ptr [eax + 4], ecx
// 00499cb5  c6400801             mov byte ptr [eax + 8], 1
// 00499cb9  5d                   pop ebp
// 00499cba  83c40c               add esp, 0xc
// 00499cbd  c20800               ret 8
// 00499cc0  e8ebaf0200           call 0x4c4cb0
// 00499cc5  8b542414             mov edx, dword ptr [esp + 0x14]
// 00499cc9  8b420c               mov eax, dword ptr [edx + 0xc]
// 00499ccc  3b4500               cmp eax, dword ptr [ebp]
// 00499ccf  7d0e                 jge 0x499cdf
// 00499cd1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00499cd5  55                   push ebp
// 00499cd6  56                   push esi
// 00499cd7  51                   push ecx
// 00499cd8  8d54241c             lea edx, [esp + 0x1c]
// 00499cdc  52                   push edx
// 00499cdd  ebbd                 jmp 0x499c9c
// 00499cdf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00499ce3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00499ce7  5f                   pop edi
// 00499ce8  5e                   pop esi
// 00499ce9  8908                 mov dword ptr [eax], ecx
// 00499ceb  895004               mov dword ptr [eax + 4], edx
// 00499cee  c6400800             mov byte ptr [eax + 8], 0
// 00499cf2  5d                   pop ebp
// 00499cf3  83c40c               add esp, 0xc
// 00499cf6  c20800               ret 8
// library rbxgs/v8datamodel\BrickColor.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
