// roc 2007-03 0044a3f0  unit: seg_00440000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a3f0
//
// 0044a3f0  8b442408             mov eax, dword ptr [esp + 8]
// 0044a3f4  8bd0                 mov edx, eax
// 0044a3f6  81e207000080         and edx, 0x80000007
// 0044a3fc  56                   push esi
// 0044a3fd  7905                 jns 0x44a404
// 0044a3ff  4a                   dec edx
// 0044a400  83caf8               or edx, 0xfffffff8
// 0044a403  42                   inc edx
// 0044a404  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 0044a40a  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 0044a410  c1e205               shl edx, 5
// 0044a413  8d743202             lea esi, [edx + esi + 2]
// 0044a417  99                   cdq 
// 0044a418  83e207               and edx, 7
// 0044a41b  03c2                 add eax, edx
// 0044a41d  c1f803               sar eax, 3
// 0044a420  c1e005               shl eax, 5
// 0044a423  8d4c0802             lea ecx, [eax + ecx + 2]
// 0044a427  8b442408             mov eax, dword ptr [esp + 8]
// 0044a42b  8930                 mov dword ptr [eax], esi
// 0044a42d  83c620               add esi, 0x20
// 0044a430  894804               mov dword ptr [eax + 4], ecx
// 0044a433  83c120               add ecx, 0x20
// 0044a436  897008               mov dword ptr [eax + 8], esi
// 0044a439  89480c               mov dword ptr [eax + 0xc], ecx
// 0044a43c  5e                   pop esi
// 0044a43d  c20800               ret 8
// copied from an identical function in another client (function ?f@CRobloxControlColorSelector@ns_ROCX000002@@QAEXPAHH@Z)

namespace ns_ROCX000002 {
struct CRobloxControlColorSelector {
    char pad[0xc0];
    int m_x;
    int m_y;
    void f(int* out, int a);
};

void CRobloxControlColorSelector::f(int* out, int a)
{
    int q = a / 8;
    int r = a % 8;
    int x = m_x + r * 32 + 2;
    int y = m_y + q * 32 + 2;
    out[0] = x;
    out[1] = y;
    out[2] = x + 32;
    out[3] = y + 32;
}
}
