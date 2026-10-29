// roc 2009-12 007f59e0  unit: ActiveDocView  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f59e0
//
// 007f59e0  8bff                 mov edi, edi
// 007f59e2  55                   push ebp
// 007f59e3  8bec                 mov ebp, esp
// 007f59e5  56                   push esi
// 007f59e6  8bf1                 mov esi, ecx
// 007f59e8  8b4608               mov eax, dword ptr [esi + 8]
// 007f59eb  c70660179f00         mov dword ptr [esi], 0x9f1760
// 007f59f1  85c0                 test eax, eax
// 007f59f3  7408                 je 0x7f59fd
// 007f59f5  8b08                 mov ecx, dword ptr [eax]
// 007f59f7  8b5108               mov edx, dword ptr [ecx + 8]
// 007f59fa  50                   push eax
// 007f59fb  ffd2                 call edx
// 007f59fd  837e0c00             cmp dword ptr [esi + 0xc], 0
// 007f5a01  7417                 je 0x7f5a1a
// 007f5a03  ff152cb29800         call dword ptr [0x98b22c]
// 007f5a09  85c0                 test eax, eax
// 007f5a0b  740d                 je 0x7f5a1a
// 007f5a0d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f5a10  51                   push ecx
// 007f5a11  6a00                 push 0
// 007f5a13  50                   push eax
// 007f5a14  ff150cb39800         call dword ptr [0x98b30c]
// 007f5a1a  f6450801             test byte ptr [ebp + 8], 1
// 007f5a1e  7409                 je 0x7f5a29
// 007f5a20  56                   push esi
// 007f5a21  e834deffff           call 0x7f385a
// 007f5a26  83c404               add esp, 4
// 007f5a29  8bc6                 mov eax, esi
// 007f5a2b  5e                   pop esi
// 007f5a2c  5d                   pop ebp
// 007f5a2d  c20400               ret 4
// copied from an identical function in another client (function ??_G_com_error@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-comsupp-rtm comsupp.lib/f:/dd/vctools/compiler/cxxfe/sl/vccom/ANSI/objr/i386/comraise.obj