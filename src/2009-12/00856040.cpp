// roc 2009-12 00856040  unit: CXTPControlTabWorkspace  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856040
//
// 00856040  83ec08               sub esp, 8
// 00856043  53                   push ebx
// 00856044  56                   push esi
// 00856045  8bd9                 mov ebx, ecx
// 00856047  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 0085604d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00856050  57                   push edi
// 00856051  8dbb78010000         lea edi, [ebx + 0x178]
// 00856057  8bcf                 mov ecx, edi
// 00856059  ffd2                 call edx
// 0085605b  8bf0                 mov esi, eax
// 0085605d  85f6                 test esi, esi
// 0085605f  751c                 jne 0x85607d
// 00856061  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00856065  8b742418             mov esi, dword ptr [esp + 0x18]
// 00856069  50                   push eax
// 0085606a  56                   push esi
// 0085606b  8bcb                 mov ecx, ebx
// 0085606d  e8fe05faff           call 0x7f6670
// 00856072  5f                   pop edi
// 00856073  8bc6                 mov eax, esi
// 00856075  5e                   pop esi
// 00856076  5b                   pop ebx
// 00856077  83c408               add esp, 8
// 0085607a  c20800               ret 8
// 0085607d  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00856083  57                   push edi
// 00856084  e8c72a0800           call 0x8d8b50
// 00856089  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0085608d  7403                 je 0x856092
// 0085608f  83c002               add eax, 2
// 00856092  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 00856098  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0085609e  83f902               cmp ecx, 2
// 008560a1  740a                 je 0x8560ad
// 008560a3  83f903               cmp ecx, 3
// 008560a6  7405                 je 0x8560ad
// 008560a8  83f905               cmp ecx, 5
// 008560ab  7510                 jne 0x8560bd
// 008560ad  8b9360010000         mov edx, dword ptr [ebx + 0x160]
// 008560b3  8944240c             mov dword ptr [esp + 0xc], eax
// 008560b7  89542410             mov dword ptr [esp + 0x10], edx
// 008560bb  eb0e                 jmp 0x8560cb
// 008560bd  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 008560c3  894c240c             mov dword ptr [esp + 0xc], ecx
// 008560c7  89442410             mov dword ptr [esp + 0x10], eax
// 008560cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 008560cf  8d4c240c             lea ecx, [esp + 0xc]
// 008560d3  8b11                 mov edx, dword ptr [ecx]
// 008560d5  8b4904               mov ecx, dword ptr [ecx + 4]
// 008560d8  5f                   pop edi
// 008560d9  5e                   pop esi
// 008560da  8910                 mov dword ptr [eax], edx
// 008560dc  894804               mov dword ptr [eax + 4], ecx
// 008560df  5b                   pop ebx
// 008560e0  83c408               add esp, 8
// 008560e3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetSize@CXTPControlTabWorkspace@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
