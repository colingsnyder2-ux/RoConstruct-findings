// from server: 100% by auto
// roc 2008-06 0070cb60  unit: CXTPToolTipContext  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cb60
//
// 0070cb60  8b442404             mov eax, dword ptr [esp + 4]
// 0070cb64  83ec24               sub esp, 0x24
// 0070cb67  85c0                 test eax, eax
// 0070cb69  757c                 jne 0x70cbe7
// 0070cb6b  8b0d28e99700         mov ecx, dword ptr [0x97e928]
// 0070cb71  85c9                 test ecx, ecx
// 0070cb73  7472                 je 0x70cbe7
// 0070cb75  398190000000         cmp dword ptr [ecx + 0x90], eax
// 0070cb7b  746a                 je 0x70cbe7
// 0070cb7d  56                   push esi
// 0070cb7e  8b742434             mov esi, dword ptr [esp + 0x34]
// 0070cb82  8b06                 mov eax, dword ptr [esi]
// 0070cb84  8b5604               mov edx, dword ptr [esi + 4]
// 0070cb87  89442404             mov dword ptr [esp + 4], eax
// 0070cb8b  8d442404             lea eax, [esp + 4]
// 0070cb8f  50                   push eax
// 0070cb90  6a00                 push 0
// 0070cb92  89542410             mov dword ptr [esp + 0x10], edx
// 0070cb96  e805d0ffff           call 0x709ba0
// 0070cb9b  8b0d28e99700         mov ecx, dword ptr [0x97e928]
// 0070cba1  3b8190000000         cmp eax, dword ptr [ecx + 0x90]
// 0070cba7  7422                 je 0x70cbcb
// 0070cba9  8b542404             mov edx, dword ptr [esp + 4]
// 0070cbad  8b442408             mov eax, dword ptr [esp + 8]
// 0070cbb1  89542420             mov dword ptr [esp + 0x20], edx
// 0070cbb5  8d54240c             lea edx, [esp + 0xc]
// 0070cbb9  52                   push edx
// 0070cbba  89442428             mov dword ptr [esp + 0x28], eax
// 0070cbbe  c744241400020000     mov dword ptr [esp + 0x14], 0x200
// 0070cbc6  e835f6ffff           call 0x70c200
// 0070cbcb  8b442430             mov eax, dword ptr [esp + 0x30]
// 0070cbcf  8b0d24e99700         mov ecx, dword ptr [0x97e924]
// 0070cbd5  56                   push esi
// 0070cbd6  50                   push eax
// 0070cbd7  6a00                 push 0
// 0070cbd9  51                   push ecx
// 0070cbda  ff15602c8000         call dword ptr [0x802c60]
// 0070cbe0  5e                   pop esi
// 0070cbe1  83c424               add esp, 0x24
// 0070cbe4  c20c00               ret 0xc
// 0070cbe7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0070cbeb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0070cbef  52                   push edx
// 0070cbf0  8b1524e99700         mov edx, dword ptr [0x97e924]
// 0070cbf6  51                   push ecx
// 0070cbf7  50                   push eax
// 0070cbf8  52                   push edx
// 0070cbf9  ff15602c8000         call dword ptr [0x802c60]
// 0070cbff  83c424               add esp, 0x24
// 0070cc02  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?MouseProc@CXTPToolTipContextToolTip@@KGJHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
