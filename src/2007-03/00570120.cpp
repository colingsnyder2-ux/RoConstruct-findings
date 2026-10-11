// roc 2007-03 00570120  unit: seg_00570000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570120
//
// 00570120  64a100000000         mov eax, dword ptr fs:[0]
// 00570126  6aff                 push -1
// 00570128  6890607500           push 0x756090
// 0057012d  50                   push eax
// 0057012e  64892500000000       mov dword ptr fs:[0], esp
// 00570135  8b5104               mov edx, dword ptr [ecx + 4]
// 00570138  8b4204               mov eax, dword ptr [edx + 4]
// 0057013b  83ec1c               sub esp, 0x1c
// 0057013e  53                   push ebx
// 0057013f  55                   push ebp
// 00570140  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00570144  33db                 xor ebx, ebx
// 00570146  385819               cmp byte ptr [eax + 0x19], bl
// 00570149  56                   push esi
// 0057014a  57                   push edi
// 0057014b  7516                 jne 0x570163
// 0057014d  8b7500               mov esi, dword ptr [ebp]
// 00570150  39700c               cmp dword ptr [eax + 0xc], esi
// 00570153  7305                 jae 0x57015a
// 00570155  8b4008               mov eax, dword ptr [eax + 8]
// 00570158  eb04                 jmp 0x57015e
// 0057015a  8bd0                 mov edx, eax
// 0057015c  8b00                 mov eax, dword ptr [eax]
// 0057015e  385819               cmp byte ptr [eax + 0x19], bl
// 00570161  74ed                 je 0x570150
// 00570163  3b5104               cmp edx, dword ptr [ecx + 4]
// 00570166  8bfa                 mov edi, edx
// 00570168  8bf1                 mov esi, ecx
// 0057016a  7408                 je 0x570174
// 0057016c  8b4500               mov eax, dword ptr [ebp]
// 0057016f  3b420c               cmp eax, dword ptr [edx + 0xc]
// 00570172  736e                 jae 0x5701e2
// 00570174  895c2410             mov dword ptr [esp + 0x10], ebx
// 00570178  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057017c  8b5500               mov edx, dword ptr [ebp]
// 0057017f  895c2434             mov dword ptr [esp + 0x34], ebx
// 00570183  89542420             mov dword ptr [esp + 0x20], edx
// 00570187  895c2424             mov dword ptr [esp + 0x24], ebx
// 0057018b  895c2428             mov dword ptr [esp + 0x28], ebx
// 0057018f  8d442420             lea eax, [esp + 0x20]
// 00570193  50                   push eax
// 00570194  57                   push edi
// 00570195  56                   push esi
// 00570196  8d542424             lea edx, [esp + 0x24]
// 0057019a  52                   push edx
// 0057019b  c644244401           mov byte ptr [esp + 0x44], 1
// 005701a0  e8bbfdffff           call 0x56ff60
// 005701a5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005701a9  3beb                 cmp ebp, ebx
// 005701ab  8b30                 mov esi, dword ptr [eax]
// 005701ad  8b7804               mov edi, dword ptr [eax + 4]
// 005701b0  885c2434             mov byte ptr [esp + 0x34], bl
// 005701b4  742c                 je 0x5701e2
// 005701b6  8d4504               lea eax, [ebp + 4]
// 005701b9  83c9ff               or ecx, 0xffffffff
// 005701bc  f00fc108             lock xadd dword ptr [eax], ecx
// 005701c0  7520                 jne 0x5701e2
// 005701c2  8b5500               mov edx, dword ptr [ebp]
// 005701c5  8b4204               mov eax, dword ptr [edx + 4]
// 005701c8  8bcd                 mov ecx, ebp
// 005701ca  ffd0                 call eax
// 005701cc  8d4d08               lea ecx, [ebp + 8]
// 005701cf  83caff               or edx, 0xffffffff
// 005701d2  f00fc111             lock xadd dword ptr [ecx], edx
// 005701d6  750a                 jne 0x5701e2
// 005701d8  8b4500               mov eax, dword ptr [ebp]
// 005701db  8b5008               mov edx, dword ptr [eax + 8]
// 005701de  8bcd                 mov ecx, ebp
// 005701e0  ffd2                 call edx
// 005701e2  3bf3                 cmp esi, ebx
// 005701e4  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 005701ea  7502                 jne 0x5701ee
// 005701ec  ffd3                 call ebx
// 005701ee  3b7e04               cmp edi, dword ptr [esi + 4]
// 005701f1  7502                 jne 0x5701f5
// 005701f3  ffd3                 call ebx
// 005701f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005701f9  8d4710               lea eax, [edi + 0x10]
// 005701fc  5f                   pop edi
// 005701fd  5e                   pop esi
// 005701fe  5d                   pop ebp
// 005701ff  5b                   pop ebx
// 00570200  64890d00000000       mov dword ptr fs:[0], ecx
// 00570207  83c428               add esp, 0x28
// 0057020a  c20400               ret 4
// library openrbx-client/App\reflection\signal.cpp (function ??A?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@QAEAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
