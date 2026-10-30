// roc 2009-12 00406360  unit: VCApp::?$CComObject  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406360
//
// 00406360  b804100000           mov eax, 0x1004
// 00406365  e8a6e63e00           call 0x7f4a10
// 0040636a  56                   push esi
// 0040636b  57                   push edi
// 0040636c  8bf9                 mov edi, ecx
// 0040636e  8b8c2410100000       mov ecx, dword ptr [esp + 0x1010]
// 00406375  8d442408             lea eax, [esp + 8]
// 00406379  50                   push eax
// 0040637a  51                   push ecx
// 0040637b  8bcf                 mov ecx, edi
// 0040637d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00406385  e876e3ffff           call 0x404700
// 0040638a  8bf0                 mov esi, eax
// 0040638c  85f6                 test esi, esi
// 0040638e  0f8cb9000000         jl 0x40644d
// 00406394  8b442408             mov eax, dword ptr [esp + 8]
// 00406398  8907                 mov dword ptr [edi], eax
// 0040639a  803800               cmp byte ptr [eax], 0
// 0040639d  0f849d000000         je 0x406440
// 004063a3  53                   push ebx
// 004063a4  55                   push ebp
// 004063a5  8d542414             lea edx, [esp + 0x14]
// 004063a9  52                   push edx
// 004063aa  8bcf                 mov ecx, edi
// 004063ac  e89fceffff           call 0x403250
// 004063b1  8bf0                 mov esi, eax
// 004063b3  85f6                 test esi, esi
// 004063b5  0f8c83000000         jl 0x40643e
// 004063bb  33f6                 xor esi, esi
// 004063bd  8d4900               lea ecx, [ecx]
// 004063c0  8b04f5f0f69900       mov eax, dword ptr [esi*8 + 0x99f6f0]
// 004063c7  50                   push eax
// 004063c8  8d4c2418             lea ecx, [esp + 0x18]
// 004063cc  51                   push ecx
// 004063cd  ff1514b29800         call dword ptr [0x98b214]
// 004063d3  85c0                 test eax, eax
// 004063d5  740d                 je 0x4063e4
// 004063d7  46                   inc esi
// 004063d8  83fe0e               cmp esi, 0xe
// 004063db  72e3                 jb 0x4063c0
// 004063dd  be09000280           mov esi, 0x80020009
// 004063e2  eb5a                 jmp 0x40643e
// 004063e4  8b2cf5f4f69900       mov ebp, dword ptr [esi*8 + 0x99f6f4]
// 004063eb  85ed                 test ebp, ebp
// 004063ed  74ee                 je 0x4063dd
// 004063ef  8d542414             lea edx, [esp + 0x14]
// 004063f3  52                   push edx
// 004063f4  8bcf                 mov ecx, edi
// 004063f6  e855ceffff           call 0x403250
// 004063fb  8bf0                 mov esi, eax
// 004063fd  85f6                 test esi, esi
// 004063ff  7c3d                 jl 0x40643e
// 00406401  807c24147b           cmp byte ptr [esp + 0x14], 0x7b
// 00406406  75d5                 jne 0x4063dd
// 00406408  8b84241c100000       mov eax, dword ptr [esp + 0x101c]
// 0040640f  6a00                 push 0
// 00406411  85c0                 test eax, eax
// 00406413  7443                 je 0x406458
// 00406415  8b1f                 mov ebx, dword ptr [edi]
// 00406417  50                   push eax
// 00406418  55                   push ebp
// 00406419  8d442420             lea eax, [esp + 0x20]
// 0040641d  50                   push eax
// 0040641e  8bcf                 mov ecx, edi
// 00406420  e89bf2ffff           call 0x4056c0
// 00406425  8bf0                 mov esi, eax
// 00406427  85f6                 test esi, esi
// 00406429  7d42                 jge 0x40646d
// 0040642b  6a00                 push 0
// 0040642d  6a00                 push 0
// 0040642f  55                   push ebp
// 00406430  8d442420             lea eax, [esp + 0x20]
// 00406434  50                   push eax
// 00406435  8bcf                 mov ecx, edi
// 00406437  891f                 mov dword ptr [edi], ebx
// 00406439  e882f2ffff           call 0x4056c0
// 0040643e  5d                   pop ebp
// 0040643f  5b                   pop ebx
// 00406440  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406444  51                   push ecx
// 00406445  ff15a0e09800         call dword ptr [0x98e0a0]
// 0040644b  8bc6                 mov eax, esi
// 0040644d  5f                   pop edi
// 0040644e  5e                   pop esi
// 0040644f  81c404100000         add esp, 0x1004
// 00406455  c20800               ret 8
// 00406458  6a00                 push 0
// 0040645a  55                   push ebp
// 0040645b  8d4c2420             lea ecx, [esp + 0x20]
// 0040645f  51                   push ecx
// 00406460  8bcf                 mov ecx, edi
// 00406462  e859f2ffff           call 0x4056c0
// 00406467  8bf0                 mov esi, eax
// 00406469  85f6                 test esi, esi
// 0040646b  7cd1                 jl 0x40643e
// 0040646d  8bcf                 mov ecx, edi
// 0040646f  e87ccdffff           call 0x4031f0
// 00406474  8b17                 mov edx, dword ptr [edi]
// 00406476  803a00               cmp byte ptr [edx], 0
// 00406479  0f8526ffffff         jne 0x4063a5
// 0040647f  ebbd                 jmp 0x40643e
// copied from an identical function in another client (function ?RegisterBuffer@CRegParser@ATL@@QAEJPADH@Z)

// from server: 100% by colin
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lang: cpp
// roc-lib: atl-8.0 atl.cpp