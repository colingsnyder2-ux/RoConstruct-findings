// roc 2007-08 004fafa0  unit: RBX::Render::TextureProxy  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fafa0
//
// 004fafa0  51                   push ecx
// 004fafa1  8b01                 mov eax, dword ptr [ecx]
// 004fafa3  8b4008               mov eax, dword ptr [eax + 8]
// 004fafa6  56                   push esi
// 004fafa7  8d542404             lea edx, [esp + 4]
// 004fafab  52                   push edx
// 004fafac  ffd0                 call eax
// 004fafae  d9ee                 fldz 
// 004fafb0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fafb4  d916                 fst dword ptr [esi]
// 004fafb6  8b442404             mov eax, dword ptr [esp + 4]
// 004fafba  d95604               fst dword ptr [esi + 4]
// 004fafbd  85c0                 test eax, eax
// 004fafbf  743b                 je 0x4faffc
// 004fafc1  ddd8                 fstp st(0)
// 004fafc3  83c004               add eax, 4
// 004fafc6  db4060               fild dword ptr [eax + 0x60]
// 004fafc9  50                   push eax
// 004fafca  d91e                 fstp dword ptr [esi]
// 004fafcc  db4064               fild dword ptr [eax + 0x64]
// 004fafcf  d95e04               fstp dword ptr [esi + 4]
// 004fafd2  ff15e8d27700         call dword ptr [0x77d2e8]
// 004fafd8  85c0                 test eax, eax
// 004fafda  7519                 jne 0x4faff5
// 004fafdc  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fafe0  e8ebcdf5ff           call 0x457dd0
// 004fafe5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fafe9  85c9                 test ecx, ecx
// 004fafeb  7408                 je 0x4faff5
// 004fafed  8b11                 mov edx, dword ptr [ecx]
// 004fafef  8b02                 mov eax, dword ptr [edx]
// 004faff1  6a01                 push 1
// 004faff3  ffd0                 call eax
// 004faff5  8bc6                 mov eax, esi
// 004faff7  5e                   pop esi
// 004faff8  59                   pop ecx
// 004faff9  c20400               ret 4
// 004faffc  d95604               fst dword ptr [esi + 4]
// 004fafff  8bc6                 mov eax, esi
// 004fb001  d91e                 fstp dword ptr [esi]
// 004fb003  5e                   pop esi
// 004fb004  59                   pop ecx
// 004fb005  c20400               ret 4
// library rbxgs-render/TextureProxy.cpp (function ?getSize@TextureProxy@Render@RBX@@UAE?AVVector2@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render TextureProxy.cpp
