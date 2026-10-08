// from server: 100% by auto
// roc 2007-08 00472f80  unit: G3D::VARArea  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472f80
//
// 00472f80  83ec0c               sub esp, 0xc
// 00472f83  53                   push ebx
// 00472f84  33db                 xor ebx, ebx
// 00472f86  381dd4d08b00         cmp byte ptr [0x8bd0d4], bl
// 00472f8c  0f8592000000         jne 0x473024
// 00472f92  53                   push ebx
// 00472f93  ff1500f07700         call dword ptr [0x77f000]
// 00472f99  8d442404             lea eax, [esp + 4]
// 00472f9d  50                   push eax
// 00472f9e  68107c7900           push 0x797c10
// 00472fa3  6a01                 push 1
// 00472fa5  53                   push ebx
// 00472fa6  68007c7900           push 0x797c00
// 00472fab  895c2418             mov dword ptr [esp + 0x18], ebx
// 00472faf  895c2420             mov dword ptr [esp + 0x20], ebx
// 00472fb3  ff1518f07700         call dword ptr [0x77f018]
// 00472fb9  85c0                 test eax, eax
// 00472fbb  7c5a                 jl 0x473017
// 00472fbd  8b442404             mov eax, dword ptr [esp + 4]
// 00472fc1  8b08                 mov ecx, dword ptr [eax]
// 00472fc3  8b5148               mov edx, dword ptr [ecx + 0x48]
// 00472fc6  53                   push ebx
// 00472fc7  50                   push eax
// 00472fc8  ffd2                 call edx
// 00472fca  6a04                 push 4
// 00472fcc  8d44240c             lea eax, [esp + 0xc]
// 00472fd0  53                   push ebx
// 00472fd1  50                   push eax
// 00472fd2  e8a9d50800           call 0x500580
// 00472fd7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00472fdb  83c40c               add esp, 0xc
// 00472fde  8d54240c             lea edx, [esp + 0xc]
// 00472fe2  52                   push edx
// 00472fe3  68d0d08b00           push 0x8bd0d0
// 00472fe8  8d542410             lea edx, [esp + 0x10]
// 00472fec  c744241000400010     mov dword ptr [esp + 0x10], 0x10004000
// 00472ff4  8b08                 mov ecx, dword ptr [eax]
// 00472ff6  52                   push edx
// 00472ff7  50                   push eax
// 00472ff8  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00472ffb  ffd0                 call eax
// 00472ffd  85c0                 test eax, eax
// 00472fff  7d0a                 jge 0x47300b
// 00473001  891dd0d08b00         mov dword ptr [0x8bd0d0], ebx
// 00473007  895c240c             mov dword ptr [esp + 0xc], ebx
// 0047300b  8b442404             mov eax, dword ptr [esp + 4]
// 0047300f  8b08                 mov ecx, dword ptr [eax]
// 00473011  8b5108               mov edx, dword ptr [ecx + 8]
// 00473014  50                   push eax
// 00473015  ffd2                 call edx
// 00473017  ff1504f07700         call dword ptr [0x77f004]
// 0047301d  c605d4d08b0001       mov byte ptr [0x8bd0d4], 1
// 00473024  a1d0d08b00           mov eax, dword ptr [0x8bd0d0]
// 00473029  33d2                 xor edx, edx
// 0047302b  5b                   pop ebx
// 0047302c  83c40c               add esp, 0xc
// 0047302f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\DXCaps.cpp (function ?videoMemorySize@DXCaps@G3D@@SA_KXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/DXCaps.cpp
