// roc 2008-06 005ec330  unit: RBX::Sky  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec330
//
// 005ec330  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ec334  83f805               cmp eax, 5
// 005ec337  0f87a9000000         ja 0x5ec3e6
// 005ec33d  ff248530c45e00       jmp dword ptr [eax*4 + 0x5ec430]
// 005ec344  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec348  8b442404             mov eax, dword ptr [esp + 4]
// 005ec34c  d94108               fld dword ptr [ecx + 8]
// 005ec34f  d918                 fstp dword ptr [eax]
// 005ec351  d94104               fld dword ptr [ecx + 4]
// 005ec354  d95804               fstp dword ptr [eax + 4]
// 005ec357  d901                 fld dword ptr [ecx]
// 005ec359  d9e0                 fchs 
// 005ec35b  d95808               fstp dword ptr [eax + 8]
// 005ec35e  c3                   ret 
// 005ec35f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec363  d901                 fld dword ptr [ecx]
// 005ec365  8b442404             mov eax, dword ptr [esp + 4]
// 005ec369  d9e0                 fchs 
// 005ec36b  d918                 fstp dword ptr [eax]
// 005ec36d  d94108               fld dword ptr [ecx + 8]
// 005ec370  d95804               fstp dword ptr [eax + 4]
// 005ec373  d94104               fld dword ptr [ecx + 4]
// 005ec376  d95808               fstp dword ptr [eax + 8]
// 005ec379  c3                   ret 
// 005ec37a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec37e  8b442404             mov eax, dword ptr [esp + 4]
// 005ec382  d901                 fld dword ptr [ecx]
// 005ec384  d918                 fstp dword ptr [eax]
// 005ec386  d94104               fld dword ptr [ecx + 4]
// 005ec389  d95804               fstp dword ptr [eax + 4]
// 005ec38c  d94108               fld dword ptr [ecx + 8]
// 005ec38f  d95808               fstp dword ptr [eax + 8]
// 005ec392  c3                   ret 
// 005ec393  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec397  d94108               fld dword ptr [ecx + 8]
// 005ec39a  8b442404             mov eax, dword ptr [esp + 4]
// 005ec39e  d9e0                 fchs 
// 005ec3a0  d918                 fstp dword ptr [eax]
// 005ec3a2  d94104               fld dword ptr [ecx + 4]
// 005ec3a5  d95804               fstp dword ptr [eax + 4]
// 005ec3a8  d901                 fld dword ptr [ecx]
// 005ec3aa  d95808               fstp dword ptr [eax + 8]
// 005ec3ad  c3                   ret 
// 005ec3ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec3b2  8b442404             mov eax, dword ptr [esp + 4]
// 005ec3b6  d901                 fld dword ptr [ecx]
// 005ec3b8  d918                 fstp dword ptr [eax]
// 005ec3ba  d94108               fld dword ptr [ecx + 8]
// 005ec3bd  d9e0                 fchs 
// 005ec3bf  d95804               fstp dword ptr [eax + 4]
// 005ec3c2  d94104               fld dword ptr [ecx + 4]
// 005ec3c5  d95808               fstp dword ptr [eax + 8]
// 005ec3c8  c3                   ret 
// 005ec3c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec3cd  d901                 fld dword ptr [ecx]
// 005ec3cf  8b442404             mov eax, dword ptr [esp + 4]
// 005ec3d3  d9e0                 fchs 
// 005ec3d5  d918                 fstp dword ptr [eax]
// 005ec3d7  d94104               fld dword ptr [ecx + 4]
// 005ec3da  d95804               fstp dword ptr [eax + 4]
// 005ec3dd  d94108               fld dword ptr [ecx + 8]
// 005ec3e0  d9e0                 fchs 
// 005ec3e2  d95808               fstp dword ptr [eax + 8]
// 005ec3e5  c3                   ret 
// 005ec3e6  b801000000           mov eax, 1
// 005ec3eb  840500389700         test byte ptr [0x973800], al
// 005ec3f1  751c                 jne 0x5ec40f
// 005ec3f3  d9e8                 fld1 
// 005ec3f5  090500389700         or dword ptr [0x973800], eax
// 005ec3fb  d91df4379700         fstp dword ptr [0x9737f4]
// 005ec401  d9ee                 fldz 
// 005ec403  d915f8379700         fst dword ptr [0x9737f8]
// 005ec409  d91dfc379700         fstp dword ptr [0x9737fc]
// 005ec40f  8b442404             mov eax, dword ptr [esp + 4]
// 005ec413  d905f4379700         fld dword ptr [0x9737f4]
// 005ec419  d918                 fstp dword ptr [eax]
// 005ec41b  d905f8379700         fld dword ptr [0x9737f8]
// 005ec421  d95804               fstp dword ptr [eax + 4]
// 005ec424  d905fc379700         fld dword ptr [0x9737fc]
// 005ec42a  d95808               fstp dword ptr [eax + 8]
// 005ec42d  c3                   ret 
// 005ec42e  8bff                 mov edi, edi
// 005ec430  44                   inc esp
// 005ec431  c3                   ret 
// 005ec432  5e                   pop esi
// 005ec433  005fc3               add byte ptr [edi - 0x3d], bl
// 005ec436  5e                   pop esi
// 005ec437  007ac3               add byte ptr [edx - 0x3d], bh
// 005ec43a  5e                   pop esi
// 005ec43b  0093c35e00ae         add byte ptr [ebx - 0x51ffa13d], dl
// 005ec441  c3                   ret 
// 005ec442  5e                   pop esi
// 005ec443  00c9                 add cl, cl
// 005ec445  c3                   ret 
// 005ec446  5e                   pop esi
// library rbxgs-dll/util\NormalId.cpp (function ?uvwToObject@RBX@@YA?AVVector3@G3D@@ABV23@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll util/NormalId.cpp
