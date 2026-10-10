// from server: 40% by colin
struct COleException {
    void* p;
    COleException();
};

extern "C" {
    void __stdcall sub_77ddac(void*);
    void __stdcall sub_77dd94(void*, const char*);
    void* __stdcall sub_77dd98(void*);
    void __stdcall sub_77ddbc(void*);
    void __cdecl sub_427c40(void*, int);
}

COleException::COleException()
{
    void* local;
    sub_77ddac(&local);
    sub_77dd94(&local, "Pure Call Error");
    void* p = sub_77dd98(&local);
    sub_427c40(p, 1);
    *(int*)0 = *(int*)4;
    sub_77ddbc(&local);
}
