// roc 2011-06 008d1860  unit: CXTPShadowsManager::CShadowWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1860
//
// 008d1860  83ec30               sub esp, 0x30
// 008d1863  53                   push ebx
// 008d1864  8bd9                 mov ebx, ecx
// 008d1866  53                   push ebx
// 008d1867  8d4c2408             lea ecx, [esp + 8]
// 008d186b  e8c0b4f8ff           call 0x85cd30
// 008d1870  8d442438             lea eax, [esp + 0x38]
// 008d1874  50                   push eax
// 008d1875  8d4c2408             lea ecx, [esp + 8]
// 008d1879  51                   push ecx
// 008d187a  8d54241c             lea edx, [esp + 0x1c]
// 008d187e  52                   push edx
// 008d187f  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008d1885  85c0                 test eax, eax
// 008d1887  7476                 je 0x8d18ff
// 008d1889  56                   push esi
// 008d188a  57                   push edi
// 008d188b  53                   push ebx
// 008d188c  8d4c2430             lea ecx, [esp + 0x30]
// 008d1890  e8fbb4f8ff           call 0x85cd90
// 008d1895  8b3d4c01a400         mov edi, dword ptr [0xa4014c]
// 008d189b  8d44242c             lea eax, [esp + 0x2c]
// 008d189f  50                   push eax
// 008d18a0  ffd7                 call edi
// 008d18a2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d18a6  8bf0                 mov esi, eax
// 008d18a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d18ac  f7d9                 neg ecx
// 008d18ae  51                   push ecx
// 008d18af  f7d8                 neg eax
// 008d18b1  50                   push eax
// 008d18b2  8d4c2424             lea ecx, [esp + 0x24]
// 008d18b6  51                   push ecx
// 008d18b7  ff15601ca400         call dword ptr [0xa41c60]
// 008d18bd  8d54241c             lea edx, [esp + 0x1c]
// 008d18c1  52                   push edx
// 008d18c2  ffd7                 call edi
// 008d18c4  6a04                 push 4
// 008d18c6  8bf8                 mov edi, eax
// 008d18c8  57                   push edi
// 008d18c9  56                   push esi
// 008d18ca  56                   push esi
// 008d18cb  ff15ac00a400         call dword ptr [0xa400ac]
// 008d18d1  57                   push edi
// 008d18d2  8b3d9c01a400         mov edi, dword ptr [0xa4019c]
// 008d18d8  ffd7                 call edi
// 008d18da  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008d18dd  6a00                 push 0
// 008d18df  56                   push esi
// 008d18e0  50                   push eax
// 008d18e1  ff15041ca400         call dword ptr [0xa41c04]
// 008d18e7  85c0                 test eax, eax
// 008d18e9  7503                 jne 0x8d18ee
// 008d18eb  56                   push esi
// 008d18ec  ffd7                 call edi
// 008d18ee  5f                   pop edi
// 008d18ef  b801000000           mov eax, 1
// 008d18f4  5e                   pop esi
// 008d18f5  894360               mov dword ptr [ebx + 0x60], eax
// 008d18f8  5b                   pop ebx
// 008d18f9  83c430               add esp, 0x30
// 008d18fc  c21000               ret 0x10
// 008d18ff  b801000000           mov eax, 1
// 008d1904  5b                   pop ebx
// 008d1905  83c430               add esp, 0x30
// 008d1908  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?ExcludeRect@CShadowWnd@CXTPShadowManager@@QAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
