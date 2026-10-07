// roc 2008-06 00505780  unit: RBX::Render::RenderScene  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505780
//
// 00505780  83ec08               sub esp, 8
// 00505783  53                   push ebx
// 00505784  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00505788  55                   push ebp
// 00505789  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0050578d  56                   push esi
// 0050578e  57                   push edi
// 0050578f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00505793  8bc7                 mov eax, edi
// 00505795  2bc3                 sub eax, ebx
// 00505797  c1f802               sar eax, 2
// 0050579a  83f820               cmp eax, 0x20
// 0050579d  7e6d                 jle 0x50580c
// 0050579f  8b742424             mov esi, dword ptr [esp + 0x24]
// 005057a3  85f6                 test esi, esi
// 005057a5  7e7f                 jle 0x505826
// 005057a7  55                   push ebp
// 005057a8  57                   push edi
// 005057a9  8d442418             lea eax, [esp + 0x18]
// 005057ad  53                   push ebx
// 005057ae  50                   push eax
// 005057af  e8bcfdffff           call 0x505570
// 005057b4  8bc6                 mov eax, esi
// 005057b6  99                   cdq 
// 005057b7  2bc2                 sub eax, edx
// 005057b9  d1f8                 sar eax, 1
// 005057bb  8bf0                 mov esi, eax
// 005057bd  99                   cdq 
// 005057be  2bc2                 sub eax, edx
// 005057c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005057c4  d1f8                 sar eax, 1
// 005057c6  03f0                 add esi, eax
// 005057c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005057cc  8bcf                 mov ecx, edi
// 005057ce  83c410               add esp, 0x10
// 005057d1  2bc8                 sub ecx, eax
// 005057d3  2bd3                 sub edx, ebx
// 005057d5  83e1fc               and ecx, 0xfffffffc
// 005057d8  83e2fc               and edx, 0xfffffffc
// 005057db  3bd1                 cmp edx, ecx
// 005057dd  55                   push ebp
// 005057de  56                   push esi
// 005057df  7d11                 jge 0x5057f2
// 005057e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005057e5  50                   push eax
// 005057e6  53                   push ebx
// 005057e7  e894ffffff           call 0x505780
// 005057ec  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005057f0  eb0b                 jmp 0x5057fd
// 005057f2  57                   push edi
// 005057f3  50                   push eax
// 005057f4  e887ffffff           call 0x505780
// 005057f9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005057fd  8bc7                 mov eax, edi
// 005057ff  2bc3                 sub eax, ebx
// 00505801  c1f802               sar eax, 2
// 00505804  83c410               add esp, 0x10
// 00505807  83f820               cmp eax, 0x20
// 0050580a  7f97                 jg 0x5057a3
// 0050580c  83f801               cmp eax, 1
// 0050580f  7e0d                 jle 0x50581e
// 00505811  6a00                 push 0
// 00505813  55                   push ebp
// 00505814  57                   push edi
// 00505815  53                   push ebx
// 00505816  e885fcffff           call 0x5054a0
// 0050581b  83c410               add esp, 0x10
// 0050581e  5f                   pop edi
// 0050581f  5e                   pop esi
// 00505820  5d                   pop ebp
// 00505821  5b                   pop ebx
// 00505822  83c408               add esp, 8
// 00505825  c3                   ret 
// 00505826  83f820               cmp eax, 0x20
// 00505829  7ee1                 jle 0x50580c
// 0050582b  8bcf                 mov ecx, edi
// 0050582d  2bcb                 sub ecx, ebx
// 0050582f  83e1fc               and ecx, 0xfffffffc
// 00505832  83f904               cmp ecx, 4
// 00505835  7e0f                 jle 0x505846
// 00505837  6a00                 push 0
// 00505839  6a00                 push 0
// 0050583b  55                   push ebp
// 0050583c  57                   push edi
// 0050583d  53                   push ebx
// 0050583e  e81dfcffff           call 0x505460
// 00505843  83c414               add esp, 0x14
// 00505846  55                   push ebp
// 00505847  57                   push edi
// 00505848  53                   push ebx
// 00505849  e8e2feffff           call 0x505730
// 0050584e  83c40c               add esp, 0xc
// 00505851  5f                   pop edi
// 00505852  5e                   pop esi
// 00505853  5d                   pop ebp
// 00505854  5b                   pop ebx
// 00505855  83c408               add esp, 8
// 00505858  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
