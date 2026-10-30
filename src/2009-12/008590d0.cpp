// roc 2009-12 008590d0  unit: CXTPTabClientWnd  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008590d0
//
// 008590d0  83ec08               sub esp, 8
// 008590d3  56                   push esi
// 008590d4  8bf1                 mov esi, ecx
// 008590d6  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 008590dd  0f84e3000000         je 0x8591c6
// 008590e3  83be8800000000       cmp dword ptr [esi + 0x88], 0
// 008590ea  0f85d6000000         jne 0x8591c6
// 008590f0  8b06                 mov eax, dword ptr [esi]
// 008590f2  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008590f8  c7868800000001000000 mov dword ptr [esi + 0x88], 1
// 00859102  ffd2                 call edx
// 00859104  8bce                 mov ecx, esi
// 00859106  e845d5ffff           call 0x856650
// 0085910b  85c0                 test eax, eax
// 0085910d  7463                 je 0x859172
// 0085910f  8d442404             lea eax, [esp + 4]
// 00859113  50                   push eax
// 00859114  ff1538cc9800         call dword ptr [0x98cc38]
// 0085911a  8d4c2404             lea ecx, [esp + 4]
// 0085911e  51                   push ecx
// 0085911f  8bce                 mov ecx, esi
// 00859121  e8eae4ffff           call 0x857610
// 00859126  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085912d  7415                 je 0x859144
// 0085912f  8b542408             mov edx, dword ptr [esp + 8]
// 00859133  8b442404             mov eax, dword ptr [esp + 4]
// 00859137  52                   push edx
// 00859138  50                   push eax
// 00859139  6a00                 push 0
// 0085913b  8bce                 mov ecx, esi
// 0085913d  e8def5ffff           call 0x858720
// 00859142  eb2e                 jmp 0x859172
// 00859144  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 0085914b  7525                 jne 0x859172
// 0085914d  6a00                 push 0
// 0085914f  8bce                 mov ecx, esi
// 00859151  e8eae3ffff           call 0x857540
// 00859156  85c0                 test eax, eax
// 00859158  7405                 je 0x85915f
// 0085915a  8d48a8               lea ecx, [eax - 0x58]
// 0085915d  eb02                 jmp 0x859161
// 0085915f  33c9                 xor ecx, ecx
// 00859161  8b542408             mov edx, dword ptr [esp + 8]
// 00859165  8b442404             mov eax, dword ptr [esp + 4]
// 00859169  52                   push edx
// 0085916a  50                   push eax
// 0085916b  6a00                 push 0
// 0085916d  e8febaffff           call 0x854c70
// 00859172  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00859175  6a00                 push 0
// 00859177  6a00                 push 0
// 00859179  51                   push ecx
// 0085917a  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00859180  837c241000           cmp dword ptr [esp + 0x10], 0
// 00859185  7435                 je 0x8591bc
// 00859187  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085918e  7413                 je 0x8591a3
// 00859190  6a27                 push 0x27
// 00859192  6a00                 push 0
// 00859194  6a00                 push 0
// 00859196  6a00                 push 0
// 00859198  6a00                 push 0
// 0085919a  6a00                 push 0
// 0085919c  8bce                 mov ecx, esi
// 0085919e  e889aaf9ff           call 0x7f3c2c
// 008591a3  8b16                 mov edx, dword ptr [esi]
// 008591a5  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008591ab  8bce                 mov ecx, esi
// 008591ad  ffd0                 call eax
// 008591af  85c0                 test eax, eax
// 008591b1  7409                 je 0x8591bc
// 008591b3  6a00                 push 0
// 008591b5  8bc8                 mov ecx, eax
// 008591b7  e8e4b7fbff           call 0x8149a0
// 008591bc  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 008591c6  5e                   pop esi
// 008591c7  83c408               add esp, 8
// 008591ca  c20400               ret 4
// copied from an identical function in another client (function ?Refresh@CXTPTabClientWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp