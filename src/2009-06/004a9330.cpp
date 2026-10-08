// from server: 100% by auto
// roc 2009-06 004a9330  unit: G3D::Win32Window  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9330
//
// 004a9330  807c240400           cmp byte ptr [esp + 4], 0
// 004a9335  7409                 je 0x4a9340
// 004a9337  c60602               mov byte ptr [esi], 2
// 004a933a  c6460201             mov byte ptr [esi + 2], 1
// 004a933e  eb07                 jmp 0x4a9347
// 004a9340  c60603               mov byte ptr [esi], 3
// 004a9343  c6460200             mov byte ptr [esi + 2], 0
// 004a9347  b820000000           mov eax, 0x20
// 004a934c  68f0cfa300           push 0xa3cff0
// 004a9351  66894610             mov word ptr [esi + 0x10], ax
// 004a9355  894e08               mov dword ptr [esi + 8], ecx
// 004a9358  c6460400             mov byte ptr [esi + 4], 0
// 004a935c  ff156ced8900         call dword ptr [0x89ed6c]
// 004a9362  b980000000           mov ecx, 0x80
// 004a9367  33c0                 xor eax, eax
// 004a9369  840d90d0a300         test byte ptr [0xa3d090], cl
// 004a936f  7403                 je 0x4a9374
// 004a9371  8d4181               lea eax, [ecx - 0x7f]
// 004a9374  840d91d0a300         test byte ptr [0xa3d091], cl
// 004a937a  7403                 je 0x4a937f
// 004a937c  83c802               or eax, 2
// 004a937f  840d92d0a300         test byte ptr [0xa3d092], cl
// 004a9385  7403                 je 0x4a938a
// 004a9387  83c840               or eax, 0x40
// 004a938a  840d93d0a300         test byte ptr [0xa3d093], cl
// 004a9390  7402                 je 0x4a9394
// 004a9392  0bc1                 or eax, ecx
// 004a9394  840d94d0a300         test byte ptr [0xa3d094], cl
// 004a939a  7405                 je 0x4a93a1
// 004a939c  0d00010000           or eax, 0x100
// 004a93a1  840d95d0a300         test byte ptr [0xa3d095], cl
// 004a93a7  7405                 je 0x4a93ae
// 004a93a9  0d00020000           or eax, 0x200
// 004a93ae  89460c               mov dword ptr [esi + 0xc], eax
// 004a93b1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?mouseButton@G3D@@YAX_NHKAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
