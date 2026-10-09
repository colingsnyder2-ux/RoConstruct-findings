// roc 2008-06 00761750  unit: CXTPDockingPaneSplitterContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00761750
//
// 00761750  56                   push esi
// 00761751  8b742408             mov esi, dword ptr [esp + 8]
// 00761755  57                   push edi
// 00761756  8bf9                 mov edi, ecx
// 00761758  85f6                 test esi, esi
// 0076175a  750f                 jne 0x76176b
// 0076175c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00761760  50                   push eax
// 00761761  e83a3dffff           call 0x7554a0
// 00761766  5f                   pop edi
// 00761767  5e                   pop esi
// 00761768  c20800               ret 8
// 0076176b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076176e  56                   push esi
// 0076176f  51                   push ecx
// 00761770  8bcf                 mov ecx, edi
// 00761772  e8b98f0000           call 0x76a730
// 00761777  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076177b  895008               mov dword ptr [eax + 8], edx
// 0076177e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00761781  85c9                 test ecx, ecx
// 00761783  740a                 je 0x76178f
// 00761785  8901                 mov dword ptr [ecx], eax
// 00761787  5f                   pop edi
// 00761788  894604               mov dword ptr [esi + 4], eax
// 0076178b  5e                   pop esi
// 0076178c  c20800               ret 8
// 0076178f  894704               mov dword ptr [edi + 4], eax
// 00761792  5f                   pop edi
// 00761793  894604               mov dword ptr [esi + 4], eax
// 00761796  5e                   pop esi
// 00761797  c20800               ret 8
// copied from an identical function in another client (function ?AddPane@CXTPDockingPaneSplitterContainer@ns_ROCX000001@ns_ROCX0000f5@@QAEXPAXH@Z)

namespace ns_ROCX000001 {
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
}
