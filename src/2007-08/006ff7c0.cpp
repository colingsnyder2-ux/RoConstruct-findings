// from server: 100% by auto
// roc 2007-08 006ff7c0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ff7c0
//
// 006ff7c0  53                   push ebx
// 006ff7c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006ff7c5  55                   push ebp
// 006ff7c6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006ff7ca  56                   push esi
// 006ff7cb  6a00                 push 0
// 006ff7cd  6a00                 push 0
// 006ff7cf  53                   push ebx
// 006ff7d0  55                   push ebp
// 006ff7d1  8bf1                 mov esi, ecx
// 006ff7d3  e858f3ffff           call 0x6feb30
// 006ff7d8  85c0                 test eax, eax
// 006ff7da  741b                 je 0x6ff7f7
// 006ff7dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ff7e0  8b10                 mov edx, dword ptr [eax]
// 006ff7e2  8b520c               mov edx, dword ptr [edx + 0xc]
// 006ff7e5  53                   push ebx
// 006ff7e6  55                   push ebp
// 006ff7e7  51                   push ecx
// 006ff7e8  8bc8                 mov ecx, eax
// 006ff7ea  ffd2                 call edx
// 006ff7ec  5e                   pop esi
// 006ff7ed  5d                   pop ebp
// 006ff7ee  b801000000           mov eax, 1
// 006ff7f3  5b                   pop ebx
// 006ff7f4  c21000               ret 0x10
// 006ff7f7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006ff7fc  7408                 je 0x6ff806
// 006ff7fe  5e                   pop esi
// 006ff7ff  5d                   pop ebp
// 006ff800  33c0                 xor eax, eax
// 006ff802  5b                   pop ebx
// 006ff803  c21000               ret 0x10
// 006ff806  57                   push edi
// 006ff807  53                   push ebx
// 006ff808  55                   push ebp
// 006ff809  8bce                 mov ecx, esi
// 006ff80b  e850f0ffff           call 0x6fe860
// 006ff810  8bf8                 mov edi, eax
// 006ff812  85ff                 test edi, edi
// 006ff814  7476                 je 0x6ff88c
// 006ff816  8b06                 mov eax, dword ptr [esi]
// 006ff818  8b5064               mov edx, dword ptr [eax + 0x64]
// 006ff81b  57                   push edi
// 006ff81c  8bce                 mov ecx, esi
// 006ff81e  ffd2                 call edx
// 006ff820  85c0                 test eax, eax
// 006ff822  7468                 je 0x6ff88c
// 006ff824  8b06                 mov eax, dword ptr [esi]
// 006ff826  8b5038               mov edx, dword ptr [eax + 0x38]
// 006ff829  8bce                 mov ecx, esi
// 006ff82b  ffd2                 call edx
// 006ff82d  85c0                 test eax, eax
// 006ff82f  8b06                 mov eax, dword ptr [esi]
// 006ff831  741b                 je 0x6ff84e
// 006ff833  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ff837  8b5068               mov edx, dword ptr [eax + 0x68]
// 006ff83a  57                   push edi
// 006ff83b  53                   push ebx
// 006ff83c  55                   push ebp
// 006ff83d  51                   push ecx
// 006ff83e  8bce                 mov ecx, esi
// 006ff840  ffd2                 call edx
// 006ff842  5f                   pop edi
// 006ff843  5e                   pop esi
// 006ff844  5d                   pop ebp
// 006ff845  b801000000           mov eax, 1
// 006ff84a  5b                   pop ebx
// 006ff84b  c21000               ret 0x10
// 006ff84e  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006ff851  8bce                 mov ecx, esi
// 006ff853  ffd2                 call edx
// 006ff855  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 006ff85c  57                   push edi
// 006ff85d  8bce                 mov ecx, esi
// 006ff85f  7413                 je 0x6ff874
// 006ff861  8b06                 mov eax, dword ptr [esi]
// 006ff863  8b5060               mov edx, dword ptr [eax + 0x60]
// 006ff866  ffd2                 call edx
// 006ff868  5f                   pop edi
// 006ff869  5e                   pop esi
// 006ff86a  5d                   pop ebp
// 006ff86b  b801000000           mov eax, 1
// 006ff870  5b                   pop ebx
// 006ff871  c21000               ret 0x10
// 006ff874  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ff878  53                   push ebx
// 006ff879  55                   push ebp
// 006ff87a  50                   push eax
// 006ff87b  e800fbffff           call 0x6ff380
// 006ff880  5f                   pop edi
// 006ff881  5e                   pop esi
// 006ff882  5d                   pop ebp
// 006ff883  b801000000           mov eax, 1
// 006ff888  5b                   pop ebx
// 006ff889  c21000               ret 0x10
// 006ff88c  5f                   pop edi
// 006ff88d  5e                   pop esi
// 006ff88e  5d                   pop ebp
// 006ff88f  33c0                 xor eax, eax
// 006ff891  5b                   pop ebx
// 006ff892  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
