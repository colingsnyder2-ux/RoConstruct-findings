// from server: 100% by auto
// roc 2012-06 009ec9c0  unit: CXTPToolTipContext  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ec9c0
//
// 009ec9c0  8b442404             mov eax, dword ptr [esp + 4]
// 009ec9c4  83ec24               sub esp, 0x24
// 009ec9c7  85c0                 test eax, eax
// 009ec9c9  757c                 jne 0x9eca47
// 009ec9cb  8b0d009ce500         mov ecx, dword ptr [0xe59c00]
// 009ec9d1  85c9                 test ecx, ecx
// 009ec9d3  7472                 je 0x9eca47
// 009ec9d5  398190000000         cmp dword ptr [ecx + 0x90], eax
// 009ec9db  746a                 je 0x9eca47
// 009ec9dd  56                   push esi
// 009ec9de  8b742434             mov esi, dword ptr [esp + 0x34]
// 009ec9e2  8b06                 mov eax, dword ptr [esi]
// 009ec9e4  8b5604               mov edx, dword ptr [esi + 4]
// 009ec9e7  89442404             mov dword ptr [esp + 4], eax
// 009ec9eb  8d442404             lea eax, [esp + 4]
// 009ec9ef  50                   push eax
// 009ec9f0  6a00                 push 0
// 009ec9f2  89542410             mov dword ptr [esp + 0x10], edx
// 009ec9f6  e875d0ffff           call 0x9e9a70
// 009ec9fb  8b0d009ce500         mov ecx, dword ptr [0xe59c00]
// 009eca01  3b8190000000         cmp eax, dword ptr [ecx + 0x90]
// 009eca07  7422                 je 0x9eca2b
// 009eca09  8b542404             mov edx, dword ptr [esp + 4]
// 009eca0d  8b442408             mov eax, dword ptr [esp + 8]
// 009eca11  89542420             mov dword ptr [esp + 0x20], edx
// 009eca15  8d54240c             lea edx, [esp + 0xc]
// 009eca19  52                   push edx
// 009eca1a  89442428             mov dword ptr [esp + 0x28], eax
// 009eca1e  c744241400020000     mov dword ptr [esp + 0x14], 0x200
// 009eca26  e845f6ffff           call 0x9ec070
// 009eca2b  8b442430             mov eax, dword ptr [esp + 0x30]
// 009eca2f  8b0dfc9be500         mov ecx, dword ptr [0xe59bfc]
// 009eca35  56                   push esi
// 009eca36  50                   push eax
// 009eca37  6a00                 push 0
// 009eca39  51                   push ecx
// 009eca3a  ff15e83cb200         call dword ptr [0xb23ce8]
// 009eca40  5e                   pop esi
// 009eca41  83c424               add esp, 0x24
// 009eca44  c20c00               ret 0xc
// 009eca47  8b542430             mov edx, dword ptr [esp + 0x30]
// 009eca4b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009eca4f  52                   push edx
// 009eca50  8b15fc9be500         mov edx, dword ptr [0xe59bfc]
// 009eca56  51                   push ecx
// 009eca57  50                   push eax
// 009eca58  52                   push edx
// 009eca59  ff15e83cb200         call dword ptr [0xb23ce8]
// 009eca5f  83c424               add esp, 0x24
// 009eca62  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?MouseProc@CXTPToolTipContextToolTip@@KGJHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
