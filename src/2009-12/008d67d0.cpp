// roc 2009-12 008d67d0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d67d0
//
// 008d67d0  83ec20               sub esp, 0x20
// 008d67d3  53                   push ebx
// 008d67d4  55                   push ebp
// 008d67d5  56                   push esi
// 008d67d6  57                   push edi
// 008d67d7  684012a000           push 0xa01240
// 008d67dc  e81fb00000           call 0x8e1800
// 008d67e1  8bc8                 mov ecx, eax
// 008d67e3  e838af0000           call 0x8e1720
// 008d67e8  8b742438             mov esi, dword ptr [esp + 0x38]
// 008d67ec  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d67ef  33ff                 xor edi, edi
// 008d67f1  8bd8                 mov ebx, eax
// 008d67f3  8d6f05               lea ebp, [edi + 5]
// 008d67f6  397104               cmp dword ptr [ecx + 4], esi
// 008d67f9  750f                 jne 0x8d680a
// 008d67fb  8b01                 mov eax, dword ptr [ecx]
// 008d67fd  8b5078               mov edx, dword ptr [eax + 0x78]
// 008d6800  ffd2                 call edx
// 008d6802  85c0                 test eax, eax
// 008d6804  7404                 je 0x8d680a
// 008d6806  8bfd                 mov edi, ebp
// 008d6808  eb37                 jmp 0x8d6841
// 008d680a  8b4660               mov eax, dword ptr [esi + 0x60]
// 008d680d  8b4804               mov ecx, dword ptr [eax + 4]
// 008d6810  3bce                 cmp ecx, esi
// 008d6812  7517                 jne 0x8d682b
// 008d6814  397008               cmp dword ptr [eax + 8], esi
// 008d6817  7507                 jne 0x8d6820
// 008d6819  bf04000000           mov edi, 4
// 008d681e  eb21                 jmp 0x8d6841
// 008d6820  3bce                 cmp ecx, esi
// 008d6822  7507                 jne 0x8d682b
// 008d6824  bf03000000           mov edi, 3
// 008d6829  eb16                 jmp 0x8d6841
// 008d682b  39700c               cmp dword ptr [eax + 0xc], esi
// 008d682e  7507                 jne 0x8d6837
// 008d6830  bf02000000           mov edi, 2
// 008d6835  eb0a                 jmp 0x8d6841
// 008d6837  397008               cmp dword ptr [eax + 8], esi
// 008d683a  7505                 jne 0x8d6841
// 008d683c  bf01000000           mov edi, 1
// 008d6841  85db                 test ebx, ebx
// 008d6843  7455                 je 0x8d689a
// 008d6845  6a06                 push 6
// 008d6847  57                   push edi
// 008d6848  8d442428             lea eax, [esp + 0x28]
// 008d684c  50                   push eax
// 008d684d  8bcb                 mov ecx, ebx
// 008d684f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008d6853  896c2420             mov dword ptr [esp + 0x20], ebp
// 008d6857  896c2424             mov dword ptr [esp + 0x24], ebp
// 008d685b  896c2428             mov dword ptr [esp + 0x28], ebp
// 008d685f  e85ca00000           call 0x8e08c0
// 008d6864  8b10                 mov edx, dword ptr [eax]
// 008d6866  68ff00ff00           push 0xff00ff
// 008d686b  8d4c2414             lea ecx, [esp + 0x14]
// 008d686f  51                   push ecx
// 008d6870  83ec10               sub esp, 0x10
// 008d6873  8bcc                 mov ecx, esp
// 008d6875  8911                 mov dword ptr [ecx], edx
// 008d6877  8b5004               mov edx, dword ptr [eax + 4]
// 008d687a  895104               mov dword ptr [ecx + 4], edx
// 008d687d  8b5008               mov edx, dword ptr [eax + 8]
// 008d6880  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d6883  895108               mov dword ptr [ecx + 8], edx
// 008d6886  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008d688a  89410c               mov dword ptr [ecx + 0xc], eax
// 008d688d  8d4c2454             lea ecx, [esp + 0x54]
// 008d6891  51                   push ecx
// 008d6892  52                   push edx
// 008d6893  8bcb                 mov ecx, ebx
// 008d6895  e866a50000           call 0x8e0e00
// 008d689a  5f                   pop edi
// 008d689b  5e                   pop esi
// 008d689c  5d                   pop ebp
// 008d689d  5b                   pop ebx
// 008d689e  83c420               add esp, 0x20
// 008d68a1  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawButtonBackground@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
