// from server: 45% by colin
struct CArray {
    char pad[0x40];
    void* m_array;
    void RemoveAt(int index, int count);
    void SetSize(int size);
    void FreeExtra();
    void InsertAt(int index, int count);
    void RemoveAll();
};

extern "C" {
    void* __stdcall sub_77ddb8(void* dst, const void* src);
    int __stdcall sub_77e160(void* handle, int a, int b);
    void __stdcall sub_77d55c(void* p, int v);
    void* __stdcall sub_77dd98(void* p);
    int __stdcall sub_77dcb8(void* p, void* q);
    void __stdcall sub_77d434(void* p, void* q);
    void __stdcall sub_77ddbc(void* p);
}

void CArray::RemoveAll()
{
    char buf[0x10];
    sub_77ddb8(buf, &m_array);
    int h = sub_77e160(buf, 9, 0);
    if (h != -1) {
        sub_77d55c(buf, h);
    }
    void* q = sub_77dd98(buf);
    if (sub_77dcb8(&m_array, q)) {
        RemoveAt(3, 1);
        sub_77d434(&m_array, buf);
        SetSize(3);
        FreeExtra();
    }
    sub_77ddbc(buf);
}
