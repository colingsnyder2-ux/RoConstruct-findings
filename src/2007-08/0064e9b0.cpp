// from server: 81% by colin
struct CXTPImageManager {
    int method(int, int, int, int, int);
};

extern "C" int __cdecl sub_648730(int, int);
extern "C" int __cdecl sub_64e7a0(int, int, int, int);

int CXTPImageManager::method(int a1, int a2, int a3, int a4, int a5)
{
    int r = sub_648730(a4, a5);
    return sub_64e7a0(a1, a2, a3, r);
}
