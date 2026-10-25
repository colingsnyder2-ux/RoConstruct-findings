// from server: 100% by tester
// roc 2008-06 006f6a30  unit: CXTPControlSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6a30
//
// 006f6a30  8b4108               mov eax, dword ptr [ecx + 8]
// 006f6a33  c70188a48500         mov dword ptr [ecx], 0x85a488
// 006f6a39  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f6a3c  50                   push eax
// 006f6a3d  51                   push ecx
// 006f6a3e  ff15b0208000         call dword ptr [0x8020b0]
// 006f6a44  c3                   ret 

struct CXTPControlSelector {
    void* field0;
    void* field4;
    void* field8;
    void Release();
};

extern "C" void* (__stdcall *SelectObject)(void*, void*);

void CXTPControlSelector::Release()
{
    void* p8 = field8;
    field0 = (void*)0x7ceae0;
    void* p4 = field4;
    SelectObject(p4, p8);
}
