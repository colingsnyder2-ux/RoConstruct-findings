// roc 2009-06 00577820  unit: G3D::LineSegment  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577820
//
// 00577820  8bc1                 mov eax, ecx
// 00577822  33c9                 xor ecx, ecx
// 00577824  8908                 mov dword ptr [eax], ecx
// 00577826  894804               mov dword ptr [eax + 4], ecx
// 00577829  894808               mov dword ptr [eax + 8], ecx
// 0057782c  89480c               mov dword ptr [eax + 0xc], ecx
// 0057782f  894810               mov dword ptr [eax + 0x10], ecx
// 00577832  894814               mov dword ptr [eax + 0x14], ecx
// 00577835  894818               mov dword ptr [eax + 0x18], ecx
// 00577838  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057783b  894820               mov dword ptr [eax + 0x20], ecx
// 0057783e  894824               mov dword ptr [eax + 0x24], ecx
// 00577841  894828               mov dword ptr [eax + 0x28], ecx
// 00577844  89482c               mov dword ptr [eax + 0x2c], ecx
// 00577847  894830               mov dword ptr [eax + 0x30], ecx
// 0057784a  894834               mov dword ptr [eax + 0x34], ecx
// 0057784d  894838               mov dword ptr [eax + 0x38], ecx
// 00577850  89483c               mov dword ptr [eax + 0x3c], ecx
// 00577853  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
