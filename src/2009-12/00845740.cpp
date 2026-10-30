// roc 2009-12 00845740  unit: CXTPControls  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845740
//
// 00845740  83ec18               sub esp, 0x18
// 00845743  53                   push ebx
// 00845744  55                   push ebp
// 00845745  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00845749  56                   push esi
// 0084574a  33f6                 xor esi, esi
// 0084574c  33db                 xor ebx, ebx
// 0084574e  39712c               cmp dword ptr [ecx + 0x2c], esi
// 00845751  894c2418             mov dword ptr [esp + 0x18], ecx
// 00845755  897500               mov dword ptr [ebp], esi
// 00845758  897504               mov dword ptr [ebp + 4], esi
// 0084575b  8974240c             mov dword ptr [esp + 0xc], esi
// 0084575f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00845767  89742414             mov dword ptr [esp + 0x14], esi
// 0084576b  0f8e56010000         jle 0x8458c7
// 00845771  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00845775  83c02c               add eax, 0x2c
// 00845778  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084577c  57                   push edi
// 0084577d  8d4900               lea ecx, [ecx]
// 00845780  8378fc00             cmp dword ptr [eax - 4], 0
// 00845784  0f8423010000         je 0x8458ad
// 0084578a  83780400             cmp dword ptr [eax + 4], 0
// 0084578e  0f8519010000         jne 0x8458ad
// 00845794  837c243800           cmp dword ptr [esp + 0x38], 0
// 00845799  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0084579c  8b78f8               mov edi, dword ptr [eax - 8]
// 0084579f  8b4808               mov ecx, dword ptr [eax + 8]
// 008457a2  89542420             mov dword ptr [esp + 0x20], edx
// 008457a6  0f847c000000         je 0x845828
// 008457ac  85c9                 test ecx, ecx
// 008457ae  7416                 je 0x8457c6
// 008457b0  833800               cmp dword ptr [eax], 0
// 008457b3  7516                 jne 0x8457cb
// 008457b5  837c241400           cmp dword ptr [esp + 0x14], 0
// 008457ba  7506                 jne 0x8457c2
// 008457bc  8b542434             mov edx, dword ptr [esp + 0x34]
// 008457c0  031a                 add ebx, dword ptr [edx]
// 008457c2  8b542420             mov edx, dword ptr [esp + 0x20]
// 008457c6  833800               cmp dword ptr [eax], 0
// 008457c9  741d                 je 0x8457e8
// 008457cb  85c9                 test ecx, ecx
// 008457cd  7409                 je 0x8457d8
// 008457cf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008457d3  8b4904               mov ecx, dword ptr [ecx + 4]
// 008457d6  eb02                 jmp 0x8457da
// 008457d8  33c9                 xor ecx, ecx
// 008457da  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008457de  03cb                 add ecx, ebx
// 008457e0  2bf1                 sub esi, ecx
// 008457e2  33db                 xor ebx, ebx
// 008457e4  895c2410             mov dword ptr [esp + 0x10], ebx
// 008457e8  39542410             cmp dword ptr [esp + 0x10], edx
// 008457ec  7f04                 jg 0x8457f2
// 008457ee  89542410             mov dword ptr [esp + 0x10], edx
// 008457f2  03fb                 add edi, ebx
// 008457f4  57                   push edi
// 008457f5  56                   push esi
// 008457f6  53                   push ebx
// 008457f7  8bce                 mov ecx, esi
// 008457f9  2bca                 sub ecx, edx
// 008457fb  51                   push ecx
// 008457fc  83c0d4               add eax, -0x2c
// 008457ff  50                   push eax
// 00845800  ff1538ca9800         call dword ptr [0x98ca38]
// 00845806  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084580a  8b4d00               mov ecx, dword ptr [ebp]
// 0084580d  2bc6                 sub eax, esi
// 0084580f  3bc1                 cmp eax, ecx
// 00845811  7f02                 jg 0x845815
// 00845813  8bc1                 mov eax, ecx
// 00845815  894500               mov dword ptr [ebp], eax
// 00845818  8b4504               mov eax, dword ptr [ebp + 4]
// 0084581b  3bf8                 cmp edi, eax
// 0084581d  7e02                 jle 0x845821
// 0084581f  8bc7                 mov eax, edi
// 00845821  894504               mov dword ptr [ebp + 4], eax
// 00845824  8bdf                 mov ebx, edi
// 00845826  eb75                 jmp 0x84589d
// 00845828  85c9                 test ecx, ecx
// 0084582a  7413                 je 0x84583f
// 0084582c  833800               cmp dword ptr [eax], 0
// 0084582f  7513                 jne 0x845844
// 00845831  837c241400           cmp dword ptr [esp + 0x14], 0
// 00845836  7507                 jne 0x84583f
// 00845838  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0084583c  037500               add esi, dword ptr [ebp]
// 0084583f  833800               cmp dword ptr [eax], 0
// 00845842  741d                 je 0x845861
// 00845844  85c9                 test ecx, ecx
// 00845846  7409                 je 0x845851
// 00845848  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084584c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0084584f  eb02                 jmp 0x845853
// 00845851  33c9                 xor ecx, ecx
// 00845853  8b742410             mov esi, dword ptr [esp + 0x10]
// 00845857  03ce                 add ecx, esi
// 00845859  03d9                 add ebx, ecx
// 0084585b  33f6                 xor esi, esi
// 0084585d  89742410             mov dword ptr [esp + 0x10], esi
// 00845861  397c2410             cmp dword ptr [esp + 0x10], edi
// 00845865  7f04                 jg 0x84586b
// 00845867  897c2410             mov dword ptr [esp + 0x10], edi
// 0084586b  8d2c1f               lea ebp, [edi + ebx]
// 0084586e  55                   push ebp
// 0084586f  8d3c32               lea edi, [edx + esi]
// 00845872  57                   push edi
// 00845873  53                   push ebx
// 00845874  56                   push esi
// 00845875  83c0d4               add eax, -0x2c
// 00845878  50                   push eax
// 00845879  ff1538ca9800         call dword ptr [0x98ca38]
// 0084587f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00845883  8b08                 mov ecx, dword ptr [eax]
// 00845885  3bf9                 cmp edi, ecx
// 00845887  7e02                 jle 0x84588b
// 00845889  8bcf                 mov ecx, edi
// 0084588b  8908                 mov dword ptr [eax], ecx
// 0084588d  8b4804               mov ecx, dword ptr [eax + 4]
// 00845890  3be9                 cmp ebp, ecx
// 00845892  7f02                 jg 0x845896
// 00845894  8be9                 mov ebp, ecx
// 00845896  896804               mov dword ptr [eax + 4], ebp
// 00845899  8bf7                 mov esi, edi
// 0084589b  8be8                 mov ebp, eax
// 0084589d  8b442430             mov eax, dword ptr [esp + 0x30]
// 008458a1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008458a5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008458ad  8b542418             mov edx, dword ptr [esp + 0x18]
// 008458b1  42                   inc edx
// 008458b2  83c040               add eax, 0x40
// 008458b5  3b512c               cmp edx, dword ptr [ecx + 0x2c]
// 008458b8  89542418             mov dword ptr [esp + 0x18], edx
// 008458bc  89442430             mov dword ptr [esp + 0x30], eax
// 008458c0  0f8cbafeffff         jl 0x845780
// 008458c6  5f                   pop edi
// 008458c7  5e                   pop esi
// 008458c8  8bc5                 mov eax, ebp
// 008458ca  5d                   pop ebp
// 008458cb  5b                   pop ebx
// 008458cc  83c418               add esp, 0x18
// 008458cf  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CalcSize@CXTPControls@@IAE?AVCSize@@PAUXTPBUTTONINFO@1@ABV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
