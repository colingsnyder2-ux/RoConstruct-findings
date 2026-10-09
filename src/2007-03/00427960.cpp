// roc 2007-03 00427960  unit: seg_00420000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00427960
//
// 00427960  8b442404             mov eax, dword ptr [esp + 4]
// 00427964  f6400c02             test byte ptr [eax + 0xc], 2
// 00427968  56                   push esi
// 00427969  8b705c               mov esi, dword ptr [eax + 0x5c]
// 0042796c  7430                 je 0x42799e
// 0042796e  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00427972  751c                 jne 0x427990
// 00427974  8bce                 mov ecx, esi
// 00427976  e8f5fbffff           call 0x427570
// 0042797b  8bce                 mov ecx, esi
// 0042797d  e8bebdffff           call 0x423740
// 00427982  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00427986  c70000000000         mov dword ptr [eax], 0
// 0042798c  5e                   pop esi
// 0042798d  c20800               ret 8
// 00427990  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00427994  c70100000000         mov dword ptr [ecx], 0
// 0042799a  5e                   pop esi
// 0042799b  c20800               ret 8
// 0042799e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004279a2  c70200000000         mov dword ptr [edx], 0
// 004279a8  5e                   pop esi
// 004279a9  c20800               ret 8
// copied from an identical function in another client (function ?func_004258C0@CSelectionTreeCtrl@ns_ROCX000003@@QAEXPAXPAH@Z)

namespace ns_ROCX000003 {
struct CSelectionTreeCtrl
{
    void sub_423B70();
    void sub_423D00();
    void func_004258C0(void* arg1, int* arg2);
};

void CSelectionTreeCtrl::func_004258C0(void* arg1, int* arg2)
{
    char* p = (char*)arg1;
    char* esi = *(char**)(p + 0x5c);
    if ((p[0xc] & 2) != 0)
    {
        if (esi[0x2d] == 0)
        {
            ((CSelectionTreeCtrl*)esi)->sub_423B70();
            ((CSelectionTreeCtrl*)esi)->sub_423D00();
            *arg2 = 0;
            return;
        }
        *arg2 = 0;
        return;
    }
    *arg2 = 0;
}
}
