// from server: 34% by colin
struct S_func_00444dd0 {
    char pad[0x130];
    int m_field130;
    void f(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" int __stdcall sub_8023f4(int);
extern "C" void __stdcall sub_802468(int);
extern "C" void* __stdcall sub_802464(int, int, int);
extern "C" void __stdcall sub_802404(void*, int);
extern "C" void __stdcall sub_802408(void*);

void sub_415350(void*, void*);
void sub_58f6c0(void*, void*);
void sub_413a70(void*);
void sub_6a067a(void*);
void sub_443e50(void*);
void sub_55b6a0(void*, void*, void*);
void sub_443d60(void*);
int sub_4436e0(void*);
void sub_444cf0(void*, void*);
void sub_4147c0(void*);
void sub_443cf0(void*);

void* sub_40ad20();
void* sub_40ad80();
void* sub_444550();
void* sub_40b6c0();
void* sub_40ba70();
void* sub_40bae0();
void* sub_40c760();
void* sub_40be10();
void* sub_40c0d0();
void* sub_40c3c0();

void S_func_00444dd0::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf1[0x100];
    char buf2[0x100];
    int local1 = 0;
    int local2 = 0;
    int local3 = 0;
    void* p = 0;

    if (sub_8023f4((int)buf1) == 0) {
        sub_802468((int)buf1);
        return;
    }

    void* h = sub_802464(0x21, 0x40, 1);
    sub_802404(buf2, (int)h);

    sub_415350(buf2, buf1);

    sub_58f6c0(buf2, &local2);
    p = *(void**)&local2;
    local2 = 0;

    if (local3) {
        sub_413a70((void*)local3);
        sub_6a067a((void*)local3);
    }

    sub_443e50(&local1);
    sub_55b6a0(this, p, &local1);
    sub_443d60(&local1);

    m_field130 = sub_4436e0(this);
    if (m_field130) {
        sub_444cf0((void*)m_field130, sub_40ad20());
        sub_444cf0((void*)m_field130, sub_40ad80());
        sub_444cf0((void*)m_field130, sub_444550());
        sub_444cf0((void*)m_field130, sub_40b6c0());
        sub_444cf0((void*)m_field130, sub_40ba70());
        sub_444cf0((void*)m_field130, sub_40bae0());
        sub_444cf0((void*)m_field130, sub_40c760());
        sub_444cf0((void*)m_field130, sub_40be10());
        sub_444cf0((void*)m_field130, sub_40c0d0());
        sub_444cf0((void*)m_field130, sub_40c3c0());
    }

    sub_443cf0(&local1);

    if (p) {
        sub_413a70(p);
        sub_6a067a(p);
    }

    sub_4147c0(buf2);
    sub_802408(buf1);
    sub_802468((int)buf1);
}
