// from server: 56% by colin
// roc 2007-08 00648740  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648740
//
// 00648740  8bd1                 mov edx, ecx
// 00648742  8d4a60               lea ecx, [edx + 0x60]
// 00648745  e8b6feffff           call 0x648600
// 0064874a  85c0                 test eax, eax
// 0064874c  8bc1                 mov eax, ecx
// 0064874e  7403                 je 0x648753
// 00648750  8d4230               lea eax, [edx + 0x30]
// 00648753  c3                   ret 

struct CXTPCommandBar {
    char pad[0x30];
    int field30;
    char pad2[0x60 - 0x30 - 4];
    int field60;
    int getSomething();
};

int __fastcall sub_648600(int* p);

int CXTPCommandBar::getSomething()
{
    int* p = &this->field60;
    int r = sub_648600(p);
    if (r == 0)
        return (int)p;
    return (int)&this->field30;
}
