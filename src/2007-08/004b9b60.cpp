// roc 2007-08 004b9b60  unit: RakPeer  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9b60
//
// 004b9b60  51                   push ecx
// 004b9b61  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b9b65  55                   push ebp
// 004b9b66  8bd0                 mov edx, eax
// 004b9b68  83e01f               and eax, 0x1f
// 004b9b6b  56                   push esi
// 004b9b6c  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b9b70  c1ea05               shr edx, 5
// 004b9b73  85d2                 test edx, edx
// 004b9b75  8be8                 mov ebp, eax
// 004b9b77  57                   push edi
// 004b9b78  896c2418             mov dword ptr [esp + 0x18], ebp
// 004b9b7c  7431                 je 0x4b9baf
// 004b9b7e  b80f000000           mov eax, 0xf
// 004b9b83  2bc2                 sub eax, edx
// 004b9b85  7818                 js 0x4b9b9f
// 004b9b87  8d0c10               lea ecx, [eax + edx]
// 004b9b8a  8d0c8e               lea ecx, [esi + ecx*4]
// 004b9b8d  8d4900               lea ecx, [ecx]
// 004b9b90  8b3c86               mov edi, dword ptr [esi + eax*4]
// 004b9b93  8939                 mov dword ptr [ecx], edi
// 004b9b95  83e801               sub eax, 1
// 004b9b98  83e904               sub ecx, 4
// 004b9b9b  85c0                 test eax, eax
// 004b9b9d  7df1                 jge 0x4b9b90
// 004b9b9f  03d2                 add edx, edx
// 004b9ba1  03d2                 add edx, edx
// 004b9ba3  52                   push edx
// 004b9ba4  6a00                 push 0
// 004b9ba6  56                   push esi
// 004b9ba7  e8e06f1700           call 0x630b8c
// 004b9bac  83c40c               add esp, 0xc
// 004b9baf  85ed                 test ebp, ebp
// 004b9bb1  7436                 je 0x4b9be9
// 004b9bb3  53                   push ebx
// 004b9bb4  bb20000000           mov ebx, 0x20
// 004b9bb9  33ff                 xor edi, edi
// 004b9bbb  33d2                 xor edx, edx
// 004b9bbd  2bdd                 sub ebx, ebp
// 004b9bbf  eb04                 jmp 0x4b9bc5
// 004b9bc1  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004b9bc5  8b0496               mov eax, dword ptr [esi + edx*4]
// 004b9bc8  8bc8                 mov ecx, eax
// 004b9bca  894c2410             mov dword ptr [esp + 0x10], ecx
// 004b9bce  8bcd                 mov ecx, ebp
// 004b9bd0  8be8                 mov ebp, eax
// 004b9bd2  d3e5                 shl ebp, cl
// 004b9bd4  8bcb                 mov ecx, ebx
// 004b9bd6  d3e8                 shr eax, cl
// 004b9bd8  83c201               add edx, 1
// 004b9bdb  0bef                 or ebp, edi
// 004b9bdd  83fa10               cmp edx, 0x10
// 004b9be0  896c96fc             mov dword ptr [esi + edx*4 - 4], ebp
// 004b9be4  8bf8                 mov edi, eax
// 004b9be6  72d9                 jb 0x4b9bc1
// 004b9be8  5b                   pop ebx
// 004b9be9  5f                   pop edi
// 004b9bea  5e                   pop esi
// 004b9beb  5d                   pop ebp
// 004b9bec  59                   pop ecx
// 004b9bed  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$shiftLeft@$$BY0BA@I@big@@YAXAAY0BA@II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
