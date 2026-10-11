// from server: 57% by atomic.potato




extern "C" void __stdcall KillTimer(void*, unsigned int);

struct CAnimateInfo;

struct CArrayInt {
    void* vtable;
    char pad_04[0x0c];
    int* data;
    char pad_14[0x04];
    int count;
    int capacity;

    CArrayInt();
    ~CArrayInt();
};

struct CAnimateInfo {
    char pad_00[0x20];
    int field_20;
    char pad_24[0x04];
    int field_28;
    int field_2c;

    void Destroy();
};

struct CXTPCommandBarAnimation {
    void* vtable;
    char pad_04[0x0c];
    void* field_10;
    char pad_14[0x08];
    int* field_1c;
    char pad_20[0x04];
    int count;
    CAnimateInfo** data;

    void Animate(CAnimateInfo* info);
    void Process();
};

extern "C" void __stdcall sub_80af28(CArrayInt* self, void* src);
extern "C" void __stdcall sub_80af22(CArrayInt* self);
extern "C" void __stdcall sub_9cc9ea(CArrayInt* self, void* value);
extern "C" void __stdcall sub_9cc834(CArrayInt* self, int flag);
extern "C" void __stdcall sub_82a280(void* self, int a, int b);
extern "C" void __stdcall sub_80a058(void* p);
extern "C" void __stdcall sub_80a30a();

void CXTPCommandBarAnimation::Process()
{
    CArrayInt arr;
    sub_80af28(&arr, this->vtable);

    int i = 0;
    if (this->count > 0) {
        do {
            if (i < 0 || i >= this->count) {
                sub_80a30a();
            }
            CAnimateInfo* info = this->data[i];
            int j = 0;
            if (info->field_2c > 0) {
                int offset = 0;
                do {
                    if (offset < 0 || j >= info->field_2c) {
                        sub_80a30a();
                    }
                    sub_9cc9ea(&arr, (char*)info->field_28 + offset);
                    j++;
                    offset += 0x10;
                } while (j < info->field_2c);
            }
            this->Animate(info);
            sub_9cc834(&arr, 0);
            if (info->field_20 > 6) {
                sub_82a280(&this->field_1c, i, 1);
                info->Destroy();
                sub_80a058(info);
                i--;
            }
            i++;
        } while (i < this->count);
    }

    if (this->count == 0) {
        if (this->field_10 != 0) {
            KillTimer(*(void**)((char*)this->vtable + 0x20), 0xacd43);
            this->field_10 = 0;
        }
    }

    sub_80af22(&arr);
}
