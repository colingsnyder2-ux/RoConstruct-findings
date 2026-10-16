// from server: 52% by colin
struct String {
    char data[28];
    ~String();
};

struct Argument {
    unsigned int prefix[2];
    String text;
    unsigned int suffix[6];
};

extern bool __cdecl func_0060a2f0();
extern void __cdecl func_00418fb0(void*, const Argument*);
extern void __cdecl func_005944e0(void*, const Argument*);
extern void __cdecl func_00618a40(void*, void*);
extern void __cdecl func_00419400(void*, void*, void*);
extern void __cdecl func_0041a530(void*);
extern void __cdecl func_00594470(void*);
extern void __cdecl func_0041c860();

struct S {
    void func_0041cb30(int, int, int, int, int, int, int, int, int);
};

void S::func_0041cb30(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    Argument argument;
    argument.prefix[0] = 0;
    func_005944e0(&argument, 0);
    func_00618a40(&argument, this);
    func_00419400(0, (void*)0x417b40, &argument);
    func_0041c860();
    func_0041a530(*(void**)0x96cc4c);
    func_00594470(&argument);
}
