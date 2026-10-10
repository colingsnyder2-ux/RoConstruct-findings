// from server: 39% by colin
extern "C" {
int __cdecl _errno();
void __cdecl clearerr(void*);
int __cdecl ferror(void*);
int __cdecl getc(void*);
char* __cdecl strerror(int);
int __cdecl ungetc(int, void*);
}

struct S {
    int f(int, int);
};

int S::f(int a, int b)
{
    int ebx;
    int ebp;
    int edi;
    int esi;
    int tmp;

    edi = a;
    ebx = ((int (__cdecl*)())0x5bd580)();
    ebx = ebx - 1;
    tmp = ebx;
    ((void (__cdecl*)(int))0x77e824)(edi);
    if (ebx != 0) {
        ebx = ((int (__cdecl*)(int))0x5c7a20)(esi);
        ebp = b + 1;
        if (((int (__cdecl*)(int))0x77e83c)(edi) == 0) {
            if (ebx == 0) {
                ((void (__cdecl*)(int, int))0x5bd590)(-2, esi);
                ((void (__cdecl*)(int))0x5bdb50)(esi);
            }
            return ebp - tmp;
        }
        edi = *((int*)((int (__cdecl*)())0x77e850)());
        ((void (__cdecl*)(int))0x5bdb50)(esi);
        ((void (__cdecl*)(int))0x77e840)(edi);
        ((void (__cdecl*)(int, int, int))0x5bdc90)(esi, 0x78a05c, edi);
        ((void (__cdecl*)(int, int))0x5bdb90)(esi, edi);
        return 3;
    }
    ((void (__cdecl*)(int, int, int))0x5be970)(esi, ebx + 0x14, 0x7b99d0);
    ebp = b;
    ebx = 1;
    tmp = tmp - 1;
    while (ebx != 0) {
        if (((int (__cdecl*)(int, int))0x5bd770)(esi, ebp) == 3) {
            if (((int (__cdecl*)(int, int))0x5bd910)(esi, ebp) == 0) {
                ebx = ((int (__cdecl*)())0x77e834)();
                ((void (__cdecl*)(int, int))0x77e838)(ebx, edi);
                ((void (__cdecl*)(int, int, int))0x5bdbb0)(esi, 0, 0);
                ebx = (ebx != -1);
            } else {
                ebx = ((int (__cdecl*)(int))0x5c7af0)(esi);
            }
        } else {
            ebx = ((int (__cdecl*)(int, int, int))0x5bd980)(esi, ebp, 0);
            if (ebx == 0 || *((char*)ebx) != '*') {
                ((void (__cdecl*)(int, int, int))0x5bf180)(esi, ebp, 0x7b99c0);
            }
            switch (*((char*)ebx + 1)) {
            case 'a':
                ((void (__cdecl*)(int, int))0x5c7af0)(esi, edi);
                ebx = 1;
                break;
            case 'l':
                ebx = ((int (__cdecl*)(int))0x5c7a20)(esi);
                break;
            case 'n':
                ebx = ((int (__cdecl*)(int, int))0x5c79e0)(edi, esi);
                break;
            default:
                ((void (__cdecl*)(int, int, int))0x5bf180)(esi, ebp, 0x7b99b0);
                return 0;
            }
        }
        ebp = ebp + 1;
        if (tmp != 0) {
            tmp = tmp - 1;
        } else {
            break;
        }
    }
    if (((int (__cdecl*)(int))0x77e83c)(edi) == 0) {
        if (ebx == 0) {
            ((void (__cdecl*)(int, int))0x5bd590)(-2, esi);
            ((void (__cdecl*)(int))0x5bdb50)(esi);
        }
        return ebp - tmp;
    }
    edi = *((int*)((int (__cdecl*)())0x77e850)());
    ((void (__cdecl*)(int))0x5bdb50)(esi);
    ((void (__cdecl*)(int))0x77e840)(edi);
    ((void (__cdecl*)(int, int, int))0x5bdc90)(esi, 0x78a05c, edi);
    ((void (__cdecl*)(int, int))0x5bdb90)(esi, edi);
    return 3;
}
