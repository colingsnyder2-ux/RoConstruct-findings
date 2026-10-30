// roc 2007-08 0058a020  unit: VStockSound::?$FactoryProduct  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058a020
//
// 0058a020  64a100000000         mov eax, dword ptr fs:[0]
// 0058a026  6aff                 push -1
// 0058a028  6810617500           push 0x756110
// 0058a02d  50                   push eax
// 0058a02e  64892500000000       mov dword ptr fs:[0], esp
// 0058a035  8b5104               mov edx, dword ptr [ecx + 4]
// 0058a038  8b4204               mov eax, dword ptr [edx + 4]
// 0058a03b  83ec1c               sub esp, 0x1c
// 0058a03e  53                   push ebx
// 0058a03f  55                   push ebp
// 0058a040  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0058a044  33db                 xor ebx, ebx
// 0058a046  385819               cmp byte ptr [eax + 0x19], bl
// 0058a049  56                   push esi
// 0058a04a  57                   push edi
// 0058a04b  7516                 jne 0x58a063
// 0058a04d  8b7500               mov esi, dword ptr [ebp]
// 0058a050  39700c               cmp dword ptr [eax + 0xc], esi
// 0058a053  7d05                 jge 0x58a05a
// 0058a055  8b4008               mov eax, dword ptr [eax + 8]
// 0058a058  eb04                 jmp 0x58a05e
// 0058a05a  8bd0                 mov edx, eax
// 0058a05c  8b00                 mov eax, dword ptr [eax]
// 0058a05e  385819               cmp byte ptr [eax + 0x19], bl
// 0058a061  74ed                 je 0x58a050
// 0058a063  3b5104               cmp edx, dword ptr [ecx + 4]
// 0058a066  8bfa                 mov edi, edx
// 0058a068  8bf1                 mov esi, ecx
// 0058a06a  7408                 je 0x58a074
// 0058a06c  8b4500               mov eax, dword ptr [ebp]
// 0058a06f  3b420c               cmp eax, dword ptr [edx + 0xc]
// 0058a072  7d6e                 jge 0x58a0e2
// 0058a074  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058a078  895c2414             mov dword ptr [esp + 0x14], ebx
// 0058a07c  8b5500               mov edx, dword ptr [ebp]
// 0058a07f  895c2434             mov dword ptr [esp + 0x34], ebx
// 0058a083  89542420             mov dword ptr [esp + 0x20], edx
// 0058a087  895c2424             mov dword ptr [esp + 0x24], ebx
// 0058a08b  895c2428             mov dword ptr [esp + 0x28], ebx
// 0058a08f  8d442420             lea eax, [esp + 0x20]
// 0058a093  50                   push eax
// 0058a094  57                   push edi
// 0058a095  56                   push esi
// 0058a096  8d542424             lea edx, [esp + 0x24]
// 0058a09a  52                   push edx
// 0058a09b  c644244401           mov byte ptr [esp + 0x44], 1
// 0058a0a0  e87bfaffff           call 0x589b20
// 0058a0a5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0058a0a9  3beb                 cmp ebp, ebx
// 0058a0ab  8b30                 mov esi, dword ptr [eax]
// 0058a0ad  8b7804               mov edi, dword ptr [eax + 4]
// 0058a0b0  885c2434             mov byte ptr [esp + 0x34], bl
// 0058a0b4  742c                 je 0x58a0e2
// 0058a0b6  8d4504               lea eax, [ebp + 4]
// 0058a0b9  83c9ff               or ecx, 0xffffffff
// 0058a0bc  f00fc108             lock xadd dword ptr [eax], ecx
// 0058a0c0  7520                 jne 0x58a0e2
// 0058a0c2  8b5500               mov edx, dword ptr [ebp]
// 0058a0c5  8b4204               mov eax, dword ptr [edx + 4]
// 0058a0c8  8bcd                 mov ecx, ebp
// 0058a0ca  ffd0                 call eax
// 0058a0cc  8d4d08               lea ecx, [ebp + 8]
// 0058a0cf  83caff               or edx, 0xffffffff
// 0058a0d2  f00fc111             lock xadd dword ptr [ecx], edx
// 0058a0d6  750a                 jne 0x58a0e2
// 0058a0d8  8b4500               mov eax, dword ptr [ebp]
// 0058a0db  8b5008               mov edx, dword ptr [eax + 8]
// 0058a0de  8bcd                 mov ecx, ebp
// 0058a0e0  ffd2                 call edx
// 0058a0e2  3bf3                 cmp esi, ebx
// 0058a0e4  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0058a0ea  7502                 jne 0x58a0ee
// 0058a0ec  ffd3                 call ebx
// 0058a0ee  3b7e04               cmp edi, dword ptr [esi + 4]
// 0058a0f1  7502                 jne 0x58a0f5
// 0058a0f3  ffd3                 call ebx
// 0058a0f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058a0f9  8d4710               lea eax, [edi + 0x10]
// 0058a0fc  5f                   pop edi
// 0058a0fd  5e                   pop esi
// 0058a0fe  5d                   pop ebp
// 0058a0ff  5b                   pop ebx
// 0058a100  64890d00000000       mov dword ptr fs:[0], ecx
// 0058a107  83c428               add esp, 0x28
// 0058a10a  c20400               ret 4
// copied from an identical function in another client (function ??A?$map@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@@std@@QAEAAV?$shared_ptr@UT@@@boost@@ABH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll map_int_sp.cpp