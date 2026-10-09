// roc 2007-03 006cab50  unit: seg_006c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cab50
//
// 006cab50  8b442404             mov eax, dword ptr [esp + 4]
// 006cab54  85c0                 test eax, eax
// 006cab56  7508                 jne 0x6cab60
// 006cab58  b857000780           mov eax, 0x80070057
// 006cab5d  c20400               ret 4
// 006cab60  8b49d0               mov ecx, dword ptr [ecx - 0x30]
// 006cab63  83c101               add ecx, 1
// 006cab66  8908                 mov dword ptr [eax], ecx
// 006cab68  33c0                 xor eax, eax
// 006cab6a  c20400               ret 4
// copied from an identical function in another client (function ?GetCount@CXTPDockingPaneTabbedContainer@ns_ROCX000016@@QAEHPAH@Z)

namespace ns_ROCX000016 {
struct CXTPDockingPaneTabbedContainer
{
    int GetCount(int* pCount);
    char m_pad[0x30];
    int m_nCount;
};

int CXTPDockingPaneTabbedContainer::GetCount(int* pCount)
{
    if (pCount == 0)
        return 0x80070057;
    *pCount = *(int*)((char*)this - 0x30) + 1;
    return 0;
}
}
