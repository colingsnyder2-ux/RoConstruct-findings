// from server: 100% by tester
// roc 2010-06 007fe200  unit: CXTPControlSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe200
//
// 007fe200  8b4108               mov eax, dword ptr [ecx + 8]
// 007fe203  c70148fca500         mov dword ptr [ecx], 0xa5fc48
// 007fe209  8b4904               mov ecx, dword ptr [ecx + 4]
// 007fe20c  50                   push eax
// 007fe20d  51                   push ecx
// 007fe20e  ff15c8a09e00         call dword ptr [0x9ea0c8]
// 007fe214  c3                   ret 

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
