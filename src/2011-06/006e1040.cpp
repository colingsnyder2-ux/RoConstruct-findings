// roc 2011-06 006e1040  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1040
//
// 006e1040  6aff                 push -1
// 006e1042  68ecea9d00           push 0x9deaec
// 006e1047  64a100000000         mov eax, dword ptr fs:[0]
// 006e104d  50                   push eax
// 006e104e  64892500000000       mov dword ptr fs:[0], esp
// 006e1055  51                   push ecx
// 006e1056  56                   push esi
// 006e1057  8bf1                 mov esi, ecx
// 006e1059  57                   push edi
// 006e105a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e105e  8b07                 mov eax, dword ptr [edi]
// 006e1060  8906                 mov dword ptr [esi], eax
// 006e1062  8b4f04               mov ecx, dword ptr [edi + 4]
// 006e1065  894e04               mov dword ptr [esi + 4], ecx
// 006e1068  8b5708               mov edx, dword ptr [edi + 8]
// 006e106b  895608               mov dword ptr [esi + 8], edx
// 006e106e  8b470c               mov eax, dword ptr [edi + 0xc]
// 006e1071  89460c               mov dword ptr [esi + 0xc], eax
// 006e1074  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006e1077  894e10               mov dword ptr [esi + 0x10], ecx
// 006e107a  8b5714               mov edx, dword ptr [edi + 0x14]
// 006e107d  8d4718               lea eax, [edi + 0x18]
// 006e1080  50                   push eax
// 006e1081  8d4e18               lea ecx, [esi + 0x18]
// 006e1084  8974240c             mov dword ptr [esp + 0xc], esi
// 006e1088  895614               mov dword ptr [esi + 0x14], edx
// 006e108b  ff15c804a400         call dword ptr [0xa404c8]
// 006e1091  8d4f34               lea ecx, [edi + 0x34]
// 006e1094  51                   push ecx
// 006e1095  8d4e34               lea ecx, [esi + 0x34]
// 006e1098  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006e10a0  ff15c804a400         call dword ptr [0xa404c8]
// 006e10a6  8b5750               mov edx, dword ptr [edi + 0x50]
// 006e10a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e10ad  895650               mov dword ptr [esi + 0x50], edx
// 006e10b0  8b4754               mov eax, dword ptr [edi + 0x54]
// 006e10b3  894654               mov dword ptr [esi + 0x54], eax
// 006e10b6  5f                   pop edi
// 006e10b7  8bc6                 mov eax, esi
// 006e10b9  5e                   pop esi
// 006e10ba  64890d00000000       mov dword ptr fs:[0], ecx
// 006e10c1  83c410               add esp, 0x10
// 006e10c4  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_params@iostreams@boost@@QAE@ABU012@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp