// roc 2009-12 0085ada0  unit: CXTPStatusBarPane  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ada0
//
// 0085ada0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085ada4  83ec10               sub esp, 0x10
// 0085ada7  53                   push ebx
// 0085ada8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0085adac  56                   push esi
// 0085adad  8bf1                 mov esi, ecx
// 0085adaf  8bc8                 mov ecx, eax
// 0085adb1  81e1ffff4000         and ecx, 0x40ffff
// 0085adb7  254e00bfff           and eax, 0xffbf004e
// 0085adbc  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0085adc2  83c84e               or eax, 0x4e
// 0085adc5  57                   push edi
// 0085adc6  8bcb                 mov ecx, ebx
// 0085adc8  8bf8                 mov edi, eax
// 0085adca  e8a3b60c00           call 0x926472
// 0085adcf  a900000400           test eax, 0x40000
// 0085add4  740f                 je 0x85ade5
// 0085add6  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 0085addd  7406                 je 0x85ade5
// 0085addf  81cf00010000         or edi, 0x100
// 0085ade5  6800100000           push 0x1000
// 0085adea  e861ba0c00           call 0x926850
// 0085adef  8d54240c             lea edx, [esp + 0xc]
// 0085adf3  52                   push edx
// 0085adf4  ff159cca9800         call dword ptr [0x98ca9c]
// 0085adfa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085adfe  8b542424             mov edx, dword ptr [esp + 0x24]
// 0085ae02  6a00                 push 0
// 0085ae04  50                   push eax
// 0085ae05  53                   push ebx
// 0085ae06  8d4c2418             lea ecx, [esp + 0x18]
// 0085ae0a  51                   push ecx
// 0085ae0b  0bd7                 or edx, edi
// 0085ae0d  52                   push edx
// 0085ae0e  6a00                 push 0
// 0085ae10  68ccd29f00           push 0x9fd2cc
// 0085ae15  8bce                 mov ecx, esi
// 0085ae17  e8b08af9ff           call 0x7f38cc
// 0085ae1c  5f                   pop edi
// 0085ae1d  5e                   pop esi
// 0085ae1e  5b                   pop ebx
// 0085ae1f  83c410               add esp, 0x10
// 0085ae22  c21000               ret 0x10
// copied from an identical function in another client (function ?CreateEx@CXTPStatusBar@@QAEHPAVCWnd@@KKI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp