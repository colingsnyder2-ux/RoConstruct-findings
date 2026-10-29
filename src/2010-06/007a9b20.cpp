// roc 2010-06 007a9b20  unit: ActiveDocView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9b20
//
// 007a9b20  8bff                 mov edi, edi
// 007a9b22  55                   push ebp
// 007a9b23  8bec                 mov ebp, esp
// 007a9b25  56                   push esi
// 007a9b26  8bf1                 mov esi, ecx
// 007a9b28  8b4608               mov eax, dword ptr [esi + 8]
// 007a9b2b  c706685aa500         mov dword ptr [esi], 0xa55a68
// 007a9b31  85c0                 test eax, eax
// 007a9b33  7408                 je 0x7a9b3d
// 007a9b35  8b08                 mov ecx, dword ptr [eax]
// 007a9b37  8b5108               mov edx, dword ptr [ecx + 8]
// 007a9b3a  50                   push eax
// 007a9b3b  ffd2                 call edx
// 007a9b3d  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007a9b41  7417                 je 0x7a9b5a
// 007a9b43  ff1504a39e00         call dword ptr [0x9ea304]
// 007a9b49  85c0                 test eax, eax
// 007a9b4b  740d                 je 0x7a9b5a
// 007a9b4d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007a9b50  51                   push ecx
// 007a9b51  6a00                 push 0
// 007a9b53  50                   push eax
// 007a9b54  ff150ca39e00         call dword ptr [0x9ea30c]
// 007a9b5a  f6450801             test byte ptr [ebp + 8], 1
// 007a9b5e  7409                 je 0x7a9b69
// 007a9b60  56                   push esi
// 007a9b61  e834deffff           call 0x7a799a
// 007a9b66  83c404               add esp, 4
// 007a9b69  8bc6                 mov eax, esi
// 007a9b6b  5e                   pop esi
// 007a9b6c  5d                   pop ebp
// 007a9b6d  c20400               ret 4
// copied from an identical function in another client (function ??_G_com_error@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-comsupp-rtm comsupp.lib/f:/dd/vctools/compiler/cxxfe/sl/vccom/ANSI/objr/i386/comraise.obj