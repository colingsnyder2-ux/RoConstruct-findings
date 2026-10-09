// roc 2009-06 006b2e90  unit: RBX::BlockBlockContact  size: 620 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b2e90
//
// 006b2e90  8b442404             mov eax, dword ptr [esp + 4]
// 006b2e94  83ec30               sub esp, 0x30
// 006b2e97  83f805               cmp eax, 5
// 006b2e9a  0f873b020000         ja 0x6b30db
// 006b2ea0  ff2485e4306b00       jmp dword ptr [eax*4 + 0x6b30e4]
// 006b2ea7  6a04                 push 4
// 006b2ea9  8d442404             lea eax, [esp + 4]
// 006b2ead  50                   push eax
// 006b2eae  e87dffffff           call 0x6b2e30
// 006b2eb3  d900                 fld dword ptr [eax]
// 006b2eb5  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b2eb9  d91a                 fstp dword ptr [edx]
// 006b2ebb  6a06                 push 6
// 006b2ebd  d94004               fld dword ptr [eax + 4]
// 006b2ec0  d95a04               fstp dword ptr [edx + 4]
// 006b2ec3  d94008               fld dword ptr [eax + 8]
// 006b2ec6  d95a08               fstp dword ptr [edx + 8]
// 006b2ec9  8d542410             lea edx, [esp + 0x10]
// 006b2ecd  52                   push edx
// 006b2ece  e85dffffff           call 0x6b2e30
// 006b2ed3  d900                 fld dword ptr [eax]
// 006b2ed5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b2ed9  d91a                 fstp dword ptr [edx]
// 006b2edb  6a07                 push 7
// 006b2edd  d94004               fld dword ptr [eax + 4]
// 006b2ee0  d95a04               fstp dword ptr [edx + 4]
// 006b2ee3  d94008               fld dword ptr [eax + 8]
// 006b2ee6  8d44241c             lea eax, [esp + 0x1c]
// 006b2eea  50                   push eax
// 006b2eeb  d95a08               fstp dword ptr [edx + 8]
// 006b2eee  e83dffffff           call 0x6b2e30
// 006b2ef3  d900                 fld dword ptr [eax]
// 006b2ef5  8b542440             mov edx, dword ptr [esp + 0x40]
// 006b2ef9  d91a                 fstp dword ptr [edx]
// 006b2efb  6a05                 push 5
// 006b2efd  d94004               fld dword ptr [eax + 4]
// 006b2f00  d95a04               fstp dword ptr [edx + 4]
// 006b2f03  d94008               fld dword ptr [eax + 8]
// 006b2f06  d95a08               fstp dword ptr [edx + 8]
// 006b2f09  8d542428             lea edx, [esp + 0x28]
// 006b2f0d  e9af010000           jmp 0x6b30c1
// 006b2f12  6a02                 push 2
// 006b2f14  8d442428             lea eax, [esp + 0x28]
// 006b2f18  50                   push eax
// 006b2f19  e812ffffff           call 0x6b2e30
// 006b2f1e  d900                 fld dword ptr [eax]
// 006b2f20  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b2f24  d91a                 fstp dword ptr [edx]
// 006b2f26  6a03                 push 3
// 006b2f28  d94004               fld dword ptr [eax + 4]
// 006b2f2b  d95a04               fstp dword ptr [edx + 4]
// 006b2f2e  d94008               fld dword ptr [eax + 8]
// 006b2f31  d95a08               fstp dword ptr [edx + 8]
// 006b2f34  8d54241c             lea edx, [esp + 0x1c]
// 006b2f38  52                   push edx
// 006b2f39  e8f2feffff           call 0x6b2e30
// 006b2f3e  d900                 fld dword ptr [eax]
// 006b2f40  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b2f44  d91a                 fstp dword ptr [edx]
// 006b2f46  6a07                 push 7
// 006b2f48  d94004               fld dword ptr [eax + 4]
// 006b2f4b  d95a04               fstp dword ptr [edx + 4]
// 006b2f4e  d94008               fld dword ptr [eax + 8]
// 006b2f51  8d442410             lea eax, [esp + 0x10]
// 006b2f55  50                   push eax
// 006b2f56  d95a08               fstp dword ptr [edx + 8]
// 006b2f59  e8d2feffff           call 0x6b2e30
// 006b2f5e  6a06                 push 6
// 006b2f60  e944010000           jmp 0x6b30a9
// 006b2f65  6a01                 push 1
// 006b2f67  8d442428             lea eax, [esp + 0x28]
// 006b2f6b  50                   push eax
// 006b2f6c  e8bffeffff           call 0x6b2e30
// 006b2f71  d900                 fld dword ptr [eax]
// 006b2f73  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b2f77  d91a                 fstp dword ptr [edx]
// 006b2f79  6a05                 push 5
// 006b2f7b  d94004               fld dword ptr [eax + 4]
// 006b2f7e  d95a04               fstp dword ptr [edx + 4]
// 006b2f81  d94008               fld dword ptr [eax + 8]
// 006b2f84  d95a08               fstp dword ptr [edx + 8]
// 006b2f87  8d54241c             lea edx, [esp + 0x1c]
// 006b2f8b  52                   push edx
// 006b2f8c  e89ffeffff           call 0x6b2e30
// 006b2f91  d900                 fld dword ptr [eax]
// 006b2f93  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b2f97  d91a                 fstp dword ptr [edx]
// 006b2f99  6a07                 push 7
// 006b2f9b  d94004               fld dword ptr [eax + 4]
// 006b2f9e  d95a04               fstp dword ptr [edx + 4]
// 006b2fa1  d94008               fld dword ptr [eax + 8]
// 006b2fa4  8d442410             lea eax, [esp + 0x10]
// 006b2fa8  50                   push eax
// 006b2fa9  d95a08               fstp dword ptr [edx + 8]
// 006b2fac  e87ffeffff           call 0x6b2e30
// 006b2fb1  6a03                 push 3
// 006b2fb3  e9f1000000           jmp 0x6b30a9
// 006b2fb8  6a00                 push 0
// 006b2fba  8d442428             lea eax, [esp + 0x28]
// 006b2fbe  50                   push eax
// 006b2fbf  e86cfeffff           call 0x6b2e30
// 006b2fc4  d900                 fld dword ptr [eax]
// 006b2fc6  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b2fca  d91a                 fstp dword ptr [edx]
// 006b2fcc  6a01                 push 1
// 006b2fce  d94004               fld dword ptr [eax + 4]
// 006b2fd1  d95a04               fstp dword ptr [edx + 4]
// 006b2fd4  d94008               fld dword ptr [eax + 8]
// 006b2fd7  d95a08               fstp dword ptr [edx + 8]
// 006b2fda  8d54241c             lea edx, [esp + 0x1c]
// 006b2fde  52                   push edx
// 006b2fdf  e84cfeffff           call 0x6b2e30
// 006b2fe4  d900                 fld dword ptr [eax]
// 006b2fe6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b2fea  d91a                 fstp dword ptr [edx]
// 006b2fec  6a03                 push 3
// 006b2fee  d94004               fld dword ptr [eax + 4]
// 006b2ff1  d95a04               fstp dword ptr [edx + 4]
// 006b2ff4  d94008               fld dword ptr [eax + 8]
// 006b2ff7  8d442410             lea eax, [esp + 0x10]
// 006b2ffb  50                   push eax
// 006b2ffc  d95a08               fstp dword ptr [edx + 8]
// 006b2fff  e82cfeffff           call 0x6b2e30
// 006b3004  6a02                 push 2
// 006b3006  e99e000000           jmp 0x6b30a9
// 006b300b  6a00                 push 0
// 006b300d  8d442428             lea eax, [esp + 0x28]
// 006b3011  50                   push eax
// 006b3012  e819feffff           call 0x6b2e30
// 006b3017  d900                 fld dword ptr [eax]
// 006b3019  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b301d  d91a                 fstp dword ptr [edx]
// 006b301f  6a04                 push 4
// 006b3021  d94004               fld dword ptr [eax + 4]
// 006b3024  d95a04               fstp dword ptr [edx + 4]
// 006b3027  d94008               fld dword ptr [eax + 8]
// 006b302a  d95a08               fstp dword ptr [edx + 8]
// 006b302d  8d54241c             lea edx, [esp + 0x1c]
// 006b3031  52                   push edx
// 006b3032  e8f9fdffff           call 0x6b2e30
// 006b3037  d900                 fld dword ptr [eax]
// 006b3039  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b303d  d91a                 fstp dword ptr [edx]
// 006b303f  6a05                 push 5
// 006b3041  d94004               fld dword ptr [eax + 4]
// 006b3044  d95a04               fstp dword ptr [edx + 4]
// 006b3047  d94008               fld dword ptr [eax + 8]
// 006b304a  8d442410             lea eax, [esp + 0x10]
// 006b304e  50                   push eax
// 006b304f  d95a08               fstp dword ptr [edx + 8]
// 006b3052  e8d9fdffff           call 0x6b2e30
// 006b3057  6a01                 push 1
// 006b3059  eb4e                 jmp 0x6b30a9
// 006b305b  6a00                 push 0
// 006b305d  8d442428             lea eax, [esp + 0x28]
// 006b3061  50                   push eax
// 006b3062  e8c9fdffff           call 0x6b2e30
// 006b3067  d900                 fld dword ptr [eax]
// 006b3069  8b542438             mov edx, dword ptr [esp + 0x38]
// 006b306d  d91a                 fstp dword ptr [edx]
// 006b306f  6a02                 push 2
// 006b3071  d94004               fld dword ptr [eax + 4]
// 006b3074  d95a04               fstp dword ptr [edx + 4]
// 006b3077  d94008               fld dword ptr [eax + 8]
// 006b307a  d95a08               fstp dword ptr [edx + 8]
// 006b307d  8d54241c             lea edx, [esp + 0x1c]
// 006b3081  52                   push edx
// 006b3082  e8a9fdffff           call 0x6b2e30
// 006b3087  d900                 fld dword ptr [eax]
// 006b3089  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b308d  d91a                 fstp dword ptr [edx]
// 006b308f  6a06                 push 6
// 006b3091  d94004               fld dword ptr [eax + 4]
// 006b3094  d95a04               fstp dword ptr [edx + 4]
// 006b3097  d94008               fld dword ptr [eax + 8]
// 006b309a  8d442410             lea eax, [esp + 0x10]
// 006b309e  50                   push eax
// 006b309f  d95a08               fstp dword ptr [edx + 8]
// 006b30a2  e889fdffff           call 0x6b2e30
// 006b30a7  6a04                 push 4
// 006b30a9  8b542444             mov edx, dword ptr [esp + 0x44]
// 006b30ad  d900                 fld dword ptr [eax]
// 006b30af  d91a                 fstp dword ptr [edx]
// 006b30b1  d94004               fld dword ptr [eax + 4]
// 006b30b4  d95a04               fstp dword ptr [edx + 4]
// 006b30b7  d94008               fld dword ptr [eax + 8]
// 006b30ba  d95a08               fstp dword ptr [edx + 8]
// 006b30bd  8d542404             lea edx, [esp + 4]
// 006b30c1  52                   push edx
// 006b30c2  e869fdffff           call 0x6b2e30
// 006b30c7  d900                 fld dword ptr [eax]
// 006b30c9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006b30cd  d919                 fstp dword ptr [ecx]
// 006b30cf  d94004               fld dword ptr [eax + 4]
// 006b30d2  d95904               fstp dword ptr [ecx + 4]
// 006b30d5  d94008               fld dword ptr [eax + 8]
// 006b30d8  d95908               fstp dword ptr [ecx + 8]
// 006b30db  83c430               add esp, 0x30
// 006b30de  c21400               ret 0x14
// 006b30e1  8d4900               lea ecx, [ecx]
// 006b30e4  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 006b30e5  2e6b0012             imul eax, dword ptr cs:[eax], 0x12
// 006b30e9  2f                   das 
// 006b30ea  6b0065               imul eax, dword ptr [eax], 0x65
// 006b30ed  2f                   das 
// 006b30ee  6b00b8               imul eax, dword ptr [eax], -0x48
// 006b30f1  2f                   das 
// 006b30f2  6b000b               imul eax, dword ptr [eax], 0xb
// 006b30f5  306b00               xor byte ptr [ebx], ch
// 006b30f8  5b                   pop ebx
// 006b30f9  306b00               xor byte ptr [ebx], ch
// library openrbx-client/App\util\Extents.cpp (function ?getFaceCorners@Extents@RBX@@QBEXW4NormalId@2@AAVVector3@G3D@@111@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Extents.cpp
