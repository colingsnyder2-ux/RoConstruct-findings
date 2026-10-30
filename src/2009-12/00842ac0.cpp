// roc 2009-12 00842ac0  unit: CXTPPopupBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00842ac0
//
// 00842ac0  8b542404             mov edx, dword ptr [esp + 4]
// 00842ac4  83ec10               sub esp, 0x10
// 00842ac7  56                   push esi
// 00842ac8  8bf1                 mov esi, ecx
// 00842aca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00842ace  8b06                 mov eax, dword ptr [esi]
// 00842ad0  51                   push ecx
// 00842ad1  52                   push edx
// 00842ad2  8b9004020000         mov edx, dword ptr [eax + 0x204]
// 00842ad8  8d4c240c             lea ecx, [esp + 0xc]
// 00842adc  51                   push ecx
// 00842add  8bce                 mov ecx, esi
// 00842adf  ffd2                 call edx
// 00842ae1  8b4620               mov eax, dword ptr [esi + 0x20]
// 00842ae4  50                   push eax
// 00842ae5  ff1564ca9800         call dword ptr [0x98ca64]
// 00842aeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00842aef  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00842af3  f7d8                 neg eax
// 00842af5  1bc0                 sbb eax, eax
// 00842af7  83e004               and eax, 4
// 00842afa  0d50020000           or eax, 0x250
// 00842aff  50                   push eax
// 00842b00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00842b04  2bc8                 sub ecx, eax
// 00842b06  51                   push ecx
// 00842b07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00842b0b  2bd1                 sub edx, ecx
// 00842b0d  52                   push edx
// 00842b0e  50                   push eax
// 00842b0f  a110da9800           mov eax, dword ptr [0x98da10]
// 00842b14  51                   push ecx
// 00842b15  50                   push eax
// 00842b16  8bce                 mov ecx, esi
// 00842b18  e80f11fbff           call 0x7f3c2c
// 00842b1d  5e                   pop esi
// 00842b1e  83c410               add esp, 0x10
// 00842b21  c20800               ret 8
// copied from an identical function in another client (function ?UpdateLocation@CXTPPopupBar@@IAEXVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp