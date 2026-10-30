// roc 2007-03 0062b460  unit: seg_00620000  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062b460
//
// 0062b460  83ec24               sub esp, 0x24
// 0062b463  53                   push ebx
// 0062b464  55                   push ebp
// 0062b465  8be9                 mov ebp, ecx
// 0062b467  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 0062b46d  56                   push esi
// 0062b46e  57                   push edi
// 0062b46f  c74424141be80000     mov dword ptr [esp + 0x14], 0xe81b
// 0062b477  c744241800280000     mov dword ptr [esp + 0x18], 0x2800
// 0062b47f  c744241c1ee80000     mov dword ptr [esp + 0x1c], 0xe81e
// 0062b487  c744242000820000     mov dword ptr [esp + 0x20], 0x8200
// 0062b48f  c74424241ce80000     mov dword ptr [esp + 0x24], 0xe81c
// 0062b497  c744242800140000     mov dword ptr [esp + 0x28], 0x1400
// 0062b49f  c744242c1de80000     mov dword ptr [esp + 0x2c], 0xe81d
// 0062b4a7  c744243000410000     mov dword ptr [esp + 0x30], 0x4100
// 0062b4af  89442410             mov dword ptr [esp + 0x10], eax
// 0062b4b3  33f6                 xor esi, esi
// 0062b4b5  8d9d90000000         lea ebx, [ebp + 0x90]
// 0062b4bb  eb03                 jmp 0x62b4c0
// 0062b4bd  8d4900               lea ecx, [ecx]
// 0062b4c0  8b0dcc178c00         mov ecx, dword ptr [0x8c17cc]
// 0062b4c6  e8f534ffff           call 0x61e9c0
// 0062b4cb  8b4cf414             mov ecx, dword ptr [esp + esi*8 + 0x14]
// 0062b4cf  8b54f418             mov edx, dword ptr [esp + esi*8 + 0x18]
// 0062b4d3  51                   push ecx
// 0062b4d4  8bf8                 mov edi, eax
// 0062b4d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062b4da  81ca00000056         or edx, 0x56000000
// 0062b4e0  52                   push edx
// 0062b4e1  50                   push eax
// 0062b4e2  8bcf                 mov ecx, edi
// 0062b4e4  896f6c               mov dword ptr [edi + 0x6c], ebp
// 0062b4e7  e874940600           call 0x694960
// 0062b4ec  85c0                 test eax, eax
// 0062b4ee  7505                 jne 0x62b4f5
// 0062b4f0  e857f61000           call 0x73ab4c
// 0062b4f5  893b                 mov dword ptr [ebx], edi
// 0062b4f7  83c601               add esi, 1
// 0062b4fa  83c304               add ebx, 4
// 0062b4fd  83fe04               cmp esi, 4
// 0062b500  7cbe                 jl 0x62b4c0
// 0062b502  5f                   pop edi
// 0062b503  5e                   pop esi
// 0062b504  5d                   pop ebp
// 0062b505  5b                   pop ebx
// 0062b506  83c424               add esp, 0x24
// 0062b509  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?EnableDocking@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
