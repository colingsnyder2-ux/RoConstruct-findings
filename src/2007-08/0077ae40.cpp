// from server: 80% by colin
extern char G_8c37bc;
extern char G_58dd70;
extern int G_8a4508;
extern int G_7af6cc;

extern "C" int __cdecl func_00725520(int, int);
extern "C" int __cdecl func_0058d750();
extern "C" int __cdecl func_00407410(int*);
extern "C" int __cdecl func_00407220();

void func_0077ae40()
{
    int local;
    G_8a4508 = (int)&G_7af6cc;
    func_00725520((int)&G_58dd70, (int)&G_8c37bc);
    local = func_0058d750();
    func_00407410(&local);
    func_00407220();
}
