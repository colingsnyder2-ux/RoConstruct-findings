// from server: 72% by colin
extern "C" int __stdcall sub_62FC6E();
extern "C" int __stdcall sub_62FC68(int);

int __stdcall sub_401000(int a)
{
    if (a == 0x8007000E)
        a = sub_62FC6E();
    return sub_62FC68(a);
}
