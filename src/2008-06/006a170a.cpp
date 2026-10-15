// from server: 61% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD




extern "C" int __cdecl _decode_pointer(void*);
extern "C" void* __cdecl _encode_pointer(int);
extern "C" void __cdecl _onexit(void*);

extern "C" int __stdcall sub_6a1fbc(int);
extern "C" int __stdcall sub_6a2001();
extern "C" int __stdcall sub_6a2046(int);
extern "C" int __stdcall sub_6a204c(int);
extern "C" int __stdcall sub_6a17a6();

extern int dword_97F70C;
extern int dword_97F708;
extern int (__stdcall *dword_802690)(int);
extern int (__stdcall *dword_802694)(int);
extern int (__stdcall *dword_80269C)(int, int*, int*);

int __stdcall sub_6a170a(int a1)
{
    int v1;
    int v2;
    int v3;

    sub_6a1fbc(0x14);
    v1 = dword_802690(dword_97F70C);
    if (v1 == -1)
    {
        dword_802694(a1);
        sub_6a2001();
        return 0;
    }
    sub_6a204c(8);
    v2 = dword_802690(dword_97F70C);
    v3 = dword_802690(dword_97F708);
    v1 = dword_80269C(a1, &v2, &v3);
    v1 = sub_6a2046(v1);
    dword_97F70C = dword_80269C(v2, 0, 0);
    dword_97F708 = dword_80269C(v3, 0, 0);
    sub_6a17a6();
    sub_6a2001();
    return v1;
}
