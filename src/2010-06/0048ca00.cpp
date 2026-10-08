// from server: 100% by auto
// roc 2010-06 0048ca00  unit: G3D::Win32Window  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ca00
//
// 0048ca00  51                   push ecx
// 0048ca01  53                   push ebx
// 0048ca02  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0048ca06  55                   push ebp
// 0048ca07  56                   push esi
// 0048ca08  57                   push edi
// 0048ca09  8bf1                 mov esi, ecx
// 0048ca0b  8b4608               mov eax, dword ptr [esi + 8]
// 0048ca0e  8d3c9d00000000       lea edi, [ebx*4]
// 0048ca15  6a10                 push 0x10
// 0048ca17  57                   push edi
// 0048ca18  89442418             mov dword ptr [esp + 0x18], eax
// 0048ca1c  e87f0e0c00           call 0x54d8a0
// 0048ca21  57                   push edi
// 0048ca22  6a00                 push 0
// 0048ca24  50                   push eax
// 0048ca25  894608               mov dword ptr [esi + 8], eax
// 0048ca28  e8731b0c00           call 0x54e5a0
// 0048ca2d  33ed                 xor ebp, ebp
// 0048ca2f  83c414               add esp, 0x14
// 0048ca32  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0048ca35  7e2f                 jle 0x48ca66
// 0048ca37  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ca3b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0048ca3e  85c9                 test ecx, ecx
// 0048ca40  741e                 je 0x48ca60
// 0048ca42  8b01                 mov eax, dword ptr [ecx]
// 0048ca44  33d2                 xor edx, edx
// 0048ca46  f7f3                 div ebx
// 0048ca48  8b4608               mov eax, dword ptr [esi + 8]
// 0048ca4b  8b7924               mov edi, dword ptr [ecx + 0x24]
// 0048ca4e  8b0490               mov eax, dword ptr [eax + edx*4]
// 0048ca51  894124               mov dword ptr [ecx + 0x24], eax
// 0048ca54  8b4608               mov eax, dword ptr [esi + 8]
// 0048ca57  890c90               mov dword ptr [eax + edx*4], ecx
// 0048ca5a  8bcf                 mov ecx, edi
// 0048ca5c  85ff                 test edi, edi
// 0048ca5e  75e2                 jne 0x48ca42
// 0048ca60  45                   inc ebp
// 0048ca61  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0048ca64  7cd1                 jl 0x48ca37
// 0048ca66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ca6a  51                   push ecx
// 0048ca6b  e8500f0c00           call 0x54d9c0
// 0048ca70  83c404               add esp, 4
// 0048ca73  5f                   pop edi
// 0048ca74  895e0c               mov dword ptr [esi + 0xc], ebx
// 0048ca77  5e                   pop esi
// 0048ca78  5d                   pop ebp
// 0048ca79  5b                   pop ebx
// 0048ca7a  59                   pop ecx
// 0048ca7b  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?resize@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
