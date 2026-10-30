// roc 2012-06 00a00640  unit: XTPPaintThemes::CXTPDefaultTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a00640
//
// 00a00640  83ec10               sub esp, 0x10
// 00a00643  53                   push ebx
// 00a00644  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a00648  56                   push esi
// 00a00649  57                   push edi
// 00a0064a  8d44240c             lea eax, [esp + 0xc]
// 00a0064e  8bf1                 mov esi, ecx
// 00a00650  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a00653  50                   push eax
// 00a00654  51                   push ecx
// 00a00655  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a0065b  6a0f                 push 0xf
// 00a0065d  8bce                 mov ecx, esi
// 00a0065f  e82c72f8ff           call 0x987890
// 00a00664  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a00668  50                   push eax
// 00a00669  8d542410             lea edx, [esp + 0x10]
// 00a0066d  52                   push edx
// 00a0066e  8bcf                 mov ecx, edi
// 00a00670  e83728f8ff           call 0x982eac
// 00a00675  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00a0067b  83f804               cmp eax, 4
// 00a0067e  7413                 je 0xa00693
// 00a00680  83f805               cmp eax, 5
// 00a00683  740e                 je 0xa00693
// 00a00685  53                   push ebx
// 00a00686  8bce                 mov ecx, esi
// 00a00688  e8f37bf8ff           call 0x988280
// 00a0068d  85c0                 test eax, eax
// 00a0068f  7569                 jne 0xa006fa
// 00a00691  eb3b                 jmp 0xa006ce
// 00a00693  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a00697  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0069b  6a15                 push 0x15
// 00a0069d  6a0f                 push 0xf
// 00a0069f  83ec10               sub esp, 0x10
// 00a006a2  8bc4                 mov eax, esp
// 00a006a4  8908                 mov dword ptr [eax], ecx
// 00a006a6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a006aa  895004               mov dword ptr [eax + 4], edx
// 00a006ad  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a006b1  894808               mov dword ptr [eax + 8], ecx
// 00a006b4  57                   push edi
// 00a006b5  8bce                 mov ecx, esi
// 00a006b7  89500c               mov dword ptr [eax + 0xc], edx
// 00a006ba  e8d173f8ff           call 0x987a90
// 00a006bf  6aff                 push -1
// 00a006c1  6aff                 push -1
// 00a006c3  8d442414             lea eax, [esp + 0x14]
// 00a006c7  50                   push eax
// 00a006c8  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a006ce  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a006d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a006d6  6a10                 push 0x10
// 00a006d8  6a14                 push 0x14
// 00a006da  83ec10               sub esp, 0x10
// 00a006dd  8bc4                 mov eax, esp
// 00a006df  8908                 mov dword ptr [eax], ecx
// 00a006e1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a006e5  895004               mov dword ptr [eax + 4], edx
// 00a006e8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a006ec  894808               mov dword ptr [eax + 8], ecx
// 00a006ef  57                   push edi
// 00a006f0  8bce                 mov ecx, esi
// 00a006f2  89500c               mov dword ptr [eax + 0xc], edx
// 00a006f5  e89673f8ff           call 0x987a90
// 00a006fa  5f                   pop edi
// 00a006fb  5e                   pop esi
// 00a006fc  5b                   pop ebx
// 00a006fd  83c410               add esp, 0x10
// 00a00700  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?FillCommandBarEntry@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
