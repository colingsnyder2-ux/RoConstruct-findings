// from server: 36% by tester
struct SurfaceDescriptor
{
    void get();
};

struct String
{
    char data[0x1c];
    String();
    String(const char*);
    String(const String&);
};

struct Exception
{
    Exception();
};

extern "C" void __stdcall sub_802458(String*, const char*);
extern "C" void __stdcall sub_802898(Exception*);
extern "C" void __stdcall sub_80245c(String*, const String*);
extern "C" void __cdecl sub_6a158c(String*, const String*);

void SurfaceDescriptor::get()
{
    String s1;
    Exception e;
    String s2;
    sub_802458(&s1, "SurfaceDescriptor::get not implemented");
    sub_802898(&e);
    sub_80245c(&s2, &s1);
    sub_6a158c(&s2, &s1);
}
