// roc 2007-03 00500420  unit: seg_00500000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500420
//
// 00500420  8bc1                 mov eax, ecx
// 00500422  33c9                 xor ecx, ecx
// 00500424  8908                 mov dword ptr [eax], ecx
// 00500426  894804               mov dword ptr [eax + 4], ecx
// 00500429  894808               mov dword ptr [eax + 8], ecx
// 0050042c  89480c               mov dword ptr [eax + 0xc], ecx
// 0050042f  894810               mov dword ptr [eax + 0x10], ecx
// 00500432  894814               mov dword ptr [eax + 0x14], ecx
// 00500435  894818               mov dword ptr [eax + 0x18], ecx
// 00500438  89481c               mov dword ptr [eax + 0x1c], ecx
// 0050043b  894820               mov dword ptr [eax + 0x20], ecx
// 0050043e  894824               mov dword ptr [eax + 0x24], ecx
// 00500441  894828               mov dword ptr [eax + 0x28], ecx
// 00500444  89482c               mov dword ptr [eax + 0x2c], ecx
// 00500447  894830               mov dword ptr [eax + 0x30], ecx
// 0050044a  894834               mov dword ptr [eax + 0x34], ecx
// 0050044d  894838               mov dword ptr [eax + 0x38], ecx
// 00500450  89483c               mov dword ptr [eax + 0x3c], ecx
// 00500453  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Matrix4.cpp (function ??0Matrix4@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix4.cpp
