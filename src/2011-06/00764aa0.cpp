// from server: 97% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 map_int_wp.cpp

extern "C" void __cdecl lock_xadd(int*);

struct WeakPtr {
    void* ptr;
    void* control;

    WeakPtr(const WeakPtr& other) : ptr(other.ptr), control(other.control) {
        if (control) {
            int* refCount = (int*)((char*)control + 8);
            lock_xadd(refCount);
        }
    }
};