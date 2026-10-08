// roc 2007-03 0047aa80  unit: seg_00470000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047aa80
//
// 0047aa80  56                   push esi
// 0047aa81  8bf1                 mov esi, ecx
// 0047aa83  8b4608               mov eax, dword ptr [esi + 8]
// 0047aa86  8d0480               lea eax, [eax + eax*4]
// 0047aa89  57                   push edi
// 0047aa8a  8b3e                 mov edi, dword ptr [esi]
// 0047aa8c  03c0                 add eax, eax
// 0047aa8e  03c0                 add eax, eax
// 0047aa90  6a10                 push 0x10
// 0047aa92  50                   push eax
// 0047aa93  e838910700           call 0x4f3bd0
// 0047aa98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047aa9c  8906                 mov dword ptr [esi], eax
// 0047aa9e  8b7608               mov esi, dword ptr [esi + 8]
// 0047aaa1  83c408               add esp, 8
// 0047aaa4  3bce                 cmp ecx, esi
// 0047aaa6  7c02                 jl 0x47aaaa
// 0047aaa8  8bce                 mov ecx, esi
// 0047aaaa  8d0c89               lea ecx, [ecx + ecx*4]
// 0047aaad  8d1488               lea edx, [eax + ecx*4]
// 0047aab0  3bc2                 cmp eax, edx
// 0047aab2  8bcf                 mov ecx, edi
// 0047aab4  732a                 jae 0x47aae0
// 0047aab6  85c0                 test eax, eax
// 0047aab8  741c                 je 0x47aad6
// 0047aaba  8b31                 mov esi, dword ptr [ecx]
// 0047aabc  8930                 mov dword ptr [eax], esi
// 0047aabe  8b7104               mov esi, dword ptr [ecx + 4]
// 0047aac1  897004               mov dword ptr [eax + 4], esi
// 0047aac4  8b7108               mov esi, dword ptr [ecx + 8]
// 0047aac7  897008               mov dword ptr [eax + 8], esi
// 0047aaca  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0047aacd  89700c               mov dword ptr [eax + 0xc], esi
// 0047aad0  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0047aad3  897010               mov dword ptr [eax + 0x10], esi
// 0047aad6  83c014               add eax, 0x14
// 0047aad9  83c114               add ecx, 0x14
// 0047aadc  3bc2                 cmp eax, edx
// 0047aade  72d6                 jb 0x47aab6
// 0047aae0  57                   push edi
// 0047aae1  e89a880700           call 0x4f3380
// 0047aae6  83c404               add esp, 4
// 0047aae9  5f                   pop edi
// 0047aaea  5e                   pop esi
// 0047aaeb  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?realloc@?$Array@TSDL_Event@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
