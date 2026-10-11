// from server: 31% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
extern "C" bool __cdecl string_less(const void*, const void*);

struct RefCounted {
    char pad0[4];
    volatile long ref1;
    volatile long ref2;
};

struct CRobloxTreeCtrlNode {
    char pad0[0x0c];
    void* field_0c;
    char pad10[0x4c];
    void* field_5c;
    void* field_58;
    char pad60[0x24];
    int field_84;
    int field_88;
    void method();
};

extern "C" void* __stdcall sub_424b60(int);
extern "C" void* __stdcall sub_6a0f56(void*, void*);
extern "C" void __stdcall sub_411b40(void*);
extern "C" void __stdcall sub_5773c0(void*);

void CRobloxTreeCtrlNode::method()
{
    void* p;
    void* node;
    void* item;
    int cmp;
    void* local18[2];
    char local28[0x4c];
    int flag;

    p = sub_424b60(field_88);
    flag = -1;

    if (field_5c != 0)
        p = *(void**)((char*)field_5c + 0x80);
    else
        p = (void*)0xffff0000;

    item = (void*)SendMessageA(*(void**)((char*)field_58 + 0x20), 0x110a, 4, (long)p);

    while (item != 0) {
        node = sub_6a0f56(field_58, item);
        cmp = field_84 - *(int*)((char*)node + 0x84);
        if (cmp > 0) {
            flag = (int)item;
        } else if (cmp == 0) {
            void* vt = *(void**)field_58;
            void* (*fn)(void*, void*) = *(void*(**)(void*, void*))((char*)vt + 0x154);
            void* r = fn(field_58, local18);
            RefCounted* rc = *(RefCounted**)r;
            if (rc != 0) {
                _InterlockedExchangeAdd(&rc->ref1, 1);
            }
            sub_411b40(local28);
            if (rc != 0) {
                if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
                    void* vt2 = *(void**)rc;
                    void (*d1)(void*) = *(void(**)(void*))((char*)vt2 + 4);
                    d1(rc);
                    if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                        void* vt3 = *(void**)rc;
                        void (*d2)(void*) = *(void(**)(void*))((char*)vt3 + 8);
                        d2(rc);
                    }
                }
            }
            if (string_less((char*)node + 0xc + 0x110, (char*)this + 0xc + 0x110)) {
                flag = (int)item;
                sub_5773c0(local28);
            } else {
                sub_5773c0(local28);
            }
        } else {
            break;
        }
        {
            void* vt = *(void**)((char*)field_58 + 0x54);
            void* (*fn)(void*, void*, int) = *(void*(**)(void*, void*, int))((char*)vt + 4);
            item = fn((char*)field_58 + 0x54, item, 1);
        }
    }

    SendMessageA(*(void**)((char*)field_58 + 0x20), 0x1100, 0, (long)&flag);
}
