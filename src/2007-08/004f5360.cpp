// roc 2007-08 004f5360  unit: boost::bad_lexical_cast  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f5360
//
// 004f5360  51                   push ecx
// 004f5361  803dc1fa8b0000       cmp byte ptr [0x8bfac1], 0
// 004f5368  53                   push ebx
// 004f5369  56                   push esi
// 004f536a  bb01000000           mov ebx, 1
// 004f536f  7506                 jne 0x4f5377
// 004f5371  881dc1fa8b00         mov byte ptr [0x8bfac1], bl
// 004f5377  a148fb8b00           mov eax, dword ptr [0x8bfb48]
// 004f537c  85c0                 test eax, eax
// 004f537e  0f8583000000         jne 0x4f5407
// 004f5384  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f5388  8b3524fb8b00         mov esi, dword ptr [0x8bfb24]
// 004f538e  50                   push eax
// 004f538f  b920fb8b00           mov ecx, 0x8bfb20
// 004f5394  e887f5ffff           call 0x4f4920
// 004f5399  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f539d  51                   push ecx
// 004f539e  b92cfb8b00           mov ecx, 0x8bfb2c
// 004f53a3  e878f5ffff           call 0x4f4920
// 004f53a8  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f53ac  52                   push edx
// 004f53ad  b9c8fa8b00           mov ecx, 0x8bfac8
// 004f53b2  e8e9f8ffff           call 0x4f4ca0
// 004f53b7  841d38d18b00         test byte ptr [0x8bd138], bl
// 004f53bd  751a                 jne 0x4f53d9
// 004f53bf  d9ee                 fldz 
// 004f53c1  091d38d18b00         or dword ptr [0x8bd138], ebx
// 004f53c7  d9152cd18b00         fst dword ptr [0x8bd12c]
// 004f53cd  d91530d18b00         fst dword ptr [0x8bd130]
// 004f53d3  d91d34d18b00         fstp dword ptr [0x8bd134]
// 004f53d9  682cd18b00           push 0x8bd12c
// 004f53de  b9d4fa8b00           mov ecx, 0x8bfad4
// 004f53e3  e838f5ffff           call 0x4f4920
// 004f53e8  8d442408             lea eax, [esp + 8]
// 004f53ec  50                   push eax
// 004f53ed  b938fb8b00           mov ecx, 0x8bfb38
// 004f53f2  895c240c             mov dword ptr [esp + 0xc], ebx
// 004f53f6  e8b5f4ffff           call 0x4f48b0
// 004f53fb  011dc4fa8b00         add dword ptr [0x8bfac4], ebx
// 004f5401  8bc6                 mov eax, esi
// 004f5403  5e                   pop esi
// 004f5404  5b                   pop ebx
// 004f5405  59                   pop ecx
// 004f5406  c3                   ret 
// 004f5407  8b0d44fb8b00         mov ecx, dword ptr [0x8bfb44]
// 004f540d  8b7481fc             mov esi, dword ptr [ecx + eax*4 - 4]
// 004f5411  6a00                 push 0
// 004f5413  83c0ff               add eax, -1
// 004f5416  50                   push eax
// 004f5417  b944fb8b00           mov ecx, 0x8bfb44
// 004f541c  e87f76f8ff           call 0x47caa0
// 004f5421  8b1520fb8b00         mov edx, dword ptr [0x8bfb20]
// 004f5427  8d0476               lea eax, [esi + esi*2]
// 004f542a  03c0                 add eax, eax
// 004f542c  03c0                 add eax, eax
// 004f542e  8d0c10               lea ecx, [eax + edx]
// 004f5431  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f5435  d902                 fld dword ptr [edx]
// 004f5437  d919                 fstp dword ptr [ecx]
// 004f5439  d94204               fld dword ptr [edx + 4]
// 004f543c  d95904               fstp dword ptr [ecx + 4]
// 004f543f  d94208               fld dword ptr [edx + 8]
// 004f5442  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f5446  d95908               fstp dword ptr [ecx + 8]
// 004f5449  8b0d2cfb8b00         mov ecx, dword ptr [0x8bfb2c]
// 004f544f  d902                 fld dword ptr [edx]
// 004f5451  03c8                 add ecx, eax
// 004f5453  d919                 fstp dword ptr [ecx]
// 004f5455  d94204               fld dword ptr [edx + 4]
// 004f5458  d95904               fstp dword ptr [ecx + 4]
// 004f545b  d94208               fld dword ptr [edx + 8]
// 004f545e  d95908               fstp dword ptr [ecx + 8]
// 004f5461  8b15c8fa8b00         mov edx, dword ptr [0x8bfac8]
// 004f5467  8d0cf2               lea ecx, [edx + esi*8]
// 004f546a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f546e  d902                 fld dword ptr [edx]
// 004f5470  d919                 fstp dword ptr [ecx]
// 004f5472  d94204               fld dword ptr [edx + 4]
// 004f5475  d95904               fstp dword ptr [ecx + 4]
// 004f5478  841d38d18b00         test byte ptr [0x8bd138], bl
// 004f547e  751a                 jne 0x4f549a
// 004f5480  d9ee                 fldz 
// 004f5482  091d38d18b00         or dword ptr [0x8bd138], ebx
// 004f5488  d9152cd18b00         fst dword ptr [0x8bd12c]
// 004f548e  d91530d18b00         fst dword ptr [0x8bd130]
// 004f5494  d91d34d18b00         fstp dword ptr [0x8bd134]
// 004f549a  8b0dd4fa8b00         mov ecx, dword ptr [0x8bfad4]
// 004f54a0  d9052cd18b00         fld dword ptr [0x8bd12c]
// 004f54a6  d91c08               fstp dword ptr [eax + ecx]
// 004f54a9  03c1                 add eax, ecx
// 004f54ab  d90530d18b00         fld dword ptr [0x8bd130]
// 004f54b1  011dc4fa8b00         add dword ptr [0x8bfac4], ebx
// 004f54b7  d95804               fstp dword ptr [eax + 4]
// 004f54ba  d90534d18b00         fld dword ptr [0x8bd134]
// 004f54c0  d95808               fstp dword ptr [eax + 8]
// 004f54c3  8b1538fb8b00         mov edx, dword ptr [0x8bfb38]
// 004f54c9  891cb2               mov dword ptr [edx + esi*4], ebx
// 004f54cc  8bc6                 mov eax, esi
// 004f54ce  5e                   pop esi
// 004f54cf  5b                   pop ebx
// 004f54d0  59                   pop ecx
// 004f54d1  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?allocVertex@Mesh@Render@RBX@@SAIABVVector3@G3D@@0ABVVector2@5@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
