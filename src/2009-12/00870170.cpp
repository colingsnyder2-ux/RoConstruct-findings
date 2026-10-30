// roc 2009-12 00870170  unit: CXTPNewToolbarDlg  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870170
//
// 00870170  6aff                 push -1
// 00870172  6842fc9500           push 0x95fc42
// 00870177  64a100000000         mov eax, dword ptr fs:[0]
// 0087017d  50                   push eax
// 0087017e  83ec08               sub esp, 8
// 00870181  56                   push esi
// 00870182  a10052b600           mov eax, dword ptr [0xb65200]
// 00870187  33c4                 xor eax, esp
// 00870189  50                   push eax
// 0087018a  8d442410             lea eax, [esp + 0x10]
// 0087018e  64a300000000         mov dword ptr fs:[0], eax
// 00870194  8bf1                 mov esi, ecx
// 00870196  e8e93ff8ff           call 0x7f4184
// 0087019b  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0087019e  85c9                 test ecx, ecx
// 008701a0  747f                 je 0x870221
// 008701a2  8d44240c             lea eax, [esp + 0xc]
// 008701a6  50                   push eax
// 008701a7  e8d4d3f8ff           call 0x7fd580
// 008701ac  50                   push eax
// 008701ad  8d4e78               lea ecx, [esi + 0x78]
// 008701b0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008701b8  ff1538d59800         call dword ptr [0x98d538]
// 008701be  8d4c240c             lea ecx, [esp + 0xc]
// 008701c2  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008701ca  ff15c0de9800         call dword ptr [0x98dec0]
// 008701d0  6a00                 push 0
// 008701d2  8bce                 mov ecx, esi
// 008701d4  e80f39f8ff           call 0x7f3ae8
// 008701d9  8d4c2408             lea ecx, [esp + 8]
// 008701dd  ff1574de9800         call dword ptr [0x98de74]
// 008701e3  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008701eb  e8b0e6ffff           call 0x86e8a0
// 008701f0  8b10                 mov edx, dword ptr [eax]
// 008701f2  8b5208               mov edx, dword ptr [edx + 8]
// 008701f5  68cf230000           push 0x23cf
// 008701fa  8d4c240c             lea ecx, [esp + 0xc]
// 008701fe  51                   push ecx
// 008701ff  8bc8                 mov ecx, eax
// 00870201  ffd2                 call edx
// 00870203  8d4c2408             lea ecx, [esp + 8]
// 00870207  ff1580de9800         call dword ptr [0x98de80]
// 0087020d  50                   push eax
// 0087020e  8bce                 mov ecx, esi
// 00870210  e8ff39f8ff           call 0x7f3c14
// 00870215  8d4c2408             lea ecx, [esp + 8]
// 00870219  ff15c0de9800         call dword ptr [0x98dec0]
// 0087021f  eb07                 jmp 0x870228
// 00870221  8bce                 mov ecx, esi
// 00870223  e818f7ffff           call 0x86f940
// 00870228  b801000000           mov eax, 1
// 0087022d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00870231  64890d00000000       mov dword ptr fs:[0], ecx
// 00870238  59                   pop ecx
// 00870239  5e                   pop esi
// 0087023a  83c414               add esp, 0x14
// 0087023d  c3                   ret 
// copied from an identical function in another client (function ?OnInitDialog@CXTPNewToolbarDlg@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp