// roc 2011-06 0087f970  unit: CXTPResourceManager  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f970
//
// 0087f970  8b442408             mov eax, dword ptr [esp + 8]
// 0087f974  56                   push esi
// 0087f975  8b353803a400         mov esi, dword ptr [0xa40338]
// 0087f97b  57                   push edi
// 0087f97c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087f980  6a0e                 push 0xe
// 0087f982  50                   push eax
// 0087f983  57                   push edi
// 0087f984  ffd6                 call esi
// 0087f986  85c0                 test eax, eax
// 0087f988  7505                 jne 0x87f98f
// 0087f98a  5f                   pop edi
// 0087f98b  5e                   pop esi
// 0087f98c  c21000               ret 0x10
// 0087f98f  55                   push ebp
// 0087f990  8b2d3c03a400         mov ebp, dword ptr [0xa4033c]
// 0087f996  50                   push eax
// 0087f997  57                   push edi
// 0087f998  ffd5                 call ebp
// 0087f99a  85c0                 test eax, eax
// 0087f99c  7506                 jne 0x87f9a4
// 0087f99e  5d                   pop ebp
// 0087f99f  5f                   pop edi
// 0087f9a0  5e                   pop esi
// 0087f9a1  c21000               ret 0x10
// 0087f9a4  53                   push ebx
// 0087f9a5  8b1dd001a400         mov ebx, dword ptr [0xa401d0]
// 0087f9ab  50                   push eax
// 0087f9ac  ffd3                 call ebx
// 0087f9ae  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087f9b2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087f9b6  6a00                 push 0
// 0087f9b8  51                   push ecx
// 0087f9b9  52                   push edx
// 0087f9ba  6a01                 push 1
// 0087f9bc  50                   push eax
// 0087f9bd  ff156c1aa400         call dword ptr [0xa41a6c]
// 0087f9c3  0fb7c0               movzx eax, ax
// 0087f9c6  6a03                 push 3
// 0087f9c8  50                   push eax
// 0087f9c9  57                   push edi
// 0087f9ca  ffd6                 call esi
// 0087f9cc  8bf0                 mov esi, eax
// 0087f9ce  85f6                 test esi, esi
// 0087f9d0  7408                 je 0x87f9da
// 0087f9d2  56                   push esi
// 0087f9d3  57                   push edi
// 0087f9d4  ffd5                 call ebp
// 0087f9d6  85c0                 test eax, eax
// 0087f9d8  7509                 jne 0x87f9e3
// 0087f9da  5b                   pop ebx
// 0087f9db  5d                   pop ebp
// 0087f9dc  5f                   pop edi
// 0087f9dd  33c0                 xor eax, eax
// 0087f9df  5e                   pop esi
// 0087f9e0  c21000               ret 0x10
// 0087f9e3  50                   push eax
// 0087f9e4  ffd3                 call ebx
// 0087f9e6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087f9ea  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087f9ee  6a00                 push 0
// 0087f9f0  51                   push ecx
// 0087f9f1  52                   push edx
// 0087f9f2  6800000300           push 0x30000
// 0087f9f7  6a01                 push 1
// 0087f9f9  56                   push esi
// 0087f9fa  57                   push edi
// 0087f9fb  8bd8                 mov ebx, eax
// 0087f9fd  ff154003a400         call dword ptr [0xa40340]
// 0087fa03  50                   push eax
// 0087fa04  53                   push ebx
// 0087fa05  ff15c01aa400         call dword ptr [0xa41ac0]
// 0087fa0b  5b                   pop ebx
// 0087fa0c  5d                   pop ebp
// 0087fa0d  5f                   pop edi
// 0087fa0e  5e                   pop esi
// 0087fa0f  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?CreateIconFromResource@CXTPResourceManager@@UAEPAUHICON__@@PAUHINSTANCE__@@PBDVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
