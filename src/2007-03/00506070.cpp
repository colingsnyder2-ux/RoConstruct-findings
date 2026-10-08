// roc 2007-03 00506070  unit: seg_00500000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506070
//
// 00506070  53                   push ebx
// 00506071  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00506075  56                   push esi
// 00506076  8bf1                 mov esi, ecx
// 00506078  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0050607b  8b4608               mov eax, dword ptr [esi + 8]
// 0050607e  03cb                 add ecx, ebx
// 00506080  3bc8                 cmp ecx, eax
// 00506082  7e2f                 jle 0x5060b3
// 00506084  8d0458               lea eax, [eax + ebx*2]
// 00506087  57                   push edi
// 00506088  50                   push eax
// 00506089  894608               mov dword ptr [esi + 8], eax
// 0050608c  ff153ce97700         call dword ptr [0x77e93c]
// 00506092  8b560c               mov edx, dword ptr [esi + 0xc]
// 00506095  8bf8                 mov edi, eax
// 00506097  8b4604               mov eax, dword ptr [esi + 4]
// 0050609a  52                   push edx
// 0050609b  50                   push eax
// 0050609c  57                   push edi
// 0050609d  e840911100           call 0x61f1e2
// 005060a2  8b4e04               mov ecx, dword ptr [esi + 4]
// 005060a5  51                   push ecx
// 005060a6  ff1530e97700         call dword ptr [0x77e930]
// 005060ac  83c414               add esp, 0x14
// 005060af  897e04               mov dword ptr [esi + 4], edi
// 005060b2  5f                   pop edi
// 005060b3  8b4604               mov eax, dword ptr [esi + 4]
// 005060b6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005060ba  03460c               add eax, dword ptr [esi + 0xc]
// 005060bd  53                   push ebx
// 005060be  52                   push edx
// 005060bf  50                   push eax
// 005060c0  e81d911100           call 0x61f1e2
// 005060c5  015e0c               add dword ptr [esi + 0xc], ebx
// 005060c8  83c40c               add esp, 0xc
// 005060cb  5e                   pop esi
// 005060cc  5b                   pop ebx
// 005060cd  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?AppendData@DialogTemplate@_internal@G3D@@IAEXPBXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
