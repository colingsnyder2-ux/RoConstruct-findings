// from server: 100% by auto
// roc 2010-06 00492140  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492140
//
// 00492140  53                   push ebx
// 00492141  55                   push ebp
// 00492142  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00492146  56                   push esi
// 00492147  57                   push edi
// 00492148  55                   push ebp
// 00492149  8bd9                 mov ebx, ecx
// 0049214b  e8203f0c00           call 0x556070
// 00492150  d94524               fld dword ptr [ebp + 0x24]
// 00492153  d95b24               fstp dword ptr [ebx + 0x24]
// 00492156  8d7530               lea esi, [ebp + 0x30]
// 00492159  d94528               fld dword ptr [ebp + 0x28]
// 0049215c  8d7b30               lea edi, [ebx + 0x30]
// 0049215f  d95b28               fstp dword ptr [ebx + 0x28]
// 00492162  56                   push esi
// 00492163  d9452c               fld dword ptr [ebp + 0x2c]
// 00492166  8bcf                 mov ecx, edi
// 00492168  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0049216b  e8003f0c00           call 0x556070
// 00492170  d94624               fld dword ptr [esi + 0x24]
// 00492173  d95f24               fstp dword ptr [edi + 0x24]
// 00492176  d94628               fld dword ptr [esi + 0x28]
// 00492179  d95f28               fstp dword ptr [edi + 0x28]
// 0049217c  d9462c               fld dword ptr [esi + 0x2c]
// 0049217f  8d7560               lea esi, [ebp + 0x60]
// 00492182  d95f2c               fstp dword ptr [edi + 0x2c]
// 00492185  8d7b60               lea edi, [ebx + 0x60]
// 00492188  56                   push esi
// 00492189  8bcf                 mov ecx, edi
// 0049218b  e8e03e0c00           call 0x556070
// 00492190  d94624               fld dword ptr [esi + 0x24]
// 00492193  d95f24               fstp dword ptr [edi + 0x24]
// 00492196  b910000000           mov ecx, 0x10
// 0049219b  d94628               fld dword ptr [esi + 0x28]
// 0049219e  d95f28               fstp dword ptr [edi + 0x28]
// 004921a1  d9462c               fld dword ptr [esi + 0x2c]
// 004921a4  8db590000000         lea esi, [ebp + 0x90]
// 004921aa  d95f2c               fstp dword ptr [edi + 0x2c]
// 004921ad  8dbb90000000         lea edi, [ebx + 0x90]
// 004921b3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004921b5  8a85d0000000         mov al, byte ptr [ebp + 0xd0]
// 004921bb  5f                   pop edi
// 004921bc  5e                   pop esi
// 004921bd  8883d0000000         mov byte ptr [ebx + 0xd0], al
// 004921c3  5d                   pop ebp
// 004921c4  8bc3                 mov eax, ebx
// 004921c6  5b                   pop ebx
// 004921c7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
