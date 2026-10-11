// from server: 67% by atomic.potato
// roc 2009-06 00418ed0  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00418ed0
//
// 00418ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00418ed4  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 00418eda  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00418ede  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00418ee1  8b11                 mov edx, dword ptr [ecx]
// 00418ee3  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00418ee9  50                   push eax
// 00418eea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00418eee  50                   push eax
// 00418eef  ffd2                 call edx
// 00418ef1  c20c00               ret 0xc

struct CRBXHTMLControlSite_XDocHostUIHandler
{
    int method(int a, int b, int c);
};

int CRBXHTMLControlSite_XDocHostUIHandler::method(int a, int b, int c)
{
    int* p = (int*)a;
    int* q = (int*)((char*)p - 0xcc);
    int* r = (int*)*q;
    int* s = (int*)((char*)r + 0x20);
    int* t = (int*)*s;
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))*(int*)((char*)t + 0x1d0);
    return fn((void*)t, b, c);
}
