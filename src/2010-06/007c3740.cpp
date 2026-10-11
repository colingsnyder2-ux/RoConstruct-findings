// from server: 1% by atomic.potato
extern "C" __declspec(dllimport) int __stdcall GetObjectA(void*, int, void*);
extern "C" __declspec(dllimport) int __stdcall DeleteObject(void*);

extern "C" void __cdecl sub_40F660(void*);
extern "C" void __cdecl sub_4133D0(void*);
extern "C" void __cdecl sub_7A7C46(void*);
extern "C" void* __cdecl sub_7A7C5E(void*, void*, void*);
extern "C" void* __cdecl sub_7A7C82(int);
extern "C" void __cdecl sub_7A7F6A(void*, void*);
extern "C" void __cdecl sub_7A8132(void*);
extern "C" int __cdecl sub_7A814A(void*, int, int, int, int, int);
extern "C" void __cdecl sub_7A8150(void*);
extern "C" int __cdecl sub_7BF3A0(void*, int, void*);
extern "C" void __cdecl sub_7BF600(void*, int, int);
extern "C" void* __cdecl sub_7BF640(void*, int);
extern "C" void __cdecl sub_7C0D70(void*, int);
extern "C" void __cdecl sub_7C3390(void*, void*);
extern "C" void* __cdecl sub_7C35D0(void*, void*, int, int, int, int, int);
extern "C" void* __cdecl sub_7C3740(void*, int, int, int, int, int, int, int);
extern "C" void* __cdecl sub_82C5A0(void*);

extern "C" void* g_9EA0BC;
extern "C" void* g_9EA0D4;
extern "C" int g_C254D8;

struct CXTPImageManagerIcon {
    char pad_0[0x24];
    int m_nHandle;
    void* method_82C5A0();
    void* method_7C3740(int, int, int, int, int, int, int);
};

void* CXTPImageManagerIcon::method_82C5A0() {
    return sub_82C5A0(this);
}
