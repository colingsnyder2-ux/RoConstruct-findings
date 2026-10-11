// from server: 75% by colin
// roc 2007-08 0064c940  unit: CXTPImageManagerIconSet  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064c940
//
// 0064c940  8bd1                 mov edx, ecx
// 0064c942  56                   push esi
// 0064c943  8d7250               lea esi, [edx + 0x50]
// 0064c946  8bce                 mov ecx, esi
// 0064c948  e8b3bcffff           call 0x648600
// 0064c94d  85c0                 test eax, eax
// 0064c94f  7407                 je 0x64c958
// 0064c951  8bca                 mov ecx, edx
// 0064c953  e868f2ffff           call 0x64bbc0
// 0064c958  8bc6                 mov eax, esi
// 0064c95a  5e                   pop esi
// 0064c95b  c3                   ret 

struct CXTPImageManagerIconSet {
    char pad[0x50];
    int field_50;

    int* sub_64c940();
};

extern "C" int __fastcall sub_648600(int* p);
extern "C" void __fastcall sub_64bbc0(CXTPImageManagerIconSet* self);

int* CXTPImageManagerIconSet::sub_64c940()
{
    int* p = &this->field_50;
    if (sub_648600(p) != 0)
        sub_64bbc0(this);
    return p;
}
