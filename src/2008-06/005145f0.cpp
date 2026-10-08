// from server: 100% by auto
// roc 2008-06 005145f0  unit: G3D::GCamera  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005145f0
//
// 005145f0  8bc1                 mov eax, ecx
// 005145f2  33c9                 xor ecx, ecx
// 005145f4  8908                 mov dword ptr [eax], ecx
// 005145f6  894804               mov dword ptr [eax + 4], ecx
// 005145f9  894808               mov dword ptr [eax + 8], ecx
// 005145fc  89480c               mov dword ptr [eax + 0xc], ecx
// 005145ff  894810               mov dword ptr [eax + 0x10], ecx
// 00514602  894814               mov dword ptr [eax + 0x14], ecx
// 00514605  894818               mov dword ptr [eax + 0x18], ecx
// 00514608  89481c               mov dword ptr [eax + 0x1c], ecx
// 0051460b  894820               mov dword ptr [eax + 0x20], ecx
// 0051460e  894824               mov dword ptr [eax + 0x24], ecx
// 00514611  894828               mov dword ptr [eax + 0x28], ecx
// 00514614  89482c               mov dword ptr [eax + 0x2c], ecx
// 00514617  894830               mov dword ptr [eax + 0x30], ecx
// 0051461a  894834               mov dword ptr [eax + 0x34], ecx
// 0051461d  894838               mov dword ptr [eax + 0x38], ecx
// 00514620  89483c               mov dword ptr [eax + 0x3c], ecx
// 00514623  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
