// from server: 55% by colin
struct Geometry {
    char pad[0x2c];
    void* field_2c;
};

struct Ball {
    char pad0[5];
    unsigned char flags5;
    char pad6;
    unsigned char flags7;
    void* field8;
    char pad_c[4];
    void* field10;
    char pad14[8];
    int field1c;
    char pad20[0xc];
    void* field2c;
    char pad30[0x98];
    void* fieldc8;

    bool updateBulletCollisionData();
};

extern "C" void __cdecl sub_60F010(void*, void*);
extern "C" void* __cdecl sub_610040(void*, int, void*);
extern "C" void* __stdcall sub_77E848(void*, int);

bool Ball::updateBulletCollisionData()
{
    int local1c = 0;
    int local10 = 0;

    void* p8 = this->field8;
    if (p8 != 0) {
        if ((*(unsigned char*)((char*)p8 + 5) & 3) != 0) {
            sub_60F010(this->fieldc8, p8);
        }
    }

    p8 = this->field8;
    if (p8 == 0) goto label_26b;
    if ((*(unsigned char*)((char*)p8 + 6) & 8) != 0) goto label_26b;

    {
        void* ecx = this->fieldc8;
        void* edx = *(void**)((char*)ecx + 0xc8);
        void* esi = sub_610040(p8, 3, edx);
        if (esi == 0) goto label_26b;
        if (*(int*)((char*)esi + 8) != 4) goto label_26b;

        {
            void* eax = *(void**)esi;
            void* edi_fn = *(void**)0x77e848;
            eax = (char*)eax + 0x10;
            void* ebx = sub_77E848(eax, 0x6b);
            int ebx_i = (ebx != 0) ? 1 : 0;

            void* ecx2 = *(void**)esi;
            ecx2 = (char*)ecx2 + 0x10;
            void* eax2 = sub_77E848(ecx2, 0x76);
            int eax_i = (eax2 != 0) ? 1 : 0;

            local10 = eax_i;

            if (ebx_i != 0 || eax_i != 0) {
                unsigned char cl = this->flags5;
                unsigned char dl = (unsigned char)eax_i;
                dl = dl + dl;
                dl = dl | (unsigned char)ebx_i;
                dl = dl + dl;
                dl = dl + dl;
                dl = dl + dl;
                cl = cl & 0xe7;
                dl = dl | cl;
                this->flags5 = dl;

                void* ecx3 = this->fieldc8;
                void* edx3 = *(void**)((char*)ecx3 + 0x2c);
                this->field2c = edx3;
                *(void**)((char*)ecx3 + 0x2c) = this;
            }

            if (ebx_i == 0) {
                if (eax_i != 0) goto label_2a7;
            } else {
                if (eax_i == 0) {
                    return true;
                }
            }
        }
    }

label_26b:
    {
        int edi = this->field1c;
        if (edi != 0) {
            void* ebx = this->fieldc8;
            int esi = edi << 4;
            do {
                void* eax = this->field10;
                esi -= 0x10;
                eax = (char*)eax + esi;
                edi -= 1;
                if (*(int*)((char*)eax + 8) >= 4) {
                    void* eax2 = *(void**)eax;
                    if ((*(unsigned char*)((char*)eax2 + 5) & 3) != 0) {
                        sub_60F010(ebx, eax2);
                    }
                }
            } while (edi != 0);
        }
    }

label_2a7:
    {
        unsigned char cl = this->flags7;
        int edi = 1 << cl;
        if (edi != 0) {
            int ebx = edi << 5;
            void* esi = this->field10;
            esi = (char*)esi + ebx - 0x20;
            edi -= 1;
            do {
                if (*(int*)((char*)esi + 8) == 0) {
                    if (*(int*)((char*)esi + 0x18) >= 4) {
                        *(int*)((char*)esi + 0x18) = 0xb;
                    }
                } else {
                    if (local1c == 0) {
                        if (*(int*)((char*)esi + 0x18) >= 4) {
                            void* eax = *(void**)((char*)esi + 0x10);
                            if ((*(unsigned char*)((char*)eax + 5) & 3) != 0) {
                                sub_60F010(this->fieldc8, eax);
                            }
                        }
                    }
                    if (local10 == 0) {
                        if (*(int*)((char*)esi + 8) >= 4) {
                            void* esi2 = *(void**)esi;
                            if ((*(unsigned char*)((char*)esi2 + 5) & 3) != 0) {
                                sub_60F010(this->fieldc8, esi2);
                            }
                        }
                    }
                }
                esi = (char*)esi - 0x20;
                edi -= 1;
            } while (edi != 0);
        }
    }

    if (local1c != 0) return true;
    if (local10 != 0) return true;
    return false;
}
