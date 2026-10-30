// roc 2012-06 00a4ff60  unit: CXTPTabPaintManager  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ff60
//
// 00a4ff60  83ec10               sub esp, 0x10
// 00a4ff63  53                   push ebx
// 00a4ff64  55                   push ebp
// 00a4ff65  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00a4ff69  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00a4ff6c  56                   push esi
// 00a4ff6d  57                   push edi
// 00a4ff6e  33ff                 xor edi, edi
// 00a4ff70  33db                 xor ebx, ebx
// 00a4ff72  3bc7                 cmp eax, edi
// 00a4ff74  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a4ff78  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a4ff80  897c2414             mov dword ptr [esp + 0x14], edi
// 00a4ff84  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a4ff88  897c2424             mov dword ptr [esp + 0x24], edi
// 00a4ff8c  7e6d                 jle 0xa4fffb
// 00a4ff8e  8bff                 mov edi, edi
// 00a4ff90  85ff                 test edi, edi
// 00a4ff92  7c0d                 jl 0xa4ffa1
// 00a4ff94  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 00a4ff97  7d08                 jge 0xa4ffa1
// 00a4ff99  8b4558               mov eax, dword ptr [ebp + 0x58]
// 00a4ff9c  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00a4ff9f  eb02                 jmp 0xa4ffa3
// 00a4ffa1  33f6                 xor esi, esi
// 00a4ffa3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a4ffa6  397104               cmp dword ptr [ecx + 4], esi
// 00a4ffa9  7504                 jne 0xa4ffaf
// 00a4ffab  89742424             mov dword ptr [esp + 0x24], esi
// 00a4ffaf  8bce                 mov ecx, esi
// 00a4ffb1  e8ca6ef9ff           call 0x9e6e80
// 00a4ffb6  85c0                 test eax, eax
// 00a4ffb8  7419                 je 0xa4ffd3
// 00a4ffba  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a4ffbe  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 00a4ffc4  8b01                 mov eax, dword ptr [ecx]
// 00a4ffc6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a4ffca  8b4018               mov eax, dword ptr [eax + 0x18]
// 00a4ffcd  56                   push esi
// 00a4ffce  52                   push edx
// 00a4ffcf  ffd0                 call eax
// 00a4ffd1  eb02                 jmp 0xa4ffd5
// 00a4ffd3  33c0                 xor eax, eax
// 00a4ffd5  8d0c18               lea ecx, [eax + ebx]
// 00a4ffd8  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 00a4ffdc  894620               mov dword ptr [esi + 0x20], eax
// 00a4ffdf  894624               mov dword ptr [esi + 0x24], eax
// 00a4ffe2  7e0a                 jle 0xa4ffee
// 00a4ffe4  85db                 test ebx, ebx
// 00a4ffe6  7406                 je 0xa4ffee
// 00a4ffe8  33db                 xor ebx, ebx
// 00a4ffea  ff442410             inc dword ptr [esp + 0x10]
// 00a4ffee  01442414             add dword ptr [esp + 0x14], eax
// 00a4fff2  47                   inc edi
// 00a4fff3  03d8                 add ebx, eax
// 00a4fff5  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00a4fff9  7c95                 jl 0xa4ff90
// 00a4fffb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4ffff  8b8d88000000         mov ecx, dword ptr [ebp + 0x88]
// 00a50005  52                   push edx
// 00a50006  e825beffff           call 0xa4be30
// 00a5000b  837c241001           cmp dword ptr [esp + 0x10], 1
// 00a50010  8bf0                 mov esi, eax
// 00a50012  7451                 je 0xa50065
// 00a50014  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a50018  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5001c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a50020  50                   push eax
// 00a50021  6a00                 push 0
// 00a50023  51                   push ecx
// 00a50024  55                   push ebp
// 00a50025  8bcf                 mov ecx, edi
// 00a50027  c7460400000000       mov dword ptr [esi + 4], 0
// 00a5002e  c70600000000         mov dword ptr [esi], 0
// 00a50034  e807feffff           call 0xa4fe40
// 00a50039  83bfa400000000       cmp dword ptr [edi + 0xa4], 0
// 00a50040  7523                 jne 0xa50065
// 00a50042  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a50046  85c0                 test eax, eax
// 00a50048  741b                 je 0xa50065
// 00a5004a  8b4064               mov eax, dword ptr [eax + 0x64]
// 00a5004d  8b3e                 mov edi, dword ptr [esi]
// 00a5004f  8b0cc6               mov ecx, dword ptr [esi + eax*8]
// 00a50052  8b54c604             mov edx, dword ptr [esi + eax*8 + 4]
// 00a50056  893cc6               mov dword ptr [esi + eax*8], edi
// 00a50059  8b7e04               mov edi, dword ptr [esi + 4]
// 00a5005c  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 00a50060  890e                 mov dword ptr [esi], ecx
// 00a50062  895604               mov dword ptr [esi + 4], edx
// 00a50065  5f                   pop edi
// 00a50066  5e                   pop esi
// 00a50067  5d                   pop ebp
// 00a50068  5b                   pop ebx
// 00a50069  83c410               add esp, 0x10
// 00a5006c  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?CreateMultiRowIndexer@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
