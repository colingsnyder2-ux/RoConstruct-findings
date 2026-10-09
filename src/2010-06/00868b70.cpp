// roc 2010-06 00868b70  unit: CXTPDockingPaneSplitterContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00868b70
//
// 00868b70  56                   push esi
// 00868b71  8b742408             mov esi, dword ptr [esp + 8]
// 00868b75  57                   push edi
// 00868b76  8bf9                 mov edi, ecx
// 00868b78  85f6                 test esi, esi
// 00868b7a  750f                 jne 0x868b8b
// 00868b7c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00868b80  50                   push eax
// 00868b81  e84a3effff           call 0x85c9d0
// 00868b86  5f                   pop edi
// 00868b87  5e                   pop esi
// 00868b88  c20800               ret 8
// 00868b8b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00868b8e  56                   push esi
// 00868b8f  51                   push ecx
// 00868b90  8bcf                 mov ecx, edi
// 00868b92  e8d95f0200           call 0x88eb70
// 00868b97  8b542410             mov edx, dword ptr [esp + 0x10]
// 00868b9b  895008               mov dword ptr [eax + 8], edx
// 00868b9e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00868ba1  85c9                 test ecx, ecx
// 00868ba3  740a                 je 0x868baf
// 00868ba5  8901                 mov dword ptr [ecx], eax
// 00868ba7  5f                   pop edi
// 00868ba8  894604               mov dword ptr [esi + 4], eax
// 00868bab  5e                   pop esi
// 00868bac  c20800               ret 8
// 00868baf  894704               mov dword ptr [edi + 4], eax
// 00868bb2  5f                   pop edi
// 00868bb3  894604               mov dword ptr [esi + 4], eax
// 00868bb6  5e                   pop esi
// 00868bb7  c20800               ret 8
// copied from an identical function in another client (function ?AddPane@CXTPDockingPaneSplitterContainer@ns_ROCX000001@ns_ROCX00006a@@QAEXPAXH@Z)

namespace ns_ROCX000001 {
extern void G1_func_00696490();
void fn_ROCX000001()
{
    G1_func_00696490();
}
}
