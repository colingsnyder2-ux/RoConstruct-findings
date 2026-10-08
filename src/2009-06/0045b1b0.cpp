// from server: 100% by auto
// roc 2009-06 0045b1b0  unit: CRobloxWnd::PartDropTarget  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045b1b0
//
// 0045b1b0  6aff                 push -1
// 0045b1b2  6880248500           push 0x852480
// 0045b1b7  64a100000000         mov eax, dword ptr fs:[0]
// 0045b1bd  50                   push eax
// 0045b1be  64892500000000       mov dword ptr fs:[0], esp
// 0045b1c5  51                   push ecx
// 0045b1c6  56                   push esi
// 0045b1c7  8bf1                 mov esi, ecx
// 0045b1c9  89742404             mov dword ptr [esp + 4], esi
// 0045b1cd  8b4638               mov eax, dword ptr [esi + 0x38]
// 0045b1d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045b1d8  85c0                 test eax, eax
// 0045b1da  742c                 je 0x45b208
// 0045b1dc  83c004               add eax, 4
// 0045b1df  50                   push eax
// 0045b1e0  ff15a4e18900         call dword ptr [0x89e1a4]
// 0045b1e6  85c0                 test eax, eax
// 0045b1e8  7517                 jne 0x45b201
// 0045b1ea  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0045b1ed  e88e9bfeff           call 0x444d80
// 0045b1f2  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0045b1f5  85c9                 test ecx, ecx
// 0045b1f7  7408                 je 0x45b201
// 0045b1f9  8b01                 mov eax, dword ptr [ecx]
// 0045b1fb  8b10                 mov edx, dword ptr [eax]
// 0045b1fd  6a01                 push 1
// 0045b1ff  ffd2                 call edx
// 0045b201  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0045b208  c70628a18b00         mov dword ptr [esi], 0x8ba128
// 0045b20e  8d4e04               lea ecx, [esi + 4]
// 0045b211  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0045b219  ff15c4e48900         call dword ptr [0x89e4c4]
// 0045b21f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045b223  c70610a18b00         mov dword ptr [esi], 0x8ba110
// 0045b229  5e                   pop esi
// 0045b22a  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b231  83c410               add esp, 0x10
// 0045b234  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1Entry@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
