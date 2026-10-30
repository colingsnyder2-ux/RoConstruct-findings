// roc 2012-06 009f85e0  unit: CXTPResourceManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f85e0
//
// 009f85e0  53                   push ebx
// 009f85e1  55                   push ebp
// 009f85e2  56                   push esi
// 009f85e3  57                   push edi
// 009f85e4  8bf1                 mov esi, ecx
// 009f85e6  e805ffffff           call 0x9f84f0
// 009f85eb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009f85ef  8b400c               mov eax, dword ptr [eax + 0xc]
// 009f85f2  8b6804               mov ebp, dword ptr [eax + 4]
// 009f85f5  6a00                 push 0
// 009f85f7  6a00                 push 0
// 009f85f9  6aff                 push -1
// 009f85fb  53                   push ebx
// 009f85fc  6a00                 push 0
// 009f85fe  55                   push ebp
// 009f85ff  ff15cc21b200         call dword ptr [0xb221cc]
// 009f8605  8bf8                 mov edi, eax
// 009f8607  33c9                 xor ecx, ecx
// 009f8609  8d4701               lea eax, [edi + 1]
// 009f860c  ba02000000           mov edx, 2
// 009f8611  f7e2                 mul edx
// 009f8613  0f90c1               seto cl
// 009f8616  f7d9                 neg ecx
// 009f8618  0bc8                 or ecx, eax
// 009f861a  51                   push ecx
// 009f861b  e8d09df8ff           call 0x9823f0
// 009f8620  83c404               add esp, 4
// 009f8623  57                   push edi
// 009f8624  50                   push eax
// 009f8625  6aff                 push -1
// 009f8627  53                   push ebx
// 009f8628  6a00                 push 0
// 009f862a  55                   push ebp
// 009f862b  8906                 mov dword ptr [esi], eax
// 009f862d  ff15cc21b200         call dword ptr [0xb221cc]
// 009f8633  8b06                 mov eax, dword ptr [esi]
// 009f8635  33c9                 xor ecx, ecx
// 009f8637  66890c78             mov word ptr [eax + edi*2], cx
// 009f863b  5f                   pop edi
// 009f863c  8bc6                 mov eax, esi
// 009f863e  5e                   pop esi
// 009f863f  5d                   pop ebp
// 009f8640  5b                   pop ebx
// 009f8641  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPA2W@CXTPResourceManager@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp