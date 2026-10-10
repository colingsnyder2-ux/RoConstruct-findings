// from server: 84% by colin
struct CXTPMenuBarMDIMenus {
    char pad[0x20];
    int Compare(int* p);
};

extern "C" int __stdcall sub_634a60(int a, int* b);

int CXTPMenuBarMDIMenus::Compare(int* p)
{
    int result;
    int r = sub_634a60(*p, &result);
    return (r != 0) ? result : 0;
}
