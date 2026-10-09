// from server: 86% by colin
// roc 2007-08 0064ada0  unit: PAVCXTPImageManagerImageList::?$CArray  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ada0

extern "C" int __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_738430(int);

struct CXTPImageManagerImageList {
    char pad0[0x14];
    int field14;
    char pad18[0x10];
    int field28;
    int field2c;
    CXTPImageManagerImageList* Add(int* p);
};

extern "C" int __stdcall sub_77dd98(int);

CXTPImageManagerImageList* CXTPImageManagerImageList::Add(int* p)
{
    if ((*(unsigned char*)((char*)this + 0x18) & 1) == 0) {
        int v = sub_77dd98((int)((char*)this + 0x14));
        sub_630688(4, v);
    }
    int eax = field28;
    int ecx = field2c;
    if ((unsigned int)(eax + 4) > (unsigned int)ecx) {
        sub_738430(eax - ecx + 4);
    }
    int* dst = (int*)field28;
    *dst = *p;
    field28 += 4;
    return this;
}
