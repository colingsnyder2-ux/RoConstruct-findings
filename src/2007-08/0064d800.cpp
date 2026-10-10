// from server: 43% by colin
// roc 2007-08 0064d800  unit: CXTPImageManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064d800

struct CXTPImageManager;

struct CXTPImageManager {
    int sub_64D4F0(int, int, int, int, int, int, int);
    int sub_64D800(int, int, int, int, int, int);
};

extern "C" int __stdcall sub_64AFA0(int, int);
extern "C" int __stdcall sub_630238(int);
extern "C" void __stdcall sub_41F680(int);
extern "C" int __stdcall sub_64D4F0_helper();

int CXTPImageManager::sub_64D800(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int local8 = 0;
    int localC = 0x788300;
    int local10 = 0;
    int local1C = 0;

    int v = sub_64AFA0(a1, (int)&local8);
    if (v == 0) {
        local1C = -1;
        localC = 0x788300;
        sub_41F680((int)&localC);
        return 0;
    }

    int r = sub_630238(v);
    int result = this->sub_64D4F0(a2, a3, a4, a5, a6, r, (int)&local8);
    local1C = -1;
    localC = 0x788300;
    sub_41F680((int)&localC);
    return result;
}
