// roc 2012-06 009dd850  unit: CXTPControlTabWorkspace  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd850
//
// 009dd850  83ec08               sub esp, 8
// 009dd853  53                   push ebx
// 009dd854  56                   push esi
// 009dd855  8bd9                 mov ebx, ecx
// 009dd857  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 009dd85d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009dd860  57                   push edi
// 009dd861  8dbb78010000         lea edi, [ebx + 0x178]
// 009dd867  8bcf                 mov ecx, edi
// 009dd869  ffd2                 call edx
// 009dd86b  8bf0                 mov esi, eax
// 009dd86d  85f6                 test esi, esi
// 009dd86f  751c                 jne 0x9dd88d
// 009dd871  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009dd875  8b742418             mov esi, dword ptr [esp + 0x18]
// 009dd879  50                   push eax
// 009dd87a  56                   push esi
// 009dd87b  8bcb                 mov ecx, ebx
// 009dd87d  e85e77faff           call 0x984fe0
// 009dd882  5f                   pop edi
// 009dd883  8bc6                 mov eax, esi
// 009dd885  5e                   pop esi
// 009dd886  5b                   pop ebx
// 009dd887  83c408               add esp, 8
// 009dd88a  c20800               ret 8
// 009dd88d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 009dd893  57                   push edi
// 009dd894  e8b7860700           call 0xa55f50
// 009dd899  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 009dd89d  7403                 je 0x9dd8a2
// 009dd89f  83c002               add eax, 2
// 009dd8a2  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 009dd8a8  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 009dd8ae  83f902               cmp ecx, 2
// 009dd8b1  740a                 je 0x9dd8bd
// 009dd8b3  83f903               cmp ecx, 3
// 009dd8b6  7405                 je 0x9dd8bd
// 009dd8b8  83f905               cmp ecx, 5
// 009dd8bb  7510                 jne 0x9dd8cd
// 009dd8bd  8b9360010000         mov edx, dword ptr [ebx + 0x160]
// 009dd8c3  8944240c             mov dword ptr [esp + 0xc], eax
// 009dd8c7  89542410             mov dword ptr [esp + 0x10], edx
// 009dd8cb  eb0e                 jmp 0x9dd8db
// 009dd8cd  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 009dd8d3  894c240c             mov dword ptr [esp + 0xc], ecx
// 009dd8d7  89442410             mov dword ptr [esp + 0x10], eax
// 009dd8db  8b442418             mov eax, dword ptr [esp + 0x18]
// 009dd8df  8d4c240c             lea ecx, [esp + 0xc]
// 009dd8e3  8b11                 mov edx, dword ptr [ecx]
// 009dd8e5  8b4904               mov ecx, dword ptr [ecx + 4]
// 009dd8e8  5f                   pop edi
// 009dd8e9  5e                   pop esi
// 009dd8ea  8910                 mov dword ptr [eax], edx
// 009dd8ec  894804               mov dword ptr [eax + 4], ecx
// 009dd8ef  5b                   pop ebx
// 009dd8f0  83c408               add esp, 8
// 009dd8f3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetSize@CXTPControlTabWorkspace@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
