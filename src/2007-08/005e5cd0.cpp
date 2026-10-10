// from server: 93% by colin
struct NewNullTool {
    char pad[0x20];
    char cursor[0x1c];
    char hasWaypoint;
    void method1(int*);
    bool method2(char*);
};

extern "C" int __stdcall sub_005e3f10(int*, char*);
extern "C" void __stdcall sub_0077e62c_assign(char*, const char*);

void NewNullTool::method1(int* a)
{
    char* p = (char*)this + 0x40;
    if (sub_005e3f10(a, p)) {
        if (method2(p)) {
            sub_0077e62c_assign((char*)this + 0x20, (const char*)0x7acf38);
            *(char*)((char*)this + 0x3c) = 1;
            return;
        }
    }
    sub_0077e62c_assign((char*)this + 0x20, (const char*)0x7bd260);
    *(char*)((char*)this + 0x3c) = 0;
}
