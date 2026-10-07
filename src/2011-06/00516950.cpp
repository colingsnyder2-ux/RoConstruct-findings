// roc 2011-06 00516950  unit: RBX::Network::NetworkOwnerJob  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00516950
//
// 00516950  56                   push esi
// 00516951  57                   push edi
// 00516952  8bf1                 mov esi, ecx
// 00516954  e827ffffff           call 0x516880
// 00516959  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051695d  8b07                 mov eax, dword ptr [edi]
// 0051695f  3da8eec200           cmp eax, 0xc2eea8
// 00516964  7433                 je 0x516999
// 00516966  8b08                 mov ecx, dword ptr [eax]
// 00516968  e8636f0100           call 0x52d8d0
// 0051696d  8b07                 mov eax, dword ptr [edi]
// 0051696f  83780400             cmp dword ptr [eax + 4], 0
// 00516973  7516                 jne 0x51698b
// 00516975  c706a8eec200         mov dword ptr [esi], 0xc2eea8
// 0051697b  8b07                 mov eax, dword ptr [edi]
// 0051697d  8b08                 mov ecx, dword ptr [eax]
// 0051697f  e81cf0efff           call 0x4159a0
// 00516984  5f                   pop edi
// 00516985  8bc6                 mov eax, esi
// 00516987  5e                   pop esi
// 00516988  c20400               ret 4
// 0051698b  8906                 mov dword ptr [esi], eax
// 0051698d  ff4004               inc dword ptr [eax + 4]
// 00516990  8b07                 mov eax, dword ptr [edi]
// 00516992  8b08                 mov ecx, dword ptr [eax]
// 00516994  e807f0efff           call 0x4159a0
// 00516999  5f                   pop edi
// 0051699a  8bc6                 mov eax, esi
// 0051699c  5e                   pop esi
// 0051699d  c20400               ret 4
// library rbx2016-raknet/RakString.cpp (function ??4RakString@RakNet@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
