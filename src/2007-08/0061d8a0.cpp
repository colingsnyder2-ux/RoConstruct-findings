// from server: 42% by colin
// roc 2007-08 0061d8a0  unit: RBX::ChatOutput
// Make this compile to the exact bytes below, then: roc check 2007-08 0061d8a0

struct ChatLine {
    char pad[0x48];
    char field48;
};

struct ChatOutput {
    char pad0[0xc];
    int field0c;
    char pad10[0x1c];
    int field2c;
    float field30;
    char pad34[0x14];
    void* field48;
    char pad4c[0x2c];
    int field78;
    char pad7c[0x80];
    int fieldfc;
    char pad100[0x38];
    int field138;
    char pad13c[0x1d];
    char field159;
    void createBillboardGuiHelper(void* instance, bool character);
};

extern "C" void __stdcall sub_491a70(void* dst, void* src);
extern "C" void __stdcall sub_4919b0(void* p);
extern "C" void __stdcall sub_60bf60(void* p, void* v);
extern "C" void __stdcall sub_61c8e0(void* p);
extern "C" void __stdcall sub_61d150(void* p, void* a, void* b, float f);
extern "C" char __stdcall sub_61d250(void* p, void* s);
extern "C" char __stdcall sub_62aba0(void* p, void* s);
extern "C" void* __stdcall sub_62fef6(unsigned int n);
extern "C" void __stdcall sub_77e69c(void* p);

extern float g_7bbd24;

void ChatOutput::createBillboardGuiHelper(void* instance, bool character)
{
    if (this->field2c > 5) {
        sub_61c8e0((char*)this - 0xfc);
    }

    if (*(unsigned int*)((char*)&instance + 0x30) > 0) {
        char* s = (char*)&instance + 0x20;
        if (*(unsigned int*)((char*)&instance + 0x34) >= 0x10) {
            s = *(char**)((char*)&instance + 0x20);
        }
        if (*s == '/') {
            char buf[0x2c];
            sub_491a70(buf, (char*)&instance + 0x20);
            if (sub_61d250((char*)this - 0xfc, buf) == 1) {
                goto done;
            }
        }
    }

    {
        int* p = (int*)this->field0c;
        int edi = *(int*)((char*)p + 0x138);
        if (edi != 0 && *(char*)(edi + 0x159) != 0) {
            goto done;
        }

        {
            char buf[0x1c];
            sub_77e69c(buf);
            char al = sub_62aba0((char*)this + 0x10, buf);
            if (edi != 0 && *(int*)buf != edi && al != 0) {
                goto done;
            }

            {
                ChatLine* line = (ChatLine*)sub_62fef6(0x4c);
                if (line != 0) {
                    float f = this->field30 + g_7bbd24;
                    sub_61d150(line, *(void**)buf, (char*)&instance + 0x20, f);
                } else {
                    line = 0;
                }
                line->field48 = 0;
                sub_60bf60((char*)this + 0x1c, &line);
            }
        }
    }

done:
    sub_4919b0((char*)&instance + 0x20);
}
