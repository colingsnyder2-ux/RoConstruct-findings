// from server: 17% by atomic.potato
struct CXTPPropExchangeEnumerator {
    void* vtable;
    void* field_4;
    char pad_8[4];
    unsigned int field_c;
    void* GetNext(unsigned int* pIndex);
};

extern "C" {
    void __stdcall sub_a42db4(void*);
    void* __stdcall sub_a42dc8(void*);
    void __stdcall sub_a42dbc(void*, const char*, void*);
    void __stdcall sub_a42e08(void*);
}

void* CXTPPropExchangeEnumerator::GetNext(unsigned int* pIndex) {
    char buf[8];
    sub_a42db4(buf);
    unsigned int idx = *pIndex - 1;
    void* p = sub_a42dc8((char*)this + 8);
    sub_a42dbc(buf, "%s%i", p);
    void* vt = *(void**)field_4;
    void* p2 = sub_a42dc8(buf);
    void* result = ((void* (__thiscall*)(void*, void*))*(void**)((char*)vt + 0x70))(field_4, p2);
    (*pIndex)++;
    if (*pIndex > field_c)
        *pIndex = 0;
    sub_a42e08(buf);
    return result;
}
