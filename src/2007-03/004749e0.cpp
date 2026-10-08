// roc 2007-03 004749e0  unit: seg_00470000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004749e0
//
// 004749e0  53                   push ebx
// 004749e1  55                   push ebp
// 004749e2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004749e6  56                   push esi
// 004749e7  57                   push edi
// 004749e8  55                   push ebp
// 004749e9  8bd9                 mov ebx, ecx
// 004749eb  e8909f0800           call 0x4fe980
// 004749f0  d94524               fld dword ptr [ebp + 0x24]
// 004749f3  d95b24               fstp dword ptr [ebx + 0x24]
// 004749f6  8d7530               lea esi, [ebp + 0x30]
// 004749f9  d94528               fld dword ptr [ebp + 0x28]
// 004749fc  8d7b30               lea edi, [ebx + 0x30]
// 004749ff  d95b28               fstp dword ptr [ebx + 0x28]
// 00474a02  56                   push esi
// 00474a03  d9452c               fld dword ptr [ebp + 0x2c]
// 00474a06  8bcf                 mov ecx, edi
// 00474a08  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00474a0b  e8709f0800           call 0x4fe980
// 00474a10  d94624               fld dword ptr [esi + 0x24]
// 00474a13  d95f24               fstp dword ptr [edi + 0x24]
// 00474a16  d94628               fld dword ptr [esi + 0x28]
// 00474a19  d95f28               fstp dword ptr [edi + 0x28]
// 00474a1c  d9462c               fld dword ptr [esi + 0x2c]
// 00474a1f  8d7560               lea esi, [ebp + 0x60]
// 00474a22  d95f2c               fstp dword ptr [edi + 0x2c]
// 00474a25  8d7b60               lea edi, [ebx + 0x60]
// 00474a28  56                   push esi
// 00474a29  8bcf                 mov ecx, edi
// 00474a2b  e8509f0800           call 0x4fe980
// 00474a30  d94624               fld dword ptr [esi + 0x24]
// 00474a33  d95f24               fstp dword ptr [edi + 0x24]
// 00474a36  b910000000           mov ecx, 0x10
// 00474a3b  d94628               fld dword ptr [esi + 0x28]
// 00474a3e  d95f28               fstp dword ptr [edi + 0x28]
// 00474a41  d9462c               fld dword ptr [esi + 0x2c]
// 00474a44  8db590000000         lea esi, [ebp + 0x90]
// 00474a4a  d95f2c               fstp dword ptr [edi + 0x2c]
// 00474a4d  8dbb90000000         lea edi, [ebx + 0x90]
// 00474a53  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00474a55  8a85d0000000         mov al, byte ptr [ebp + 0xd0]
// 00474a5b  5f                   pop edi
// 00474a5c  5e                   pop esi
// 00474a5d  8883d0000000         mov byte ptr [ebx + 0xd0], al
// 00474a63  5d                   pop ebp
// 00474a64  8bc3                 mov eax, ebx
// 00474a66  5b                   pop ebx
// 00474a67  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0Matrices@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
