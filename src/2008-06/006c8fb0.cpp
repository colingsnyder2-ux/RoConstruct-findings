// from server: 58% by colin
// roc 2008-06 006c8fb0  unit: CXTPReportRecordItemEditOptions  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8fb0
//
// 006c8fb0  e81d8efdff           call 0x6a1dd2
// 006c8fb5  83c464               add esp, 0x64
// 006c8fb8  c3                   ret 

struct CXTPReportRecordItemEditOptions {
    void* operator new(size_t size) {
        return ::operator new(size);
    }

    void operator delete(void* ptr) {
        ::operator delete(ptr);
    }

    void SomeFunction();
};

extern "C" __declspec(dllimport) void __stdcall CallFunction(void*);

void CXTPReportRecordItemEditOptions::SomeFunction() {
    CallFunction(this);
}
