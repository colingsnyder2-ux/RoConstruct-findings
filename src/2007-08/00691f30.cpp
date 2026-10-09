// from server: 25% by colin
// roc 2007-08 00691f30  unit: seg_00690000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691f30

extern "C" void* __cdecl sub_73832e(unsigned int);
extern "C" void __fastcall sub_691e80(void*);

void* sub_691f30() {
    void* p = sub_73832e(0x2c);
    if (p != 0) {
        sub_691e80(p);
    }
    return p;
}
