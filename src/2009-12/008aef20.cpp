// roc 2009-12 008aef20  unit: CXTPDockingPaneMiniWnd  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aef20
//
// 008aef20  83ec08               sub esp, 8
// 008aef23  53                   push ebx
// 008aef24  55                   push ebp
// 008aef25  56                   push esi
// 008aef26  57                   push edi
// 008aef27  8bf1                 mov esi, ecx
// 008aef29  e8d2f7ffff           call 0x8ae700
// 008aef2e  85c0                 test eax, eax
// 008aef30  7465                 je 0x8aef97
// 008aef32  8b442420             mov eax, dword ptr [esp + 0x20]
// 008aef36  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008aef3a  8d542410             lea edx, [esp + 0x10]
// 008aef3e  52                   push edx
// 008aef3f  56                   push esi
// 008aef40  89442418             mov dword ptr [esp + 0x18], eax
// 008aef44  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008aef48  e863d2f9ff           call 0x84c1b0
// 008aef4d  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 008aef53  33ff                 xor edi, edi
// 008aef55  83c408               add esp, 8
// 008aef58  397808               cmp dword ptr [eax + 8], edi
// 008aef5b  7e3a                 jle 0x8aef97
// 008aef5d  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 008aef63  85ff                 test edi, edi
// 008aef65  0f8cb2000000         jl 0x8af01d
// 008aef6b  3b7808               cmp edi, dword ptr [eax + 8]
// 008aef6e  0f8da9000000         jge 0x8af01d
// 008aef74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008aef78  8b4004               mov eax, dword ptr [eax + 4]
// 008aef7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008aef7f  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 008aef82  51                   push ecx
// 008aef83  52                   push edx
// 008aef84  53                   push ebx
// 008aef85  ffd5                 call ebp
// 008aef87  85c0                 test eax, eax
// 008aef89  7548                 jne 0x8aefd3
// 008aef8b  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 008aef91  47                   inc edi
// 008aef92  3b7808               cmp edi, dword ptr [eax + 8]
// 008aef95  7ccc                 jl 0x8aef63
// 008aef97  837c241c02           cmp dword ptr [esp + 0x1c], 2
// 008aef9c  8bce                 mov ecx, esi
// 008aef9e  0f859e000000         jne 0x8af042
// 008aefa4  e801760700           call 0x9265aa
// 008aefa9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008aefac  51                   push ecx
// 008aefad  ff1544cb9800         call dword ptr [0x98cb44]
// 008aefb3  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008aefb9  e882180000           call 0x8b0840
// 008aefbe  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 008aefc4  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 008aefca  85f6                 test esi, esi
// 008aefcc  7454                 je 0x8af022
// 008aefce  8d4e20               lea ecx, [esi + 0x20]
// 008aefd1  eb51                 jmp 0x8af024
// 008aefd3  8bcb                 mov ecx, ebx
// 008aefd5  e8c6b90000           call 0x8ba9a0
// 008aefda  85c0                 test eax, eax
// 008aefdc  7469                 je 0x8af047
// 008aefde  8b06                 mov eax, dword ptr [esi]
// 008aefe0  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 008aefe6  53                   push ebx
// 008aefe7  8bce                 mov ecx, esi
// 008aefe9  ffd2                 call edx
// 008aefeb  85c0                 test eax, eax
// 008aefed  7558                 jne 0x8af047
// 008aefef  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008aeff3  50                   push eax
// 008aeff4  8b442418             mov eax, dword ptr [esp + 0x18]
// 008aeff8  50                   push eax
// 008aeff9  51                   push ecx
// 008aeffa  56                   push esi
// 008aeffb  8bcb                 mov ecx, ebx
// 008aeffd  e80ecf0000           call 0x8bbf10
// 008af002  85c0                 test eax, eax
// 008af004  7441                 je 0x8af047
// 008af006  8b16                 mov edx, dword ptr [esi]
// 008af008  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 008af00e  53                   push ebx
// 008af00f  8bce                 mov ecx, esi
// 008af011  ffd0                 call eax
// 008af013  5f                   pop edi
// 008af014  5e                   pop esi
// 008af015  5d                   pop ebp
// 008af016  5b                   pop ebx
// 008af017  83c408               add esp, 8
// 008af01a  c20c00               ret 0xc
// 008af01d  e8ea4af4ff           call 0x7f3b0c
// 008af022  33c9                 xor ecx, ecx
// 008af024  8b742424             mov esi, dword ptr [esp + 0x24]
// 008af028  8b10                 mov edx, dword ptr [eax]
// 008af02a  56                   push esi
// 008af02b  8b742424             mov esi, dword ptr [esp + 0x24]
// 008af02f  56                   push esi
// 008af030  51                   push ecx
// 008af031  8bc8                 mov ecx, eax
// 008af033  8b4204               mov eax, dword ptr [edx + 4]
// 008af036  ffd0                 call eax
// 008af038  5f                   pop edi
// 008af039  5e                   pop esi
// 008af03a  5d                   pop ebp
// 008af03b  5b                   pop ebx
// 008af03c  83c408               add esp, 8
// 008af03f  c20c00               ret 0xc
// 008af042  e8e94df4ff           call 0x7f3e30
// 008af047  5f                   pop edi
// 008af048  5e                   pop esi
// 008af049  5d                   pop ebp
// 008af04a  5b                   pop ebx
// 008af04b  83c408               add esp, 8
// 008af04e  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnNcLButtonDown@CXTPDockingPaneMiniWnd@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp