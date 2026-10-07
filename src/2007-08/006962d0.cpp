// roc 2007-08 006962d0  unit: CXTPToolTipContext  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006962d0
//
// 006962d0  8b442404             mov eax, dword ptr [esp + 4]
// 006962d4  83ec24               sub esp, 0x24
// 006962d7  85c0                 test eax, eax
// 006962d9  757c                 jne 0x696357
// 006962db  8b0d7c8f8c00         mov ecx, dword ptr [0x8c8f7c]
// 006962e1  85c9                 test ecx, ecx
// 006962e3  7472                 je 0x696357
// 006962e5  398190000000         cmp dword ptr [ecx + 0x90], eax
// 006962eb  746a                 je 0x696357
// 006962ed  56                   push esi
// 006962ee  8b742434             mov esi, dword ptr [esp + 0x34]
// 006962f2  8b06                 mov eax, dword ptr [esi]
// 006962f4  8b5604               mov edx, dword ptr [esi + 4]
// 006962f7  89442404             mov dword ptr [esp + 4], eax
// 006962fb  8d442404             lea eax, [esp + 4]
// 006962ff  50                   push eax
// 00696300  6a00                 push 0
// 00696302  89542410             mov dword ptr [esp + 0x10], edx
// 00696306  e825daffff           call 0x693d30
// 0069630b  8b0d7c8f8c00         mov ecx, dword ptr [0x8c8f7c]
// 00696311  3b8190000000         cmp eax, dword ptr [ecx + 0x90]
// 00696317  7422                 je 0x69633b
// 00696319  8b542404             mov edx, dword ptr [esp + 4]
// 0069631d  8b442408             mov eax, dword ptr [esp + 8]
// 00696321  89542420             mov dword ptr [esp + 0x20], edx
// 00696325  8d54240c             lea edx, [esp + 0xc]
// 00696329  52                   push edx
// 0069632a  89442428             mov dword ptr [esp + 0x28], eax
// 0069632e  c744241400020000     mov dword ptr [esp + 0x14], 0x200
// 00696336  e885f4ffff           call 0x6957c0
// 0069633b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0069633f  8b0d788f8c00         mov ecx, dword ptr [0x8c8f78]
// 00696345  56                   push esi
// 00696346  50                   push eax
// 00696347  6a00                 push 0
// 00696349  51                   push ecx
// 0069634a  ff1530ee7700         call dword ptr [0x77ee30]
// 00696350  5e                   pop esi
// 00696351  83c424               add esp, 0x24
// 00696354  c20c00               ret 0xc
// 00696357  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069635b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0069635f  52                   push edx
// 00696360  8b15788f8c00         mov edx, dword ptr [0x8c8f78]
// 00696366  51                   push ecx
// 00696367  50                   push eax
// 00696368  52                   push edx
// 00696369  ff1530ee7700         call dword ptr [0x77ee30]
// 0069636f  83c424               add esp, 0x24
// 00696372  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?MouseProc@CXTPToolTipContextToolTip@@KGJHIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
