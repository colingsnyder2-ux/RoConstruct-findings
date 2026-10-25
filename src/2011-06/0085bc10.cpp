// from server: 100% by tester
// roc 2011-06 0085bc10  unit: CXTPControlSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bc10
//
// 0085bc10  8b4108               mov eax, dword ptr [ecx + 8]
// 0085bc13  c70138a5ac00         mov dword ptr [ecx], 0xaca538
// 0085bc19  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085bc1c  50                   push eax
// 0085bc1d  51                   push ecx
// 0085bc1e  ff158c01a400         call dword ptr [0xa4018c]
// 0085bc24  c3                   ret 

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
