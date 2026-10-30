// roc 2009-12 008bd020  unit: CXTPDockingPaneContext  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd020
//
// 008bd020  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008bd024  8b01                 mov eax, dword ptr [ecx]
// 008bd026  8b5018               mov edx, dword ptr [eax + 0x18]
// 008bd029  56                   push esi
// 008bd02a  ffd2                 call edx
// 008bd02c  8bf0                 mov esi, eax
// 008bd02e  85f6                 test esi, esi
// 008bd030  747e                 je 0x8bd0b0
// 008bd032  e88914ffff           call 0x8ae4c0
// 008bd037  50                   push eax
// 008bd038  8bce                 mov ecx, esi
// 008bd03a  e8a96df3ff           call 0x7f3de8
// 008bd03f  85c0                 test eax, eax
// 008bd041  746d                 je 0x8bd0b0
// 008bd043  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bd047  8b01                 mov eax, dword ptr [ecx]
// 008bd049  8b5018               mov edx, dword ptr [eax + 0x18]
// 008bd04c  53                   push ebx
// 008bd04d  ffd2                 call edx
// 008bd04f  8bd8                 mov ebx, eax
// 008bd051  85db                 test ebx, ebx
// 008bd053  7454                 je 0x8bd0a9
// 008bd055  e86614ffff           call 0x8ae4c0
// 008bd05a  50                   push eax
// 008bd05b  8bcb                 mov ecx, ebx
// 008bd05d  e8866df3ff           call 0x7f3de8
// 008bd062  85c0                 test eax, eax
// 008bd064  7443                 je 0x8bd0a9
// 008bd066  8b4620               mov eax, dword ptr [esi + 0x20]
// 008bd069  57                   push edi
// 008bd06a  8b3dfccb9800         mov edi, dword ptr [0x98cbfc]
// 008bd070  6a02                 push 2
// 008bd072  50                   push eax
// 008bd073  ffd7                 call edi
// 008bd075  8bf0                 mov esi, eax
// 008bd077  85f6                 test esi, esi
// 008bd079  741b                 je 0x8bd096
// 008bd07b  eb03                 jmp 0x8bd080
// 008bd07d  8d4900               lea ecx, [ecx]
// 008bd080  8bcb                 mov ecx, ebx
// 008bd082  e8f9f7b4ff           call 0x40c880
// 008bd087  3bf0                 cmp esi, eax
// 008bd089  7416                 je 0x8bd0a1
// 008bd08b  6a02                 push 2
// 008bd08d  56                   push esi
// 008bd08e  ffd7                 call edi
// 008bd090  8bf0                 mov esi, eax
// 008bd092  85f6                 test esi, esi
// 008bd094  75ea                 jne 0x8bd080
// 008bd096  5f                   pop edi
// 008bd097  5b                   pop ebx
// 008bd098  b801000000           mov eax, 1
// 008bd09d  5e                   pop esi
// 008bd09e  c20800               ret 8
// 008bd0a1  5f                   pop edi
// 008bd0a2  5b                   pop ebx
// 008bd0a3  33c0                 xor eax, eax
// 008bd0a5  5e                   pop esi
// 008bd0a6  c20800               ret 8
// 008bd0a9  5b                   pop ebx
// 008bd0aa  33c0                 xor eax, eax
// 008bd0ac  5e                   pop esi
// 008bd0ad  c20800               ret 8
// 008bd0b0  b801000000           mov eax, 1
// 008bd0b5  5e                   pop esi
// 008bd0b6  c20800               ret 8
// copied from an identical function in another client (function ?IsBehind@CXTPDockingPaneContext@@IAEHPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp