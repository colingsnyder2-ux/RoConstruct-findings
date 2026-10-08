// roc 2011-06 00865240  unit: CXTPControlTabWorkspace  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865240
//
// 00865240  83ec08               sub esp, 8
// 00865243  53                   push ebx
// 00865244  56                   push esi
// 00865245  8bd9                 mov ebx, ecx
// 00865247  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 0086524d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00865250  57                   push edi
// 00865251  8dbb78010000         lea edi, [ebx + 0x178]
// 00865257  8bcf                 mov ecx, edi
// 00865259  ffd2                 call edx
// 0086525b  8bf0                 mov esi, eax
// 0086525d  85f6                 test esi, esi
// 0086525f  751c                 jne 0x86527d
// 00865261  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00865265  8b742418             mov esi, dword ptr [esp + 0x18]
// 00865269  50                   push eax
// 0086526a  56                   push esi
// 0086526b  8bcb                 mov ecx, ebx
// 0086526d  e8ce7afaff           call 0x80cd40
// 00865272  5f                   pop edi
// 00865273  8bc6                 mov eax, esi
// 00865275  5e                   pop esi
// 00865276  5b                   pop ebx
// 00865277  83c408               add esp, 8
// 0086527a  c20800               ret 8
// 0086527d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00865283  57                   push edi
// 00865284  e8b7890700           call 0x8ddc40
// 00865289  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0086528d  7403                 je 0x865292
// 0086528f  83c002               add eax, 2
// 00865292  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 00865298  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0086529e  83f902               cmp ecx, 2
// 008652a1  740a                 je 0x8652ad
// 008652a3  83f903               cmp ecx, 3
// 008652a6  7405                 je 0x8652ad
// 008652a8  83f905               cmp ecx, 5
// 008652ab  7510                 jne 0x8652bd
// 008652ad  8b9360010000         mov edx, dword ptr [ebx + 0x160]
// 008652b3  8944240c             mov dword ptr [esp + 0xc], eax
// 008652b7  89542410             mov dword ptr [esp + 0x10], edx
// 008652bb  eb0e                 jmp 0x8652cb
// 008652bd  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 008652c3  894c240c             mov dword ptr [esp + 0xc], ecx
// 008652c7  89442410             mov dword ptr [esp + 0x10], eax
// 008652cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 008652cf  8d4c240c             lea ecx, [esp + 0xc]
// 008652d3  8b11                 mov edx, dword ptr [ecx]
// 008652d5  8b4904               mov ecx, dword ptr [ecx + 4]
// 008652d8  5f                   pop edi
// 008652d9  5e                   pop esi
// 008652da  8910                 mov dword ptr [eax], edx
// 008652dc  894804               mov dword ptr [eax + 4], ecx
// 008652df  5b                   pop ebx
// 008652e0  83c408               add esp, 8
// 008652e3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetSize@CXTPControlTabWorkspace@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
