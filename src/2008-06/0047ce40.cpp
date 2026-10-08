// roc 2008-06 0047ce40  unit: seg_00470000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ce40
//
// 0047ce40  53                   push ebx
// 0047ce41  56                   push esi
// 0047ce42  8bf1                 mov esi, ecx
// 0047ce44  33db                 xor ebx, ebx
// 0047ce46  385e1d               cmp byte ptr [esi + 0x1d], bl
// 0047ce49  740c                 je 0x47ce57
// 0047ce4b  8b0e                 mov ecx, dword ptr [esi]
// 0047ce4d  8b01                 mov eax, dword ptr [ecx]
// 0047ce4f  8b5040               mov edx, dword ptr [eax + 0x40]
// 0047ce52  ffd2                 call edx
// 0047ce54  885e1d               mov byte ptr [esi + 0x1d], bl
// 0047ce57  ff4618               inc dword ptr [esi + 0x18]
// 0047ce5a  8d8620010000         lea eax, [esi + 0x120]
// 0047ce60  50                   push eax
// 0047ce61  8d8e80080000         lea ecx, [esi + 0x880]
// 0047ce67  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0047ce6a  895e70               mov dword ptr [esi + 0x70], ebx
// 0047ce6d  895e74               mov dword ptr [esi + 0x74], ebx
// 0047ce70  895e78               mov dword ptr [esi + 0x78], ebx
// 0047ce73  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0047ce76  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0047ce79  e842efffff           call 0x47bdc0
// 0047ce7e  ff467c               inc dword ptr [esi + 0x7c]
// 0047ce81  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 0047ce87  889e78080000         mov byte ptr [esi + 0x878], bl
// 0047ce8d  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 0047ce97  5e                   pop esi
// 0047ce98  5b                   pop ebx
// 0047ce99  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beginFrame@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
