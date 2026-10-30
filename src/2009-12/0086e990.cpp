// roc 2009-12 0086e990  unit: CXTPResourceManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e990
//
// 0086e990  53                   push ebx
// 0086e991  55                   push ebp
// 0086e992  56                   push esi
// 0086e993  57                   push edi
// 0086e994  8bf1                 mov esi, ecx
// 0086e996  e805ffffff           call 0x86e8a0
// 0086e99b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0086e99f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0086e9a2  8b6804               mov ebp, dword ptr [eax + 4]
// 0086e9a5  6a00                 push 0
// 0086e9a7  6a00                 push 0
// 0086e9a9  6aff                 push -1
// 0086e9ab  53                   push ebx
// 0086e9ac  6a00                 push 0
// 0086e9ae  55                   push ebp
// 0086e9af  ff1540b29800         call dword ptr [0x98b240]
// 0086e9b5  8bf8                 mov edi, eax
// 0086e9b7  33c9                 xor ecx, ecx
// 0086e9b9  8d4701               lea eax, [edi + 1]
// 0086e9bc  ba02000000           mov edx, 2
// 0086e9c1  f7e2                 mul edx
// 0086e9c3  0f90c1               seto cl
// 0086e9c6  f7d9                 neg ecx
// 0086e9c8  0bc8                 or ecx, eax
// 0086e9ca  51                   push ecx
// 0086e9cb  e87251f8ff           call 0x7f3b42
// 0086e9d0  83c404               add esp, 4
// 0086e9d3  57                   push edi
// 0086e9d4  50                   push eax
// 0086e9d5  6aff                 push -1
// 0086e9d7  53                   push ebx
// 0086e9d8  6a00                 push 0
// 0086e9da  55                   push ebp
// 0086e9db  8906                 mov dword ptr [esi], eax
// 0086e9dd  ff1540b29800         call dword ptr [0x98b240]
// 0086e9e3  8b06                 mov eax, dword ptr [esi]
// 0086e9e5  33c9                 xor ecx, ecx
// 0086e9e7  66890c78             mov word ptr [eax + edi*2], cx
// 0086e9eb  5f                   pop edi
// 0086e9ec  8bc6                 mov eax, esi
// 0086e9ee  5e                   pop esi
// 0086e9ef  5d                   pop ebp
// 0086e9f0  5b                   pop ebx
// 0086e9f1  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPA2W@CXTPResourceManager@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp