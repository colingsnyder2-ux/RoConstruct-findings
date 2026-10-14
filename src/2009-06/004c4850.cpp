// roc 2009-06 004c4850  unit: RBX::Network::Players::Plugin  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c4850
//
// 004c4850  8b442404             mov eax, dword ptr [esp + 4]
// 004c4854  53                   push ebx
// 004c4855  55                   push ebp
// 004c4856  56                   push esi
// 004c4857  8bf1                 mov esi, ecx
// 004c4859  8b6e04               mov ebp, dword ptr [esi + 4]
// 004c485c  894604               mov dword ptr [esi + 4], eax
// 004c485f  f60574dba30001       test byte ptr [0xa3db74], 1
// 004c4866  57                   push edi
// 004c4867  7514                 jne 0x4c487d
// 004c4869  830d74dba30001       or dword ptr [0xa3db74], 1
// 004c4870  bb0a000000           mov ebx, 0xa
// 004c4875  891d70dba300         mov dword ptr [0xa3db70], ebx
// 004c487b  eb06                 jmp 0x4c4883
// 004c487d  8b1d70dba300         mov ebx, dword ptr [0xa3db70]
// 004c4883  8b7e04               mov edi, dword ptr [esi + 4]
// 004c4886  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c4889  3bf9                 cmp edi, ecx
// 004c488b  7e6b                 jle 0x4c48f8
// 004c488d  85c9                 test ecx, ecx
// 004c488f  7509                 jne 0x4c489a
// 004c4891  894608               mov dword ptr [esi + 8], eax
// 004c4894  55                   push ebp
// 004c4895  e982000000           jmp 0x4c491c
// 004c489a  3bfb                 cmp edi, ebx
// 004c489c  7d06                 jge 0x4c48a4
// 004c489e  895e08               mov dword ptr [esi + 8], ebx
// 004c48a1  55                   push ebp
// 004c48a2  eb78                 jmp 0x4c491c
// 004c48a4  d90548e88b00         fld dword ptr [0x8be848]
// 004c48aa  8bc1                 mov eax, ecx
// 004c48ac  03c0                 add eax, eax
// 004c48ae  03c0                 add eax, eax
// 004c48b0  03c0                 add eax, eax
// 004c48b2  3d801a0600           cmp eax, 0x61a80
// 004c48b7  760a                 jbe 0x4c48c3
// 004c48b9  ddd8                 fstp st(0)
// 004c48bb  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004c48c1  eb0f                 jmp 0x4c48d2
// 004c48c3  3d00fa0000           cmp eax, 0xfa00
// 004c48c8  7608                 jbe 0x4c48d2
// 004c48ca  ddd8                 fstp st(0)
// 004c48cc  d90544d08b00         fld dword ptr [0x8bd044]
// 004c48d2  8bd9                 mov ebx, ecx
// 004c48d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004c48d8  da4c2418             fimul dword ptr [esp + 0x18]
// 004c48dc  e8df552500           call 0x719ec0
// 004c48e1  2bc3                 sub eax, ebx
// 004c48e3  03c7                 add eax, edi
// 004c48e5  894608               mov dword ptr [esi + 8], eax
// 004c48e8  8b0d70dba300         mov ecx, dword ptr [0xa3db70]
// 004c48ee  3bc1                 cmp eax, ecx
// 004c48f0  7d03                 jge 0x4c48f5
// 004c48f2  894e08               mov dword ptr [esi + 8], ecx
// 004c48f5  55                   push ebp
// 004c48f6  eb24                 jmp 0x4c491c
// 004c48f8  b856555555           mov eax, 0x55555556
// 004c48fd  f7e9                 imul ecx
// 004c48ff  8bc2                 mov eax, edx
// 004c4901  c1e81f               shr eax, 0x1f
// 004c4904  03c2                 add eax, edx
// 004c4906  3bf8                 cmp edi, eax
// 004c4908  7f19                 jg 0x4c4923
// 004c490a  807c241800           cmp byte ptr [esp + 0x18], 0
// 004c490f  7412                 je 0x4c4923
// 004c4911  3bfb                 cmp edi, ebx
// 004c4913  7e0e                 jle 0x4c4923
// 004c4915  3bfd                 cmp edi, ebp
// 004c4917  7c02                 jl 0x4c491b
// 004c4919  8bfd                 mov edi, ebp
// 004c491b  57                   push edi
// 004c491c  8bce                 mov ecx, esi
// 004c491e  e85df7ffff           call 0x4c4080
// 004c4923  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004c4926  8bc5                 mov eax, ebp
// 004c4928  7d18                 jge 0x4c4942
// 004c492a  d9ee                 fldz 
// 004c492c  8b0e                 mov ecx, dword ptr [esi]
// 004c492e  8d0cc1               lea ecx, [ecx + eax*8]
// 004c4931  85c9                 test ecx, ecx
// 004c4933  7405                 je 0x4c493a
// 004c4935  d911                 fst dword ptr [ecx]
// 004c4937  d95104               fst dword ptr [ecx + 4]
// 004c493a  40                   inc eax
// 004c493b  3b4604               cmp eax, dword ptr [esi + 4]
// 004c493e  7cec                 jl 0x4c492c
// 004c4940  ddd8                 fstp st(0)
// 004c4942  5f                   pop edi
// 004c4943  5e                   pop esi
// 004c4944  5d                   pop ebp
// 004c4945  5b                   pop ebx
// 004c4946  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\ConvexPolyhedron.cpp (function ?resize@?$Array@VVector2@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/ConvexPolyhedron.cpp
