// roc 2007-03 00505e30  unit: seg_00500000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505e30
//
// 00505e30  56                   push esi
// 00505e31  8bf1                 mov esi, ecx
// 00505e33  8b560c               mov edx, dword ptr [esi + 0xc]
// 00505e36  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00505e3a  8b4608               mov eax, dword ptr [esi + 8]
// 00505e3d  03d1                 add edx, ecx
// 00505e3f  3bd0                 cmp edx, eax
// 00505e41  7e2f                 jle 0x505e72
// 00505e43  8d0448               lea eax, [eax + ecx*2]
// 00505e46  57                   push edi
// 00505e47  50                   push eax
// 00505e48  894608               mov dword ptr [esi + 8], eax
// 00505e4b  ff153ce97700         call dword ptr [0x77e93c]
// 00505e51  8b4e04               mov ecx, dword ptr [esi + 4]
// 00505e54  8bf8                 mov edi, eax
// 00505e56  8b460c               mov eax, dword ptr [esi + 0xc]
// 00505e59  50                   push eax
// 00505e5a  51                   push ecx
// 00505e5b  57                   push edi
// 00505e5c  e881931100           call 0x61f1e2
// 00505e61  8b5604               mov edx, dword ptr [esi + 4]
// 00505e64  52                   push edx
// 00505e65  ff1530e97700         call dword ptr [0x77e930]
// 00505e6b  83c414               add esp, 0x14
// 00505e6e  897e04               mov dword ptr [esi + 4], edi
// 00505e71  5f                   pop edi
// 00505e72  5e                   pop esi
// 00505e73  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?EnsureSpace@DialogTemplate@_internal@G3D@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
