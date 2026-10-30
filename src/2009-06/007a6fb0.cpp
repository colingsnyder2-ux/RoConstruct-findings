// roc 2009-06 007a6fb0  unit: CXTPControlGalleryOffice2007Theme  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a6fb0
//
// 007a6fb0  6aff                 push -1
// 007a6fb2  6811c08700           push 0x87c011
// 007a6fb7  64a100000000         mov eax, dword ptr fs:[0]
// 007a6fbd  50                   push eax
// 007a6fbe  83ec20               sub esp, 0x20
// 007a6fc1  53                   push ebx
// 007a6fc2  56                   push esi
// 007a6fc3  57                   push edi
// 007a6fc4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007a6fc9  33c4                 xor eax, esp
// 007a6fcb  50                   push eax
// 007a6fcc  8d442430             lea eax, [esp + 0x30]
// 007a6fd0  64a300000000         mov dword ptr fs:[0], eax
// 007a6fd6  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 007a6fd9  6a38                 push 0x38
// 007a6fdb  8bcf                 mov ecx, edi
// 007a6fdd  e89eb7f7ff           call 0x722780
// 007a6fe2  8b742440             mov esi, dword ptr [esp + 0x40]
// 007a6fe6  50                   push eax
// 007a6fe7  8d44244c             lea eax, [esp + 0x4c]
// 007a6feb  50                   push eax
// 007a6fec  8bce                 mov ecx, esi
// 007a6fee  e8dd27f7ff           call 0x7197d0
// 007a6ff3  8b442448             mov eax, dword ptr [esp + 0x48]
// 007a6ff7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007a6ffb  8b542454             mov edx, dword ptr [esp + 0x54]
// 007a6fff  68c5c5c500           push 0xc5c5c5
// 007a7004  6a01                 push 1
// 007a7006  2bc8                 sub ecx, eax
// 007a7008  51                   push ecx
// 007a7009  4a                   dec edx
// 007a700a  52                   push edx
// 007a700b  50                   push eax
// 007a700c  8bce                 mov ecx, esi
// 007a700e  e81d4f0a00           call 0x84bf30
// 007a7013  8d87f8000000         lea eax, [edi + 0xf8]
// 007a7019  50                   push eax
// 007a701a  56                   push esi
// 007a701b  8d4c2428             lea ecx, [esp + 0x28]
// 007a701f  e83c98fcff           call 0x770860
// 007a7024  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007a7028  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007a702c  8b442450             mov eax, dword ptr [esp + 0x50]
// 007a7030  6a00                 push 0
// 007a7032  89542418             mov dword ptr [esp + 0x18], edx
// 007a7036  894c2414             mov dword ptr [esp + 0x14], ecx
// 007a703a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007a703e  6af6                 push -0xa
// 007a7040  8d542418             lea edx, [esp + 0x18]
// 007a7044  52                   push edx
// 007a7045  c744244400000000     mov dword ptr [esp + 0x44], 0
// 007a704d  89442424             mov dword ptr [esp + 0x24], eax
// 007a7051  894c2428             mov dword ptr [esp + 0x28], ecx
// 007a7055  ff15bced8900         call dword ptr [0x89edbc]
// 007a705b  8b1e                 mov ebx, dword ptr [esi]
// 007a705d  6a2c                 push 0x2c
// 007a705f  8bcf                 mov ecx, edi
// 007a7061  e81ab7f7ff           call 0x722780
// 007a7066  50                   push eax
// 007a7067  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007a706a  8bce                 mov ecx, esi
// 007a706c  ffd0                 call eax
// 007a706e  8d4c2440             lea ecx, [esp + 0x40]
// 007a7072  51                   push ecx
// 007a7073  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007a7077  e8d452ffff           call 0x79c350
// 007a707c  8bf8                 mov edi, eax
// 007a707e  8b1e                 mov ebx, dword ptr [esi]
// 007a7080  6824800000           push 0x8024
// 007a7085  8d542414             lea edx, [esp + 0x14]
// 007a7089  52                   push edx
// 007a708a  8bcf                 mov ecx, edi
// 007a708c  c644244001           mov byte ptr [esp + 0x40], 1
// 007a7091  ff1554fb8900         call dword ptr [0x89fb54]
// 007a7097  50                   push eax
// 007a7098  8bcf                 mov ecx, edi
// 007a709a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007a70a0  50                   push eax
// 007a70a1  8b4370               mov eax, dword ptr [ebx + 0x70]
// 007a70a4  8bce                 mov ecx, esi
// 007a70a6  ffd0                 call eax
// 007a70a8  8d4c2440             lea ecx, [esp + 0x40]
// 007a70ac  ff1510fd8900         call dword ptr [0x89fd10]
// 007a70b2  8d4c2420             lea ecx, [esp + 0x20]
// 007a70b6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 007a70be  e81d98fcff           call 0x7708e0
// 007a70c3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a70c7  64890d00000000       mov dword ptr fs:[0], ecx
// 007a70ce  59                   pop ecx
// 007a70cf  5f                   pop edi
// 007a70d0  5e                   pop esi
// 007a70d1  5b                   pop ebx
// 007a70d2  83c42c               add esp, 0x2c
// 007a70d5  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp