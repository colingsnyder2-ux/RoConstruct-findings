// roc 2011-06 008f3220  unit: CXTCaptionButton  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3220
//
// 008f3220  6aff                 push -1
// 008f3222  68d8eba000           push 0xa0ebd8
// 008f3227  64a100000000         mov eax, dword ptr fs:[0]
// 008f322d  50                   push eax
// 008f322e  83ec48               sub esp, 0x48
// 008f3231  53                   push ebx
// 008f3232  56                   push esi
// 008f3233  a12058c900           mov eax, dword ptr [0xc95820]
// 008f3238  33c4                 xor eax, esp
// 008f323a  50                   push eax
// 008f323b  8d442454             lea eax, [esp + 0x54]
// 008f323f  64a300000000         mov dword ptr fs:[0], eax
// 008f3245  8bf1                 mov esi, ecx
// 008f3247  8d4c2430             lea ecx, [esp + 0x30]
// 008f324b  e810d8f2ff           call 0x820a60
// 008f3250  33db                 xor ebx, ebx
// 008f3252  8d4c240c             lea ecx, [esp + 0xc]
// 008f3256  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008f325a  e801d8f2ff           call 0x820a60
// 008f325f  8b442468             mov eax, dword ptr [esp + 0x68]
// 008f3263  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008f3267  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008f326b  6a01                 push 1
// 008f326d  50                   push eax
// 008f326e  51                   push ecx
// 008f326f  52                   push edx
// 008f3270  8d4c2440             lea ecx, [esp + 0x40]
// 008f3274  c644246c01           mov byte ptr [esp + 0x6c], 1
// 008f3279  e8d205f3ff           call 0x823850
// 008f327e  8d4c2430             lea ecx, [esp + 0x30]
// 008f3282  e849d8f2ff           call 0x820ad0
// 008f3287  85c0                 test eax, eax
// 008f3289  7434                 je 0x8f32bf
// 008f328b  8d4c240c             lea ecx, [esp + 0xc]
// 008f328f  885c245c             mov byte ptr [esp + 0x5c], bl
// 008f3293  e8c8fbf2ff           call 0x822e60
// 008f3298  8d4c2430             lea ecx, [esp + 0x30]
// 008f329c  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008f32a4  e8b7fbf2ff           call 0x822e60
// 008f32a9  33c0                 xor eax, eax
// 008f32ab  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f32af  64890d00000000       mov dword ptr fs:[0], ecx
// 008f32b6  59                   pop ecx
// 008f32b7  5e                   pop esi
// 008f32b8  5b                   pop ebx
// 008f32b9  83c454               add esp, 0x54
// 008f32bc  c21400               ret 0x14
// 008f32bf  8b442470             mov eax, dword ptr [esp + 0x70]
// 008f32c3  3bc3                 cmp eax, ebx
// 008f32c5  7423                 je 0x8f32ea
// 008f32c7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008f32cb  8b542464             mov edx, dword ptr [esp + 0x64]
// 008f32cf  6a01                 push 1
// 008f32d1  51                   push ecx
// 008f32d2  52                   push edx
// 008f32d3  50                   push eax
// 008f32d4  8d4c241c             lea ecx, [esp + 0x1c]
// 008f32d8  e87305f3ff           call 0x823850
// 008f32dd  8d4c240c             lea ecx, [esp + 0xc]
// 008f32e1  e8ead7f2ff           call 0x820ad0
// 008f32e6  85c0                 test eax, eax
// 008f32e8  75a1                 jne 0x8f328b
// 008f32ea  8b442474             mov eax, dword ptr [esp + 0x74]
// 008f32ee  50                   push eax
// 008f32ef  83ec24               sub esp, 0x24
// 008f32f2  8d542434             lea edx, [esp + 0x34]
// 008f32f6  8bcc                 mov ecx, esp
// 008f32f8  89a42494000000       mov dword ptr [esp + 0x94], esp
// 008f32ff  52                   push edx
// 008f3300  e86bd7f2ff           call 0x820a70
// 008f3305  83ec24               sub esp, 0x24
// 008f3308  8d44247c             lea eax, [esp + 0x7c]
// 008f330c  8bcc                 mov ecx, esp
// 008f330e  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 008f3315  50                   push eax
// 008f3316  c68424ac00000002     mov byte ptr [esp + 0xac], 2
// 008f331e  e84dd7f2ff           call 0x820a70
// 008f3323  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008f332a  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008f3331  51                   push ecx
// 008f3332  52                   push edx
// 008f3333  8bce                 mov ecx, esi
// 008f3335  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 008f333d  e84efaffff           call 0x8f2d90
// 008f3342  8d4c240c             lea ecx, [esp + 0xc]
// 008f3346  8bf0                 mov esi, eax
// 008f3348  885c245c             mov byte ptr [esp + 0x5c], bl
// 008f334c  e80ffbf2ff           call 0x822e60
// 008f3351  8d4c2430             lea ecx, [esp + 0x30]
// 008f3355  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008f335d  e8fefaf2ff           call 0x822e60
// 008f3362  8bc6                 mov eax, esi
// 008f3364  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f3368  64890d00000000       mov dword ptr fs:[0], ecx
// 008f336f  59                   pop ecx
// 008f3370  5e                   pop esi
// 008f3371  5b                   pop ebx
// 008f3372  83c454               add esp, 0x54
// 008f3375  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp