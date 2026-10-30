// roc 2012-06 004047e0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004047e0
//
// 004047e0  56                   push esi
// 004047e1  8bf1                 mov esi, ecx
// 004047e3  e898ffffff           call 0x404780
// 004047e8  8b0e                 mov ecx, dword ptr [esi]
// 004047ea  8a01                 mov al, byte ptr [ecx]
// 004047ec  84c0                 test al, al
// 004047ee  7509                 jne 0x4047f9
// 004047f0  b809000280           mov eax, 0x80020009
// 004047f5  5e                   pop esi
// 004047f6  c20400               ret 4
// 004047f9  53                   push ebx
// 004047fa  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004047fe  55                   push ebp
// 004047ff  8b2d183cb200         mov ebp, dword ptr [0xb23c18]
// 00404805  57                   push edi
// 00404806  895c2414             mov dword ptr [esp + 0x14], ebx
// 0040480a  3c27                 cmp al, 0x27
// 0040480c  7574                 jne 0x404882
// 0040480e  51                   push ecx
// 0040480f  ffd5                 call ebp
// 00404811  8906                 mov dword ptr [esi], eax
// 00404813  803800               cmp byte ptr [eax], 0
// 00404816  7450                 je 0x404868
// 00404818  8b06                 mov eax, dword ptr [esi]
// 0040481a  803827               cmp byte ptr [eax], 0x27
// 0040481d  7508                 jne 0x404827
// 0040481f  50                   push eax
// 00404820  ffd5                 call ebp
// 00404822  803827               cmp byte ptr [eax], 0x27
// 00404825  7541                 jne 0x404868
// 00404827  8b06                 mov eax, dword ptr [esi]
// 00404829  803827               cmp byte ptr [eax], 0x27
// 0040482c  7505                 jne 0x404833
// 0040482e  50                   push eax
// 0040482f  ffd5                 call ebp
// 00404831  8906                 mov dword ptr [esi], eax
// 00404833  8b3e                 mov edi, dword ptr [esi]
// 00404835  57                   push edi
// 00404836  ffd5                 call ebp
// 00404838  8b542414             mov edx, dword ptr [esp + 0x14]
// 0040483c  8906                 mov dword ptr [esi], eax
// 0040483e  2bc7                 sub eax, edi
// 00404840  8d4c1801             lea ecx, [eax + ebx + 1]
// 00404844  81c200100000         add edx, 0x1000
// 0040484a  3bca                 cmp ecx, edx
// 0040484c  0f838c000000         jae 0x4048de
// 00404852  85c0                 test eax, eax
// 00404854  7e0b                 jle 0x404861
// 00404856  8a0f                 mov cl, byte ptr [edi]
// 00404858  880b                 mov byte ptr [ebx], cl
// 0040485a  43                   inc ebx
// 0040485b  47                   inc edi
// 0040485c  83e801               sub eax, 1
// 0040485f  75f5                 jne 0x404856
// 00404861  8b16                 mov edx, dword ptr [esi]
// 00404863  803a00               cmp byte ptr [edx], 0
// 00404866  75b0                 jne 0x404818
// 00404868  8b06                 mov eax, dword ptr [esi]
// 0040486a  803800               cmp byte ptr [eax], 0
// 0040486d  746f                 je 0x4048de
// 0040486f  c60300               mov byte ptr [ebx], 0
// 00404872  8b0e                 mov ecx, dword ptr [esi]
// 00404874  51                   push ecx
// 00404875  ffd5                 call ebp
// 00404877  5f                   pop edi
// 00404878  5d                   pop ebp
// 00404879  8906                 mov dword ptr [esi], eax
// 0040487b  5b                   pop ebx
// 0040487c  33c0                 xor eax, eax
// 0040487e  5e                   pop esi
// 0040487f  c20400               ret 4
// 00404882  8b3e                 mov edi, dword ptr [esi]
// 00404884  0fbe07               movsx eax, byte ptr [edi]
// 00404887  83c0f7               add eax, -9
// 0040488a  83f817               cmp eax, 0x17
// 0040488d  770e                 ja 0x40489d
// 0040488f  0fb690f4484000       movzx edx, byte ptr [eax + 0x4048f4]
// 00404896  ff2495ec484000       jmp dword ptr [edx*4 + 0x4048ec]
// 0040489d  57                   push edi
// 0040489e  ffd5                 call ebp
// 004048a0  8b542414             mov edx, dword ptr [esp + 0x14]
// 004048a4  8906                 mov dword ptr [esi], eax
// 004048a6  2bc7                 sub eax, edi
// 004048a8  8d4c1801             lea ecx, [eax + ebx + 1]
// 004048ac  81c200100000         add edx, 0x1000
// 004048b2  3bca                 cmp ecx, edx
// 004048b4  7328                 jae 0x4048de
// 004048b6  85c0                 test eax, eax
// 004048b8  7e11                 jle 0x4048cb
// 004048ba  8d9b00000000         lea ebx, [ebx]
// 004048c0  8a0f                 mov cl, byte ptr [edi]
// 004048c2  880b                 mov byte ptr [ebx], cl
// 004048c4  43                   inc ebx
// 004048c5  47                   inc edi
// 004048c6  83e801               sub eax, 1
// 004048c9  75f5                 jne 0x4048c0
// 004048cb  8b16                 mov edx, dword ptr [esi]
// 004048cd  803a00               cmp byte ptr [edx], 0
// 004048d0  75b0                 jne 0x404882
// 004048d2  5f                   pop edi
// 004048d3  5d                   pop ebp
// 004048d4  c60300               mov byte ptr [ebx], 0
// 004048d7  5b                   pop ebx
// 004048d8  33c0                 xor eax, eax
// 004048da  5e                   pop esi
// 004048db  c20400               ret 4
// 004048de  5f                   pop edi
// 004048df  5d                   pop ebp
// 004048e0  5b                   pop ebx
// 004048e1  b809000280           mov eax, 0x80020009
// 004048e6  5e                   pop esi
// 004048e7  c20400               ret 4
// 004048ea  8bff                 mov edi, edi
// 004048ec  d24840               ror byte ptr [eax + 0x40], cl
// 004048ef  009d48400000         add byte ptr [ebp + 0x4048], bl
// 004048f5  0001                 add byte ptr [ecx], al
// 004048f7  0100                 add dword ptr [eax], eax
// 004048f9  0101                 add dword ptr [ecx], eax
// 004048fb  0101                 add dword ptr [ecx], eax
// 004048fd  0101                 add dword ptr [ecx], eax
// 004048ff  0101                 add dword ptr [ecx], eax
// 00404901  0101                 add dword ptr [ecx], eax
// 00404903  0101                 add dword ptr [ecx], eax
// 00404905  0101                 add dword ptr [ecx], eax
// 00404907  0101                 add dword ptr [ecx], eax
// 00404909  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?NextToken@CRegParser@ATL@@IAEJPAD@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp