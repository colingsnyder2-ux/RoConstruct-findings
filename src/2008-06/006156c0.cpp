// from server: 26% by atomic.potato
struct S {
    void* field0;
    void* field4;
    void method();
};

extern "C" int __stdcall sub_802878(void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void* __cdecl sub_416110(void*, void*);
extern "C" void* __cdecl sub_56cd80();
extern "C" void __cdecl sub_59ef90();
extern "C" void __cdecl sub_615440();
extern "C" void __cdecl sub_6154e0();

void S::method()
{
    if (sub_802878(*(void**)(*(char**)this + 8))) {
        void* tmp = sub_416110((char*)this + 4, (char*)this + 4);
        sub_615440();
        sub_59ef90();
        sub_56cd80();
        *(void**)this = sub_56cd80();
    }
    sub_6154e0();
}
