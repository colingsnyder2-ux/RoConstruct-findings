// from server: 100% by auto
// roc 2007-08 0047b550  unit: G3D::Win32Window  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b550
//
// 0047b550  83ec08               sub esp, 8
// 0047b553  53                   push ebx
// 0047b554  55                   push ebp
// 0047b555  56                   push esi
// 0047b556  8b35b8ed7700         mov esi, dword ptr [0x77edb8]
// 0047b55c  57                   push edi
// 0047b55d  33ed                 xor ebp, ebp
// 0047b55f  55                   push ebp
// 0047b560  894c2418             mov dword ptr [esp + 0x18], ecx
// 0047b564  ffd6                 call esi
// 0047b566  6a01                 push 1
// 0047b568  8bf8                 mov edi, eax
// 0047b56a  ffd6                 call esi
// 0047b56c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0047b570  d906                 fld dword ptr [esi]
// 0047b572  8bd8                 mov ebx, eax
// 0047b574  e8e7571b00           call 0x630d60
// 0047b579  3bc5                 cmp eax, ebp
// 0047b57b  7f06                 jg 0x47b583
// 0047b57d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0047b581  eb0c                 jmp 0x47b58f
// 0047b583  3bc7                 cmp eax, edi
// 0047b585  897c241c             mov dword ptr [esp + 0x1c], edi
// 0047b589  7d04                 jge 0x47b58f
// 0047b58b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047b58f  d94604               fld dword ptr [esi + 4]
// 0047b592  e8c9571b00           call 0x630d60
// 0047b597  3bc5                 cmp eax, ebp
// 0047b599  7e08                 jle 0x47b5a3
// 0047b59b  3bc3                 cmp eax, ebx
// 0047b59d  8beb                 mov ebp, ebx
// 0047b59f  7d02                 jge 0x47b5a3
// 0047b5a1  8be8                 mov ebp, eax
// 0047b5a3  d94608               fld dword ptr [esi + 8]
// 0047b5a6  d826                 fsub dword ptr [esi]
// 0047b5a8  d95c2410             fstp dword ptr [esp + 0x10]
// 0047b5ac  d9442410             fld dword ptr [esp + 0x10]
// 0047b5b0  e8ab571b00           call 0x630d60
// 0047b5b5  83f801               cmp eax, 1
// 0047b5b8  7f07                 jg 0x47b5c1
// 0047b5ba  bf01000000           mov edi, 1
// 0047b5bf  eb06                 jmp 0x47b5c7
// 0047b5c1  3bc7                 cmp eax, edi
// 0047b5c3  7d02                 jge 0x47b5c7
// 0047b5c5  8bf8                 mov edi, eax
// 0047b5c7  d9460c               fld dword ptr [esi + 0xc]
// 0047b5ca  d86604               fsub dword ptr [esi + 4]
// 0047b5cd  d95c2410             fstp dword ptr [esp + 0x10]
// 0047b5d1  d9442410             fld dword ptr [esp + 0x10]
// 0047b5d5  e886571b00           call 0x630d60
// 0047b5da  83f801               cmp eax, 1
// 0047b5dd  7f07                 jg 0x47b5e6
// 0047b5df  b801000000           mov eax, 1
// 0047b5e4  eb06                 jmp 0x47b5ec
// 0047b5e6  3bc3                 cmp eax, ebx
// 0047b5e8  7c02                 jl 0x47b5ec
// 0047b5ea  8bc3                 mov eax, ebx
// 0047b5ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047b5f0  8b91e8010000         mov edx, dword ptr [ecx + 0x1e8]
// 0047b5f6  6a01                 push 1
// 0047b5f8  50                   push eax
// 0047b5f9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047b5fd  57                   push edi
// 0047b5fe  55                   push ebp
// 0047b5ff  50                   push eax
// 0047b600  52                   push edx
// 0047b601  ff1554ed7700         call dword ptr [0x77ed54]
// 0047b607  5f                   pop edi
// 0047b608  5e                   pop esi
// 0047b609  5d                   pop ebp
// 0047b60a  5b                   pop ebx
// 0047b60b  83c408               add esp, 8
// 0047b60e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setDimensions@Win32Window@G3D@@UAEXABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
