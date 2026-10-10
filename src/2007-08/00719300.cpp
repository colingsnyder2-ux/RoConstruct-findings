// from server: 53% by colin
struct CXTPRibbonBar {
    char pad[0x248];
    void* field_248;
    void* field_24c;
    void construct(void*);
};

extern "C" void __stdcall SetRect(void*, int, int, int, int);

void CXTPRibbonBar::construct(void* param) {
    void* p = param;
    *(void**)this = (void*)0x7dfbd4;
    *(void**)((char*)this + 0x54) = (void*)0x7dfbc4;
    *(void**)((char*)this + 0x5c) = (void*)0x7dfb64;
    *(void**)((char*)this + 0x24c) = *(void**)((char*)p + 0x5c);
    void* vtable = *(void**)p;
    void* fn = *(void**)vtable;
    void* result = ((void* (__thiscall*)(void*))fn)(p);
    void* obj = ((void* (__thiscall*)(void*))0x63052c)(result);
    *(void**)((char*)this + 0x248) = obj;
    *(void**)((char*)obj + 0x58) = this;
    void* vt2 = *(void**)*(void**)((char*)this + 0x248);
    ((void (__thiscall*)(void*))*(void**)((char*)vt2 + 0x68))(*(void**)((char*)this + 0x248));
    void* vt3 = *(void**)*(void**)((char*)this + 0x248);
    ((void (__thiscall*)(void*, void*))*(void**)((char*)vt3 + 0x5c))(*(void**)((char*)this + 0x248), p);
    void* r = ((void* (__thiscall*)(void*))0x6a79e0)(*(void**)((char*)this + 0x24c));
    int val = *(int*)((char*)r + 0x640) + 1;
    SetRect((char*)this + 0x1ec, 2, 2, 3, val);
    *(int*)((char*)this + 0x160) = 0;
    ((void (__thiscall*)(void*, int, int))0x643c10)(this, 0x200000, 0);
    void* r2 = ((void* (__thiscall*)(void*))0x643810)(*(void**)((char*)this + 0x24c));
    ((void (__thiscall*)(void*, void*))0x6437f0)(this, r2);
}
