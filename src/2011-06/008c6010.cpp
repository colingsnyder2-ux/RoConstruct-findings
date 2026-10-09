// roc 2011-06 008c6010  unit: CXTPDockingPaneSplitterContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6010
//
// 008c6010  56                   push esi
// 008c6011  8b742408             mov esi, dword ptr [esp + 8]
// 008c6015  57                   push edi
// 008c6016  8bf9                 mov edi, ecx
// 008c6018  85f6                 test esi, esi
// 008c601a  750f                 jne 0x8c602b
// 008c601c  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c6020  50                   push eax
// 008c6021  e86a3bffff           call 0x8b9b90
// 008c6026  5f                   pop edi
// 008c6027  5e                   pop esi
// 008c6028  c20800               ret 8
// 008c602b  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c602e  56                   push esi
// 008c602f  51                   push ecx
// 008c6030  8bcf                 mov ecx, edi
// 008c6032  e859a30200           call 0x8f0390
// 008c6037  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c603b  895008               mov dword ptr [eax + 8], edx
// 008c603e  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c6041  85c9                 test ecx, ecx
// 008c6043  740a                 je 0x8c604f
// 008c6045  8901                 mov dword ptr [ecx], eax
// 008c6047  5f                   pop edi
// 008c6048  894604               mov dword ptr [esi + 4], eax
// 008c604b  5e                   pop esi
// 008c604c  c20800               ret 8
// 008c604f  894704               mov dword ptr [edi + 4], eax
// 008c6052  5f                   pop edi
// 008c6053  894604               mov dword ptr [esi + 4], eax
// 008c6056  5e                   pop esi
// 008c6057  c20800               ret 8
// copied from an identical function in another client (function ?AddPane@CXTPDockingPaneSplitterContainer@ns_ROCX000001@ns_ROCX0000a7@@QAEXPAXH@Z)

namespace ns_ROCX000001 {
extern void G1_func_00693d00();
void fn_ROCX000001()
{
    G1_func_00693d00();
}
}
