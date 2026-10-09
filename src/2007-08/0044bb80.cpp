// from server: 100% by colin
// roc 2007-08 0044bb80  unit: CRobloxControlColorSelector  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044bb80
//
// 0044bb80  8b442408             mov eax, dword ptr [esp + 8]
// 0044bb84  8bd0                 mov edx, eax
// 0044bb86  81e207000080         and edx, 0x80000007
// 0044bb8c  56                   push esi
// 0044bb8d  7905                 jns 0x44bb94
// 0044bb8f  4a                   dec edx
// 0044bb90  83caf8               or edx, 0xfffffff8
// 0044bb93  42                   inc edx
// 0044bb94  8bb1c0000000         mov esi, dword ptr [ecx + 0xc0]
// 0044bb9a  8b89c4000000         mov ecx, dword ptr [ecx + 0xc4]
// 0044bba0  c1e205               shl edx, 5
// 0044bba3  8d743202             lea esi, [edx + esi + 2]
// 0044bba7  99                   cdq 
// 0044bba8  83e207               and edx, 7
// 0044bbab  03c2                 add eax, edx
// 0044bbad  c1f803               sar eax, 3
// 0044bbb0  c1e005               shl eax, 5
// 0044bbb3  8d4c0802             lea ecx, [eax + ecx + 2]
// 0044bbb7  8b442408             mov eax, dword ptr [esp + 8]
// 0044bbbb  8930                 mov dword ptr [eax], esi
// 0044bbbd  83c620               add esi, 0x20
// 0044bbc0  894804               mov dword ptr [eax + 4], ecx
// 0044bbc3  83c120               add ecx, 0x20
// 0044bbc6  897008               mov dword ptr [eax + 8], esi
// 0044bbc9  89480c               mov dword ptr [eax + 0xc], ecx
// 0044bbcc  5e                   pop esi
// 0044bbcd  c20800               ret 8

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
