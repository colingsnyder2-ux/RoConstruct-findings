// from server: 100% by colin
// roc 2007-08 0044cf70  unit: CRobloxDHtmlDialog  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cf70
//
// 0044cf70  80b9ac01000000       cmp byte ptr [ecx + 0x1ac], 0
// 0044cf77  7507                 jne 0x44cf80
// 0044cf79  6a01                 push 1
// 0044cf7b  e800080e00           call 0x52d780
// 0044cf80  c3                   ret 

extern void __stdcall func_0052d780(int);

struct S_func_0044cf70 {
    char pad[0x1ac];
    char m_flag;
    void f();
};

void S_func_0044cf70::f()
{
    if (m_flag == 0)
        func_0052d780(1);
}
