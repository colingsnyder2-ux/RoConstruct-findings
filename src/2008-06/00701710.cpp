// roc 2008-06 00701710  unit: CXTPControlTabWorkspace  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701710
//
// 00701710  53                   push ebx
// 00701711  56                   push esi
// 00701712  8bf1                 mov esi, ecx
// 00701714  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0070171a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0070171d  57                   push edi
// 0070171e  8dbe78010000         lea edi, [esi + 0x178]
// 00701724  8bcf                 mov ecx, edi
// 00701726  ffd2                 call edx
// 00701728  85c0                 test eax, eax
// 0070172a  7512                 jne 0x70173e
// 0070172c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00701730  50                   push eax
// 00701731  8bce                 mov ecx, esi
// 00701733  e868a1faff           call 0x6ab8a0
// 00701738  5f                   pop edi
// 00701739  5e                   pop esi
// 0070173a  5b                   pop ebx
// 0070173b  c20400               ret 4
// 0070173e  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00701744  8b18                 mov ebx, dword ptr [eax]
// 00701746  8d96c0000000         lea edx, [esi + 0xc0]
// 0070174c  83ec10               sub esp, 0x10
// 0070174f  8bf4                 mov esi, esp
// 00701751  890e                 mov dword ptr [esi], ecx
// 00701753  8b4a04               mov ecx, dword ptr [edx + 4]
// 00701756  894e04               mov dword ptr [esi + 4], ecx
// 00701759  8b4a08               mov ecx, dword ptr [edx + 8]
// 0070175c  8b520c               mov edx, dword ptr [edx + 0xc]
// 0070175f  894e08               mov dword ptr [esi + 8], ecx
// 00701762  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00701766  51                   push ecx
// 00701767  89560c               mov dword ptr [esi + 0xc], edx
// 0070176a  8b5358               mov edx, dword ptr [ebx + 0x58]
// 0070176d  57                   push edi
// 0070176e  8bc8                 mov ecx, eax
// 00701770  ffd2                 call edx
// 00701772  5f                   pop edi
// 00701773  5e                   pop esi
// 00701774  5b                   pop ebx
// 00701775  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?Draw@CXTPControlTabWorkspace@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
