// from server: 80% by colin
// roc 2007-08 00657430  unit: CXTPReportControl::CReportDropTarget  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657430
//
// 00657430  8b442404             mov eax, dword ptr [esp + 4]
// 00657434  53                   push ebx
// 00657435  56                   push esi
// 00657436  57                   push edi
// 00657437  8b7828               mov edi, dword ptr [eax + 0x28]
// 0065743a  50                   push eax
// 0065743b  57                   push edi
// 0065743c  8bf1                 mov esi, ecx
// 0065743e  e8dde7ffff           call 0x655c20
// 00657443  8bd8                 mov ebx, eax
// 00657445  85db                 test ebx, ebx
// 00657447  7e1f                 jle 0x657468
// 00657449  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0065744f  53                   push ebx
// 00657450  57                   push edi
// 00657451  e87ace0000           call 0x6642d0
// 00657456  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0065745c  3bc7                 cmp eax, edi
// 0065745e  7e08                 jle 0x657468
// 00657460  03c3                 add eax, ebx
// 00657462  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00657468  5f                   pop edi
// 00657469  5e                   pop esi
// 0065746a  5b                   pop ebx
// 0065746b  c20400               ret 4

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
        sub_6642D0(m_nSomething, n, result);
        if (m_nOffset > n)
        {
            m_nOffset += result;
        }
    }
    return result;
}
