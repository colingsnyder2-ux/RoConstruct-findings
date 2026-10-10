// from server: 70% by colin
struct Accoutrement {
    int computeDesiredState();
};

extern "C" int __cdecl sub_5D1AE0();
extern "C" int __cdecl sub_57D570(Accoutrement*);
extern "C" int __cdecl sub_5A56B0(int);
extern "C" int __cdecl sub_5A5C60(int);
extern "C" int __cdecl sub_486830(Accoutrement*);
extern "C" int __cdecl sub_5827F0(Accoutrement*, int, int);

int Accoutrement::computeDesiredState() {
    int edi;
    if (sub_5D1AE0() == 0) {
        edi = 0;
    } else if ((unsigned char)sub_57D570(this) == 0) {
        edi = 1;
    } else {
        int eax = sub_5A56B0(*(int*)((char*)this + 0xbc));
        if (eax == 0) {
            edi = 2;
        } else {
            int r = sub_5A5C60(eax);
            edi = (r == 0) ? 4 : 0;
        }
    }
    int eax2 = sub_486830(this);
    sub_5827F0(this, edi, eax2);
    return edi;
}
