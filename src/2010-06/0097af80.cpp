// roc 2010-06 0097af80  unit: seg_00970000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0097af80
//
// 0097af80  56                   push esi
// 0097af81  57                   push edi
// 0097af82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0097af86  d907                 fld dword ptr [edi]
// 0097af88  83ec08               sub esp, 8
// 0097af8b  d805e026a100         fadd dword ptr [0xa126e0]
// 0097af91  8bf1                 mov esi, ecx
// 0097af93  dd1c24               fstp qword ptr [esp]
// 0097af96  e855e2e2ff           call 0x7a91f0
// 0097af9b  e890dee2ff           call 0x7a8e30
// 0097afa0  668906               mov word ptr [esi], ax
// 0097afa3  d94704               fld dword ptr [edi + 4]
// 0097afa6  d805e026a100         fadd dword ptr [0xa126e0]
// 0097afac  dd1c24               fstp qword ptr [esp]
// 0097afaf  e83ce2e2ff           call 0x7a91f0
// 0097afb4  e877dee2ff           call 0x7a8e30
// 0097afb9  66894602             mov word ptr [esi + 2], ax
// 0097afbd  d94708               fld dword ptr [edi + 8]
// 0097afc0  d805e026a100         fadd dword ptr [0xa126e0]
// 0097afc6  dd1c24               fstp qword ptr [esp]
// 0097afc9  e822e2e2ff           call 0x7a91f0
// 0097afce  83c408               add esp, 8
// 0097afd1  e85adee2ff           call 0x7a8e30
// 0097afd6  66894604             mov word ptr [esi + 4], ax
// 0097afda  5f                   pop edi
// 0097afdb  8bc6                 mov eax, esi
// 0097afdd  5e                   pop esi
// 0097afde  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Vector3int16.cpp (function ??0Vector3int16@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3int16.cpp
