// from server: 100% by tester
// roc 2008-06 00777770  unit: CXTPPropertyGridPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00777770
//
// 00777770  53                   push ebx
// 00777771  55                   push ebp
// 00777772  56                   push esi
// 00777773  8b742414             mov esi, dword ptr [esp + 0x14]
// 00777777  8b06                 mov eax, dword ptr [esi]
// 00777779  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0077777f  57                   push edi
// 00777780  8bce                 mov ecx, esi
// 00777782  ffd2                 call edx
// 00777784  85c0                 test eax, eax
// 00777786  746e                 je 0x7777f6
// 00777788  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0077778c  8bce                 mov ecx, esi
// 0077778e  e8dd3bf3ff           call 0x6ab370
// 00777793  8b5828               mov ebx, dword ptr [eax + 0x28]
// 00777796  83eb01               sub ebx, 1
// 00777799  785b                 js 0x7777f6
// 0077779b  eb07                 jmp 0x7777a4
// 0077779d  8d4900               lea ecx, [ecx]
// 007777a0  8b742418             mov esi, dword ptr [esp + 0x18]
// 007777a4  8bce                 mov ecx, esi
// 007777a6  e8c53bf3ff           call 0x6ab370
// 007777ab  85db                 test ebx, ebx
// 007777ad  7c0d                 jl 0x7777bc
// 007777af  3b5828               cmp ebx, dword ptr [eax + 0x28]
// 007777b2  7d08                 jge 0x7777bc
// 007777b4  8b4024               mov eax, dword ptr [eax + 0x24]
// 007777b7  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 007777ba  eb02                 jmp 0x7777be
// 007777bc  33ff                 xor edi, edi
// 007777be  8bcf                 mov ecx, edi
// 007777c0  e88bb8ffff           call 0x773050
// 007777c5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007777c9  8b17                 mov edx, dword ptr [edi]
// 007777cb  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007777ce  83ec10               sub esp, 0x10
// 007777d1  8bf5                 mov esi, ebp
// 007777d3  2bf0                 sub esi, eax
// 007777d5  8bc4                 mov eax, esp
// 007777d7  8930                 mov dword ptr [eax], esi
// 007777d9  894804               mov dword ptr [eax + 4], ecx
// 007777dc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007777e0  896808               mov dword ptr [eax + 8], ebp
// 007777e3  89480c               mov dword ptr [eax + 0xc], ecx
// 007777e6  8b442424             mov eax, dword ptr [esp + 0x24]
// 007777ea  50                   push eax
// 007777eb  8bcf                 mov ecx, edi
// 007777ed  ffd2                 call edx
// 007777ef  83eb01               sub ebx, 1
// 007777f2  8bee                 mov ebp, esi
// 007777f4  79aa                 jns 0x7777a0
// 007777f6  5f                   pop edi
// 007777f7  5e                   pop esi
// 007777f8  5d                   pop ebp
// 007777f9  5b                   pop ebx
// 007777fa  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawInplaceButtons@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
