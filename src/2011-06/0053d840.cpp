// roc 2011-06 0053d840  unit: G3D::ReferenceCountedObject  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053d840
//
// 0053d840  8b442408             mov eax, dword ptr [esp + 8]
// 0053d844  83f807               cmp eax, 7
// 0053d847  776c                 ja 0x53d8b5
// 0053d849  ff2485b8d85300       jmp dword ptr [eax*4 + 0x53d8b8]
// 0053d850  8b442404             mov eax, dword ptr [esp + 4]
// 0053d854  50                   push eax
// 0053d855  e8462a0100           call 0x5502a0
// 0053d85a  c20800               ret 8
// 0053d85d  8b542404             mov edx, dword ptr [esp + 4]
// 0053d861  52                   push edx
// 0053d862  e8b9250100           call 0x54fe20
// 0053d867  c20800               ret 8
// 0053d86a  8b442404             mov eax, dword ptr [esp + 4]
// 0053d86e  50                   push eax
// 0053d86f  e80c1d0100           call 0x54f580
// 0053d874  c20800               ret 8
// 0053d877  8b542404             mov edx, dword ptr [esp + 4]
// 0053d87b  52                   push edx
// 0053d87c  e82f120100           call 0x54eab0
// 0053d881  c20800               ret 8
// 0053d884  8b442404             mov eax, dword ptr [esp + 4]
// 0053d888  50                   push eax
// 0053d889  e812ef0000           call 0x54c7a0
// 0053d88e  c20800               ret 8
// 0053d891  8b542404             mov edx, dword ptr [esp + 4]
// 0053d895  52                   push edx
// 0053d896  e8b5f70000           call 0x54d050
// 0053d89b  c20800               ret 8
// 0053d89e  8b442404             mov eax, dword ptr [esp + 4]
// 0053d8a2  50                   push eax
// 0053d8a3  e888040100           call 0x54dd30
// 0053d8a8  c20800               ret 8
// 0053d8ab  8b542404             mov edx, dword ptr [esp + 4]
// 0053d8af  52                   push edx
// 0053d8b0  e8abf4ffff           call 0x53cd60
// 0053d8b5  c20800               ret 8
// 0053d8b8  77d8                 ja 0x53d892
// 0053d8ba  53                   push ebx
// 0053d8bb  0091d8530084         add byte ptr [ecx - 0x7bffac28], dl
// 0053d8c1  d85300               fcom dword ptr [ebx]
// 0053d8c4  ab                   stosd dword ptr es:[edi], eax
// 0053d8c5  d85300               fcom dword ptr [ebx]
// 0053d8c8  9e                   sahf 
// 0053d8c9  d85300               fcom dword ptr [ebx]
// 0053d8cc  6ad8                 push -0x28
// 0053d8ce  53                   push ebx
// 0053d8cf  005dd8               add byte ptr [ebp - 0x28], bl
// 0053d8d2  53                   push ebx
// 0053d8d3  0050d8               add byte ptr [eax - 0x28], dl
// 0053d8d6  53                   push ebx
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?decode@GImage@G3D@@AAEXAAVBinaryInput@2@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
