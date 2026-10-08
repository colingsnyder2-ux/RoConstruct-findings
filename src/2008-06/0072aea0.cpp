// from server: 100% by auto
// roc 2008-06 0072aea0  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072aea0
//
// 0072aea0  83ec30               sub esp, 0x30
// 0072aea3  53                   push ebx
// 0072aea4  55                   push ebp
// 0072aea5  56                   push esi
// 0072aea6  57                   push edi
// 0072aea7  8bf9                 mov edi, ecx
// 0072aea9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072aead  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0072aeb0  8d442420             lea eax, [esp + 0x20]
// 0072aeb4  50                   push eax
// 0072aeb5  52                   push edx
// 0072aeb6  ff15842d8000         call dword ptr [0x802d84]
// 0072aebc  68901e8600           push 0x861e90
// 0072aec1  8bcf                 mov ecx, edi
// 0072aec3  e828a80000           call 0x7356f0
// 0072aec8  8bf0                 mov esi, eax
// 0072aeca  85f6                 test esi, esi
// 0072aecc  7512                 jne 0x72aee0
// 0072aece  68801e8600           push 0x861e80
// 0072aed3  8bcf                 mov ecx, edi
// 0072aed5  e816a80000           call 0x7356f0
// 0072aeda  8bf0                 mov esi, eax
// 0072aedc  85f6                 test esi, esi
// 0072aede  745b                 je 0x72af3b
// 0072aee0  6a01                 push 1
// 0072aee2  bd04000000           mov ebp, 4
// 0072aee7  6a00                 push 0
// 0072aee9  8d442438             lea eax, [esp + 0x38]
// 0072aeed  50                   push eax
// 0072aeee  8bce                 mov ecx, esi
// 0072aef0  8bfd                 mov edi, ebp
// 0072aef2  8bdd                 mov ebx, ebp
// 0072aef4  896c2428             mov dword ptr [esp + 0x28], ebp
// 0072aef8  e833280600           call 0x78d730
// 0072aefd  83ec10               sub esp, 0x10
// 0072af00  8bcc                 mov ecx, esp
// 0072af02  8939                 mov dword ptr [ecx], edi
// 0072af04  895904               mov dword ptr [ecx + 4], ebx
// 0072af07  896908               mov dword ptr [ecx + 8], ebp
// 0072af0a  83ec10               sub esp, 0x10
// 0072af0d  8bd5                 mov edx, ebp
// 0072af0f  89510c               mov dword ptr [ecx + 0xc], edx
// 0072af12  8b10                 mov edx, dword ptr [eax]
// 0072af14  8bcc                 mov ecx, esp
// 0072af16  8911                 mov dword ptr [ecx], edx
// 0072af18  8b5004               mov edx, dword ptr [eax + 4]
// 0072af1b  895104               mov dword ptr [ecx + 4], edx
// 0072af1e  8b5008               mov edx, dword ptr [eax + 8]
// 0072af21  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072af24  895108               mov dword ptr [ecx + 8], edx
// 0072af27  8b542464             mov edx, dword ptr [esp + 0x64]
// 0072af2b  89410c               mov dword ptr [ecx + 0xc], eax
// 0072af2e  8d4c2440             lea ecx, [esp + 0x40]
// 0072af32  51                   push ecx
// 0072af33  52                   push edx
// 0072af34  8bce                 mov ecx, esi
// 0072af36  e8c5200600           call 0x78d000
// 0072af3b  5f                   pop edi
// 0072af3c  5e                   pop esi
// 0072af3d  5d                   pop ebp
// 0072af3e  5b                   pop ebx
// 0072af3f  83c430               add esp, 0x30
// 0072af42  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
