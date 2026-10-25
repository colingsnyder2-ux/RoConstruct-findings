// from server: 100% by tester
// roc 2008-06 00426d60  unit: CSelectionTreeCtrl  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426d60
//
// 00426d60  8b442404             mov eax, dword ptr [esp + 4]
// 00426d64  f6400c02             test byte ptr [eax + 0xc], 2
// 00426d68  56                   push esi
// 00426d69  8b705c               mov esi, dword ptr [eax + 0x5c]
// 00426d6c  7430                 je 0x426d9e
// 00426d6e  807e5500             cmp byte ptr [esi + 0x55], 0
// 00426d72  751c                 jne 0x426d90
// 00426d74  8bce                 mov ecx, esi
// 00426d76  e845f5ffff           call 0x4262c0
// 00426d7b  8bce                 mov ecx, esi
// 00426d7d  e8cef6ffff           call 0x426450
// 00426d82  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00426d86  c70000000000         mov dword ptr [eax], 0
// 00426d8c  5e                   pop esi
// 00426d8d  c20800               ret 8
// 00426d90  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00426d94  c70100000000         mov dword ptr [ecx], 0
// 00426d9a  5e                   pop esi
// 00426d9b  c20800               ret 8
// 00426d9e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00426da2  c70200000000         mov dword ptr [edx], 0
// 00426da8  5e                   pop esi
// 00426da9  c20800               ret 8

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
        if (esi[0x55] == 0)
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
