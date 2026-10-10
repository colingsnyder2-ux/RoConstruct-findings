// from server: 41% by colin
struct CArray {
    void f(const char*, int);
};

extern "C" void __stdcall sub_a42db4(void*);
extern "C" void __stdcall sub_a42de4(void*, void*);
extern "C" void __stdcall sub_a42e00(const char*);
extern "C" void __stdcall sub_a42e08(void*);

struct Helper {
    int sub_8a0620(void*, const char*, int);
};

void CArray::f(const char* name, int len)
{
    void* local = 0;
    sub_a42db4(&local);
    int result = ((Helper*)this)->sub_8a0620(&local, name, len);
    if (result) {
        sub_a42de4(&local, &local);
    } else {
        sub_a42e00("Authoring");
    }
    sub_a42e08(&local);
}
