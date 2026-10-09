// from server: 86% by colin
// roc 2007-08 0068beb0  unit: CXTPTabClientWnd  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068beb0
//
// 0068beb0  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 0068beb7  7412                 je 0x68becb
// 0068beb9  8b442404             mov eax, dword ptr [esp + 4]
// 0068bebd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0068bec0  50                   push eax
// 0068bec1  51                   push ecx
// 0068bec2  ff1550ec7700         call dword ptr [0x77ec50]
// 0068bec8  c20400               ret 4
// 0068becb  e85090deff           call 0x474f20
// 0068bed0  85c0                 test eax, eax
// 0068bed2  7422                 je 0x68bef6
// 0068bed4  6a00                 push 0
// 0068bed6  e805ffffff           call 0x68bde0
// 0068bedb  8b10                 mov edx, dword ptr [eax]
// 0068bedd  8bc8                 mov ecx, eax
// 0068bedf  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0068bee5  ffd0                 call eax
// 0068bee7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068beeb  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068beee  51                   push ecx
// 0068beef  52                   push edx
// 0068bef0  ff1550ec7700         call dword ptr [0x77ec50]
// 0068bef6  c20400               ret 4

extern "C" int __stdcall ScreenToClient(void*, void*);
extern int func_00474f20();
extern int* func_0068bde0(int);

struct CXTPTabClientWnd {
    char pad[0x20];
    void* hwnd;
    char pad2[0x90];
    int flag;
    void ScreenToClientWrapper(void* pt);
};

void CXTPTabClientWnd::ScreenToClientWrapper(void* pt)
{
    if (flag != 0) {
        ScreenToClient(hwnd, pt);
        return;
    }
    if (func_00474f20() != 0) {
        int* p = func_0068bde0(0);
        int* q = (int*)(*(int (__stdcall**)(void))(*(int*)p + 0x80))();
        ScreenToClient((void*)q[0x20 / 4], pt);
    }
}
