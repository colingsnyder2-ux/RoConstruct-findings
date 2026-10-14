// roc 2008-06 006588a0  unit: RBX::ArrowButton  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006588a0
//
// 006588a0  8b442404             mov eax, dword ptr [esp + 4]
// 006588a4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006588a8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006588ac  56                   push esi
// 006588ad  83c004               add eax, 4
// 006588b0  83c208               add edx, 8
// 006588b3  be03000000           mov esi, 3
// 006588b8  eb06                 jmp 0x6588c0
// 006588ba  8d9b00000000         lea ebx, [ebx]
// 006588c0  d94004               fld dword ptr [eax + 4]
// 006588c3  83c00c               add eax, 0xc
// 006588c6  d84908               fmul dword ptr [ecx + 8]
// 006588c9  83c20c               add edx, 0xc
// 006588cc  83ee01               sub esi, 1
// 006588cf  d940f4               fld dword ptr [eax - 0xc]
// 006588d2  d84904               fmul dword ptr [ecx + 4]
// 006588d5  dec1                 faddp st(1)
// 006588d7  d940f0               fld dword ptr [eax - 0x10]
// 006588da  d809                 fmul dword ptr [ecx]
// 006588dc  dec1                 faddp st(1)
// 006588de  d95aec               fstp dword ptr [edx - 0x14]
// 006588e1  d94110               fld dword ptr [ecx + 0x10]
// 006588e4  d848f4               fmul dword ptr [eax - 0xc]
// 006588e7  d94114               fld dword ptr [ecx + 0x14]
// 006588ea  d848f8               fmul dword ptr [eax - 8]
// 006588ed  dec1                 faddp st(1)
// 006588ef  d9410c               fld dword ptr [ecx + 0xc]
// 006588f2  d848f0               fmul dword ptr [eax - 0x10]
// 006588f5  dec1                 faddp st(1)
// 006588f7  d95af0               fstp dword ptr [edx - 0x10]
// 006588fa  d940f0               fld dword ptr [eax - 0x10]
// 006588fd  d84918               fmul dword ptr [ecx + 0x18]
// 00658900  d9411c               fld dword ptr [ecx + 0x1c]
// 00658903  d848f4               fmul dword ptr [eax - 0xc]
// 00658906  dec1                 faddp st(1)
// 00658908  d940f8               fld dword ptr [eax - 8]
// 0065890b  d84920               fmul dword ptr [ecx + 0x20]
// 0065890e  dec1                 faddp st(1)
// 00658910  d95af4               fstp dword ptr [edx - 0xc]
// 00658913  75ab                 jne 0x6588c0
// 00658915  5e                   pop esi
// 00658916  c3                   ret 
// library rbxgs-dll/v8kernel\SimBody.cpp (function ?mulMatrixMatrixTranspose@RBX@@YAXABVMatrix3@G3D@@0AAV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/SimBody.cpp
