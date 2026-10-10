// from server: 59% by colin
struct CNameItem {
    void func(int);
};

extern "C" {
    int __stdcall ClientToScreen(int, int);
    int __stdcall SendMessageA(int, unsigned int, int, int);
    int __stdcall WindowFromPoint(int, int);
}

int __fastcall sub_659170(int, int, int);
int __fastcall sub_654ba0(int, int);
int __fastcall sub_65ad10(int, int, int, int, int, int, int);
int __cdecl sub_6301c0(int);
int __cdecl sub_6d0fc0(int);
int __cdecl sub_630202(int);

void CNameItem::func(int arg) {
    int local8;
    int local4;
    int* p = (int*)arg;
    int* ebp = (int*)p[1];
    int* edi = (int*)this;
    int* eax = (int*)*edi;
    int (*fn)(int) = (int (*)(int))eax[0x13c / 4];
    if (fn(arg) == 0) goto end;
    if (ebp[0x184 / 4] != 0) goto end;
    eax = (int*)ebp[0x1a0 / 4];
    if (eax[0x64 / 4] == (int)edi) goto end;
    sub_659170((int)ebp, arg, 0);
    local8 = p[0x24 / 4];
    local4 = p[0x28 / 4];
    ClientToScreen(ebp[0x20 / 4], (int)&local8);
    WindowFromPoint(local8, local4);
    sub_6301c0(0);
    sub_6d0fc0(0);
    int ebx = sub_630202(0);
    if (ebx == 0) goto end2;
    if (*(int*)(ebx + 0x64) != (int)edi) goto end2;
    int ecx = p[0xc / 4];
    int r = sub_654ba0((int)edi, ecx);
    if (*(int*)(r + 0x40) == 0) {
        int* edx = (int*)*edi;
        int (*fn2)() = (int (*)())edx[0x140 / 4];
        fn2();
    } else {
        SendMessageA(*(int*)(ebx + 0x20), 0xb1, 0, -1);
        SendMessageA(*(int*)(ebx + 0x20), 0xb7, 0, 0);
    }
end2:
end:
    int edx = p[0xc / 4];
    int eax2 = p[8 / 4];
    sub_65ad10((int)ebp, eax2, (int)edi, edx, -3, (int)(p + 0x24 / 4), -1);
}
