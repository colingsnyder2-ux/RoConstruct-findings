// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl __std_call_736ed0();
extern "C" void __cdecl __std_call_555530();
extern "C" void __cdecl __std_call_5d65c0();
extern "C" void __cdecl __std_call_5d6c60();
extern "C" void __cdecl __std_call_5d6d60();
extern "C" void __cdecl __std_call_5d8670(void*, void*);
extern "C" void __cdecl __std_call_50b0e0();
extern "C" void __cdecl __std_call_5d56f0();

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct GuiDrawImage {
    char pad[0x118];
    int m_state;
    float m_sizeX;
    float m_sizeY;
    char pad2[0x1c];
    float m_posX;
    float m_posY;
    float m_posZ;
    float m_posW;
    float m_scaleX;
    float m_scaleY;
    float m_scaleZ;
    float m_scaleW;
};

struct UnifiedImageWidget {
    char pad0[0xc0];
    void* m_list;
    char pad1[0x4c];
    unsigned char m_flag110;
    char pad2[0x4];
    GuiDrawImage m_guiImageDraw;
    char pad3[0x8];
    int m_imageState;
    char pad4[0x4];
    float m_unk12c;
    float m_unk130;
    float m_unk134;
    float m_unk138;
    void construct(const void* imageName, int imageState);
};

void UnifiedImageWidget::construct(const void* imageName, int imageState)
{
    char localBuf[0x30];
    void* localPtr;
    void* localPtr2;
    int i;

    __std_call_736ed0();
    *(unsigned short*)(localBuf + 0x24) = 0x32;
    *(unsigned short*)(localBuf + 0x26) = 0x28;
    __std_call_555530();
    float* fptr = (float*)localBuf;
    fptr[0] = 2.0f;
    fptr[1] = 1.0f;
    fptr[2] = 1.0f;
    fptr[3] = 1.0f;
    fptr[4] = 0.0f;
    fptr[5] = 0.0f;
    fptr[6] = 0.0f;
    fptr[7] = 0.0f;
    __std_call_5d65c0();

    __std_call_5d6c60();
    __std_call_5d6d60();
    __std_call_5d6d60();

    i = 0;
    while (true) {
        void* list = *(void**)((char*)this + 0xc0);
        if (list == 0) break;
        void* begin = *(void**)((char*)list + 4);
        if (begin == 0) break;
        void* end = *(void**)((char*)list + 8);
        int count = ((char*)end - (char*)begin) >> 3;
        if (i >= count) break;

        void* item = *(void**)((char*)begin + i * 8);
        void* arg;
        if (item != 0) {
            arg = (char*)item + 0xa4;
        } else {
            arg = 0;
        }
        __std_call_5d8670(&localPtr, arg);

        GuiDrawImage* gd = &m_guiImageDraw;
        gd->m_state = 0xe;
        float f = (float)gd->m_state;
        f = f * *(float*)0x796468;
        gd->m_sizeX = f + f;
        gd->m_sizeY = f;

        __std_call_50b0e0();
        float* v = (float*)localBuf;
        gd->m_posX = v[0];
        gd->m_posY = v[1];
        gd->m_posZ = v[2];
        gd->m_posW = 1.0f;

        __std_call_736ed0();
        float* v2 = (float*)localBuf;
        m_unk12c = v2[0];
        m_unk130 = v2[1];
        m_unk134 = v2[2];
        m_unk138 = v2[3];

        gd->m_scaleX = *(float*)0x7bbd50;
        gd->m_scaleY = *(float*)0x7bbd4c;

        if (localPtr != 0) {
            RefCounted* rc = (RefCounted*)localPtr;
            if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                void (*fn)(void*) = *(void(**)(void*))((char*)rc->vptr + 4);
                fn(rc);
                if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                    void (*fn2)(void*) = *(void(**)(void*))((char*)rc->vptr + 8);
                    fn2(rc);
                }
            }
        }
        i++;
    }

    m_flag110 = 0;
    if (localPtr2 != 0) {
        RefCounted* rc = (RefCounted*)localPtr2;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void (*fn)(void*) = *(void(**)(void*))((char*)rc->vptr + 4);
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                void (*fn2)(void*) = *(void(**)(void*))((char*)rc->vptr + 8);
                fn2(rc);
            }
        }
    }
}
