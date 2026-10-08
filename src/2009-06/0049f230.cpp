// from server: 100% by auto
// roc 2009-06 0049f230  unit: G3D::VARArea  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f230
//
// 0049f230  53                   push ebx
// 0049f231  55                   push ebp
// 0049f232  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0049f236  56                   push esi
// 0049f237  57                   push edi
// 0049f238  55                   push ebp
// 0049f239  8bd9                 mov ebx, ecx
// 0049f23b  e840adffff           call 0x499f80
// 0049f240  d94524               fld dword ptr [ebp + 0x24]
// 0049f243  d95b24               fstp dword ptr [ebx + 0x24]
// 0049f246  8d7530               lea esi, [ebp + 0x30]
// 0049f249  d94528               fld dword ptr [ebp + 0x28]
// 0049f24c  8d7b30               lea edi, [ebx + 0x30]
// 0049f24f  d95b28               fstp dword ptr [ebx + 0x28]
// 0049f252  56                   push esi
// 0049f253  d9452c               fld dword ptr [ebp + 0x2c]
// 0049f256  8bcf                 mov ecx, edi
// 0049f258  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0049f25b  e820adffff           call 0x499f80
// 0049f260  d94624               fld dword ptr [esi + 0x24]
// 0049f263  d95f24               fstp dword ptr [edi + 0x24]
// 0049f266  d94628               fld dword ptr [esi + 0x28]
// 0049f269  d95f28               fstp dword ptr [edi + 0x28]
// 0049f26c  d9462c               fld dword ptr [esi + 0x2c]
// 0049f26f  8d7560               lea esi, [ebp + 0x60]
// 0049f272  d95f2c               fstp dword ptr [edi + 0x2c]
// 0049f275  8d7b60               lea edi, [ebx + 0x60]
// 0049f278  56                   push esi
// 0049f279  8bcf                 mov ecx, edi
// 0049f27b  e800adffff           call 0x499f80
// 0049f280  d94624               fld dword ptr [esi + 0x24]
// 0049f283  d95f24               fstp dword ptr [edi + 0x24]
// 0049f286  b910000000           mov ecx, 0x10
// 0049f28b  d94628               fld dword ptr [esi + 0x28]
// 0049f28e  d95f28               fstp dword ptr [edi + 0x28]
// 0049f291  d9462c               fld dword ptr [esi + 0x2c]
// 0049f294  8db590000000         lea esi, [ebp + 0x90]
// 0049f29a  d95f2c               fstp dword ptr [edi + 0x2c]
// 0049f29d  8dbb90000000         lea edi, [ebx + 0x90]
// 0049f2a3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049f2a5  8a85d0000000         mov al, byte ptr [ebp + 0xd0]
// 0049f2ab  5f                   pop edi
// 0049f2ac  5e                   pop esi
// 0049f2ad  8883d0000000         mov byte ptr [ebx + 0xd0], al
// 0049f2b3  5d                   pop ebp
// 0049f2b4  8bc3                 mov eax, ebx
// 0049f2b6  5b                   pop ebx
// 0049f2b7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
