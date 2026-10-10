// from server: 35% by colin
struct CXTPControlGallery {
    bool method_6b3590();
    void method_42f350(void*, void*, void*, void*);
    int method_6b66b0(void*);
    void* method_6b3d70(int);
    void method_6921c0();

    void method_6b75d0(void* arg0, void* arg1, void* arg2, void* arg3);
};

extern "C" void* __stdcall sub_77ddb8(void*, const char*);

void CXTPControlGallery::method_6b75d0(void* arg0, void* arg1, void* arg2, void* arg3) {
    if (arg0 == 0 || arg1 == 0 || arg2 == 0) {
        sub_77ddb8(arg3, (const char*)0x785954);
        return;
    }
    if (method_6b3590()) {
        method_42f350(arg0, arg1, arg2, arg3);
        return;
    }
    int v = method_6b66b0(arg0);
    if (v == -1) {
        sub_77ddb8(arg3, (const char*)0x785954);
        return;
    }
    void* p = method_6b3d70(v);
    *(int*)arg2 = *(int*)((char*)p + 0x20) + 1;
    *(int*)arg1 = *(int*)arg0;
    *(int*)((char*)arg1 + 4) = *(int*)((char*)arg0 + 4);
    *(int*)((char*)arg1 + 8) = *(int*)((char*)arg0 + 8);
    *(int*)((char*)arg1 + 12) = *(int*)((char*)arg0 + 12);
    void* q = method_6b3d70(v);
    ((void (__thiscall*)(void*))0x6921c0)(q);
}
