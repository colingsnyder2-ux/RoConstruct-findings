// from server: 100% by colin
// roc 2007-08 004258c0  unit: CSelectionTreeCtrl  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004258c0
//
// 004258c0  8b442404             mov eax, dword ptr [esp + 4]
// 004258c4  f6400c02             test byte ptr [eax + 0xc], 2
// 004258c8  56                   push esi
// 004258c9  8b705c               mov esi, dword ptr [eax + 0x5c]
// 004258cc  7430                 je 0x4258fe
// 004258ce  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004258d2  751c                 jne 0x4258f0
// 004258d4  8bce                 mov ecx, esi
// 004258d6  e895e2ffff           call 0x423b70
// 004258db  8bce                 mov ecx, esi
// 004258dd  e81ee4ffff           call 0x423d00
// 004258e2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004258e6  c70000000000         mov dword ptr [eax], 0
// 004258ec  5e                   pop esi
// 004258ed  c20800               ret 8
// 004258f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004258f4  c70100000000         mov dword ptr [ecx], 0
// 004258fa  5e                   pop esi
// 004258fb  c20800               ret 8
// 004258fe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00425902  c70200000000         mov dword ptr [edx], 0
// 00425908  5e                   pop esi
// 00425909  c20800               ret 8

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
