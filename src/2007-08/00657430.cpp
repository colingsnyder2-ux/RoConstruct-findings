// from server: 81% by tester
struct CXTPReportControl_CReportDropTarget
{
    char pad[0xcc];
    int m_nOffset;
    char pad2[4];
    int m_nSomething;
    int OnDrop(int* pData);
};

extern "C" int __stdcall sub_655C20(int, int);
extern "C" int __stdcall sub_6642D0(int, int, int);

int CXTPReportControl_CReportDropTarget::OnDrop(int* pData)
{
    int n = pData[0x28 / 4];
    int result = sub_655C20(n, (int)pData);
    if (result > 0)
    {
        sub_6642D0(*(int*)((char*)this + 0xd0), n, result);
        if (m_nOffset > n)
        {
            m_nOffset += result;
        }
    }
    return result;
}
