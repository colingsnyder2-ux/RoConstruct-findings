// roc 2012-06 00a73750  unit: CXTPRibbonGroups  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73750
//
// 00a73750  6aff                 push -1
// 00a73752  680090ae00           push 0xae9000
// 00a73757  64a100000000         mov eax, dword ptr fs:[0]
// 00a7375d  50                   push eax
// 00a7375e  83ec10               sub esp, 0x10
// 00a73761  53                   push ebx
// 00a73762  55                   push ebp
// 00a73763  56                   push esi
// 00a73764  57                   push edi
// 00a73765  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a7376a  33c4                 xor eax, esp
// 00a7376c  50                   push eax
// 00a7376d  8d442424             lea eax, [esp + 0x24]
// 00a73771  64a300000000         mov dword ptr fs:[0], eax
// 00a73777  8bf9                 mov edi, ecx
// 00a73779  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a7377d  8b01                 mov eax, dword ptr [ecx]
// 00a7377f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a73785  33ed                 xor ebp, ebp
// 00a73787  68a0ceb500           push 0xb5cea0
// 00a7378c  396928               cmp dword ptr [ecx + 0x28], ebp
// 00a7378f  0f8598000000         jne 0xa7382d
// 00a73795  8b7728               mov esi, dword ptr [edi + 0x28]
// 00a73798  89742420             mov dword ptr [esp + 0x20], esi
// 00a7379c  ffd2                 call edx
// 00a7379e  8bd8                 mov ebx, eax
// 00a737a0  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a737a4  8b03                 mov eax, dword ptr [ebx]
// 00a737a6  8b5004               mov edx, dword ptr [eax + 4]
// 00a737a9  55                   push ebp
// 00a737aa  56                   push esi
// 00a737ab  8bcb                 mov ecx, ebx
// 00a737ad  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a737b1  ffd2                 call edx
// 00a737b3  89442418             mov dword ptr [esp + 0x18], eax
// 00a737b7  85f6                 test esi, esi
// 00a737b9  7e69                 jle 0xa73824
// 00a737bb  85ed                 test ebp, ebp
// 00a737bd  7c0f                 jl 0xa737ce
// 00a737bf  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 00a737c2  7d0a                 jge 0xa737ce
// 00a737c4  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a737c7  8d04a8               lea eax, [eax + ebp*4]
// 00a737ca  8b00                 mov eax, dword ptr [eax]
// 00a737cc  eb02                 jmp 0xa737d0
// 00a737ce  33c0                 xor eax, eax
// 00a737d0  89442434             mov dword ptr [esp + 0x34], eax
// 00a737d4  8b13                 mov edx, dword ptr [ebx]
// 00a737d6  8b5208               mov edx, dword ptr [edx + 8]
// 00a737d9  8d442418             lea eax, [esp + 0x18]
// 00a737dd  50                   push eax
// 00a737de  8bcb                 mov ecx, ebx
// 00a737e0  ffd2                 call edx
// 00a737e2  8bf0                 mov esi, eax
// 00a737e4  89742420             mov dword ptr [esp + 0x20], esi
// 00a737e8  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00a737ed  e81eb7ffff           call 0xa6ef10
// 00a737f2  8b16                 mov edx, dword ptr [esi]
// 00a737f4  8b5264               mov edx, dword ptr [edx + 0x64]
// 00a737f7  50                   push eax
// 00a737f8  8d442438             lea eax, [esp + 0x38]
// 00a737fc  50                   push eax
// 00a737fd  8bce                 mov ecx, esi
// 00a737ff  ffd2                 call edx
// 00a73801  85c0                 test eax, eax
// 00a73803  740c                 je 0xa73811
// 00a73805  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a73809  8b01                 mov eax, dword ptr [ecx]
// 00a7380b  8b5064               mov edx, dword ptr [eax + 0x64]
// 00a7380e  56                   push esi
// 00a7380f  ffd2                 call edx
// 00a73811  8bce                 mov ecx, esi
// 00a73813  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00a73818  e86deef0ff           call 0x98268a
// 00a7381d  45                   inc ebp
// 00a7381e  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00a73822  7c97                 jl 0xa737bb
// 00a73824  8b03                 mov eax, dword ptr [ebx]
// 00a73826  8bcb                 mov ecx, ebx
// 00a73828  e9b1000000           jmp 0xa738de
// 00a7382d  ffd2                 call edx
// 00a7382f  8be8                 mov ebp, eax
// 00a73831  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a73835  8b4500               mov eax, dword ptr [ebp]
// 00a73838  8b5004               mov edx, dword ptr [eax + 4]
// 00a7383b  6a00                 push 0
// 00a7383d  bb02000000           mov ebx, 2
// 00a73842  6a00                 push 0
// 00a73844  8bcd                 mov ecx, ebp
// 00a73846  895c2434             mov dword ptr [esp + 0x34], ebx
// 00a7384a  ffd2                 call edx
// 00a7384c  8bcf                 mov ecx, edi
// 00a7384e  89442414             mov dword ptr [esp + 0x14], eax
// 00a73852  e8a9f4ffff           call 0xa72d00
// 00a73857  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a7385c  0f8477000000         je 0xa738d9
// 00a73862  8b4500               mov eax, dword ptr [ebp]
// 00a73865  8b5008               mov edx, dword ptr [eax + 8]
// 00a73868  8d4c2414             lea ecx, [esp + 0x14]
// 00a7386c  51                   push ecx
// 00a7386d  8bcd                 mov ecx, ebp
// 00a7386f  ffd2                 call edx
// 00a73871  8bf0                 mov esi, eax
// 00a73873  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a73877  897e24               mov dword ptr [esi + 0x24], edi
// 00a7387a  c644242c03           mov byte ptr [esp + 0x2c], 3
// 00a7387f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00a73887  e884b6ffff           call 0xa6ef10
// 00a7388c  8b16                 mov edx, dword ptr [esi]
// 00a7388e  8b5264               mov edx, dword ptr [edx + 0x64]
// 00a73891  50                   push eax
// 00a73892  8d442438             lea eax, [esp + 0x38]
// 00a73896  50                   push eax
// 00a73897  8bce                 mov ecx, esi
// 00a73899  ffd2                 call edx
// 00a7389b  85c0                 test eax, eax
// 00a7389d  740c                 je 0xa738ab
// 00a7389f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a738a3  8b01                 mov eax, dword ptr [ecx]
// 00a738a5  8b5064               mov edx, dword ptr [eax + 0x64]
// 00a738a8  56                   push esi
// 00a738a9  ffd2                 call edx
// 00a738ab  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a738af  85d2                 test edx, edx
// 00a738b1  744f                 je 0xa73902
// 00a738b3  8b4728               mov eax, dword ptr [edi + 0x28]
// 00a738b6  8d4f20               lea ecx, [edi + 0x20]
// 00a738b9  52                   push edx
// 00a738ba  50                   push eax
// 00a738bb  e810e6ffff           call 0xa71ed0
// 00a738c0  8bcf                 mov ecx, edi
// 00a738c2  e839e6ffff           call 0xa71f00
// 00a738c7  8bce                 mov ecx, esi
// 00a738c9  885c242c             mov byte ptr [esp + 0x2c], bl
// 00a738cd  e8b8edf0ff           call 0x98268a
// 00a738d2  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a738d7  7589                 jne 0xa73862
// 00a738d9  8b4500               mov eax, dword ptr [ebp]
// 00a738dc  8bcd                 mov ecx, ebp
// 00a738de  8b10                 mov edx, dword ptr [eax]
// 00a738e0  6a01                 push 1
// 00a738e2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00a738ea  ffd2                 call edx
// 00a738ec  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a738f0  64890d00000000       mov dword ptr fs:[0], ecx
// 00a738f7  59                   pop ecx
// 00a738f8  5f                   pop edi
// 00a738f9  5e                   pop esi
// 00a738fa  5d                   pop ebp
// 00a738fb  5b                   pop ebx
// 00a738fc  83c41c               add esp, 0x1c
// 00a738ff  c20400               ret 4
// 00a73902  6a00                 push 0
// 00a73904  6a06                 push 6
// 00a73906  e84ff3f0ff           call 0x982c5a
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonGroups@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp