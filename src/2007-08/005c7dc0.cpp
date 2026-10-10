// from server: 66% by colin
extern "C" {
int __cdecl _errno();
int __cdecl ferror(void*);
char* __cdecl strerror(int);
}

extern "C" int __stdcall sub_5bda90(int, int);
extern "C" int __stdcall sub_5be8e0(int, const char*);
extern "C" int __stdcall sub_5c7a20(int);
extern "C" int __stdcall sub_5bd950(int, int);
extern "C" int __stdcall sub_5bd590(int, int);
extern "C" int __stdcall sub_5bd740(int, int);
extern "C" int __stdcall sub_5c7560();

extern "C" int (__stdcall *off_77e83c)(void*);
extern "C" int (__stdcall *off_77e840)(int);
extern "C" int (__stdcall *off_77e850)();

extern const char aFileIsAlreadyClosed[];
extern const char aHresultDS[];

struct lua_exception {
    int __cdecl f(int a);
};

int lua_exception::f(int a)
{
    int edi;
    int ebx;
    int eax;

    edi = *(int*)sub_5bda90(a, -10003);
    if (edi == 0) {
        sub_5be8e0(a, aFileIsAlreadyClosed);
    }
    ebx = sub_5c7a20(a);
    eax = off_77e83c((void*)edi);
    if (eax != 0) {
        int* p = (int*)off_77e850();
        sub_5be8e0(a, aHresultDS);
        return 0;
    }
    if (ebx != 0) {
        return 1;
    }
    if (sub_5bd950(a, -10004) != 0) {
        sub_5bd590(a, 0);
        sub_5bd740(a, -10003);
        sub_5c7560();
    }
    return 0;
}
