// roc 2009-12 005f6960  unit: G3D::BinaryInput  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6960
//
// 005f6960  8bc1                 mov eax, ecx
// 005f6962  33c9                 xor ecx, ecx
// 005f6964  8908                 mov dword ptr [eax], ecx
// 005f6966  894804               mov dword ptr [eax + 4], ecx
// 005f6969  894808               mov dword ptr [eax + 8], ecx
// 005f696c  89480c               mov dword ptr [eax + 0xc], ecx
// 005f696f  894810               mov dword ptr [eax + 0x10], ecx
// 005f6972  894814               mov dword ptr [eax + 0x14], ecx
// 005f6975  894818               mov dword ptr [eax + 0x18], ecx
// 005f6978  89481c               mov dword ptr [eax + 0x1c], ecx
// 005f697b  894820               mov dword ptr [eax + 0x20], ecx
// 005f697e  894824               mov dword ptr [eax + 0x24], ecx
// 005f6981  894828               mov dword ptr [eax + 0x28], ecx
// 005f6984  89482c               mov dword ptr [eax + 0x2c], ecx
// 005f6987  894830               mov dword ptr [eax + 0x30], ecx
// 005f698a  894834               mov dword ptr [eax + 0x34], ecx
// 005f698d  894838               mov dword ptr [eax + 0x38], ecx
// 005f6990  89483c               mov dword ptr [eax + 0x3c], ecx
// 005f6993  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix4.cpp
