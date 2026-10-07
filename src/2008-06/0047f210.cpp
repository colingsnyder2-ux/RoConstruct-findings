// roc 2008-06 0047f210  unit: G3D::Win32Window  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f210
//
// 0047f210  807c240400           cmp byte ptr [esp + 4], 0
// 0047f215  7409                 je 0x47f220
// 0047f217  c60602               mov byte ptr [esi], 2
// 0047f21a  c6460201             mov byte ptr [esi + 2], 1
// 0047f21e  eb07                 jmp 0x47f227
// 0047f220  c60603               mov byte ptr [esi], 3
// 0047f223  c6460200             mov byte ptr [esi + 2], 0
// 0047f227  b820000000           mov eax, 0x20
// 0047f22c  6890f69600           push 0x96f690
// 0047f231  66894610             mov word ptr [esi + 0x10], ax
// 0047f235  894e08               mov dword ptr [esi + 8], ecx
// 0047f238  c6460400             mov byte ptr [esi + 4], 0
// 0047f23c  ff15d82c8000         call dword ptr [0x802cd8]
// 0047f242  b980000000           mov ecx, 0x80
// 0047f247  33c0                 xor eax, eax
// 0047f249  840d30f79600         test byte ptr [0x96f730], cl
// 0047f24f  7403                 je 0x47f254
// 0047f251  8d4181               lea eax, [ecx - 0x7f]
// 0047f254  840d31f79600         test byte ptr [0x96f731], cl
// 0047f25a  7403                 je 0x47f25f
// 0047f25c  83c802               or eax, 2
// 0047f25f  840d32f79600         test byte ptr [0x96f732], cl
// 0047f265  7403                 je 0x47f26a
// 0047f267  83c840               or eax, 0x40
// 0047f26a  840d33f79600         test byte ptr [0x96f733], cl
// 0047f270  7402                 je 0x47f274
// 0047f272  0bc1                 or eax, ecx
// 0047f274  840d34f79600         test byte ptr [0x96f734], cl
// 0047f27a  7405                 je 0x47f281
// 0047f27c  0d00010000           or eax, 0x100
// 0047f281  840d35f79600         test byte ptr [0x96f735], cl
// 0047f287  7405                 je 0x47f28e
// 0047f289  0d00020000           or eax, 0x200
// 0047f28e  89460c               mov dword ptr [esi + 0xc], eax
// 0047f291  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?mouseButton@G3D@@YAX_NHKAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
