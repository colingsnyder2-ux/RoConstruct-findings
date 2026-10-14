// roc 2008-06 005ec450  unit: RBX::Sky  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec450
//
// 005ec450  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ec454  83f805               cmp eax, 5
// 005ec457  0f87a9000000         ja 0x5ec506
// 005ec45d  ff248550c55e00       jmp dword ptr [eax*4 + 0x5ec550]
// 005ec464  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec468  d94108               fld dword ptr [ecx + 8]
// 005ec46b  8b442404             mov eax, dword ptr [esp + 4]
// 005ec46f  d9e0                 fchs 
// 005ec471  d918                 fstp dword ptr [eax]
// 005ec473  d94104               fld dword ptr [ecx + 4]
// 005ec476  d95804               fstp dword ptr [eax + 4]
// 005ec479  d901                 fld dword ptr [ecx]
// 005ec47b  d95808               fstp dword ptr [eax + 8]
// 005ec47e  c3                   ret 
// 005ec47f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec483  d901                 fld dword ptr [ecx]
// 005ec485  8b442404             mov eax, dword ptr [esp + 4]
// 005ec489  d9e0                 fchs 
// 005ec48b  d918                 fstp dword ptr [eax]
// 005ec48d  d94108               fld dword ptr [ecx + 8]
// 005ec490  d95804               fstp dword ptr [eax + 4]
// 005ec493  d94104               fld dword ptr [ecx + 4]
// 005ec496  d95808               fstp dword ptr [eax + 8]
// 005ec499  c3                   ret 
// 005ec49a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec49e  8b442404             mov eax, dword ptr [esp + 4]
// 005ec4a2  d901                 fld dword ptr [ecx]
// 005ec4a4  d918                 fstp dword ptr [eax]
// 005ec4a6  d94104               fld dword ptr [ecx + 4]
// 005ec4a9  d95804               fstp dword ptr [eax + 4]
// 005ec4ac  d94108               fld dword ptr [ecx + 8]
// 005ec4af  d95808               fstp dword ptr [eax + 8]
// 005ec4b2  c3                   ret 
// 005ec4b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec4b7  8b442404             mov eax, dword ptr [esp + 4]
// 005ec4bb  d94108               fld dword ptr [ecx + 8]
// 005ec4be  d918                 fstp dword ptr [eax]
// 005ec4c0  d94104               fld dword ptr [ecx + 4]
// 005ec4c3  d95804               fstp dword ptr [eax + 4]
// 005ec4c6  d901                 fld dword ptr [ecx]
// 005ec4c8  d9e0                 fchs 
// 005ec4ca  d95808               fstp dword ptr [eax + 8]
// 005ec4cd  c3                   ret 
// 005ec4ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec4d2  8b442404             mov eax, dword ptr [esp + 4]
// 005ec4d6  d901                 fld dword ptr [ecx]
// 005ec4d8  d918                 fstp dword ptr [eax]
// 005ec4da  d94108               fld dword ptr [ecx + 8]
// 005ec4dd  d95804               fstp dword ptr [eax + 4]
// 005ec4e0  d94104               fld dword ptr [ecx + 4]
// 005ec4e3  d9e0                 fchs 
// 005ec4e5  d95808               fstp dword ptr [eax + 8]
// 005ec4e8  c3                   ret 
// 005ec4e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec4ed  d901                 fld dword ptr [ecx]
// 005ec4ef  8b442404             mov eax, dword ptr [esp + 4]
// 005ec4f3  d9e0                 fchs 
// 005ec4f5  d918                 fstp dword ptr [eax]
// 005ec4f7  d94104               fld dword ptr [ecx + 4]
// 005ec4fa  d95804               fstp dword ptr [eax + 4]
// 005ec4fd  d94108               fld dword ptr [ecx + 8]
// 005ec500  d9e0                 fchs 
// 005ec502  d95808               fstp dword ptr [eax + 8]
// 005ec505  c3                   ret 
// 005ec506  b801000000           mov eax, 1
// 005ec50b  840500389700         test byte ptr [0x973800], al
// 005ec511  751c                 jne 0x5ec52f
// 005ec513  d9e8                 fld1 
// 005ec515  090500389700         or dword ptr [0x973800], eax
// 005ec51b  d91df4379700         fstp dword ptr [0x9737f4]
// 005ec521  d9ee                 fldz 
// 005ec523  d915f8379700         fst dword ptr [0x9737f8]
// 005ec529  d91dfc379700         fstp dword ptr [0x9737fc]
// 005ec52f  8b442404             mov eax, dword ptr [esp + 4]
// 005ec533  d905f4379700         fld dword ptr [0x9737f4]
// 005ec539  d918                 fstp dword ptr [eax]
// 005ec53b  d905f8379700         fld dword ptr [0x9737f8]
// 005ec541  d95804               fstp dword ptr [eax + 4]
// 005ec544  d905fc379700         fld dword ptr [0x9737fc]
// 005ec54a  d95808               fstp dword ptr [eax + 8]
// 005ec54d  c3                   ret 
// 005ec54e  8bff                 mov edi, edi
// 005ec550  64c45e00             les ebx, ptr fs:[esi]
// 005ec554  7fc4                 jg 0x5ec51a
// 005ec556  5e                   pop esi
// 005ec557  009ac45e00b3         add byte ptr [edx - 0x4cffa13c], bl
// 005ec55d  c45e00               les ebx, ptr [esi]
// 005ec560  ce                   into 
// 005ec561  c45e00               les ebx, ptr [esi]
// library rbxgs-dll/util\NormalId.cpp (function ?objectToUvw@RBX@@YA?AVVector3@G3D@@ABV23@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll util/NormalId.cpp
