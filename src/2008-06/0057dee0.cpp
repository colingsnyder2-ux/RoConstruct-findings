// roc 2008-06 0057dee0  unit: RBX::WatchCameraCommand  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057dee0
//
// 0057dee0  8b542404             mov edx, dword ptr [esp + 4]
// 0057dee4  d94208               fld dword ptr [edx + 8]
// 0057dee7  53                   push ebx
// 0057dee8  d85908               fcomp dword ptr [ecx + 8]
// 0057deeb  56                   push esi
// 0057deec  8d7208               lea esi, [edx + 8]
// 0057deef  8d5908               lea ebx, [ecx + 8]
// 0057def2  57                   push edi
// 0057def3  dfe0                 fnstsw ax
// 0057def5  f6c441               test ah, 0x41
// 0057def8  7502                 jne 0x57defc
// 0057defa  8bf3                 mov esi, ebx
// 0057defc  d906                 fld dword ptr [esi]
// 0057defe  8d7a04               lea edi, [edx + 4]
// 0057df01  d907                 fld dword ptr [edi]
// 0057df03  8d7104               lea esi, [ecx + 4]
// 0057df06  d81e                 fcomp dword ptr [esi]
// 0057df08  dfe0                 fnstsw ax
// 0057df0a  f6c441               test ah, 0x41
// 0057df0d  7502                 jne 0x57df11
// 0057df0f  8bfe                 mov edi, esi
// 0057df11  d907                 fld dword ptr [edi]
// 0057df13  d902                 fld dword ptr [edx]
// 0057df15  d819                 fcomp dword ptr [ecx]
// 0057df17  dfe0                 fnstsw ax
// 0057df19  f6c441               test ah, 0x41
// 0057df1c  8bc1                 mov eax, ecx
// 0057df1e  7402                 je 0x57df22
// 0057df20  8bc2                 mov eax, edx
// 0057df22  d900                 fld dword ptr [eax]
// 0057df24  83c10c               add ecx, 0xc
// 0057df27  d959f4               fstp dword ptr [ecx - 0xc]
// 0057df2a  83c20c               add edx, 0xc
// 0057df2d  8d7a08               lea edi, [edx + 8]
// 0057df30  d91e                 fstp dword ptr [esi]
// 0057df32  8d7108               lea esi, [ecx + 8]
// 0057df35  d91b                 fstp dword ptr [ebx]
// 0057df37  d906                 fld dword ptr [esi]
// 0057df39  d81f                 fcomp dword ptr [edi]
// 0057df3b  dfe0                 fnstsw ax
// 0057df3d  f6c441               test ah, 0x41
// 0057df40  7402                 je 0x57df44
// 0057df42  8bf7                 mov esi, edi
// 0057df44  d906                 fld dword ptr [esi]
// 0057df46  8d7104               lea esi, [ecx + 4]
// 0057df49  d906                 fld dword ptr [esi]
// 0057df4b  8d7a04               lea edi, [edx + 4]
// 0057df4e  d81f                 fcomp dword ptr [edi]
// 0057df50  dfe0                 fnstsw ax
// 0057df52  f6c441               test ah, 0x41
// 0057df55  7402                 je 0x57df59
// 0057df57  8bf7                 mov esi, edi
// 0057df59  d906                 fld dword ptr [esi]
// 0057df5b  5f                   pop edi
// 0057df5c  d901                 fld dword ptr [ecx]
// 0057df5e  5e                   pop esi
// 0057df5f  d81a                 fcomp dword ptr [edx]
// 0057df61  5b                   pop ebx
// 0057df62  dfe0                 fnstsw ax
// 0057df64  f6c441               test ah, 0x41
// 0057df67  7502                 jne 0x57df6b
// 0057df69  8bd1                 mov edx, ecx
// 0057df6b  d902                 fld dword ptr [edx]
// 0057df6d  d919                 fstp dword ptr [ecx]
// 0057df6f  d95904               fstp dword ptr [ecx + 4]
// 0057df72  d95908               fstp dword ptr [ecx + 8]
// 0057df75  c20400               ret 4
// library rbxgs-dll/util\Extents.cpp (function ?unionWith@Extents@RBX@@QAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Extents.cpp
