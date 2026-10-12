// from server: 44% by colin
struct ContentProvider {
    void dtor();
};

extern "C" void __cdecl operator_delete(void*);

void ContentProvider::dtor()
{
    *(void**)this = (void*)0x82df6c;
    *(void**)((char*)this + 0x10) = (void*)0x82df5c;
    *(void**)((char*)this + 0x14) = (void*)0x82df54;
    *(void**)((char*)this + 0x20) = (void*)0x82df4c;
    *(void**)((char*)this + 0x24) = (void*)0x82df3c;
    *(void**)((char*)this + 0x44) = (void*)0x82df2c;
    *(void**)((char*)this + 0x64) = (void*)0x82df1c;
    *(void**)((char*)this + 0x84) = (void*)0x82df0c;
    *(void**)((char*)this + 0xa4) = (void*)0x82defc;
    *(void**)((char*)this + 0xc4) = (void*)0x82deec;

    ((void (__thiscall*)(void*))0x595d70)(*(void**)((char*)this + 0x198));

    void* p = *(void**)((char*)this + 0x198);
    if (p) {
        ((void (__thiscall*)(void*))0x595cb0)(p);
        operator_delete(p);
    }

    ((void (__thiscall*)(void*))0x561180)((char*)this + 0x178);
    ((void (__thiscall*)(void*))0x594cb0)((char*)this + 0x170);
    ((void (__thiscall*)(void*))0x55e5f0)((char*)this + 0x154);
    ((void (__thiscall*)(void*))0x562bd0)((char*)this + 0x138);
    ((void (__thiscall*)(void*))0x594cb0)((char*)this + 0x130);
    ((void (__thiscall*)(void*))0x55a540)(this);
}
