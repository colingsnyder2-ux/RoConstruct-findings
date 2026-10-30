// roc 2009-06 00799290  unit: CXTPRibbonTheme  size: 570 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00799290
//
// 00799290  83ec60               sub esp, 0x60
// 00799293  53                   push ebx
// 00799294  55                   push ebp
// 00799295  56                   push esi
// 00799296  8b742474             mov esi, dword ptr [esp + 0x74]
// 0079929a  57                   push edi
// 0079929b  8bd9                 mov ebx, ecx
// 0079929d  56                   push esi
// 0079929e  8d4c2424             lea ecx, [esp + 0x24]
// 007992a2  e82972fdff           call 0x7704d0
// 007992a7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007992ab  8b542420             mov edx, dword ptr [esp + 0x20]
// 007992af  8bc1                 mov eax, ecx
// 007992b1  2bc2                 sub eax, edx
// 007992b3  89442478             mov dword ptr [esp + 0x78], eax
// 007992b7  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 007992bd  85c0                 test eax, eax
// 007992bf  7e3a                 jle 0x7992fb
// 007992c1  894c2438             mov dword ptr [esp + 0x38], ecx
// 007992c5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007992c9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007992cd  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007992d3  89542430             mov dword ptr [esp + 0x30], edx
// 007992d7  8b542424             mov edx, dword ptr [esp + 0x24]
// 007992db  48                   dec eax
// 007992dc  3bc1                 cmp eax, ecx
// 007992de  89542434             mov dword ptr [esp + 0x34], edx
// 007992e2  7c02                 jl 0x7992e6
// 007992e4  8bc1                 mov eax, ecx
// 007992e6  8d542430             lea edx, [esp + 0x30]
// 007992ea  52                   push edx
// 007992eb  50                   push eax
// 007992ec  8bce                 mov ecx, esi
// 007992ee  e82d77feff           call 0x780a20
// 007992f3  8b442438             mov eax, dword ptr [esp + 0x38]
// 007992f7  89442478             mov dword ptr [esp + 0x78], eax
// 007992fb  68a80b9000           push 0x900ba8
// 00799300  8bcb                 mov ecx, ebx
// 00799302  e8b9aa0000           call 0x7a3dc0
// 00799307  8bf0                 mov esi, eax
// 00799309  85f6                 test esi, esi
// 0079930b  0f84af010000         je 0x7994c0
// 00799311  8bce                 mov ecx, esi
// 00799313  e828cb0600           call 0x805e40
// 00799318  8bce                 mov ecx, esi
// 0079931a  8bf8                 mov edi, eax
// 0079931c  e83fcb0600           call 0x805e60
// 00799321  8be8                 mov ebp, eax
// 00799323  8b442420             mov eax, dword ptr [esp + 0x20]
// 00799327  897c241c             mov dword ptr [esp + 0x1c], edi
// 0079932b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0079932f  897c2444             mov dword ptr [esp + 0x44], edi
// 00799333  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00799337  89442440             mov dword ptr [esp + 0x40], eax
// 0079933b  8d4438fd             lea eax, [eax + edi - 3]
// 0079933f  89442448             mov dword ptr [esp + 0x48], eax
// 00799343  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00799347  83ec10               sub esp, 0x10
// 0079934a  33ff                 xor edi, edi
// 0079934c  8944245c             mov dword ptr [esp + 0x5c], eax
// 00799350  8bc4                 mov eax, esp
// 00799352  8938                 mov dword ptr [eax], edi
// 00799354  897804               mov dword ptr [eax + 4], edi
// 00799357  897808               mov dword ptr [eax + 8], edi
// 0079935a  89780c               mov dword ptr [eax + 0xc], edi
// 0079935d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00799364  83ec10               sub esp, 0x10
// 00799367  8bc4                 mov eax, esp
// 00799369  33c9                 xor ecx, ecx
// 0079936b  8908                 mov dword ptr [eax], ecx
// 0079936d  33d2                 xor edx, edx
// 0079936f  895004               mov dword ptr [eax + 4], edx
// 00799372  894c2430             mov dword ptr [esp + 0x30], ecx
// 00799376  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079937a  89542434             mov dword ptr [esp + 0x34], edx
// 0079937e  8d542460             lea edx, [esp + 0x60]
// 00799382  896808               mov dword ptr [eax + 8], ebp
// 00799385  52                   push edx
// 00799386  89480c               mov dword ptr [eax + 0xc], ecx
// 00799389  57                   push edi
// 0079938a  8bce                 mov ecx, esi
// 0079938c  896c2440             mov dword ptr [esp + 0x40], ebp
// 00799390  e8fbc20600           call 0x805690
// 00799395  68940b9000           push 0x900b94
// 0079939a  8bcb                 mov ecx, ebx
// 0079939c  e81faa0000           call 0x7a3dc0
// 007993a1  8bf0                 mov esi, eax
// 007993a3  8bce                 mov ecx, esi
// 007993a5  e896ca0600           call 0x805e40
// 007993aa  8bce                 mov ecx, esi
// 007993ac  8be8                 mov ebp, eax
// 007993ae  e8adca0600           call 0x805e60
// 007993b3  55                   push ebp
// 007993b4  8b2da4ed8900         mov ebp, dword ptr [0x89eda4]
// 007993ba  50                   push eax
// 007993bb  6a00                 push 0
// 007993bd  6a00                 push 0
// 007993bf  8d442420             lea eax, [esp + 0x20]
// 007993c3  50                   push eax
// 007993c4  ffd5                 call ebp
// 007993c6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007993ca  8b442448             mov eax, dword ptr [esp + 0x48]
// 007993ce  894c2454             mov dword ptr [esp + 0x54], ecx
// 007993d2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007993d6  8bd1                 mov edx, ecx
// 007993d8  2b542410             sub edx, dword ptr [esp + 0x10]
// 007993dc  89442450             mov dword ptr [esp + 0x50], eax
// 007993e0  03d0                 add edx, eax
// 007993e2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007993e6  83ec10               sub esp, 0x10
// 007993e9  89542468             mov dword ptr [esp + 0x68], edx
// 007993ed  33d2                 xor edx, edx
// 007993ef  8944246c             mov dword ptr [esp + 0x6c], eax
// 007993f3  8bc4                 mov eax, esp
// 007993f5  8910                 mov dword ptr [eax], edx
// 007993f7  895004               mov dword ptr [eax + 4], edx
// 007993fa  895008               mov dword ptr [eax + 8], edx
// 007993fd  89500c               mov dword ptr [eax + 0xc], edx
// 00799400  83ec10               sub esp, 0x10
// 00799403  8954245c             mov dword ptr [esp + 0x5c], edx
// 00799407  8b542430             mov edx, dword ptr [esp + 0x30]
// 0079940b  8bc4                 mov eax, esp
// 0079940d  8910                 mov dword ptr [eax], edx
// 0079940f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00799413  895004               mov dword ptr [eax + 4], edx
// 00799416  894808               mov dword ptr [eax + 8], ecx
// 00799419  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079941d  8d542470             lea edx, [esp + 0x70]
// 00799421  52                   push edx
// 00799422  89480c               mov dword ptr [eax + 0xc], ecx
// 00799425  57                   push edi
// 00799426  8bce                 mov ecx, esi
// 00799428  e863c20600           call 0x805690
// 0079942d  68840b9000           push 0x900b84
// 00799432  8bcb                 mov ecx, ebx
// 00799434  e887a90000           call 0x7a3dc0
// 00799439  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079943d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00799441  8bf0                 mov esi, eax
// 00799443  8b442458             mov eax, dword ptr [esp + 0x58]
// 00799447  89442460             mov dword ptr [esp + 0x60], eax
// 0079944b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0079944f  894c2464             mov dword ptr [esp + 0x64], ecx
// 00799453  8bce                 mov ecx, esi
// 00799455  89542468             mov dword ptr [esp + 0x68], edx
// 00799459  8944246c             mov dword ptr [esp + 0x6c], eax
// 0079945d  e8dec90600           call 0x805e40
// 00799462  8bce                 mov ecx, esi
// 00799464  8bd8                 mov ebx, eax
// 00799466  e8f5c90600           call 0x805e60
// 0079946b  53                   push ebx
// 0079946c  50                   push eax
// 0079946d  6a00                 push 0
// 0079946f  6a00                 push 0
// 00799471  8d4c2420             lea ecx, [esp + 0x20]
// 00799475  51                   push ecx
// 00799476  ffd5                 call ebp
// 00799478  83ec10               sub esp, 0x10
// 0079947b  8bc4                 mov eax, esp
// 0079947d  33c9                 xor ecx, ecx
// 0079947f  8908                 mov dword ptr [eax], ecx
// 00799481  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00799485  33d2                 xor edx, edx
// 00799487  895004               mov dword ptr [eax + 4], edx
// 0079948a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0079948e  33db                 xor ebx, ebx
// 00799490  895808               mov dword ptr [eax + 8], ebx
// 00799493  83ec10               sub esp, 0x10
// 00799496  33ed                 xor ebp, ebp
// 00799498  89680c               mov dword ptr [eax + 0xc], ebp
// 0079949b  8bc4                 mov eax, esp
// 0079949d  8910                 mov dword ptr [eax], edx
// 0079949f  8b542438             mov edx, dword ptr [esp + 0x38]
// 007994a3  894804               mov dword ptr [eax + 4], ecx
// 007994a6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007994aa  895008               mov dword ptr [eax + 8], edx
// 007994ad  8d942480000000       lea edx, [esp + 0x80]
// 007994b4  52                   push edx
// 007994b5  89480c               mov dword ptr [eax + 0xc], ecx
// 007994b8  57                   push edi
// 007994b9  8bce                 mov ecx, esi
// 007994bb  e8d0c10600           call 0x805690
// 007994c0  5f                   pop edi
// 007994c1  5e                   pop esi
// 007994c2  5d                   pop ebp
// 007994c3  5b                   pop ebx
// 007994c4  83c460               add esp, 0x60
// 007994c7  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillStatusBar@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
