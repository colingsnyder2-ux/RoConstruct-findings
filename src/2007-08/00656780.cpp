// from server: 89% by colin
// roc 2007-08 00656780  unit: CXTPReportControl  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656780
//
// 00656780  8b8100020000         mov eax, dword ptr [ecx + 0x200]
// 00656786  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0065678c  52                   push edx
// 0065678d  e85ef3ffff           call 0x655af0
// 00656792  c3                   ret 

struct Inner {
    char pad[0x94];
    int value;
};

struct Outer {
    char pad[0x200];
    Inner* inner;
    void f();
};

extern "C" void __stdcall target(int);

void Outer::f()
{
    target(inner->value);
}
