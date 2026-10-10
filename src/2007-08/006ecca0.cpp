// from server: 100% by tester
// roc 2008-06 00769db0  unit: CXTPDockingPaneContext  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00769db0
//
// 00769db0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00769db4  8b01                 mov eax, dword ptr [ecx]
// 00769db6  8b5018               mov edx, dword ptr [eax + 0x18]
// 00769db9  56                   push esi
// 00769dba  ffd2                 call edx
// 00769dbc  8bf0                 mov esi, eax
// 00769dbe  85f6                 test esi, esi
// 00769dc0  747e                 je 0x769e40
// 00769dc2  e85913ffff           call 0x75b120
// 00769dc7  50                   push eax
// 00769dc8  8bce                 mov ecx, esi
// 00769dca  e8216ef3ff           call 0x6a0bf0
// 00769dcf  85c0                 test eax, eax
// 00769dd1  746d                 je 0x769e40
// 00769dd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00769dd7  8b01                 mov eax, dword ptr [ecx]
// 00769dd9  8b5018               mov edx, dword ptr [eax + 0x18]
// 00769ddc  53                   push ebx
// 00769ddd  ffd2                 call edx
// 00769ddf  8bd8                 mov ebx, eax
// 00769de1  85db                 test ebx, ebx
// 00769de3  7454                 je 0x769e39
// 00769de5  e83613ffff           call 0x75b120
// 00769dea  50                   push eax
// 00769deb  8bcb                 mov ecx, ebx
// 00769ded  e8fe6df3ff           call 0x6a0bf0
// 00769df2  85c0                 test eax, eax
// 00769df4  7443                 je 0x769e39
// 00769df6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00769df9  57                   push edi
// 00769dfa  8b3dfc2d8000         mov edi, dword ptr [0x802dfc]
// 00769e00  6a02                 push 2
// 00769e02  50                   push eax
// 00769e03  ffd7                 call edi
// 00769e05  8bf0                 mov esi, eax
// 00769e07  85f6                 test esi, esi
// 00769e09  741b                 je 0x769e26
// 00769e0b  eb03                 jmp 0x769e10
// 00769e0d  8d4900               lea ecx, [ecx]
// 00769e10  8bcb                 mov ecx, ebx
// 00769e12  e83941caff           call 0x40df50
// 00769e17  3bf0                 cmp esi, eax
// 00769e19  7416                 je 0x769e31
// 00769e1b  6a02                 push 2
// 00769e1d  56                   push esi
// 00769e1e  ffd7                 call edi
// 00769e20  8bf0                 mov esi, eax
// 00769e22  85f6                 test esi, esi
// 00769e24  75ea                 jne 0x769e10
// 00769e26  5f                   pop edi
// 00769e27  5b                   pop ebx
// 00769e28  b801000000           mov eax, 1
// 00769e2d  5e                   pop esi
// 00769e2e  c20800               ret 8
// 00769e31  5f                   pop edi
// 00769e32  5b                   pop ebx
// 00769e33  33c0                 xor eax, eax
// 00769e35  5e                   pop esi
// 00769e36  c20800               ret 8
// 00769e39  5b                   pop ebx
// 00769e3a  33c0                 xor eax, eax
// 00769e3c  5e                   pop esi
// 00769e3d  c20800               ret 8
// 00769e40  b801000000           mov eax, 1
// 00769e45  5e                   pop esi
// 00769e46  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneContext.cpp (function ?IsBehind@CXTPDockingPaneContext@@IAEHPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp
