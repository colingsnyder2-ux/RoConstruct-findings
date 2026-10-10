// from server: 20% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct SoundChannel {
    SoundChannel* next;
    SoundChannel* prev;
    char pad[4];
    void* field_0c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    void* field_20;
    void* field_24;
    void f();
};

struct SoundChannelList {
    SoundChannel* head;
    SoundChannel* tail;
};

struct String {
    char buf[0x1c];
    void* ptr;
    void* field_20;
    void* field_24;
};

extern "C" void __stdcall sub_77E69C(void*, void*);
extern "C" void __stdcall sub_77E6D8();

void SoundChannel::f()
{
    SoundChannelList* list = (SoundChannelList*)this;
    SoundChannel* cur = list->head;
    SoundChannel* end = list->tail;
    while (cur != end) {
        if (cur == 0 || cur == list->tail) {
            sub_77E6D8();
        }
        if (cur != end) {
            if (cur == 0) {
                sub_77E6D8();
            }
            if (cur->next != end) {
                sub_77E6D8();
            }
            String* s = (String*)((char*)cur + 0xc);
            sub_77E69C(s, s);
            void* p3 = *(void**)((char*)cur + 0x30);
            if (p3) {
                _InterlockedExchangeAdd((volatile long*)((char*)p3 + 4), 1);
            }
            void (*fn)(void*) = *(void (**)(void*))((char*)this + 0x54);
            fn((char*)cur + 0x14);
            cur = cur->next;
        }
    }
}
