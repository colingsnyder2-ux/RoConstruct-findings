// from server: 63% by colin
struct ChatOutput {
    void __cdecl f(const char* a, const char* b, const char* c, const char* d, const char* e, const char* f, const char* g, const char* h);
};

extern "C" {
    void __stdcall begin_string(void* result, void* str);
    void __stdcall end_string(void* result, void* str);
    void __cdecl helper_64fad0(void* a, const void* b, const void* c, const void* d, const void* e, const void* f, const void* g, const void* h, const void* i);
}

void ChatOutput::f(const char* a, const char* b, const char* c, const char* d, const char* e, const char* f, const char* g, const char* h)
{
    char buf1[8];
    char buf2[8];
    char buf3[8];
    char flag = 0;

    begin_string(buf1, (void*)this);
    end_string(buf2, (void*)this);
    begin_string(buf3, (void*)this);

    helper_64fad0(buf1, a, b, c, d, e, f, g, h);
}
