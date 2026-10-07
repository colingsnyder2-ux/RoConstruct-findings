// roc 2008-06 00734770  unit: XTPPaintThemes::CXTPDefaultTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00734770
//
// 00734770  83ec10               sub esp, 0x10
// 00734773  53                   push ebx
// 00734774  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00734778  56                   push esi
// 00734779  57                   push edi
// 0073477a  8d44240c             lea eax, [esp + 0xc]
// 0073477e  8bf1                 mov esi, ecx
// 00734780  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00734783  50                   push eax
// 00734784  51                   push ecx
// 00734785  ff15842d8000         call dword ptr [0x802d84]
// 0073478b  6a0f                 push 0xf
// 0073478d  8bce                 mov ecx, esi
// 0073478f  e8dc98f7ff           call 0x6ae070
// 00734794  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00734798  50                   push eax
// 00734799  8d542410             lea edx, [esp + 0x10]
// 0073479d  52                   push edx
// 0073479e  8bcf                 mov ecx, edi
// 007347a0  e8b9cbf6ff           call 0x6a135e
// 007347a5  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 007347ab  83f804               cmp eax, 4
// 007347ae  7413                 je 0x7347c3
// 007347b0  83f805               cmp eax, 5
// 007347b3  740e                 je 0x7347c3
// 007347b5  53                   push ebx
// 007347b6  8bce                 mov ecx, esi
// 007347b8  e8a3a2f7ff           call 0x6aea60
// 007347bd  85c0                 test eax, eax
// 007347bf  7569                 jne 0x73482a
// 007347c1  eb3b                 jmp 0x7347fe
// 007347c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007347c7  8b542410             mov edx, dword ptr [esp + 0x10]
// 007347cb  6a15                 push 0x15
// 007347cd  6a0f                 push 0xf
// 007347cf  83ec10               sub esp, 0x10
// 007347d2  8bc4                 mov eax, esp
// 007347d4  8908                 mov dword ptr [eax], ecx
// 007347d6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007347da  895004               mov dword ptr [eax + 4], edx
// 007347dd  8b542430             mov edx, dword ptr [esp + 0x30]
// 007347e1  894808               mov dword ptr [eax + 8], ecx
// 007347e4  57                   push edi
// 007347e5  8bce                 mov ecx, esi
// 007347e7  89500c               mov dword ptr [eax + 0xc], edx
// 007347ea  e8819af7ff           call 0x6ae270
// 007347ef  6aff                 push -1
// 007347f1  6aff                 push -1
// 007347f3  8d442414             lea eax, [esp + 0x14]
// 007347f7  50                   push eax
// 007347f8  ff15282d8000         call dword ptr [0x802d28]
// 007347fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00734802  8b542410             mov edx, dword ptr [esp + 0x10]
// 00734806  6a10                 push 0x10
// 00734808  6a14                 push 0x14
// 0073480a  83ec10               sub esp, 0x10
// 0073480d  8bc4                 mov eax, esp
// 0073480f  8908                 mov dword ptr [eax], ecx
// 00734811  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00734815  895004               mov dword ptr [eax + 4], edx
// 00734818  8b542430             mov edx, dword ptr [esp + 0x30]
// 0073481c  894808               mov dword ptr [eax + 8], ecx
// 0073481f  57                   push edi
// 00734820  8bce                 mov ecx, esi
// 00734822  89500c               mov dword ptr [eax + 0xc], edx
// 00734825  e8469af7ff           call 0x6ae270
// 0073482a  5f                   pop edi
// 0073482b  5e                   pop esi
// 0073482c  5b                   pop ebx
// 0073482d  83c410               add esp, 0x10
// 00734830  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?FillCommandBarEntry@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
