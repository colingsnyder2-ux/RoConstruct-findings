// from server: 35% by colin
struct DxUserInput
{
    void method(int arg);
};

struct LocalString
{
    void* data;
    LocalString(const char* s);
    ~LocalString();
};

extern "C" void* __stdcall sub_77DDB8(LocalString* self, const char* s);
extern "C" void __stdcall sub_77DDBC(LocalString* self);
extern "C" void __stdcall sub_4664A0(DxUserInput* self, int a, LocalString* b);

void DxUserInput::method(int arg)
{
    LocalString str("FileVersion");
    sub_4664A0(this, arg, &str);
    sub_77DDBC(&str);
}
