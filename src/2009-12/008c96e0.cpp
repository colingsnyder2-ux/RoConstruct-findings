// roc 2009-12 008c96e0  unit: CXTPPropertyGridPaintManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c96e0
//
// 008c96e0  53                   push ebx
// 008c96e1  55                   push ebp
// 008c96e2  56                   push esi
// 008c96e3  8bd9                 mov ebx, ecx
// 008c96e5  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008c96e8  57                   push edi
// 008c96e9  e88245f8ff           call 0x84dc70
// 008c96ee  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008c96f2  8b742418             mov esi, dword ptr [esp + 0x18]
// 008c96f6  8be8                 mov ebp, eax
// 008c96f8  85ff                 test edi, edi
// 008c96fa  0f84f7000000         je 0x8c97f7
// 008c9700  83e801               sub eax, 1
// 008c9703  0f84b4000000         je 0x8c97bd
// 008c9709  83e801               sub eax, 1
// 008c970c  747d                 je 0x8c978b
// 008c970e  83e801               sub eax, 1
// 008c9711  0f85e0000000         jne 0x8c97f7
// 008c9717  e8b462f6ff           call 0x82f9d0
// 008c971c  6a14                 push 0x14
// 008c971e  8bc8                 mov ecx, eax
// 008c9720  e8db59f6ff           call 0x82f100
// 008c9725  8bd8                 mov ebx, eax
// 008c9727  e8a462f6ff           call 0x82f9d0
// 008c972c  6a10                 push 0x10
// 008c972e  8bc8                 mov ecx, eax
// 008c9730  e8cb59f6ff           call 0x82f100
// 008c9735  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c9738  8b16                 mov edx, dword ptr [esi]
// 008c973a  53                   push ebx
// 008c973b  50                   push eax
// 008c973c  8b460c               mov eax, dword ptr [esi + 0xc]
// 008c973f  2bc1                 sub eax, ecx
// 008c9741  50                   push eax
// 008c9742  8b4608               mov eax, dword ptr [esi + 8]
// 008c9745  2bc2                 sub eax, edx
// 008c9747  50                   push eax
// 008c9748  51                   push ecx
// 008c9749  52                   push edx
// 008c974a  8bcf                 mov ecx, edi
// 008c974c  e82bd50500           call 0x926c7c
// 008c9751  e87a62f6ff           call 0x82f9d0
// 008c9756  6a0f                 push 0xf
// 008c9758  8bc8                 mov ecx, eax
// 008c975a  e8a159f6ff           call 0x82f100
// 008c975f  8bd8                 mov ebx, eax
// 008c9761  e86a62f6ff           call 0x82f9d0
// 008c9766  6a15                 push 0x15
// 008c9768  8bc8                 mov ecx, eax
// 008c976a  e89159f6ff           call 0x82f100
// 008c976f  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c9772  8b16                 mov edx, dword ptr [esi]
// 008c9774  53                   push ebx
// 008c9775  50                   push eax
// 008c9776  8b460c               mov eax, dword ptr [esi + 0xc]
// 008c9779  2bc1                 sub eax, ecx
// 008c977b  83e802               sub eax, 2
// 008c977e  50                   push eax
// 008c977f  8b4608               mov eax, dword ptr [esi + 8]
// 008c9782  2bc2                 sub eax, edx
// 008c9784  83e802               sub eax, 2
// 008c9787  41                   inc ecx
// 008c9788  42                   inc edx
// 008c9789  eb62                 jmp 0x8c97ed
// 008c978b  8b4344               mov eax, dword ptr [ebx + 0x44]
// 008c978e  83f8ff               cmp eax, -1
// 008c9791  7505                 jne 0x8c9798
// 008c9793  8b5340               mov edx, dword ptr [ebx + 0x40]
// 008c9796  eb02                 jmp 0x8c979a
// 008c9798  8bd0                 mov edx, eax
// 008c979a  83f8ff               cmp eax, -1
// 008c979d  7505                 jne 0x8c97a4
// 008c979f  8b5b40               mov ebx, dword ptr [ebx + 0x40]
// 008c97a2  eb02                 jmp 0x8c97a6
// 008c97a4  8bd8                 mov ebx, eax
// 008c97a6  8b4604               mov eax, dword ptr [esi + 4]
// 008c97a9  8b0e                 mov ecx, dword ptr [esi]
// 008c97ab  52                   push edx
// 008c97ac  8b560c               mov edx, dword ptr [esi + 0xc]
// 008c97af  53                   push ebx
// 008c97b0  2bd0                 sub edx, eax
// 008c97b2  52                   push edx
// 008c97b3  8b5608               mov edx, dword ptr [esi + 8]
// 008c97b6  2bd1                 sub edx, ecx
// 008c97b8  52                   push edx
// 008c97b9  50                   push eax
// 008c97ba  51                   push ecx
// 008c97bb  eb33                 jmp 0x8c97f0
// 008c97bd  e80e62f6ff           call 0x82f9d0
// 008c97c2  6a06                 push 6
// 008c97c4  8bc8                 mov ecx, eax
// 008c97c6  e83559f6ff           call 0x82f100
// 008c97cb  8bd8                 mov ebx, eax
// 008c97cd  e8fe61f6ff           call 0x82f9d0
// 008c97d2  6a06                 push 6
// 008c97d4  8bc8                 mov ecx, eax
// 008c97d6  e82559f6ff           call 0x82f100
// 008c97db  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c97de  8b16                 mov edx, dword ptr [esi]
// 008c97e0  53                   push ebx
// 008c97e1  50                   push eax
// 008c97e2  8b460c               mov eax, dword ptr [esi + 0xc]
// 008c97e5  2bc1                 sub eax, ecx
// 008c97e7  50                   push eax
// 008c97e8  8b4608               mov eax, dword ptr [esi + 8]
// 008c97eb  2bc2                 sub eax, edx
// 008c97ed  50                   push eax
// 008c97ee  51                   push ecx
// 008c97ef  52                   push edx
// 008c97f0  8bcf                 mov ecx, edi
// 008c97f2  e885d40500           call 0x926c7c
// 008c97f7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008c97fc  744a                 je 0x8c9848
// 008c97fe  83fd03               cmp ebp, 3
// 008c9801  7517                 jne 0x8c981a
// 008c9803  b802000000           mov eax, 2
// 008c9808  0106                 add dword ptr [esi], eax
// 008c980a  014604               add dword ptr [esi + 4], eax
// 008c980d  294608               sub dword ptr [esi + 8], eax
// 008c9810  29460c               sub dword ptr [esi + 0xc], eax
// 008c9813  5f                   pop edi
// 008c9814  5e                   pop esi
// 008c9815  5d                   pop ebp
// 008c9816  5b                   pop ebx
// 008c9817  c20c00               ret 0xc
// 008c981a  83fd02               cmp ebp, 2
// 008c981d  7419                 je 0x8c9838
// 008c981f  83fd01               cmp ebp, 1
// 008c9822  7414                 je 0x8c9838
// 008c9824  33c0                 xor eax, eax
// 008c9826  0106                 add dword ptr [esi], eax
// 008c9828  014604               add dword ptr [esi + 4], eax
// 008c982b  294608               sub dword ptr [esi + 8], eax
// 008c982e  29460c               sub dword ptr [esi + 0xc], eax
// 008c9831  5f                   pop edi
// 008c9832  5e                   pop esi
// 008c9833  5d                   pop ebp
// 008c9834  5b                   pop ebx
// 008c9835  c20c00               ret 0xc
// 008c9838  b801000000           mov eax, 1
// 008c983d  0106                 add dword ptr [esi], eax
// 008c983f  014604               add dword ptr [esi + 4], eax
// 008c9842  294608               sub dword ptr [esi + 8], eax
// 008c9845  29460c               sub dword ptr [esi + 0xc], eax
// 008c9848  5f                   pop edi
// 008c9849  5e                   pop esi
// 008c984a  5d                   pop ebp
// 008c984b  5b                   pop ebx
// 008c984c  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawPropertyGridBorder@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@AAUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
