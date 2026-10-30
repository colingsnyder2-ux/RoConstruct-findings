// roc 2009-12 008870e0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008870e0
//
// 008870e0  53                   push ebx
// 008870e1  56                   push esi
// 008870e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008870e6  57                   push edi
// 008870e7  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 008870ed  8bd9                 mov ebx, ecx
// 008870ef  e81cfbffff           call 0x886c10
// 008870f4  85c0                 test eax, eax
// 008870f6  7464                 je 0x88715c
// 008870f8  85ff                 test edi, edi
// 008870fa  7460                 je 0x88715c
// 008870fc  83befc00000002       cmp dword ptr [esi + 0xfc], 2
// 00887103  7557                 jne 0x88715c
// 00887105  83bf0001000005       cmp dword ptr [edi + 0x100], 5
// 0088710c  744e                 je 0x88715c
// 0088710e  57                   push edi
// 0088710f  8bcb                 mov ecx, ebx
// 00887111  e81a6ff7ff           call 0x7fe030
// 00887116  85c0                 test eax, eax
// 00887118  7442                 je 0x88715c
// 0088711a  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 00887121  7539                 jne 0x88715c
// 00887123  8b06                 mov eax, dword ptr [esi]
// 00887125  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00887128  8bce                 mov ecx, esi
// 0088712a  ffd2                 call edx
// 0088712c  85c0                 test eax, eax
// 0088712e  751d                 jne 0x88714d
// 00887130  8b06                 mov eax, dword ptr [esi]
// 00887132  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00887138  8bce                 mov ecx, esi
// 0088713a  ffd2                 call edx
// 0088713c  85c0                 test eax, eax
// 0088713e  750d                 jne 0x88714d
// 00887140  8b06                 mov eax, dword ptr [esi]
// 00887142  8b5078               mov edx, dword ptr [eax + 0x78]
// 00887145  8bce                 mov ecx, esi
// 00887147  ffd2                 call edx
// 00887149  85c0                 test eax, eax
// 0088714b  740f                 je 0x88715c
// 0088714d  6a0e                 push 0xe
// 0088714f  8bcb                 mov ecx, ebx
// 00887151  e8ea64f7ff           call 0x7fd640
// 00887156  5f                   pop edi
// 00887157  5e                   pop esi
// 00887158  5b                   pop ebx
// 00887159  c20400               ret 4
// 0088715c  56                   push esi
// 0088715d  8bcb                 mov ecx, ebx
// 0088715f  e80c6af7ff           call 0x7fdb70
// 00887164  5f                   pop edi
// 00887165  5e                   pop esi
// 00887166  5b                   pop ebx
// 00887167  c20400               ret 4
// copied from an identical function in another client (function ?GetControlTextColor@CXTPNativeXPTheme@XTPPaintThemes@@MAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp