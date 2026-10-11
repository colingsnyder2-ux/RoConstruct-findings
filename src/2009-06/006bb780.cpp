// from server: 65% by atomic.potato
extern "C" int __cdecl sub_719C7A(int, int, int, int, int);
extern "C" int __cdecl sub_719A4A(void*, void*);
extern "C" void* __stdcall sub_89E970(void*);
extern "C" void __cdecl sub_8AD350();
extern "C" void __cdecl sub_984BB0();

struct LuaArguments {
    int f(int);
};

int LuaArguments::f(int arg) {
    int result = sub_719C7A(*(int*)this, 0, 0x9DC274, 0xA228A8, 0);
    if (result == 0) {
        char buf[8];
        sub_89E970(buf);
        sub_719A4A(buf, (void*)0x984BB0);
    }
    int* p = (int*)(result + 0x18);
    int* vt = (int*)*p;
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))vt[3];
    return fn(p, *(int*)((char*)this + 4), arg);
}
