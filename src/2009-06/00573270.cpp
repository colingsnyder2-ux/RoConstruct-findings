// roc 2009-06 00573270  unit: G3D::Ray  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573270
//
// 00573270  56                   push esi
// 00573271  8bf1                 mov esi, ecx
// 00573273  8d4e14               lea ecx, [esi + 0x14]
// 00573276  c70624b78c00         mov dword ptr [esi], 0x8cb724
// 0057327c  e82fc6f2ff           call 0x49f8b0
// 00573281  d905c4758b00         fld dword ptr [0x8b75c4]
// 00573287  b801000000           mov eax, 1
// 0057328c  d95e0c               fstp dword ptr [esi + 0xc]
// 0057328f  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 00573295  7513                 jne 0x5732aa
// 00573297  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 0057329d  a144e58900           mov eax, dword ptr [0x89e544]
// 005732a2  dd00                 fld qword ptr [eax]
// 005732a4  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 005732aa  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 005732b0  8bc6                 mov eax, esi
// 005732b2  d95e10               fstp dword ptr [esi + 0x10]
// 005732b5  d90530b78c00         fld dword ptr [0x8cb730]
// 005732bb  d95e04               fstp dword ptr [esi + 4]
// 005732be  dd0528b78c00         fld qword ptr [0x8cb728]
// 005732c4  d9f2                 fptan 
// 005732c6  ddd8                 fstp st(0)
// 005732c8  dcc0                 fadd st(0), st(0)
// 005732ca  d9e8                 fld1 
// 005732cc  def1                 fdivrp st(1)
// 005732ce  d95e08               fstp dword ptr [esi + 8]
// 005732d1  5e                   pop esi
// 005732d2  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ??0GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
