// from server: 8% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* ctrl;
};

struct String {
    char pad[0x1c];
};

struct Sub_00623470 {
    SharedPtr* method(SharedPtr* result, String* s);
};

struct Sub_00623670 {
    SharedPtr* method(SharedPtr* result, String* s);
};

struct Sub_00623510 {
    void method(String* s);
};

struct Sub_00600ad0 {
    void method(int);
};

struct S_00623720 {
    char pad[0x114];
    int field114;
    int field118;
    void method(int, int, int, int, int, int, int, int, int, int);
};

extern "C" void __cdecl sub_005d67e0(String* s, const char* str, int flag);
extern "C" void __cdecl sub_005d6f00(String* s, float a, float b);
extern "C" void __cdecl sub_005d56f0(void* p);

void S_00623720::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    String s1;
    String s2;
    String s3;
    String s4;
    SharedPtr sp1;
    SharedPtr sp2;
    SharedPtr sp3;
    SharedPtr sp4;
    SharedPtr sp5;
    SharedPtr sp6;
    SharedPtr sp7;
    SharedPtr sp8;

    sub_005d67e0(&s1, (const char*)0x7c4828, 1);

    sub_005d67e0(&s2, (const char*)0x7c4814, 1);

    sub_005d6f00(&s3, 0.0f, 0.0f);

    sub_005d56f0(&s1);
    sub_005d56f0(&s2);
    sub_005d56f0(&s3);
    sub_005d56f0(&s4);
}
