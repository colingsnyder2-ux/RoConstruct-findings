// roc 2012-06 00a04a50  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a04a50
//
// 00a04a50  83ec30               sub esp, 0x30
// 00a04a53  53                   push ebx
// 00a04a54  55                   push ebp
// 00a04a55  56                   push esi
// 00a04a56  57                   push edi
// 00a04a57  8bf9                 mov edi, ecx
// 00a04a59  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a04a5d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a04a60  8d442420             lea eax, [esp + 0x20]
// 00a04a64  50                   push eax
// 00a04a65  52                   push edx
// 00a04a66  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a04a6c  68c8bfc100           push 0xc1bfc8
// 00a04a71  8bcf                 mov ecx, edi
// 00a04a73  e8f82d0000           call 0xa07870
// 00a04a78  8bf0                 mov esi, eax
// 00a04a7a  85f6                 test esi, esi
// 00a04a7c  7512                 jne 0xa04a90
// 00a04a7e  68b8bfc100           push 0xc1bfb8
// 00a04a83  8bcf                 mov ecx, edi
// 00a04a85  e8e62d0000           call 0xa07870
// 00a04a8a  8bf0                 mov esi, eax
// 00a04a8c  85f6                 test esi, esi
// 00a04a8e  745b                 je 0xa04aeb
// 00a04a90  6a01                 push 1
// 00a04a92  bd04000000           mov ebp, 4
// 00a04a97  6a00                 push 0
// 00a04a99  8d442438             lea eax, [esp + 0x38]
// 00a04a9d  50                   push eax
// 00a04a9e  8bce                 mov ecx, esi
// 00a04aa0  8bfd                 mov edi, ebp
// 00a04aa2  8bdd                 mov ebx, ebp
// 00a04aa4  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a04aa8  e843100600           call 0xa65af0
// 00a04aad  83ec10               sub esp, 0x10
// 00a04ab0  8bcc                 mov ecx, esp
// 00a04ab2  8939                 mov dword ptr [ecx], edi
// 00a04ab4  895904               mov dword ptr [ecx + 4], ebx
// 00a04ab7  896908               mov dword ptr [ecx + 8], ebp
// 00a04aba  83ec10               sub esp, 0x10
// 00a04abd  8bd5                 mov edx, ebp
// 00a04abf  89510c               mov dword ptr [ecx + 0xc], edx
// 00a04ac2  8b10                 mov edx, dword ptr [eax]
// 00a04ac4  8bcc                 mov ecx, esp
// 00a04ac6  8911                 mov dword ptr [ecx], edx
// 00a04ac8  8b5004               mov edx, dword ptr [eax + 4]
// 00a04acb  895104               mov dword ptr [ecx + 4], edx
// 00a04ace  8b5008               mov edx, dword ptr [eax + 8]
// 00a04ad1  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a04ad4  895108               mov dword ptr [ecx + 8], edx
// 00a04ad7  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a04adb  89410c               mov dword ptr [ecx + 0xc], eax
// 00a04ade  8d4c2440             lea ecx, [esp + 0x40]
// 00a04ae2  51                   push ecx
// 00a04ae3  52                   push edx
// 00a04ae4  8bce                 mov ecx, esi
// 00a04ae6  e8d5080600           call 0xa653c0
// 00a04aeb  5f                   pop edi
// 00a04aec  5e                   pop esi
// 00a04aed  5d                   pop ebp
// 00a04aee  5b                   pop ebx
// 00a04aef  83c430               add esp, 0x30
// 00a04af2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
