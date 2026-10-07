// roc 2007-08 0047f010  unit: G3D::Win32Window  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047f010
//
// 0047f010  6aff                 push -1
// 0047f012  682d5b7400           push 0x745b2d
// 0047f017  64a100000000         mov eax, dword ptr fs:[0]
// 0047f01d  50                   push eax
// 0047f01e  83ec08               sub esp, 8
// 0047f021  53                   push ebx
// 0047f022  55                   push ebp
// 0047f023  56                   push esi
// 0047f024  57                   push edi
// 0047f025  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047f02a  33c4                 xor eax, esp
// 0047f02c  50                   push eax
// 0047f02d  8d44241c             lea eax, [esp + 0x1c]
// 0047f031  64a300000000         mov dword ptr fs:[0], eax
// 0047f037  8bf9                 mov edi, ecx
// 0047f039  8b4708               mov eax, dword ptr [edi + 8]
// 0047f03c  8b2f                 mov ebp, dword ptr [edi]
// 0047f03e  8d0cc500000000       lea ecx, [eax*8]
// 0047f045  2bc8                 sub ecx, eax
// 0047f047  03c9                 add ecx, ecx
// 0047f049  03c9                 add ecx, ecx
// 0047f04b  03c9                 add ecx, ecx
// 0047f04d  6a10                 push 0x10
// 0047f04f  51                   push ecx
// 0047f050  e80b100800           call 0x500060
// 0047f055  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047f058  8b542434             mov edx, dword ptr [esp + 0x34]
// 0047f05c  83c408               add esp, 8
// 0047f05f  3bd1                 cmp edx, ecx
// 0047f061  8907                 mov dword ptr [edi], eax
// 0047f063  7d02                 jge 0x47f067
// 0047f065  8bca                 mov ecx, edx
// 0047f067  8d34cd00000000       lea esi, [ecx*8]
// 0047f06e  2bf1                 sub esi, ecx
// 0047f070  8d3cf0               lea edi, [eax + esi*8]
// 0047f073  8bf0                 mov esi, eax
// 0047f075  3bf7                 cmp esi, edi
// 0047f077  8bdd                 mov ebx, ebp
// 0047f079  89742414             mov dword ptr [esp + 0x14], esi
// 0047f07d  7333                 jae 0x47f0b2
// 0047f07f  90                   nop 
// 0047f080  89742418             mov dword ptr [esp + 0x18], esi
// 0047f084  85f6                 test esi, esi
// 0047f086  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047f08e  740c                 je 0x47f09c
// 0047f090  53                   push ebx
// 0047f091  8bce                 mov ecx, esi
// 0047f093  e8f8feffff           call 0x47ef90
// 0047f098  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047f09c  83c638               add esi, 0x38
// 0047f09f  83c338               add ebx, 0x38
// 0047f0a2  3bf7                 cmp esi, edi
// 0047f0a4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047f0ac  89742414             mov dword ptr [esp + 0x14], esi
// 0047f0b0  72ce                 jb 0x47f080
// 0047f0b2  8d04d500000000       lea eax, [edx*8]
// 0047f0b9  2bc2                 sub eax, edx
// 0047f0bb  8d7cc500             lea edi, [ebp + eax*8]
// 0047f0bf  3bef                 cmp ebp, edi
// 0047f0c1  8bf5                 mov esi, ebp
// 0047f0c3  8974242c             mov dword ptr [esp + 0x2c], esi
// 0047f0c7  733e                 jae 0x47f107
// 0047f0c9  bb01000000           mov ebx, 1
// 0047f0ce  8bff                 mov edi, edi
// 0047f0d0  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0047f0d3  51                   push ecx
// 0047f0d4  895c2428             mov dword ptr [esp + 0x28], ebx
// 0047f0d8  e833070800           call 0x4ff810
// 0047f0dd  33c0                 xor eax, eax
// 0047f0df  83c404               add esp, 4
// 0047f0e2  8d4e04               lea ecx, [esi + 4]
// 0047f0e5  89462c               mov dword ptr [esi + 0x2c], eax
// 0047f0e8  894630               mov dword ptr [esi + 0x30], eax
// 0047f0eb  894634               mov dword ptr [esi + 0x34], eax
// 0047f0ee  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0047f0f6  ff15ace67700         call dword ptr [0x77e6ac]
// 0047f0fc  83c638               add esi, 0x38
// 0047f0ff  3bf7                 cmp esi, edi
// 0047f101  8974242c             mov dword ptr [esp + 0x2c], esi
// 0047f105  72c9                 jb 0x47f0d0
// 0047f107  55                   push ebp
// 0047f108  e803070800           call 0x4ff810
// 0047f10d  83c404               add esp, 4
// 0047f110  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047f114  64890d00000000       mov dword ptr fs:[0], ecx
// 0047f11b  59                   pop ecx
// 0047f11c  5f                   pop edi
// 0047f11d  5e                   pop esi
// 0047f11e  5d                   pop ebp
// 0047f11f  5b                   pop ebx
// 0047f120  83c414               add esp, 0x14
// 0047f123  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
