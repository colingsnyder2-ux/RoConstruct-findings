// from server: 100% by auto
// roc 2010-06 006dafe0  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dafe0
//
// 006dafe0  56                   push esi
// 006dafe1  8bf1                 mov esi, ecx
// 006dafe3  8b4604               mov eax, dword ptr [esi + 4]
// 006dafe6  3b4608               cmp eax, dword ptr [esi + 8]
// 006dafe9  8b0e                 mov ecx, dword ptr [esi]
// 006dafeb  7d13                 jge 0x6db000
// 006dafed  03c8                 add ecx, eax
// 006dafef  7408                 je 0x6daff9
// 006daff1  8b442408             mov eax, dword ptr [esp + 8]
// 006daff5  8a10                 mov dl, byte ptr [eax]
// 006daff7  8811                 mov byte ptr [ecx], dl
// 006daff9  ff4604               inc dword ptr [esi + 4]
// 006daffc  5e                   pop esi
// 006daffd  c20400               ret 4
// 006db000  57                   push edi
// 006db001  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006db005  3bf9                 cmp edi, ecx
// 006db007  721d                 jb 0x6db026
// 006db009  03c8                 add ecx, eax
// 006db00b  3bf9                 cmp edi, ecx
// 006db00d  7317                 jae 0x6db026
// 006db00f  8a07                 mov al, byte ptr [edi]
// 006db011  8d4c240c             lea ecx, [esp + 0xc]
// 006db015  51                   push ecx
// 006db016  8bce                 mov ecx, esi
// 006db018  88442410             mov byte ptr [esp + 0x10], al
// 006db01c  e8bfffffff           call 0x6dafe0
// 006db021  5f                   pop edi
// 006db022  5e                   pop esi
// 006db023  c20400               ret 4
// 006db026  6a00                 push 0
// 006db028  40                   inc eax
// 006db029  50                   push eax
// 006db02a  8bce                 mov ecx, esi
// 006db02c  e8ffdadaff           call 0x488b30
// 006db031  8a0f                 mov cl, byte ptr [edi]
// 006db033  8b5604               mov edx, dword ptr [esi + 4]
// 006db036  8b06                 mov eax, dword ptr [esi]
// 006db038  5f                   pop edi
// 006db039  884c02ff             mov byte ptr [edx + eax - 1], cl
// 006db03d  5e                   pop esi
// 006db03e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
