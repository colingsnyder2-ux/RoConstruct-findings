// from server: 49% by colin
struct CXTPCommandBar {
    char pad[0xf8];
    void* field_f8;
    int method_6439b0();
    void* method_646570();
    void* method_643950();
    int method_63023e();
    int method_67a9a0(void*, void*);
    int method_646c00(void*, void*, void*);
};

extern "C" int __stdcall SendMessageA(void*, unsigned int, void*, void*);

int CXTPCommandBar::method_646c00(void* a, void* b, void* c)
{
    int result = method_67a9a0(a, b);
    if (result != 0)
        return method_63023e();
    if (method_6439b0() != 0)
        return method_63023e();
    void* p = method_646570();
    int msgResult;
    SendMessageA(*(void**)((char*)p + 0x20), 0x2859, &msgResult, (void*)result);
    if (msgResult == 1)
        return method_63023e();
    void* q = method_643950();
    if (*(int*)((char*)q + 0x11c) != 0) {
        int (__thiscall *fn)(void*, void*, void*) = *(int (__thiscall **)(void*, void*, void*))((*(int*)result) + 0xec);
        return fn((void*)result, b, c);
    } else {
        int (__thiscall *fn)(void*, void*, void*) = *(int (__thiscall **)(void*, void*, void*))((*(int*)result) + 0xf4);
        return fn((void*)result, b, c);
    }
}
