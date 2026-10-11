// from server: 45% by colin
// roc 2008-06 0061e5f0  unit: RBX::Lua::LuaArguments  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061e5f0

struct LuaArguments {
    char pad[0x58];
    int __cdecl pushArgs(int a, float x, float y, float z);
};

extern "C" void __stdcall sub_4782d0(void* p);
extern "C" int __stdcall sub_6115b0(int a, int b, int c);
extern "C" float __stdcall sub_611780(int a, int b);
extern "C" void* __stdcall sub_513680(void* dst, void* src);
extern "C" void __stdcall sub_513220(void* dst, void* src);
extern "C" void __stdcall sub_5a8c50(int a);

extern int dword_95B1C0;

int LuaArguments::pushArgs(int a, float x, float y, float z)
{
    char buf[0x24];
    sub_4782d0(buf);
    int v = sub_6115b0(dword_95B1C0, 1, a);
    float f = sub_611780(2, a);
    char tmp[0x24];
    sub_513680(tmp, (void*)v);
    sub_513220(buf, tmp);
    *(float*)(buf + 0x24) = x;
    *(float*)(buf + 0x28) = y;
    *(float*)(buf + 0x2c) = z;
    sub_5a8c50(a);
    return 1;
}
