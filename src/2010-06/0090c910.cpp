// from server: 100% by auto
// roc 2010-06 0090c910  unit: G3D::TextureManager::TextureArgs  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c910
//
// 0090c910  55                   push ebp
// 0090c911  8bec                 mov ebp, esp
// 0090c913  83e4f8               and esp, 0xfffffff8
// 0090c916  6aff                 push -1
// 0090c918  68e8109c00           push 0x9c10e8
// 0090c91d  64a100000000         mov eax, dword ptr fs:[0]
// 0090c923  50                   push eax
// 0090c924  64892500000000       mov dword ptr fs:[0], esp
// 0090c92b  83ec44               sub esp, 0x44
// 0090c92e  53                   push ebx
// 0090c92f  55                   push ebp
// 0090c930  56                   push esi
// 0090c931  8bf1                 mov esi, ecx
// 0090c933  57                   push edi
// 0090c934  89742410             mov dword ptr [esp + 0x10], esi
// 0090c938  33ff                 xor edi, edi
// 0090c93a  8d4c241c             lea ecx, [esp + 0x1c]
// 0090c93e  897c245c             mov dword ptr [esp + 0x5c], edi
// 0090c942  c744241844e8a100     mov dword ptr [esp + 0x18], 0xa1e844
// 0090c94a  ff1504a49e00         call dword ptr [0x9ea404]
// 0090c950  897c2438             mov dword ptr [esp + 0x38], edi
// 0090c954  8b6e04               mov ebp, dword ptr [esi + 4]
// 0090c957  4d                   dec ebp
// 0090c958  3bef                 cmp ebp, edi
// 0090c95a  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 0090c962  0f8cf4000000         jl 0x90ca5c
// 0090c968  8d1ced00000000       lea ebx, [ebp*8]
// 0090c96f  2bdd                 sub ebx, ebp
// 0090c971  03db                 add ebx, ebx
// 0090c973  03db                 add ebx, ebx
// 0090c975  03db                 add ebx, ebx
// 0090c977  eb0b                 jmp 0x90c984
// 0090c979  8da42400000000       lea esp, [esp]
// 0090c980  8b742410             mov esi, dword ptr [esp + 0x10]
// 0090c984  55                   push ebp
// 0090c985  6a00                 push 0
// 0090c987  e84436c5ff           call 0x55ffd0
// 0090c98c  8b36                 mov esi, dword ptr [esi]
// 0090c98e  8bf8                 mov edi, eax
// 0090c990  03f3                 add esi, ebx
// 0090c992  83c408               add esp, 8
// 0090c995  8d4604               lea eax, [esi + 4]
// 0090c998  50                   push eax
// 0090c999  8d4c2420             lea ecx, [esp + 0x20]
// 0090c99d  897c2418             mov dword ptr [esp + 0x18], edi
// 0090c9a1  ff1568a49e00         call dword ptr [0x9ea468]
// 0090c9a7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0090c9aa  03ff                 add edi, edi
// 0090c9ac  894c2438             mov dword ptr [esp + 0x38], ecx
// 0090c9b0  8b5624               mov edx, dword ptr [esi + 0x24]
// 0090c9b3  03ff                 add edi, edi
// 0090c9b5  8954243c             mov dword ptr [esp + 0x3c], edx
// 0090c9b9  8b4628               mov eax, dword ptr [esi + 0x28]
// 0090c9bc  8b542410             mov edx, dword ptr [esp + 0x10]
// 0090c9c0  03ff                 add edi, edi
// 0090c9c2  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0090c9c6  89442440             mov dword ptr [esp + 0x40], eax
// 0090c9ca  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0090c9cd  03ff                 add edi, edi
// 0090c9cf  894c2444             mov dword ptr [esp + 0x44], ecx
// 0090c9d3  dd4630               fld qword ptr [esi + 0x30]
// 0090c9d6  8b32                 mov esi, dword ptr [edx]
// 0090c9d8  dd5c2448             fstp qword ptr [esp + 0x48]
// 0090c9dc  03ff                 add edi, edi
// 0090c9de  03ff                 add edi, edi
// 0090c9e0  8d443704             lea eax, [edi + esi + 4]
// 0090c9e4  50                   push eax
// 0090c9e5  8d4c3304             lea ecx, [ebx + esi + 4]
// 0090c9e9  ff1568a49e00         call dword ptr [0x9ea468]
// 0090c9ef  8b4c3720             mov ecx, dword ptr [edi + esi + 0x20]
// 0090c9f3  894c3320             mov dword ptr [ebx + esi + 0x20], ecx
// 0090c9f7  8b543724             mov edx, dword ptr [edi + esi + 0x24]
// 0090c9fb  89543324             mov dword ptr [ebx + esi + 0x24], edx
// 0090c9ff  8b443728             mov eax, dword ptr [edi + esi + 0x28]
// 0090ca03  8b542410             mov edx, dword ptr [esp + 0x10]
// 0090ca07  89443328             mov dword ptr [ebx + esi + 0x28], eax
// 0090ca0b  8b4c372c             mov ecx, dword ptr [edi + esi + 0x2c]
// 0090ca0f  894c332c             mov dword ptr [ebx + esi + 0x2c], ecx
// 0090ca13  dd443730             fld qword ptr [edi + esi + 0x30]
// 0090ca17  dd5c3330             fstp qword ptr [ebx + esi + 0x30]
// 0090ca1b  8b32                 mov esi, dword ptr [edx]
// 0090ca1d  8d44241c             lea eax, [esp + 0x1c]
// 0090ca21  03f7                 add esi, edi
// 0090ca23  50                   push eax
// 0090ca24  8d4e04               lea ecx, [esi + 4]
// 0090ca27  ff1568a49e00         call dword ptr [0x9ea468]
// 0090ca2d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0090ca31  894e20               mov dword ptr [esi + 0x20], ecx
// 0090ca34  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0090ca38  895624               mov dword ptr [esi + 0x24], edx
// 0090ca3b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0090ca3f  894628               mov dword ptr [esi + 0x28], eax
// 0090ca42  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0090ca46  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0090ca49  dd442448             fld qword ptr [esp + 0x48]
// 0090ca4d  4d                   dec ebp
// 0090ca4e  dd5e30               fstp qword ptr [esi + 0x30]
// 0090ca51  83eb38               sub ebx, 0x38
// 0090ca54  85ed                 test ebp, ebp
// 0090ca56  0f8d24ffffff         jge 0x90c980
// 0090ca5c  c744241844e8a100     mov dword ptr [esp + 0x18], 0xa1e844
// 0090ca64  8d4c241c             lea ecx, [esp + 0x1c]
// 0090ca68  c744245c02000000     mov dword ptr [esp + 0x5c], 2
// 0090ca70  ff1500a49e00         call dword ptr [0x9ea400]
// 0090ca76  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0090ca7a  5f                   pop edi
// 0090ca7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0090ca82  5e                   pop esi
// 0090ca83  5d                   pop ebp
// 0090ca84  5b                   pop ebx
// 0090ca85  8be5                 mov esp, ebp
// 0090ca87  5d                   pop ebp
// 0090ca88  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?randomize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
