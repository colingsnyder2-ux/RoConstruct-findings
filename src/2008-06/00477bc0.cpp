// from server: 100% by auto
// roc 2008-06 00477bc0  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477bc0
//
// 00477bc0  53                   push ebx
// 00477bc1  55                   push ebp
// 00477bc2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00477bc6  56                   push esi
// 00477bc7  57                   push edi
// 00477bc8  55                   push ebp
// 00477bc9  8bd9                 mov ebx, ecx
// 00477bcb  e850b60900           call 0x513220
// 00477bd0  d94524               fld dword ptr [ebp + 0x24]
// 00477bd3  d95b24               fstp dword ptr [ebx + 0x24]
// 00477bd6  8d7530               lea esi, [ebp + 0x30]
// 00477bd9  d94528               fld dword ptr [ebp + 0x28]
// 00477bdc  8d7b30               lea edi, [ebx + 0x30]
// 00477bdf  d95b28               fstp dword ptr [ebx + 0x28]
// 00477be2  56                   push esi
// 00477be3  d9452c               fld dword ptr [ebp + 0x2c]
// 00477be6  8bcf                 mov ecx, edi
// 00477be8  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00477beb  e830b60900           call 0x513220
// 00477bf0  d94624               fld dword ptr [esi + 0x24]
// 00477bf3  d95f24               fstp dword ptr [edi + 0x24]
// 00477bf6  d94628               fld dword ptr [esi + 0x28]
// 00477bf9  d95f28               fstp dword ptr [edi + 0x28]
// 00477bfc  d9462c               fld dword ptr [esi + 0x2c]
// 00477bff  8d7560               lea esi, [ebp + 0x60]
// 00477c02  d95f2c               fstp dword ptr [edi + 0x2c]
// 00477c05  8d7b60               lea edi, [ebx + 0x60]
// 00477c08  56                   push esi
// 00477c09  8bcf                 mov ecx, edi
// 00477c0b  e810b60900           call 0x513220
// 00477c10  d94624               fld dword ptr [esi + 0x24]
// 00477c13  d95f24               fstp dword ptr [edi + 0x24]
// 00477c16  b910000000           mov ecx, 0x10
// 00477c1b  d94628               fld dword ptr [esi + 0x28]
// 00477c1e  d95f28               fstp dword ptr [edi + 0x28]
// 00477c21  d9462c               fld dword ptr [esi + 0x2c]
// 00477c24  8db590000000         lea esi, [ebp + 0x90]
// 00477c2a  d95f2c               fstp dword ptr [edi + 0x2c]
// 00477c2d  8dbb90000000         lea edi, [ebx + 0x90]
// 00477c33  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00477c35  8a85d0000000         mov al, byte ptr [ebp + 0xd0]
// 00477c3b  5f                   pop edi
// 00477c3c  5e                   pop esi
// 00477c3d  8883d0000000         mov byte ptr [ebx + 0xd0], al
// 00477c43  5d                   pop ebp
// 00477c44  8bc3                 mov eax, ebx
// 00477c46  5b                   pop ebx
// 00477c47  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
