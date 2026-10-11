// from server: 59% by atomic.potato
// roc 2009-06 00418f00  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00418f00
//
// 00418f00  8b442404             mov eax, dword ptr [esp + 4]
// 00418f04  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 00418f0a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00418f0e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00418f11  8b11                 mov edx, dword ptr [ecx]
// 00418f13  8b92cc010000         mov edx, dword ptr [edx + 0x1cc]
// 00418f19  50                   push eax
// 00418f1a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00418f1e  50                   push eax
// 00418f1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00418f23  50                   push eax
// 00418f24  ffd2                 call edx
// 00418f26  c21000               ret 0x10

struct CRBXHTMLControlSite_XDocHostUIHandler
{
    int ShowContextMenu(int a, int b, int c, int d);
};

int CRBXHTMLControlSite_XDocHostUIHandler::ShowContextMenu(int a, int b, int c, int d)
{
    char *p = (char *)a;
    char *q = *(char **)(p - 0xcc);
    char *r = *(char **)(q + 0x20);
    int (**vt)(int, int, int, int) = *(int (***)(int, int, int, int))r;
    int (*fn)(int, int, int, int) = (int (*)(int, int, int, int))vt[0x1cc / 4];
    return fn(b, c, d, 0);
}
