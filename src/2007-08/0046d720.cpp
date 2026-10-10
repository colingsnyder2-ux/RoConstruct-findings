// from server: 55% by colin
// roc 2007-08 0046d720  unit: RBX::LDraw2Lua::LuaWriter  size: 201 bytes

extern "C" __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);
extern "C" __declspec(dllimport) char* __cdecl strstr(const char*, const char*);

extern "C" void* __stdcall glGetString(unsigned int);

struct MyString {
    void* rep;
    MyString(const char*);
    ~MyString();
};

extern "C" void* __stdcall sub_46D600();
extern "C" int __stdcall sub_5085B0(void*, void*);

extern unsigned char byte_8BCF5B;
extern int dword_8BD9D8;
extern int dword_8BD9E0;
extern int dword_8BD9D4;

void sub_46D720()
{
    void* h = GetModuleHandleA("opengl32.dll");
    void* p = GetProcAddress(h, "glGetString");
    if (p == 0) {
        byte_8BCF5B = 0;
        return;
    }
    if (dword_8BD9D8 == 0 || dword_8BD9E0 == 0 || dword_8BD9D4 == 0) {
        byte_8BCF5B = 0;
        return;
    }
    void* s = sub_46D600();
    MyString str("GL_ARB_vertex_buffer_object");
    int r = sub_5085B0(s, &str);
    byte_8BCF5B = (unsigned char)r;
    str.~MyString();
}
