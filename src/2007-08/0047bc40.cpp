// roc 2007-08 0047bc40  unit: G3D::Win32Window  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047bc40
//
// 0047bc40  807c240400           cmp byte ptr [esp + 4], 0
// 0047bc45  7409                 je 0x47bc50
// 0047bc47  c60602               mov byte ptr [esi], 2
// 0047bc4a  c6460201             mov byte ptr [esi + 2], 1
// 0047bc4e  eb07                 jmp 0x47bc57
// 0047bc50  c60603               mov byte ptr [esi], 3
// 0047bc53  c6460200             mov byte ptr [esi + 2], 0
// 0047bc57  6878d78b00           push 0x8bd778
// 0047bc5c  66c746102000         mov word ptr [esi + 0x10], 0x20
// 0047bc62  894608               mov dword ptr [esi + 8], eax
// 0047bc65  c6460400             mov byte ptr [esi + 4], 0
// 0047bc69  ff153ced7700         call dword ptr [0x77ed3c]
// 0047bc6f  b980000000           mov ecx, 0x80
// 0047bc74  33c0                 xor eax, eax
// 0047bc76  840d18d88b00         test byte ptr [0x8bd818], cl
// 0047bc7c  7405                 je 0x47bc83
// 0047bc7e  b801000000           mov eax, 1
// 0047bc83  840d19d88b00         test byte ptr [0x8bd819], cl
// 0047bc89  7403                 je 0x47bc8e
// 0047bc8b  83c802               or eax, 2
// 0047bc8e  840d1ad88b00         test byte ptr [0x8bd81a], cl
// 0047bc94  7403                 je 0x47bc99
// 0047bc96  83c840               or eax, 0x40
// 0047bc99  840d1bd88b00         test byte ptr [0x8bd81b], cl
// 0047bc9f  7402                 je 0x47bca3
// 0047bca1  0bc1                 or eax, ecx
// 0047bca3  840d1cd88b00         test byte ptr [0x8bd81c], cl
// 0047bca9  7405                 je 0x47bcb0
// 0047bcab  0d00010000           or eax, 0x100
// 0047bcb0  840d1dd88b00         test byte ptr [0x8bd81d], cl
// 0047bcb6  7405                 je 0x47bcbd
// 0047bcb8  0d00020000           or eax, 0x200
// 0047bcbd  89460c               mov dword ptr [esi + 0xc], eax
// 0047bcc0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?mouseButton@G3D@@YAX_NHKAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
