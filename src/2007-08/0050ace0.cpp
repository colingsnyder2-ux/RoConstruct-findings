// roc 2007-08 0050ace0  unit: G3D::GCamera  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ace0
//
// 0050ace0  8bc1                 mov eax, ecx
// 0050ace2  33c9                 xor ecx, ecx
// 0050ace4  8908                 mov dword ptr [eax], ecx
// 0050ace6  894804               mov dword ptr [eax + 4], ecx
// 0050ace9  894808               mov dword ptr [eax + 8], ecx
// 0050acec  89480c               mov dword ptr [eax + 0xc], ecx
// 0050acef  894810               mov dword ptr [eax + 0x10], ecx
// 0050acf2  894814               mov dword ptr [eax + 0x14], ecx
// 0050acf5  894818               mov dword ptr [eax + 0x18], ecx
// 0050acf8  89481c               mov dword ptr [eax + 0x1c], ecx
// 0050acfb  894820               mov dword ptr [eax + 0x20], ecx
// 0050acfe  894824               mov dword ptr [eax + 0x24], ecx
// 0050ad01  894828               mov dword ptr [eax + 0x28], ecx
// 0050ad04  89482c               mov dword ptr [eax + 0x2c], ecx
// 0050ad07  894830               mov dword ptr [eax + 0x30], ecx
// 0050ad0a  894834               mov dword ptr [eax + 0x34], ecx
// 0050ad0d  894838               mov dword ptr [eax + 0x38], ecx
// 0050ad10  89483c               mov dword ptr [eax + 0x3c], ecx
// 0050ad13  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
