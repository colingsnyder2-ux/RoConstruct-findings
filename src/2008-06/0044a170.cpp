// from server: 75% by atomic.potato
struct CRbxDocTemplate
{
    int f(int a, int b);
};

extern "C" void __cdecl sub_449bf0(int, int);
extern "C" int __cdecl sub_6a123e(CRbxDocTemplate *, int, int);

int CRbxDocTemplate::f(int a, int b)
{
    sub_449bf0(0x96dbe0, 1);
    return sub_6a123e(this, a, b);
}
