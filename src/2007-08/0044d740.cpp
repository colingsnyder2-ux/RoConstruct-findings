// from server: 35% by colin
struct ExitCommand {
    void execute();
};

struct String {
    void* data;
    int len;
    int cap;
};

extern "C" void __stdcall sub_40A730(String*);
extern "C" void __stdcall sub_40AA00(String*, const char*, String*);
extern "C" void __stdcall sub_44CC10(String*, int, void*);
extern "C" void __stdcall sub_6308EC(String*, int);
extern "C" void __stdcall sub_62FE2A(String*);
extern "C" void __stdcall sub_401040(String*);
extern "C" void __stdcall sub_630A1E();

extern "C" void* __stdcall sub_77DD98();
extern "C" void __stdcall sub_77DDBC(String*);

void ExitCommand::execute()
{
    String s1;
    String s2;
    String s3;
    void* p;

    sub_40A730(&s1);
    sub_40AA00(&s2, "/AbuseReport/InGameChat.aspx", &s1);
    p = sub_77DD98();
    sub_44CC10(&s3, 0x7b, p);
    sub_77DDBC(&s3);
    sub_77DDBC(&s2);
    sub_6308EC(&s1, *(int*)((char*)this + 0x78));
    sub_62FE2A(&s1);
    sub_401040(&s1);
    sub_630A1E();
}
