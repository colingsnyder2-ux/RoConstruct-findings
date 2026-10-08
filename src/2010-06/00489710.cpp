// from server: 100% by auto
// roc 2010-06 00489710  unit: G3D::Win32Window  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00489710
//
// 00489710  6aff                 push -1
// 00489712  68bc5f9800           push 0x985fbc
// 00489717  64a100000000         mov eax, dword ptr fs:[0]
// 0048971d  50                   push eax
// 0048971e  64892500000000       mov dword ptr fs:[0], esp
// 00489725  51                   push ecx
// 00489726  53                   push ebx
// 00489727  57                   push edi
// 00489728  8bf9                 mov edi, ecx
// 0048972a  33db                 xor ebx, ebx
// 0048972c  395f04               cmp dword ptr [edi + 4], ebx
// 0048972f  7e47                 jle 0x489778
// 00489731  55                   push ebp
// 00489732  56                   push esi
// 00489733  33ed                 xor ebp, ebp
// 00489735  8b37                 mov esi, dword ptr [edi]
// 00489737  03f5                 add esi, ebp
// 00489739  89742410             mov dword ptr [esp + 0x10], esi
// 0048973d  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00489740  50                   push eax
// 00489741  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00489749  e872420c00           call 0x54d9c0
// 0048974e  33c0                 xor eax, eax
// 00489750  83c404               add esp, 4
// 00489753  8d4e04               lea ecx, [esi + 4]
// 00489756  89462c               mov dword ptr [esi + 0x2c], eax
// 00489759  894630               mov dword ptr [esi + 0x30], eax
// 0048975c  894634               mov dword ptr [esi + 0x34], eax
// 0048975f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00489767  ff1500a49e00         call dword ptr [0x9ea400]
// 0048976d  43                   inc ebx
// 0048976e  83c538               add ebp, 0x38
// 00489771  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00489774  7cbf                 jl 0x489735
// 00489776  5e                   pop esi
// 00489777  5d                   pop ebp
// 00489778  8b0f                 mov ecx, dword ptr [edi]
// 0048977a  51                   push ecx
// 0048977b  e840420c00           call 0x54d9c0
// 00489780  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00489784  83c404               add esp, 4
// 00489787  33c0                 xor eax, eax
// 00489789  8907                 mov dword ptr [edi], eax
// 0048978b  894704               mov dword ptr [edi + 4], eax
// 0048978e  894708               mov dword ptr [edi + 8], eax
// 00489791  5f                   pop edi
// 00489792  5b                   pop ebx
// 00489793  64890d00000000       mov dword ptr fs:[0], ecx
// 0048979a  83c410               add esp, 0x10
// 0048979d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
