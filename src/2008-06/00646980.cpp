// roc 2008-06 00646980  unit: RBX::Clump  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646980
//
// 00646980  56                   push esi
// 00646981  8bf1                 mov esi, ecx
// 00646983  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 00646989  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064698d  898cc68c000000       mov dword ptr [esi + eax*8 + 0x8c], ecx
// 00646994  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0064699a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064699e  8984d690000000       mov dword ptr [esi + edx*8 + 0x90], eax
// 006469a5  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 006469ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 006469af  89848eac000000       mov dword ptr [esi + ecx*4 + 0xac], eax
// 006469b6  50                   push eax
// 006469b7  8bce                 mov ecx, esi
// 006469b9  e892eeffff           call 0x645850
// 006469be  8bc8                 mov ecx, eax
// 006469c0  e89b47fbff           call 0x5fb160
// 006469c5  ff8688000000         inc dword ptr [esi + 0x88]
// 006469cb  5e                   pop esi
// 006469cc  c20c00               ret 0xc
// library openrbx-client/App\v8world\MultiJoint.cpp (function ?addToMultiJoint@MultiJoint@RBX@@IAEXPAVPoint@2@0PAVConnector@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/MultiJoint.cpp
