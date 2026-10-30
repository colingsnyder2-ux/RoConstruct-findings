// roc 2011-06 00857840  unit: CXTPControls  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00857840
//
// 00857840  51                   push ecx
// 00857841  8b442410             mov eax, dword ptr [esp + 0x10]
// 00857845  53                   push ebx
// 00857846  55                   push ebp
// 00857847  56                   push esi
// 00857848  8b742418             mov esi, dword ptr [esp + 0x18]
// 0085784c  8bd1                 mov edx, ecx
// 0085784e  57                   push edi
// 0085784f  89542410             mov dword ptr [esp + 0x10], edx
// 00857853  a840                 test al, 0x40
// 00857855  0f843b010000         je 0x857996
// 0085785b  83e010               and eax, 0x10
// 0085785e  33db                 xor ebx, ebx
// 00857860  33c9                 xor ecx, ecx
// 00857862  33ff                 xor edi, edi
// 00857864  33ed                 xor ebp, ebp
// 00857866  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 00857869  89442420             mov dword ptr [esp + 0x20], eax
// 0085786d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00857871  0f8edf000000         jle 0x857956
// 00857877  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0085787b  83c330               add ebx, 0x30
// 0085787e  8bff                 mov edi, edi
// 00857880  837bf800             cmp dword ptr [ebx - 8], 0
// 00857884  0f84b3000000         je 0x85793d
// 0085788a  833b00               cmp dword ptr [ebx], 0
// 0085788d  0f85aa000000         jne 0x85793d
// 00857893  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00857897  8b542424             mov edx, dword ptr [esp + 0x24]
// 0085789b  51                   push ecx
// 0085789c  8d43d0               lea eax, [ebx - 0x30]
// 0085789f  52                   push edx
// 008578a0  50                   push eax
// 008578a1  ff15601ca400         call dword ptr [0xa41c60]
// 008578a7  837c242000           cmp dword ptr [esp + 0x20], 0
// 008578ac  740f                 je 0x8578bd
// 008578ae  8b06                 mov eax, dword ptr [esi]
// 008578b0  6a00                 push 0
// 008578b2  50                   push eax
// 008578b3  8d43d0               lea eax, [ebx - 0x30]
// 008578b6  50                   push eax
// 008578b7  ff15601ca400         call dword ptr [0xa41c60]
// 008578bd  837bfc00             cmp dword ptr [ebx - 4], 0
// 008578c1  7447                 je 0x85790a
// 008578c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008578c7  8b542428             mov edx, dword ptr [esp + 0x28]
// 008578cb  83ec10               sub esp, 0x10
// 008578ce  8bc4                 mov eax, esp
// 008578d0  8908                 mov dword ptr [eax], ecx
// 008578d2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008578d6  895004               mov dword ptr [eax + 4], edx
// 008578d9  8b542440             mov edx, dword ptr [esp + 0x40]
// 008578dd  894808               mov dword ptr [eax + 8], ecx
// 008578e0  8b0e                 mov ecx, dword ptr [esi]
// 008578e2  89500c               mov dword ptr [eax + 0xc], edx
// 008578e5  8b4604               mov eax, dword ptr [esi + 4]
// 008578e8  8b542430             mov edx, dword ptr [esp + 0x30]
// 008578ec  50                   push eax
// 008578ed  8b442430             mov eax, dword ptr [esp + 0x30]
// 008578f1  51                   push ecx
// 008578f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008578f6  52                   push edx
// 008578f7  57                   push edi
// 008578f8  55                   push ebp
// 008578f9  50                   push eax
// 008578fa  51                   push ecx
// 008578fb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008578ff  e84cfeffff           call 0x857750
// 00857904  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00857908  33ff                 xor edi, edi
// 0085790a  837c242000           cmp dword ptr [esp + 0x20], 0
// 0085790f  740a                 je 0x85791b
// 00857911  8b43d8               mov eax, dword ptr [ebx - 0x28]
// 00857914  8b0e                 mov ecx, dword ptr [esi]
// 00857916  2b43d0               sub eax, dword ptr [ebx - 0x30]
// 00857919  eb09                 jmp 0x857924
// 0085791b  8b43dc               mov eax, dword ptr [ebx - 0x24]
// 0085791e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00857921  2b43d4               sub eax, dword ptr [ebx - 0x2c]
// 00857924  3bf8                 cmp edi, eax
// 00857926  7f15                 jg 0x85793d
// 00857928  837c242000           cmp dword ptr [esp + 0x20], 0
// 0085792d  7408                 je 0x857937
// 0085792f  8b7bd8               mov edi, dword ptr [ebx - 0x28]
// 00857932  2b7bd0               sub edi, dword ptr [ebx - 0x30]
// 00857935  eb06                 jmp 0x85793d
// 00857937  8b7bdc               mov edi, dword ptr [ebx - 0x24]
// 0085793a  2b7bd4               sub edi, dword ptr [ebx - 0x2c]
// 0085793d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00857941  45                   inc ebp
// 00857942  83c340               add ebx, 0x40
// 00857945  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 00857948  0f8c32ffffff         jl 0x857880
// 0085794e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00857952  85db                 test ebx, ebx
// 00857954  7502                 jne 0x857958
// 00857956  8bf9                 mov edi, ecx
// 00857958  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085795c  83ec10               sub esp, 0x10
// 0085795f  8bc4                 mov eax, esp
// 00857961  8908                 mov dword ptr [eax], ecx
// 00857963  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00857967  894804               mov dword ptr [eax + 4], ecx
// 0085796a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0085796e  894808               mov dword ptr [eax + 8], ecx
// 00857971  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00857975  89480c               mov dword ptr [eax + 0xc], ecx
// 00857978  8b4604               mov eax, dword ptr [esi + 4]
// 0085797b  8b0e                 mov ecx, dword ptr [esi]
// 0085797d  50                   push eax
// 0085797e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00857982  51                   push ecx
// 00857983  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00857986  50                   push eax
// 00857987  8b442434             mov eax, dword ptr [esp + 0x34]
// 0085798b  57                   push edi
// 0085798c  51                   push ecx
// 0085798d  53                   push ebx
// 0085798e  50                   push eax
// 0085798f  8bca                 mov ecx, edx
// 00857991  e8bafdffff           call 0x857750
// 00857996  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085799a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0085799e  8d040a               lea eax, [edx + ecx]
// 008579a1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008579a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 008579a9  0106                 add dword ptr [esi], eax
// 008579ab  5f                   pop edi
// 008579ac  03ca                 add ecx, edx
// 008579ae  014e04               add dword ptr [esi + 4], ecx
// 008579b1  5e                   pop esi
// 008579b2  5d                   pop ebp
// 008579b3  5b                   pop ebx
// 008579b4  59                   pop ecx
// 008579b5  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
