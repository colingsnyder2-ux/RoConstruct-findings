// roc 2008-06 0060f4e0  unit: RBX::BlockBlockContact  size: 620 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f4e0
//
// 0060f4e0  8b442404             mov eax, dword ptr [esp + 4]
// 0060f4e4  83ec30               sub esp, 0x30
// 0060f4e7  83f805               cmp eax, 5
// 0060f4ea  0f873b020000         ja 0x60f72b
// 0060f4f0  ff248534f76000       jmp dword ptr [eax*4 + 0x60f734]
// 0060f4f7  6a04                 push 4
// 0060f4f9  8d442404             lea eax, [esp + 4]
// 0060f4fd  50                   push eax
// 0060f4fe  e87dffffff           call 0x60f480
// 0060f503  d900                 fld dword ptr [eax]
// 0060f505  8b542438             mov edx, dword ptr [esp + 0x38]
// 0060f509  d91a                 fstp dword ptr [edx]
// 0060f50b  6a06                 push 6
// 0060f50d  d94004               fld dword ptr [eax + 4]
// 0060f510  d95a04               fstp dword ptr [edx + 4]
// 0060f513  d94008               fld dword ptr [eax + 8]
// 0060f516  d95a08               fstp dword ptr [edx + 8]
// 0060f519  8d542410             lea edx, [esp + 0x10]
// 0060f51d  52                   push edx
// 0060f51e  e85dffffff           call 0x60f480
// 0060f523  d900                 fld dword ptr [eax]
// 0060f525  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060f529  d91a                 fstp dword ptr [edx]
// 0060f52b  6a07                 push 7
// 0060f52d  d94004               fld dword ptr [eax + 4]
// 0060f530  d95a04               fstp dword ptr [edx + 4]
// 0060f533  d94008               fld dword ptr [eax + 8]
// 0060f536  8d44241c             lea eax, [esp + 0x1c]
// 0060f53a  50                   push eax
// 0060f53b  d95a08               fstp dword ptr [edx + 8]
// 0060f53e  e83dffffff           call 0x60f480
// 0060f543  d900                 fld dword ptr [eax]
// 0060f545  8b542440             mov edx, dword ptr [esp + 0x40]
// 0060f549  d91a                 fstp dword ptr [edx]
// 0060f54b  6a05                 push 5
// 0060f54d  d94004               fld dword ptr [eax + 4]
// 0060f550  d95a04               fstp dword ptr [edx + 4]
// 0060f553  d94008               fld dword ptr [eax + 8]
// 0060f556  d95a08               fstp dword ptr [edx + 8]
// 0060f559  8d542428             lea edx, [esp + 0x28]
// 0060f55d  e9af010000           jmp 0x60f711
// 0060f562  6a02                 push 2
// 0060f564  8d442428             lea eax, [esp + 0x28]
// 0060f568  50                   push eax
// 0060f569  e812ffffff           call 0x60f480
// 0060f56e  d900                 fld dword ptr [eax]
// 0060f570  8b542438             mov edx, dword ptr [esp + 0x38]
// 0060f574  d91a                 fstp dword ptr [edx]
// 0060f576  6a03                 push 3
// 0060f578  d94004               fld dword ptr [eax + 4]
// 0060f57b  d95a04               fstp dword ptr [edx + 4]
// 0060f57e  d94008               fld dword ptr [eax + 8]
// 0060f581  d95a08               fstp dword ptr [edx + 8]
// 0060f584  8d54241c             lea edx, [esp + 0x1c]
// 0060f588  52                   push edx
// 0060f589  e8f2feffff           call 0x60f480
// 0060f58e  d900                 fld dword ptr [eax]
// 0060f590  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060f594  d91a                 fstp dword ptr [edx]
// 0060f596  6a07                 push 7
// 0060f598  d94004               fld dword ptr [eax + 4]
// 0060f59b  d95a04               fstp dword ptr [edx + 4]
// 0060f59e  d94008               fld dword ptr [eax + 8]
// 0060f5a1  8d442410             lea eax, [esp + 0x10]
// 0060f5a5  50                   push eax
// 0060f5a6  d95a08               fstp dword ptr [edx + 8]
// 0060f5a9  e8d2feffff           call 0x60f480
// 0060f5ae  6a06                 push 6
// 0060f5b0  e944010000           jmp 0x60f6f9
// 0060f5b5  6a01                 push 1
// 0060f5b7  8d442428             lea eax, [esp + 0x28]
// 0060f5bb  50                   push eax
// 0060f5bc  e8bffeffff           call 0x60f480
// 0060f5c1  d900                 fld dword ptr [eax]
// 0060f5c3  8b542438             mov edx, dword ptr [esp + 0x38]
// 0060f5c7  d91a                 fstp dword ptr [edx]
// 0060f5c9  6a05                 push 5
// 0060f5cb  d94004               fld dword ptr [eax + 4]
// 0060f5ce  d95a04               fstp dword ptr [edx + 4]
// 0060f5d1  d94008               fld dword ptr [eax + 8]
// 0060f5d4  d95a08               fstp dword ptr [edx + 8]
// 0060f5d7  8d54241c             lea edx, [esp + 0x1c]
// 0060f5db  52                   push edx
// 0060f5dc  e89ffeffff           call 0x60f480
// 0060f5e1  d900                 fld dword ptr [eax]
// 0060f5e3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060f5e7  d91a                 fstp dword ptr [edx]
// 0060f5e9  6a07                 push 7
// 0060f5eb  d94004               fld dword ptr [eax + 4]
// 0060f5ee  d95a04               fstp dword ptr [edx + 4]
// 0060f5f1  d94008               fld dword ptr [eax + 8]
// 0060f5f4  8d442410             lea eax, [esp + 0x10]
// 0060f5f8  50                   push eax
// 0060f5f9  d95a08               fstp dword ptr [edx + 8]
// 0060f5fc  e87ffeffff           call 0x60f480
// 0060f601  6a03                 push 3
// 0060f603  e9f1000000           jmp 0x60f6f9
// 0060f608  6a00                 push 0
// 0060f60a  8d442428             lea eax, [esp + 0x28]
// 0060f60e  50                   push eax
// 0060f60f  e86cfeffff           call 0x60f480
// 0060f614  d900                 fld dword ptr [eax]
// 0060f616  8b542438             mov edx, dword ptr [esp + 0x38]
// 0060f61a  d91a                 fstp dword ptr [edx]
// 0060f61c  6a01                 push 1
// 0060f61e  d94004               fld dword ptr [eax + 4]
// 0060f621  d95a04               fstp dword ptr [edx + 4]
// 0060f624  d94008               fld dword ptr [eax + 8]
// 0060f627  d95a08               fstp dword ptr [edx + 8]
// 0060f62a  8d54241c             lea edx, [esp + 0x1c]
// 0060f62e  52                   push edx
// 0060f62f  e84cfeffff           call 0x60f480
// 0060f634  d900                 fld dword ptr [eax]
// 0060f636  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060f63a  d91a                 fstp dword ptr [edx]
// 0060f63c  6a03                 push 3
// 0060f63e  d94004               fld dword ptr [eax + 4]
// 0060f641  d95a04               fstp dword ptr [edx + 4]
// 0060f644  d94008               fld dword ptr [eax + 8]
// 0060f647  8d442410             lea eax, [esp + 0x10]
// 0060f64b  50                   push eax
// 0060f64c  d95a08               fstp dword ptr [edx + 8]
// 0060f64f  e82cfeffff           call 0x60f480
// 0060f654  6a02                 push 2
// 0060f656  e99e000000           jmp 0x60f6f9
// 0060f65b  6a00                 push 0
// 0060f65d  8d442428             lea eax, [esp + 0x28]
// 0060f661  50                   push eax
// 0060f662  e819feffff           call 0x60f480
// 0060f667  d900                 fld dword ptr [eax]
// 0060f669  8b542438             mov edx, dword ptr [esp + 0x38]
// 0060f66d  d91a                 fstp dword ptr [edx]
// 0060f66f  6a04                 push 4
// 0060f671  d94004               fld dword ptr [eax + 4]
// 0060f674  d95a04               fstp dword ptr [edx + 4]
// 0060f677  d94008               fld dword ptr [eax + 8]
// 0060f67a  d95a08               fstp dword ptr [edx + 8]
// 0060f67d  8d54241c             lea edx, [esp + 0x1c]
// 0060f681  52                   push edx
// 0060f682  e8f9fdffff           call 0x60f480
// 0060f687  d900                 fld dword ptr [eax]
// 0060f689  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060f68d  d91a                 fstp dword ptr [edx]
// 0060f68f  6a05                 push 5
// 0060f691  d94004               fld dword ptr [eax + 4]
// 0060f694  d95a04               fstp dword ptr [edx + 4]
// 0060f697  d94008               fld dword ptr [eax + 8]
// 0060f69a  8d442410             lea eax, [esp + 0x10]
// 0060f69e  50                   push eax
// 0060f69f  d95a08               fstp dword ptr [edx + 8]
// 0060f6a2  e8d9fdffff           call 0x60f480
// 0060f6a7  6a01                 push 1
// 0060f6a9  eb4e                 jmp 0x60f6f9
// 0060f6ab  6a00                 push 0
// 0060f6ad  8d442428             lea eax, [esp + 0x28]
// 0060f6b1  50                   push eax
// 0060f6b2  e8c9fdffff           call 0x60f480
// 0060f6b7  d900                 fld dword ptr [eax]
// 0060f6b9  8b542438             mov edx, dword ptr [esp + 0x38]
// 0060f6bd  d91a                 fstp dword ptr [edx]
// 0060f6bf  6a02                 push 2
// 0060f6c1  d94004               fld dword ptr [eax + 4]
// 0060f6c4  d95a04               fstp dword ptr [edx + 4]
// 0060f6c7  d94008               fld dword ptr [eax + 8]
// 0060f6ca  d95a08               fstp dword ptr [edx + 8]
// 0060f6cd  8d54241c             lea edx, [esp + 0x1c]
// 0060f6d1  52                   push edx
// 0060f6d2  e8a9fdffff           call 0x60f480
// 0060f6d7  d900                 fld dword ptr [eax]
// 0060f6d9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0060f6dd  d91a                 fstp dword ptr [edx]
// 0060f6df  6a06                 push 6
// 0060f6e1  d94004               fld dword ptr [eax + 4]
// 0060f6e4  d95a04               fstp dword ptr [edx + 4]
// 0060f6e7  d94008               fld dword ptr [eax + 8]
// 0060f6ea  8d442410             lea eax, [esp + 0x10]
// 0060f6ee  50                   push eax
// 0060f6ef  d95a08               fstp dword ptr [edx + 8]
// 0060f6f2  e889fdffff           call 0x60f480
// 0060f6f7  6a04                 push 4
// 0060f6f9  8b542444             mov edx, dword ptr [esp + 0x44]
// 0060f6fd  d900                 fld dword ptr [eax]
// 0060f6ff  d91a                 fstp dword ptr [edx]
// 0060f701  d94004               fld dword ptr [eax + 4]
// 0060f704  d95a04               fstp dword ptr [edx + 4]
// 0060f707  d94008               fld dword ptr [eax + 8]
// 0060f70a  d95a08               fstp dword ptr [edx + 8]
// 0060f70d  8d542404             lea edx, [esp + 4]
// 0060f711  52                   push edx
// 0060f712  e869fdffff           call 0x60f480
// 0060f717  d900                 fld dword ptr [eax]
// 0060f719  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0060f71d  d919                 fstp dword ptr [ecx]
// 0060f71f  d94004               fld dword ptr [eax + 4]
// 0060f722  d95904               fstp dword ptr [ecx + 4]
// 0060f725  d94008               fld dword ptr [eax + 8]
// 0060f728  d95908               fstp dword ptr [ecx + 8]
// 0060f72b  83c430               add esp, 0x30
// 0060f72e  c21400               ret 0x14
// 0060f731  8d4900               lea ecx, [ecx]
// 0060f734  f7f4                 div esp
// 0060f736  60                   pushal 
// 0060f737  0062f5               add byte ptr [edx - 0xb], ah
// 0060f73a  60                   pushal 
// 0060f73b  00b5f5600008         add byte ptr [ebp + 0x80060f5], dh
// 0060f741  f66000               mul byte ptr [eax]
// 0060f744  5b                   pop ebx
// 0060f745  f66000               mul byte ptr [eax]
// 0060f748  ab                   stosd dword ptr es:[edi], eax
// 0060f749  f66000               mul byte ptr [eax]
// library openrbx-client/App\util\Extents.cpp (function ?getFaceCorners@Extents@RBX@@QBEXW4NormalId@2@AAVVector3@G3D@@111@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
