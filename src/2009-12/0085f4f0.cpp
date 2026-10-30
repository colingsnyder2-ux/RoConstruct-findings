// roc 2009-12 0085f4f0  unit: CXTColorDialog  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085f4f0
//
// 0085f4f0  53                   push ebx
// 0085f4f1  56                   push esi
// 0085f4f2  8bf1                 mov esi, ecx
// 0085f4f4  e80f730c00           call 0x926808
// 0085f4f9  8bd8                 mov ebx, eax
// 0085f4fb  8b06                 mov eax, dword ptr [esi]
// 0085f4fd  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0085f503  8bce                 mov ecx, esi
// 0085f505  ffd2                 call edx
// 0085f507  6a00                 push 0
// 0085f509  8bce                 mov ecx, esi
// 0085f50b  e810730c00           call 0x926820
// 0085f510  8d86b0000000         lea eax, [esi + 0xb0]
// 0085f516  85c0                 test eax, eax
// 0085f518  7449                 je 0x85f563
// 0085f51a  83782000             cmp dword ptr [eax + 0x20], 0
// 0085f51e  7443                 je 0x85f563
// 0085f520  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085f523  57                   push edi
// 0085f524  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0085f52a  6a00                 push 0
// 0085f52c  6a00                 push 0
// 0085f52e  6a31                 push 0x31
// 0085f530  50                   push eax
// 0085f531  ffd7                 call edi
// 0085f533  50                   push eax
// 0085f534  e82b4ef9ff           call 0x7f4364
// 0085f539  85c0                 test eax, eax
// 0085f53b  7514                 jne 0x85f551
// 0085f53d  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0085f543  6a01                 push 1
// 0085f545  50                   push eax
// 0085f546  6a30                 push 0x30
// 0085f548  51                   push ecx
// 0085f549  ffd7                 call edi
// 0085f54b  5f                   pop edi
// 0085f54c  5e                   pop esi
// 0085f54d  8bc3                 mov eax, ebx
// 0085f54f  5b                   pop ebx
// 0085f550  c3                   ret 
// 0085f551  8b4004               mov eax, dword ptr [eax + 4]
// 0085f554  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0085f55a  6a01                 push 1
// 0085f55c  50                   push eax
// 0085f55d  6a30                 push 0x30
// 0085f55f  51                   push ecx
// 0085f560  ffd7                 call edi
// 0085f562  5f                   pop edi
// 0085f563  5e                   pop esi
// 0085f564  8bc3                 mov eax, ebx
// 0085f566  5b                   pop ebx
// 0085f567  c3                   ret 
// copied from an identical function in another client (function ?OnInitDialog@CXTColorDialog@@MAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp