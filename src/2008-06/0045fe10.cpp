// roc 2008-06 0045fe10  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045fe10
//
// 0045fe10  b89ca38100           mov eax, 0x81a39c
// 0045fe15  c3                   ret 

struct CRuntimeClass;
extern CRuntimeClass classCRobloxWnd;

struct CRobloxWnd {
    CRuntimeClass* GetRuntimeClass();
};

CRuntimeClass* CRobloxWnd::GetRuntimeClass()
{
    return &classCRobloxWnd;
}
