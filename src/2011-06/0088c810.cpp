// roc 2011-06 0088c810  unit: CXTPRibbonTheme  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088c810
//
// 0088c810  83ec30               sub esp, 0x30
// 0088c813  53                   push ebx
// 0088c814  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0088c818  55                   push ebp
// 0088c819  56                   push esi
// 0088c81a  57                   push edi
// 0088c81b  8d442410             lea eax, [esp + 0x10]
// 0088c81f  8bf9                 mov edi, ecx
// 0088c821  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0088c824  50                   push eax
// 0088c825  51                   push ecx
// 0088c826  ff157c1ca400         call dword ptr [0xa41c7c]
// 0088c82c  bd05000000           mov ebp, 5
// 0088c831  8bcf                 mov ecx, edi
// 0088c833  39ab00010000         cmp dword ptr [ebx + 0x100], ebp
// 0088c839  7527                 jne 0x88c862
// 0088c83b  680009ad00           push 0xad0900
// 0088c840  e84b2a0000           call 0x88f290
// 0088c845  8bf0                 mov esi, eax
// 0088c847  85f6                 test esi, esi
// 0088c849  0f8404010000         je 0x88c953
// 0088c84f  6a01                 push 1
// 0088c851  6a00                 push 0
// 0088c853  8d542438             lea edx, [esp + 0x38]
// 0088c857  bd04000000           mov ebp, 4
// 0088c85c  52                   push edx
// 0088c85d  e9a4000000           jmp 0x88c906
// 0088c862  53                   push ebx
// 0088c863  e83837f8ff           call 0x80ffa0
// 0088c868  85c0                 test eax, eax
// 0088c86a  7417                 je 0x88c883
// 0088c86c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0088c870  53                   push ebx
// 0088c871  50                   push eax
// 0088c872  8bcf                 mov ecx, edi
// 0088c874  e847730000           call 0x893bc0
// 0088c879  5f                   pop edi
// 0088c87a  5e                   pop esi
// 0088c87b  5d                   pop ebp
// 0088c87c  5b                   pop ebx
// 0088c87d  83c430               add esp, 0x30
// 0088c880  c20800               ret 8
// 0088c883  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0088c889  85c0                 test eax, eax
// 0088c88b  745a                 je 0x88c8e7
// 0088c88d  83f801               cmp eax, 1
// 0088c890  7455                 je 0x88c8e7
// 0088c892  83f802               cmp eax, 2
// 0088c895  741c                 je 0x88c8b3
// 0088c897  83f803               cmp eax, 3
// 0088c89a  7417                 je 0x88c8b3
// 0088c89c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0088c8a0  53                   push ebx
// 0088c8a1  51                   push ecx
// 0088c8a2  8bcf                 mov ecx, edi
// 0088c8a4  e817730000           call 0x893bc0
// 0088c8a9  5f                   pop edi
// 0088c8aa  5e                   pop esi
// 0088c8ab  5d                   pop ebp
// 0088c8ac  5b                   pop ebx
// 0088c8ad  83c430               add esp, 0x30
// 0088c8b0  c20800               ret 8
// 0088c8b3  687809ad00           push 0xad0978
// 0088c8b8  8bcf                 mov ecx, edi
// 0088c8ba  e8d1290000           call 0x88f290
// 0088c8bf  8bf0                 mov esi, eax
// 0088c8c1  85f6                 test esi, esi
// 0088c8c3  7517                 jne 0x88c8dc
// 0088c8c5  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088c8c9  53                   push ebx
// 0088c8ca  52                   push edx
// 0088c8cb  8bcf                 mov ecx, edi
// 0088c8cd  e8ee720000           call 0x893bc0
// 0088c8d2  5f                   pop edi
// 0088c8d3  5e                   pop esi
// 0088c8d4  5d                   pop ebp
// 0088c8d5  5b                   pop ebx
// 0088c8d6  83c430               add esp, 0x30
// 0088c8d9  c20800               ret 8
// 0088c8dc  6a01                 push 1
// 0088c8de  6a00                 push 0
// 0088c8e0  8d442438             lea eax, [esp + 0x38]
// 0088c8e4  50                   push eax
// 0088c8e5  eb1f                 jmp 0x88c906
// 0088c8e7  686009ad00           push 0xad0960
// 0088c8ec  8bcf                 mov ecx, edi
// 0088c8ee  e89d290000           call 0x88f290
// 0088c8f3  8bf0                 mov esi, eax
// 0088c8f5  85f6                 test esi, esi
// 0088c8f7  0f846fffffff         je 0x88c86c
// 0088c8fd  6a01                 push 1
// 0088c8ff  6a00                 push 0
// 0088c901  8d4c2438             lea ecx, [esp + 0x38]
// 0088c905  51                   push ecx
// 0088c906  8bce                 mov ecx, esi
// 0088c908  8bfd                 mov edi, ebp
// 0088c90a  8bdd                 mov ebx, ebp
// 0088c90c  896c2438             mov dword ptr [esp + 0x38], ebp
// 0088c910  e8fb0d0600           call 0x8ed710
// 0088c915  83ec10               sub esp, 0x10
// 0088c918  8bcc                 mov ecx, esp
// 0088c91a  8939                 mov dword ptr [ecx], edi
// 0088c91c  895904               mov dword ptr [ecx + 4], ebx
// 0088c91f  896908               mov dword ptr [ecx + 8], ebp
// 0088c922  83ec10               sub esp, 0x10
// 0088c925  8bd5                 mov edx, ebp
// 0088c927  89510c               mov dword ptr [ecx + 0xc], edx
// 0088c92a  8b10                 mov edx, dword ptr [eax]
// 0088c92c  8bcc                 mov ecx, esp
// 0088c92e  8911                 mov dword ptr [ecx], edx
// 0088c930  8b5004               mov edx, dword ptr [eax + 4]
// 0088c933  895104               mov dword ptr [ecx + 4], edx
// 0088c936  8b5008               mov edx, dword ptr [eax + 8]
// 0088c939  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088c93c  895108               mov dword ptr [ecx + 8], edx
// 0088c93f  8b542464             mov edx, dword ptr [esp + 0x64]
// 0088c943  89410c               mov dword ptr [ecx + 0xc], eax
// 0088c946  8d4c2430             lea ecx, [esp + 0x30]
// 0088c94a  51                   push ecx
// 0088c94b  52                   push edx
// 0088c94c  8bce                 mov ecx, esi
// 0088c94e  e88d060600           call 0x8ecfe0
// 0088c953  5f                   pop edi
// 0088c954  5e                   pop esi
// 0088c955  5d                   pop ebp
// 0088c956  5b                   pop ebx
// 0088c957  83c430               add esp, 0x30
// 0088c95a  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillCommandBarEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
