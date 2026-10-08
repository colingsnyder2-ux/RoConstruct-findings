// from server: 40% by colin
// roc 2007-08 0064e9e0  unit: CXTPImageManager  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064e9e0

struct CXTPImageManager
{
    int sub_64E7A0(int, int, int, int);
    int sub_648730(int*);
    int func(int, int, int);
};

int CXTPImageManager::func(int a1, int a2, int a3)
{
    int local[2];
    local[0] = 0;
    local[1] = 0;
    int r = sub_648730(local);
    return sub_64E7A0(a1, a2, a3, r);
}
