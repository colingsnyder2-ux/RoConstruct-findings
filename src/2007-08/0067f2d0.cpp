// from server: 100% by colin
// roc 2007-08 0067f2d0  unit: CXTPControlSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f2d0
//
// 0067f2d0  8b4108               mov eax, dword ptr [ecx + 8]
// 0067f2d3  c701e0ea7c00         mov dword ptr [ecx], 0x7ceae0
// 0067f2d9  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067f2dc  50                   push eax
// 0067f2dd  51                   push ecx
// 0067f2de  ff1528d17700         call dword ptr [0x77d128]
// 0067f2e4  c3                   ret 

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
