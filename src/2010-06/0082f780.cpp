// roc 2010-06 0082f780  unit: CXTPRibbonTheme  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082f780
//
// 0082f780  83ec30               sub esp, 0x30
// 0082f783  53                   push ebx
// 0082f784  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0082f788  55                   push ebp
// 0082f789  56                   push esi
// 0082f78a  57                   push edi
// 0082f78b  8d442410             lea eax, [esp + 0x10]
// 0082f78f  8bf9                 mov edi, ecx
// 0082f791  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0082f794  50                   push eax
// 0082f795  51                   push ecx
// 0082f796  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 0082f79c  bd05000000           mov ebp, 5
// 0082f7a1  8bcf                 mov ecx, edi
// 0082f7a3  39ab00010000         cmp dword ptr [ebx + 0x100], ebp
// 0082f7a9  7527                 jne 0x82f7d2
// 0082f7ab  68e05ea600           push 0xa65ee0
// 0082f7b0  e84b2a0000           call 0x832200
// 0082f7b5  8bf0                 mov esi, eax
// 0082f7b7  85f6                 test esi, esi
// 0082f7b9  0f8404010000         je 0x82f8c3
// 0082f7bf  6a01                 push 1
// 0082f7c1  6a00                 push 0
// 0082f7c3  8d542438             lea edx, [esp + 0x38]
// 0082f7c7  bd04000000           mov ebp, 4
// 0082f7cc  52                   push edx
// 0082f7cd  e9a4000000           jmp 0x82f876
// 0082f7d2  53                   push ebx
// 0082f7d3  e828e3f7ff           call 0x7adb00
// 0082f7d8  85c0                 test eax, eax
// 0082f7da  7417                 je 0x82f7f3
// 0082f7dc  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082f7e0  53                   push ebx
// 0082f7e1  50                   push eax
// 0082f7e2  8bcf                 mov ecx, edi
// 0082f7e4  e8a7730000           call 0x836b90
// 0082f7e9  5f                   pop edi
// 0082f7ea  5e                   pop esi
// 0082f7eb  5d                   pop ebp
// 0082f7ec  5b                   pop ebx
// 0082f7ed  83c430               add esp, 0x30
// 0082f7f0  c20800               ret 8
// 0082f7f3  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0082f7f9  85c0                 test eax, eax
// 0082f7fb  745a                 je 0x82f857
// 0082f7fd  83f801               cmp eax, 1
// 0082f800  7455                 je 0x82f857
// 0082f802  83f802               cmp eax, 2
// 0082f805  741c                 je 0x82f823
// 0082f807  83f803               cmp eax, 3
// 0082f80a  7417                 je 0x82f823
// 0082f80c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0082f810  53                   push ebx
// 0082f811  51                   push ecx
// 0082f812  8bcf                 mov ecx, edi
// 0082f814  e877730000           call 0x836b90
// 0082f819  5f                   pop edi
// 0082f81a  5e                   pop esi
// 0082f81b  5d                   pop ebp
// 0082f81c  5b                   pop ebx
// 0082f81d  83c430               add esp, 0x30
// 0082f820  c20800               ret 8
// 0082f823  68585fa600           push 0xa65f58
// 0082f828  8bcf                 mov ecx, edi
// 0082f82a  e8d1290000           call 0x832200
// 0082f82f  8bf0                 mov esi, eax
// 0082f831  85f6                 test esi, esi
// 0082f833  7517                 jne 0x82f84c
// 0082f835  8b542444             mov edx, dword ptr [esp + 0x44]
// 0082f839  53                   push ebx
// 0082f83a  52                   push edx
// 0082f83b  8bcf                 mov ecx, edi
// 0082f83d  e84e730000           call 0x836b90
// 0082f842  5f                   pop edi
// 0082f843  5e                   pop esi
// 0082f844  5d                   pop ebp
// 0082f845  5b                   pop ebx
// 0082f846  83c430               add esp, 0x30
// 0082f849  c20800               ret 8
// 0082f84c  6a01                 push 1
// 0082f84e  6a00                 push 0
// 0082f850  8d442438             lea eax, [esp + 0x38]
// 0082f854  50                   push eax
// 0082f855  eb1f                 jmp 0x82f876
// 0082f857  68405fa600           push 0xa65f40
// 0082f85c  8bcf                 mov ecx, edi
// 0082f85e  e89d290000           call 0x832200
// 0082f863  8bf0                 mov esi, eax
// 0082f865  85f6                 test esi, esi
// 0082f867  0f846fffffff         je 0x82f7dc
// 0082f86d  6a01                 push 1
// 0082f86f  6a00                 push 0
// 0082f871  8d4c2438             lea ecx, [esp + 0x38]
// 0082f875  51                   push ecx
// 0082f876  8bce                 mov ecx, esi
// 0082f878  8bfd                 mov edi, ebp
// 0082f87a  8bdd                 mov ebx, ebp
// 0082f87c  896c2438             mov dword ptr [esp + 0x38], ebp
// 0082f880  e8ab520600           call 0x894b30
// 0082f885  83ec10               sub esp, 0x10
// 0082f888  8bcc                 mov ecx, esp
// 0082f88a  8939                 mov dword ptr [ecx], edi
// 0082f88c  895904               mov dword ptr [ecx + 4], ebx
// 0082f88f  896908               mov dword ptr [ecx + 8], ebp
// 0082f892  83ec10               sub esp, 0x10
// 0082f895  8bd5                 mov edx, ebp
// 0082f897  89510c               mov dword ptr [ecx + 0xc], edx
// 0082f89a  8b10                 mov edx, dword ptr [eax]
// 0082f89c  8bcc                 mov ecx, esp
// 0082f89e  8911                 mov dword ptr [ecx], edx
// 0082f8a0  8b5004               mov edx, dword ptr [eax + 4]
// 0082f8a3  895104               mov dword ptr [ecx + 4], edx
// 0082f8a6  8b5008               mov edx, dword ptr [eax + 8]
// 0082f8a9  8b400c               mov eax, dword ptr [eax + 0xc]
// 0082f8ac  895108               mov dword ptr [ecx + 8], edx
// 0082f8af  8b542464             mov edx, dword ptr [esp + 0x64]
// 0082f8b3  89410c               mov dword ptr [ecx + 0xc], eax
// 0082f8b6  8d4c2430             lea ecx, [esp + 0x30]
// 0082f8ba  51                   push ecx
// 0082f8bb  52                   push edx
// 0082f8bc  8bce                 mov ecx, esi
// 0082f8be  e83d4b0600           call 0x894400
// 0082f8c3  5f                   pop edi
// 0082f8c4  5e                   pop esi
// 0082f8c5  5d                   pop ebp
// 0082f8c6  5b                   pop ebx
// 0082f8c7  83c430               add esp, 0x30
// 0082f8ca  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillCommandBarEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
