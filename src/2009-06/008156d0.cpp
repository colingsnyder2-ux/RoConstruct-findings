// roc 2009-06 008156d0  unit: CXTPRibbonControlTab  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008156d0
//
// 008156d0  6aff                 push -1
// 008156d2  68b0268800           push 0x8826b0
// 008156d7  64a100000000         mov eax, dword ptr fs:[0]
// 008156dd  50                   push eax
// 008156de  83ec10               sub esp, 0x10
// 008156e1  53                   push ebx
// 008156e2  55                   push ebp
// 008156e3  56                   push esi
// 008156e4  57                   push edi
// 008156e5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008156ea  33c4                 xor eax, esp
// 008156ec  50                   push eax
// 008156ed  8d442424             lea eax, [esp + 0x24]
// 008156f1  64a300000000         mov dword ptr fs:[0], eax
// 008156f7  8be9                 mov ebp, ecx
// 008156f9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008156fd  8b01                 mov eax, dword ptr [ecx]
// 008156ff  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00815705  33ff                 xor edi, edi
// 00815707  68f0339000           push 0x9033f0
// 0081570c  397928               cmp dword ptr [ecx + 0x28], edi
// 0081570f  0f85a1000000         jne 0x8157b6
// 00815715  8bb5e0010000         mov esi, dword ptr [ebp + 0x1e0]
// 0081571b  89742420             mov dword ptr [esp + 0x20], esi
// 0081571f  ffd2                 call edx
// 00815721  8bd8                 mov ebx, eax
// 00815723  895c2414             mov dword ptr [esp + 0x14], ebx
// 00815727  8b03                 mov eax, dword ptr [ebx]
// 00815729  8b5004               mov edx, dword ptr [eax + 4]
// 0081572c  57                   push edi
// 0081572d  56                   push esi
// 0081572e  8bcb                 mov ecx, ebx
// 00815730  897c2434             mov dword ptr [esp + 0x34], edi
// 00815734  ffd2                 call edx
// 00815736  89442418             mov dword ptr [esp + 0x18], eax
// 0081573a  85f6                 test esi, esi
// 0081573c  7e6f                 jle 0x8157ad
// 0081573e  85ff                 test edi, edi
// 00815740  7c15                 jl 0x815757
// 00815742  3bbde0010000         cmp edi, dword ptr [ebp + 0x1e0]
// 00815748  7d0d                 jge 0x815757
// 0081574a  8b85dc010000         mov eax, dword ptr [ebp + 0x1dc]
// 00815750  8d04b8               lea eax, [eax + edi*4]
// 00815753  8b00                 mov eax, dword ptr [eax]
// 00815755  eb02                 jmp 0x815759
// 00815757  33c0                 xor eax, eax
// 00815759  89442434             mov dword ptr [esp + 0x34], eax
// 0081575d  8b13                 mov edx, dword ptr [ebx]
// 0081575f  8b5208               mov edx, dword ptr [edx + 8]
// 00815762  8d442418             lea eax, [esp + 0x18]
// 00815766  50                   push eax
// 00815767  8bcb                 mov ecx, ebx
// 00815769  ffd2                 call edx
// 0081576b  8bf0                 mov esi, eax
// 0081576d  89742420             mov dword ptr [esp + 0x20], esi
// 00815771  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00815776  e8a5a1ffff           call 0x80f920
// 0081577b  8b16                 mov edx, dword ptr [esi]
// 0081577d  8b5264               mov edx, dword ptr [edx + 0x64]
// 00815780  50                   push eax
// 00815781  8d442438             lea eax, [esp + 0x38]
// 00815785  50                   push eax
// 00815786  8bce                 mov ecx, esi
// 00815788  ffd2                 call edx
// 0081578a  85c0                 test eax, eax
// 0081578c  740c                 je 0x81579a
// 0081578e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00815792  8b01                 mov eax, dword ptr [ecx]
// 00815794  8b5064               mov edx, dword ptr [eax + 0x64]
// 00815797  56                   push esi
// 00815798  ffd2                 call edx
// 0081579a  8bce                 mov ecx, esi
// 0081579c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008157a1  e80238f0ff           call 0x718fa8
// 008157a6  47                   inc edi
// 008157a7  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 008157ab  7c91                 jl 0x81573e
// 008157ad  8b03                 mov eax, dword ptr [ebx]
// 008157af  8bcb                 mov ecx, ebx
// 008157b1  e9b0000000           jmp 0x815866
// 008157b6  ffd2                 call edx
// 008157b8  8bf8                 mov edi, eax
// 008157ba  897c2420             mov dword ptr [esp + 0x20], edi
// 008157be  8b07                 mov eax, dword ptr [edi]
// 008157c0  8b5004               mov edx, dword ptr [eax + 4]
// 008157c3  6a00                 push 0
// 008157c5  6a00                 push 0
// 008157c7  8bcf                 mov ecx, edi
// 008157c9  c744243402000000     mov dword ptr [esp + 0x34], 2
// 008157d1  ffd2                 call edx
// 008157d3  8d9d84010000         lea ebx, [ebp + 0x184]
// 008157d9  8bcb                 mov ecx, ebx
// 008157db  89442414             mov dword ptr [esp + 0x14], eax
// 008157df  e8dcf0fdff           call 0x7f48c0
// 008157e4  837c241400           cmp dword ptr [esp + 0x14], 0
// 008157e9  7477                 je 0x815862
// 008157eb  eb03                 jmp 0x8157f0
// 008157ed  8d4900               lea ecx, [ecx]
// 008157f0  8b07                 mov eax, dword ptr [edi]
// 008157f2  8b5008               mov edx, dword ptr [eax + 8]
// 008157f5  8d4c2414             lea ecx, [esp + 0x14]
// 008157f9  51                   push ecx
// 008157fa  8bcf                 mov ecx, edi
// 008157fc  ffd2                 call edx
// 008157fe  8bf0                 mov esi, eax
// 00815800  8974241c             mov dword ptr [esp + 0x1c], esi
// 00815804  896e24               mov dword ptr [esi + 0x24], ebp
// 00815807  c644242c03           mov byte ptr [esp + 0x2c], 3
// 0081580c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00815814  e807a1ffff           call 0x80f920
// 00815819  8b16                 mov edx, dword ptr [esi]
// 0081581b  8b5264               mov edx, dword ptr [edx + 0x64]
// 0081581e  50                   push eax
// 0081581f  8d442438             lea eax, [esp + 0x38]
// 00815823  50                   push eax
// 00815824  8bce                 mov ecx, esi
// 00815826  ffd2                 call edx
// 00815828  85c0                 test eax, eax
// 0081582a  740c                 je 0x815838
// 0081582c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00815830  8b01                 mov eax, dword ptr [ecx]
// 00815832  8b5064               mov edx, dword ptr [eax + 0x64]
// 00815835  56                   push esi
// 00815836  ffd2                 call edx
// 00815838  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081583c  85c9                 test ecx, ecx
// 0081583e  744a                 je 0x81588a
// 00815840  8b85e0010000         mov eax, dword ptr [ebp + 0x1e0]
// 00815846  51                   push ecx
// 00815847  50                   push eax
// 00815848  8bcb                 mov ecx, ebx
// 0081584a  e8e1f0fdff           call 0x7f4930
// 0081584f  8bce                 mov ecx, esi
// 00815851  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00815856  e84d37f0ff           call 0x718fa8
// 0081585b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00815860  758e                 jne 0x8157f0
// 00815862  8b07                 mov eax, dword ptr [edi]
// 00815864  8bcf                 mov ecx, edi
// 00815866  8b10                 mov edx, dword ptr [eax]
// 00815868  6a01                 push 1
// 0081586a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00815872  ffd2                 call edx
// 00815874  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00815878  64890d00000000       mov dword ptr fs:[0], ecx
// 0081587f  59                   pop ecx
// 00815880  5f                   pop edi
// 00815881  5e                   pop esi
// 00815882  5d                   pop ebp
// 00815883  5b                   pop ebx
// 00815884  83c41c               add esp, 0x1c
// 00815887  c20400               ret 4
// 0081588a  6a00                 push 0
// 0081588c  6a06                 push 6
// 0081588e  e80f3df0ff           call 0x7195a2
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonControlTab@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp