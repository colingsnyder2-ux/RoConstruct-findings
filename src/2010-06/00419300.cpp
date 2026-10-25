// from server: 64% by atomic.potato
// roc 2010-06 00419300  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00419300
//
// 00419300  8b442404             mov eax, dword ptr [esp + 4]
// 00419304  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 0041930a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041930e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00419311  8b11                 mov edx, dword ptr [ecx]
// 00419313  8b92bc010000         mov edx, dword ptr [edx + 0x1bc]
// 00419319  50                   push eax
// 0041931a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041931e  50                   push eax
// 0041931f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00419323  50                   push eax
// 00419324  ffd2                 call edx
// 00419326  c21000               ret 0x10

struct CRBXHTMLControlSite_XDocHostUIHandler {
    void f(int, int, int, int);
};

void CRBXHTMLControlSite_XDocHostUIHandler::f(int a1, int a2, int a3, int a4)
{
    int* p = *(int**)(a1 - 0xcc);
    int* q = *(int**)((char*)p + 0x20);
    int* vt = *(int**)q;
    void (__stdcall *fn)(int*, int, int, int) = *(void (__stdcall**)(int*, int, int, int))((char*)vt + 0x1bc);
    fn(q, a2, a3, a4);
}
