// roc 2009-06 00812b60  unit: CXTPRibbonGroups  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00812b60
//
// 00812b60  6aff                 push -1
// 00812b62  68b0268800           push 0x8826b0
// 00812b67  64a100000000         mov eax, dword ptr fs:[0]
// 00812b6d  50                   push eax
// 00812b6e  83ec10               sub esp, 0x10
// 00812b71  53                   push ebx
// 00812b72  55                   push ebp
// 00812b73  56                   push esi
// 00812b74  57                   push edi
// 00812b75  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00812b7a  33c4                 xor eax, esp
// 00812b7c  50                   push eax
// 00812b7d  8d442424             lea eax, [esp + 0x24]
// 00812b81  64a300000000         mov dword ptr fs:[0], eax
// 00812b87  8bf9                 mov edi, ecx
// 00812b89  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00812b8d  8b01                 mov eax, dword ptr [ecx]
// 00812b8f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00812b95  33ed                 xor ebp, ebp
// 00812b97  68d4898b00           push 0x8b89d4
// 00812b9c  396928               cmp dword ptr [ecx + 0x28], ebp
// 00812b9f  0f8598000000         jne 0x812c3d
// 00812ba5  8b7728               mov esi, dword ptr [edi + 0x28]
// 00812ba8  89742420             mov dword ptr [esp + 0x20], esi
// 00812bac  ffd2                 call edx
// 00812bae  8bd8                 mov ebx, eax
// 00812bb0  895c2414             mov dword ptr [esp + 0x14], ebx
// 00812bb4  8b03                 mov eax, dword ptr [ebx]
// 00812bb6  8b5004               mov edx, dword ptr [eax + 4]
// 00812bb9  55                   push ebp
// 00812bba  56                   push esi
// 00812bbb  8bcb                 mov ecx, ebx
// 00812bbd  896c2434             mov dword ptr [esp + 0x34], ebp
// 00812bc1  ffd2                 call edx
// 00812bc3  89442418             mov dword ptr [esp + 0x18], eax
// 00812bc7  85f6                 test esi, esi
// 00812bc9  7e69                 jle 0x812c34
// 00812bcb  85ed                 test ebp, ebp
// 00812bcd  7c0f                 jl 0x812bde
// 00812bcf  3b6f28               cmp ebp, dword ptr [edi + 0x28]
// 00812bd2  7d0a                 jge 0x812bde
// 00812bd4  8b4724               mov eax, dword ptr [edi + 0x24]
// 00812bd7  8d04a8               lea eax, [eax + ebp*4]
// 00812bda  8b00                 mov eax, dword ptr [eax]
// 00812bdc  eb02                 jmp 0x812be0
// 00812bde  33c0                 xor eax, eax
// 00812be0  89442434             mov dword ptr [esp + 0x34], eax
// 00812be4  8b13                 mov edx, dword ptr [ebx]
// 00812be6  8b5208               mov edx, dword ptr [edx