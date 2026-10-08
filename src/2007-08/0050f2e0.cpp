// from server: 100% by auto
// roc 2007-08 0050f2e0  unit: G3D::TextInput::WrongSymbol  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f2e0
//
// 0050f2e0  d9ee                 fldz 
// 0050f2e2  d9442404             fld dword ptr [esp + 4]
// 0050f2e6  dde1                 fucom st(1)
// 0050f2e8  dfe0                 fnstsw ax
// 0050f2ea  ddd9                 fstp st(1)
// 0050f2ec  f6c444               test ah, 0x44
// 0050f2ef  7b29                 jnp 0x50f31a
// 0050f2f1  d9e8                 fld1 
// 0050f2f3  8bc1                 mov eax, ecx
// 0050f2f5  def1                 fdivrp st(1)
// 0050f2f7  d95c2404             fstp dword ptr [esp + 4]
// 0050f2fb  d901                 fld dword ptr [ecx]
// 0050f2fd  d9442404             fld dword ptr [esp + 4]
// 0050f301  d9c0                 fld st(0)
// 0050f303  deca                 fmulp st(2)
// 0050f305  d9c9                 fxch st(1)
// 0050f307  d919                 fstp dword ptr [ecx]
// 0050f309  d94104               fld dword ptr [ecx + 4]
// 0050f30c  d8c9                 fmul st(1)
// 0050f30e  d95904               fstp dword ptr [ecx + 4]
// 0050f311  d84908               fmul dword ptr [ecx + 8]
// 0050f314  d95908               fstp dword ptr [ecx + 8]
// 0050f317  c20400               ret 4
// 0050f31a  b801000000           mov eax, 1
// 0050f31f  ddd8                 fstp st(0)
// 0050f321  840508d18b00         test byte ptr [0x8bd108], al
// 0050f327  7514                 jne 0x50f33d
// 0050f329  8b1564e57700         mov edx, dword ptr [0x77e564]
// 0050f32f  090508d18b00         or dword ptr [0x8bd108], eax
// 0050f335  dd02                 fld qword ptr [edx]
// 0050f337  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050f33d  dd0500d18b00         fld qword ptr [0x8bd100]
// 0050f343  d919                 fstp dword ptr [ecx]
// 0050f345  840508d18b00         test byte ptr [0x8bd108], al
// 0050f34b  7514                 jne 0x50f361
// 0050f34d  8b1564e57700         mov edx, dword ptr [0x77e564]
// 0050f353  090508d18b00         or dword ptr [0x8bd108], eax
// 0050f359  dd02                 fld qword ptr [edx]
// 0050f35b  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050f361  dd0500d18b00         fld qword ptr [0x8bd100]
// 0050f367  d95904               fstp dword ptr [ecx + 4]
// 0050f36a  840508d18b00         test byte ptr [0x8bd108], al
// 0050f370  7513                 jne 0x50f385
// 0050f372  090508d18b00         or dword ptr [0x8bd108], eax
// 0050f378  a164e57700           mov eax, dword ptr [0x77e564]
// 0050f37d  dd00                 fld qword ptr [eax]
// 0050f37f  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 0050f385  dd0500d18b00         fld qword ptr [0x8bd100]
// 0050f38b  8bc1                 mov eax, ecx
// 0050f38d  d95908               fstp dword ptr [ecx + 8]
// 0050f390  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3.cpp (function ??_0Color3@G3D@@QAEAAV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
