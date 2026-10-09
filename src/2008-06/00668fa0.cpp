// roc 2008-06 00668fa0  unit: RBX::JointStage  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668fa0
//
// 00668fa0  53                   push ebx
// 00668fa1  55                   push ebp
// 00668fa2  56                   push esi
// 00668fa3  57                   push edi
// 00668fa4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00668fa8  8bf1                 mov esi, ecx
// 00668faa  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00668fad  e8aee5f7ff           call 0x5e7560
// 00668fb2  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00668fb5  8be8                 mov ebp, eax
// 00668fb7  e8a4e5f7ff           call 0x5e7560
// 00668fbc  8b4f04               mov ecx, dword ptr [edi + 4]
// 00668fbf  89442414             mov dword ptr [esp + 0x14], eax
// 00668fc3  8b01                 mov eax, dword ptr [ecx]
// 00668fc5  8b5004               mov edx, dword ptr [eax + 4]
// 00668fc8  ffd2                 call edx
// 00668fca  8bd8                 mov ebx, eax
// 00668fcc  8b06                 mov eax, dword ptr [esi]
// 00668fce  8b5004               mov edx, dword ptr [eax + 4]
// 00668fd1  8bce                 mov ecx, esi
// 00668fd3  ffd2                 call edx
// 00668fd5  3bd8                 cmp ebx, eax
// 00668fd7  0f9fc3               setg bl
// 00668fda  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00668fde  741c                 je 0x668ffc
// 00668fe0  8bcd                 mov ecx, ebp
// 00668fe2  e8f9d0f7ff           call 0x5e60e0
// 00668fe7  84c0                 test al, al
// 00668fe9  740d                 je 0x668ff8
// 00668feb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00668fef  e8ecd0f7ff           call 0x5e60e0
// 00668ff4  84c0                 test al, al
// 00668ff6  7504                 jne 0x668ffc
// 00668ff8  b001                 mov al, 1
// 00668ffa  eb02                 jmp 0x668ffe
// 00668ffc  32c0                 xor al, al
// 00668ffe  3ad8                 cmp bl, al
// 00669000  741b                 je 0x66901d
// 00669002  8b4e08               mov ecx, dword ptr [esi + 8]
// 00669005  8b01                 mov eax, dword ptr [ecx]
// 00669007  57                   push edi
// 00669008  84db                 test bl, bl
// 0066900a  740c                 je 0x669018
// 0066900c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0066900f  ffd2                 call edx
// 00669011  5f                   pop edi
// 00669012  5e                   pop esi
// 00669013  5d                   pop ebp
// 00669014  5b                   pop ebx
// 00669015  c20400               ret 4
// 00669018  8b5010               mov edx, dword ptr [eax + 0x10]
// 0066901b  ffd2                 call edx
// 0066901d  5f                   pop edi
// 0066901e  5e                   pop esi
// 0066901f  5d                   pop ebp
// 00669020  5b                   pop ebx
// 00669021  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?cleanEdge@TreeStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
