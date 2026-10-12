// from server: 87% by colin
extern "C" void* __cdecl sub_6A0926();
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct ReportAbuseVerb {
    void method(int);
};

void ReportAbuseVerb::method(int arg) {
    void* p = sub_6A0926();
    int* q = *(int**)((char*)p + 4);
    int* r = *(int**)((char*)q + 0x20);
    int hwnd = *(int*)((char*)r + 0x20);
    PostMessageA((void*)hwnd, 0x111, 0x8100, 0);
}
