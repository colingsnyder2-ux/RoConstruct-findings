// roc 2010-06 008847e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008847e0
//
// 008847e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008847e4  56                   push esi
// 008847e5  6a00                 push 0
// 008847e7  6a00                 push 0
// 008847e9  8bf1                 mov esi, ecx
// 008847eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008847ef  50                   push eax
// 008847f0  51                   push ecx
// 008847f1  8bce                 mov ecx, esi
// 008847f3  e858f3ffff           call 0x883b50
// 008847f8  85c0                 test eax, eax
// 008847fa  7421                 je 0x88481d
// 008847fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00884800  8b10                 mov edx, dword ptr [eax]
// 00884802  8b520c               mov edx, dword ptr [edx + 0xc]
// 00884805  51                   push ecx
// 00884806  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088480a  51                   push ecx
// 0088480b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088480f  51                   push ecx
// 00884810  8bc8                 mov ecx, eax
// 00884812  ffd2                 call edx
// 00884814  b801000000           mov eax, 1
// 00884819  5e                   pop esi
// 0088481a  c21000               ret 0x10
// 0088481d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00884822  7406                 je 0x88482a
// 00884824  33c0                 xor eax, eax
// 00884826  5e                   pop esi
// 00884827  c21000               ret 0x10
// 0088482a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088482e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00884832  57                   push edi
// 00884833  50                   push eax
// 00884834  51                   push ecx
// 00884835  8bce                 mov ecx, esi
// 00884837  e834f0ffff           call 0x883870
// 0088483c  8bf8                 mov edi, eax
// 0088483e  85ff                 test edi, edi
// 00884840  0f8484000000         je 0x8848ca
// 00884846  8b16                 mov edx, dword ptr [esi]
// 00884848  8b4264               mov eax, dword ptr [edx + 0x64]
// 0088484b  57                   push edi
// 0088484c  8bce                 mov ecx, esi
// 0088484e  ffd0                 call eax
// 00884850  85c0                 test eax, eax
// 00884852  7476                 je 0x8848ca
// 00884854  8b16                 mov edx, dword ptr [esi]
// 00884856  8b4238               mov eax, dword ptr [edx + 0x38]
// 00884859  8bce                 mov ecx, esi
// 0088485b  ffd0                 call eax
// 0088485d  85c0                 test eax, eax
// 0088485f  7423                 je 0x884884
// 00884861  8b442414             mov eax, dword ptr [esp + 0x14]
// 00884865  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00884869  8b16                 mov edx, dword ptr [esi]
// 0088486b  8b5268               mov edx, dword ptr [edx + 0x68]
// 0088486e  57                   push edi
// 0088486f  50                   push eax
// 00884870  8b442414             mov eax, dword ptr [esp + 0x14]
// 00884874  51                   push ecx
// 00884875  50                   push eax
// 00884876  8bce                 mov ecx, esi
// 00884878  ffd2                 call edx
// 0088487a  5f                   pop edi
// 0088487b  b801000000           mov eax, 1
// 00884880  5e                   pop esi
// 00884881  c21000               ret 0x10
// 00884884  8b06                 mov eax, dword ptr [esi]
// 00884886  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00884889  8bce                 mov ecx, esi
// 0088488b  ffd2                 call edx
// 0088488d  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 00884894  57                   push edi
// 00884895  7413                 je 0x8848aa
// 00884897  8b06                 mov eax, dword ptr [esi]
// 00884899  8b5060               mov edx, dword ptr [eax + 0x60]
// 0088489c  8bce                 mov ecx, esi
// 0088489e  ffd2                 call edx
// 008848a0  5f                   pop edi
// 008848a1  b801000000           mov eax, 1
// 008848a6  5e                   pop esi
// 008848a7  c21000               ret 0x10
// 008848aa  8b442418             mov eax, dword ptr [esp + 0x18]
// 008848ae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008848b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008848b6  50                   push eax
// 008848b7  51                   push ecx
// 008848b8  52                   push edx
// 008848b9  8bce                 mov ecx, esi
// 008848bb  e8f0faffff           call 0x8843b0
// 008848c0  5f                   pop edi
// 008848c1  b801000000           mov eax, 1
// 008848c6  5e                   pop esi
// 008848c7  c21000               ret 0x10
// 008848ca  5f                   pop edi
// 008848cb  33c0                 xor eax, eax
// 008848cd  5e                   pop esi
// 008848ce  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
