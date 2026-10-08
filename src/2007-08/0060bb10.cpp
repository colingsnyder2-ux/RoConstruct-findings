// from server: 54% by colin
// roc 2007-08 0060bb10  unit: CXTCaptionButtonTheme  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bb10
//
// 0060bb10  51                   push ecx
// 0060bb11  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0060bb14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060bb18  8b4064               mov eax, dword ptr [eax + 0x64]
// 0060bb1b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0060bb1e  83c11c               add ecx, 0x1c
// 0060bb21  890424               mov dword ptr [esp], eax
// 0060bb24  8910                 mov dword ptr [eax], edx
// 0060bb26  8d0424               lea eax, [esp]
// 0060bb29  50                   push eax
// 0060bb2a  e8e167fdff           call 0x5e2310
// 0060bb2f  59                   pop ecx
// 0060bb30  c20400               ret 4

struct Inner {
    char pad[0x64];
    int m_value;
};

struct Arg {
    char pad[0x20];
    int m_field20;
};

struct S_func_0060bb10 {
    char pad[0x24];
    Inner* m_inner;
    void f(Arg* arg);
};

extern "C" void __stdcall helper_5e2310(int* p);

void S_func_0060bb10::f(Arg* arg)
{
    int* p = &m_inner->m_value;
    *p = arg->m_field20;
    helper_5e2310(p);
}
