// roc 2009-12 00858f00  unit: CXTPTabClientWnd::CSingleWorkspace  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858f00
//
// 00858f00  56                   push esi
// 00858f01  8bf1                 mov esi, ecx
// 00858f03  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00858f0a  7504                 jne 0x858f10
// 00858f0c  33c0                 xor eax, eax
// 00858f0e  5e                   pop esi
// 00858f0f  c3                   ret 
// 00858f10  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00858f16  85c9                 test ecx, ecx
// 00858f18  7407                 je 0x858f21
// 00858f1a  8b01                 mov eax, dword ptr [ecx]
// 00858f1c  8b5058               mov edx, dword ptr [eax + 0x58]
// 00858f1f  ffd2                 call edx
// 00858f21  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00858f24  57                   push edi
// 00858f25  85c0                 test eax, eax
// 00858f27  7414                 je 0x858f3d
// 00858f29  c7809000000000000000 mov dword ptr [eax + 0x90], 0
// 00858f33  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00858f36  e835650700           call 0x8cf470
// 00858f3b  eb36                 jmp 0x858f73
// 00858f3d  8bce                 mov ecx, esi
// 00858f3f  33ff                 xor edi, edi
// 00858f41  e80ad7ffff           call 0x856650
// 00858f46  85c0                 test eax, eax
// 00858f48  7e29                 jle 0x858f73
// 00858f4a  8d9b00000000         lea ebx, [ebx]
// 00858f50  57                   push edi
// 00858f51  8bce                 mov ecx, esi
// 00858f53  e8e8e5ffff           call 0x857540
// 00858f58  85c0                 test eax, eax
// 00858f5a  740b                 je 0x858f67
// 00858f5c  8b10                 mov edx, dword ptr [eax]
// 00858f5e  8bc8                 mov ecx, eax
// 00858f60  8b4208               mov eax, dword ptr [edx + 8]
// 00858f63  6a01                 push 1
// 00858f65  ffd0                 call eax
// 00858f67  8bce                 mov ecx, esi
// 00858f69  47                   inc edi
// 00858f6a  e8e1d6ffff           call 0x856650
// 00858f6f  3bf8                 cmp edi, eax
// 00858f71  7cdd                 jl 0x858f50
// 00858f73  6aff                 push -1
// 00858f75  6a00                 push 0
// 00858f77  8d4e68               lea ecx, [esi + 0x68]
// 00858f7a  e821c4ffff           call 0x8553a0
// 00858f7f  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00858f82  8bce                 mov ecx, esi
// 00858f84  c7869800000000000000 mov dword ptr [esi + 0x98], 0
// 00858f8e  e839db0c00           call 0x926acc
// 00858f93  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00858f99  85c0                 test eax, eax
// 00858f9b  7403                 je 0x858fa0
// 00858f9d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00858fa0  50                   push eax
// 00858fa1  ff1584cc9800         call dword ptr [0x98cc84]
// 00858fa7  85c0                 test eax, eax
// 00858fa9  7412                 je 0x858fbd
// 00858fab  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00858fb1  8b11                 mov edx, dword ptr [ecx]
// 00858fb3  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00858fb9  6a01                 push 1
// 00858fbb  ffd0                 call eax
// 00858fbd  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00858fc3  6a00                 push 0
// 00858fc5  6a00                 push 0
// 00858fc7  51                   push ecx
// 00858fc8  57                   push edi
// 00858fc9  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00858fd3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00858fd9  5f                   pop edi
// 00858fda  b801000000           mov eax, 1
// 00858fdf  5e                   pop esi
// 00858fe0  c3                   ret 
// copied from an identical function in another client (function ?Detach@CXTPTabClientWnd@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp