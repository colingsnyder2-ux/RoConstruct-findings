// roc 2009-12 0088a8a0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 652 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088a8a0
//
// 0088a8a0  6aff                 push -1
// 0088a8a2  68d80c9600           push 0x960cd8
// 0088a8a7  64a100000000         mov eax, dword ptr fs:[0]
// 0088a8ad  50                   push eax
// 0088a8ae  83ec1c               sub esp, 0x1c
// 0088a8b1  53                   push ebx
// 0088a8b2  55                   push ebp
// 0088a8b3  56                   push esi
// 0088a8b4  57                   push edi
// 0088a8b5  a10052b600           mov eax, dword ptr [0xb65200]
// 0088a8ba  33c4                 xor eax, esp
// 0088a8bc  50                   push eax
// 0088a8bd  8d442430             lea eax, [esp + 0x30]
// 0088a8c1  64a300000000         mov dword ptr fs:[0], eax
// 0088a8c7  8bf9                 mov edi, ecx
// 0088a8c9  897c2414             mov dword ptr [esp + 0x14], edi
// 0088a8cd  837f6c00             cmp dword ptr [edi + 0x6c], 0
// 0088a8d1  7460                 je 0x88a933
// 0088a8d3  8d8f38010000         lea ecx, [edi + 0x138]
// 0088a8d9  e8e212feff           call 0x86bbc0
// 0088a8de  85c0                 test eax, eax
// 0088a8e0  7451                 je 0x88a933
// 0088a8e2  8b442468             mov eax, dword ptr [esp + 0x68]
// 0088a8e6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0088a8ea  8b542460             mov edx, dword ptr [esp + 0x60]
// 0088a8ee  8b742440             mov esi, dword ptr [esp + 0x40]
// 0088a8f2  50                   push eax
// 0088a8f3  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088a8f7  51                   push ecx
// 0088a8f8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088a8fc  52                   push edx
// 0088a8fd  8b542454             mov edx, dword ptr [esp + 0x54]
// 0088a901  50                   push eax
// 0088a902  51                   push ecx
// 0088a903  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088a907  83ec10               sub esp, 0x10
// 0088a90a  8bc4                 mov eax, esp
// 0088a90c  8910                 mov dword ptr [eax], edx
// 0088a90e  8b542474             mov edx, dword ptr [esp + 0x74]
// 0088a912  894804               mov dword ptr [eax + 4], ecx
// 0088a915  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0088a919  895008               mov dword ptr [eax + 8], edx
// 0088a91c  8b542468             mov edx, dword ptr [esp + 0x68]
// 0088a920  52                   push edx
// 0088a921  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a924  56                   push esi
// 0088a925  8bcf                 mov ecx, edi
// 0088a927  e8e469f7ff           call 0x801310
// 0088a92c  8bc6                 mov eax, esi
// 0088a92e  e9e3010000           jmp 0x88ab16
// 0088a933  837c245800           cmp dword ptr [esp + 0x58], 0
// 0088a938  0f84c7010000         je 0x88ab05
// 0088a93e  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0088a942  85ed                 test ebp, ebp
// 0088a944  7532                 jne 0x88a978
// 0088a946  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088a94a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088a94e  8b742444             mov esi, dword ptr [esp + 0x44]
// 0088a952  6a23                 push 0x23
// 0088a954  6a23                 push 0x23
// 0088a956  83ec10               sub esp, 0x10
// 0088a959  8bc4                 mov eax, esp
// 0088a95b  8908                 mov dword ptr [eax], ecx
// 0088a95d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0088a961  895004               mov dword ptr [eax + 4], edx
// 0088a964  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0088a968  894808               mov dword ptr [eax + 8], ecx
// 0088a96b  56                   push esi
// 0088a96c  8bcf                 mov ecx, edi
// 0088a96e  89500c               mov dword ptr [eax + 0xc], edx
// 0088a971  e8ca2ef7ff           call 0x7fd840
// 0088a976  eb68                 jmp 0x88a9e0
// 0088a978  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0088a97c  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088a980  85d2                 test edx, edx
// 0088a982  740b                 je 0x88a98f
// 0088a984  85c0                 test eax, eax
// 0088a986  7413                 je 0x88a99b
// 0088a988  b921000000           mov ecx, 0x21
// 0088a98d  eb11                 jmp 0x88a9a0
// 0088a98f  85c0                 test eax, eax
// 0088a991  7508                 jne 0x88a99b
// 0088a993  8d4805               lea ecx, [eax + 5]
// 0088a996  8d412f               lea eax, [ecx + 0x2f]
// 0088a999  eb17                 jmp 0x88a9b2
// 0088a99b  b91f000000           mov ecx, 0x1f
// 0088a9a0  85d2                 test edx, edx
// 0088a9a2  7509                 jne 0x88a9ad
// 0088a9a4  85c0                 test eax, eax
// 0088a9a6  7505                 jne 0x88a9ad
// 0088a9a8  8d4234               lea eax, [edx + 0x34]
// 0088a9ab  eb05                 jmp 0x88a9b2
// 0088a9ad  b820000000           mov eax, 0x20
// 0088a9b2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088a9b6  8b742444             mov esi, dword ptr [esp + 0x44]
// 0088a9ba  51                   push ecx
// 0088a9bb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088a9bf  50                   push eax
// 0088a9c0  83ec10               sub esp, 0x10
// 0088a9c3  8bc4                 mov eax, esp
// 0088a9c5  8908                 mov dword ptr [eax], ecx
// 0088a9c7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0088a9cb  895004               mov dword ptr [eax + 4], edx
// 0088a9ce  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0088a9d2  894808               mov dword ptr [eax + 8], ecx
// 0088a9d5  56                   push esi
// 0088a9d6  8bcf                 mov ecx, edi
// 0088a9d8  89500c               mov dword ptr [eax + 0xc], edx
// 0088a9db  e8803df7ff           call 0x7fe760
// 0088a9e0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0088a9e4  85c9                 test ecx, ecx
// 0088a9e6  0f8419010000         je 0x88ab05
// 0088a9ec  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088a9f0  8b442454             mov eax, dword ptr [esp + 0x54]
// 0088a9f4  03c2                 add eax, edx
// 0088a9f6  99                   cdq 
// 0088a9f7  2bc2                 sub eax, edx
// 0088a9f9  8b542450             mov edx, dword ptr [esp + 0x50]
// 0088a9fd  8bd8                 mov ebx, eax
// 0088a9ff  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088aa03  03c2                 add eax, edx
// 0088aa05  99                   cdq 
// 0088aa06  2bc2                 sub eax, edx
// 0088aa08  8bf8                 mov edi, eax
// 0088aa0a  d1fb                 sar ebx, 1
// 0088aa0c  d1ff                 sar edi, 1
// 0088aa0e  85ed                 test ebp, ebp
// 0088aa10  740a                 je 0x88aa1c
// 0088aa12  b812000000           mov eax, 0x12
// 0088aa17  83f902               cmp ecx, 2
// 0088aa1a  7505                 jne 0x88aa21
// 0088aa1c  b823000000           mov eax, 0x23
// 0088aa21  85f6                 test esi, esi
// 0088aa23  7504                 jne 0x88aa29
// 0088aa25  33ed                 xor ebp, ebp
// 0088aa27  eb03                 jmp 0x88aa2c
// 0088aa29  8b6e04               mov ebp, dword ptr [esi + 4]
// 0088aa2c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088aa30  50                   push eax
// 0088aa31  e80a2cf7ff           call 0x7fd640
// 0088aa36  50                   push eax
// 0088aa37  55                   push ebp
// 0088aa38  8d4c2424             lea ecx, [esp + 0x24]
// 0088aa3c  e8bf0cfcff           call 0x84b700
// 0088aa41  56                   push esi
// 0088aa42  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0088aa4a  e8c116fcff           call 0x84c110
// 0088aa4f  83c404               add esp, 4
// 0088aa52  85c0                 test eax, eax
// 0088aa54  7450                 je 0x88aaa6
// 0088aa56  8d4701               lea eax, [edi + 1]
// 0088aa59  8d6f03               lea ebp, [edi + 3]
// 0088aa5c  83c7fc               add edi, -4
// 0088aa5f  897c2444             mov dword ptr [esp + 0x44], edi
// 0088aa63  8d7b01               lea edi, [ebx + 1]
// 0088aa66  89442460             mov dword ptr [esp + 0x60], eax
// 0088aa6a  bb03000000           mov ebx, 3
// 0088aa6f  90                   nop 
// 0088aa70  8d4ffe               lea ecx, [edi - 2]
// 0088aa73  51                   push ecx
// 0088aa74  55                   push ebp
// 0088aa75  8d54241c             lea edx, [esp + 0x1c]
// 0088aa79  52                   push edx
// 0088aa7a  8bce                 mov ecx, esi
// 0088aa7c  e8c19cf6ff           call 0x7f4742
// 0088aa81  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088aa85  57                   push edi
// 0088aa86  50                   push eax
// 0088aa87  8bce                 mov ecx, esi
// 0088aa89  e8ae9cf6ff           call 0x7f473c
// 0088aa8e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088aa92  8d4ffb               lea ecx, [edi - 5]
// 0088aa95  51                   push ecx
// 0088aa96  52                   push edx
// 0088aa97  8bce                 mov ecx, esi
// 0088aa99  e89e9cf6ff           call 0x7f473c
// 0088aa9e  47                   inc edi
// 0088aa9f  83eb01               sub ebx, 1
// 0088aaa2  75cc                 jne 0x88aa70
// 0088aaa4  eb4e                 jmp 0x88aaf4
// 0088aaa6  8d47ff               lea eax, [edi - 1]
// 0088aaa9  8d6ffd               lea ebp, [edi - 3]
// 0088aaac  83c704               add edi, 4
// 0088aaaf  897c2444             mov dword ptr [esp + 0x44], edi
// 0088aab3  8d7b01               lea edi, [ebx + 1]
// 0088aab6  89442460             mov dword ptr [esp + 0x60], eax
// 0088aaba  bb03000000           mov ebx, 3
// 0088aabf  90                   nop 
// 0088aac0  8d4ffe               lea ecx, [edi - 2]
// 0088aac3  51                   push ecx
// 0088aac4  55                   push ebp
// 0088aac5  8d54241c             lea edx, [esp + 0x1c]
// 0088aac9  52                   push edx
// 0088aaca  8bce                 mov ecx, esi
// 0088aacc  e8719cf6ff           call 0x7f4742
// 0088aad1  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088aad5  57                   push edi
// 0088aad6  50                   push eax
// 0088aad7  8bce                 mov ecx, esi
// 0088aad9  e85e9cf6ff           call 0x7f473c
// 0088aade  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088aae2  8d4ffb               lea ecx, [edi - 5]
// 0088aae5  51                   push ecx
// 0088aae6  52                   push edx
// 0088aae7  8bce                 mov ecx, esi
// 0088aae9  e84e9cf6ff           call 0x7f473c
// 0088aaee  47                   inc edi
// 0088aaef  83eb01               sub ebx, 1
// 0088aaf2  75cc                 jne 0x88aac0
// 0088aaf4  8d4c241c             lea ecx, [esp + 0x1c]
// 0088aaf8  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0088ab00  e88b0cfcff           call 0x84b790
// 0088ab05  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088ab09  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0088ab10  c7000d000000         mov dword ptr [eax], 0xd
// 0088ab16  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088ab1a  64890d00000000       mov dword ptr fs:[0], ecx
// 0088ab21  59                   pop ecx
// 0088ab22  5f                   pop edi
// 0088ab23  5e                   pop esi
// 0088ab24  5d                   pop ebp
// 0088ab25  5b                   pop ebx
// 0088ab26  83c428               add esp, 0x28
// 0088ab29  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawControlCheckBoxMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOfficeTheme.cpp