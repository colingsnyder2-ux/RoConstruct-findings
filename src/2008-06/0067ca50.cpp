// from server: 100% by auto
// roc 2008-06 0067ca50  unit: Ogre::RbxEntity  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067ca50
//
// 0067ca50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067ca54  56                   push esi
// 0067ca55  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067ca59  8bc6                 mov eax, esi
// 0067ca5b  2bc1                 sub eax, ecx
// 0067ca5d  c1f803               sar eax, 3
// 0067ca60  83f828               cmp eax, 0x28
// 0067ca63  7e68                 jle 0x67cacd
// 0067ca65  40                   inc eax
// 0067ca66  99                   cdq 
// 0067ca67  53                   push ebx
// 0067ca68  83e207               and edx, 7
// 0067ca6b  03c2                 add eax, edx
// 0067ca6d  55                   push ebp
// 0067ca6e  57                   push edi
// 0067ca6f  c1f803               sar eax, 3
// 0067ca72  8bf8                 mov edi, eax
// 0067ca74  c1e704               shl edi, 4
// 0067ca77  8d1cc500000000       lea ebx, [eax*8]
// 0067ca7e  8d140f               lea edx, [edi + ecx]
// 0067ca81  8d040b               lea eax, [ebx + ecx]
// 0067ca84  52                   push edx
// 0067ca85  50                   push eax
// 0067ca86  51                   push ecx
// 0067ca87  89442420             mov dword ptr [esp + 0x20], eax
// 0067ca8b  e870fdffff           call 0x67c800
// 0067ca90  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0067ca94  8d042b               lea eax, [ebx + ebp]
// 0067ca97  50                   push eax
// 0067ca98  8bcd                 mov ecx, ebp
// 0067ca9a  2bcb                 sub ecx, ebx
// 0067ca9c  55                   push ebp
// 0067ca9d  51                   push ecx
// 0067ca9e  e85dfdffff           call 0x67c800
// 0067caa3  8bc6                 mov eax, esi
// 0067caa5  2bc3                 sub eax, ebx
// 0067caa7  56                   push esi
// 0067caa8  50                   push eax
// 0067caa9  2bf7                 sub esi, edi
// 0067caab  56                   push esi
// 0067caac  89442440             mov dword ptr [esp + 0x40], eax
// 0067cab0  e84bfdffff           call 0x67c800
// 0067cab5  8b542440             mov edx, dword ptr [esp + 0x40]
// 0067cab9  8b442438             mov eax, dword ptr [esp + 0x38]
// 0067cabd  52                   push edx
// 0067cabe  55                   push ebp
// 0067cabf  50                   push eax
// 0067cac0  e83bfdffff           call 0x67c800
// 0067cac5  83c430               add esp, 0x30
// 0067cac8  5f                   pop edi
// 0067cac9  5d                   pop ebp
// 0067caca  5b                   pop ebx
// 0067cacb  5e                   pop esi
// 0067cacc  c3                   ret 
// 0067cacd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0067cad1  56                   push esi
// 0067cad2  52                   push edx
// 0067cad3  51                   push ecx
// 0067cad4  e827fdffff           call 0x67c800
// 0067cad9  83c40c               add esp, 0xc
// 0067cadc  5e                   pop esi
// 0067cadd  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??$_Median@PAN@std@@YAXPAN00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
