// roc 2010-06 00497960  unit: seg_00490000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497960
//
// 00497960  53                   push ebx
// 00497961  56                   push esi
// 00497962  8bf1                 mov esi, ecx
// 00497964  33db                 xor ebx, ebx
// 00497966  385e1d               cmp byte ptr [esi + 0x1d], bl
// 00497969  740c                 je 0x497977
// 0049796b  8b0e                 mov ecx, dword ptr [esi]
// 0049796d  8b01                 mov eax, dword ptr [ecx]
// 0049796f  8b5040               mov edx, dword ptr [eax + 0x40]
// 00497972  ffd2                 call edx
// 00497974  885e1d               mov byte ptr [esi + 0x1d], bl
// 00497977  ff4618               inc dword ptr [esi + 0x18]
// 0049797a  8d8620010000         lea eax, [esi + 0x120]
// 00497980  50                   push eax
// 00497981  8d8e80080000         lea ecx, [esi + 0x880]
// 00497987  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0049798a  895e70               mov dword ptr [esi + 0x70], ebx
// 0049798d  895e74               mov dword ptr [esi + 0x74], ebx
// 00497990  895e78               mov dword ptr [esi + 0x78], ebx
// 00497993  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00497996  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00497999  e802efffff           call 0x4968a0
// 0049799e  ff467c               inc dword ptr [esi + 0x7c]
// 004979a1  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 004979a7  889e78080000         mov byte ptr [esi + 0x878], bl
// 004979ad  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 004979b7  5e                   pop esi
// 004979b8  5b                   pop ebx
// 004979b9  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginFrame@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
