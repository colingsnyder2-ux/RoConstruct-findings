// roc 2011-06 00531810  unit: seg_00530000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00531810
//
// 00531810  8b442418             mov eax, dword ptr [esp + 0x18]
// 00531814  8b542404             mov edx, dword ptr [esp + 4]
// 00531818  56                   push esi
// 00531819  57                   push edi
// 0053181a  8bf1                 mov esi, ecx
// 0053181c  50                   push eax
// 0053181d  8d4c2424             lea ecx, [esp + 0x24]
// 00531821  51                   push ecx
// 00531822  52                   push edx
// 00531823  8bce                 mov ecx, esi
// 00531825  e886ddffff           call 0x52f5b0
// 0053182a  807c242000           cmp byte ptr [esp + 0x20], 0
// 0053182f  8bf8                 mov edi, eax
// 00531831  7408                 je 0x53183b
// 00531833  5f                   pop edi
// 00531834  83c8ff               or eax, 0xffffffff
// 00531837  5e                   pop esi
// 00531838  c21800               ret 0x18
// 0053183b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053183f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00531843  8b542410             mov edx, dword ptr [esp + 0x10]
// 00531847  50                   push eax
// 00531848  51                   push ecx
// 00531849  8bce                 mov ecx, esi
// 0053184b  3b7e04               cmp edi, dword ptr [esi + 4]
// 0053184e  720f                 jb 0x53185f
// 00531850  52                   push edx
// 00531851  e83aebffff           call 0x530390
// 00531856  8b4604               mov eax, dword ptr [esi + 4]
// 00531859  5f                   pop edi
// 0053185a  48                   dec eax
// 0053185b  5e                   pop esi
// 0053185c  c21800               ret 0x18
// 0053185f  57                   push edi
// 00531860  52                   push edx
// 00531861  e8daebffff           call 0x530440
// 00531866  8bc7                 mov eax, edi
// 00531868  5f                   pop edi
// 00531869  5e                   pop esi
// 0053186a  c21800               ret 0x18
// library rbx2016-raknet/CloudServer.cpp (function ?Insert@?$OrderedList@URakNetGUID@RakNet@@PAUCloudData@CloudServer@2@$1?KeyDataPtrComp@42@KAHABU12@ABQAU342@@Z@DataStructures@@QAEIABURakNetGUID@RakNet@@ABQAUCloudData@CloudServer@4@_NPBDIP6AH01@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
