// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct JointsService {
    char pad[0x2c38];
    struct List {
        char pad0[0x18];
        void* end;
        void* begin;
    } list;
    bool func(void* a, void* b);
};

void __stdcall sub_4ADFD0(void*, void*, void*);
void __stdcall sub_4AE690(void*, void*, void*, void*);
void __stdcall sub_4AED00(void*, void*, void*);
void __stdcall sub_55A8F0(void*, int);
void __stdcall sub_595230(void*);
void __stdcall sub_802890();

bool JointsService::func(void* a, void* b)
{
    if (a == 0) {
        if (b != 0) {
            RefCounted* rc = (RefCounted*)b;
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
                rc->Release();
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                rc->Release();
            }
        }
        return false;
    }

    void* local = a;
    void* iter;
    sub_4ADFD0(&list, &iter, &local);

    void* end = list.end;
    void* begin = list.begin;

    if (iter != end) {
        do {
            void* item = iter;
            sub_4AE690(item, a, this, b);
            if (iter == 0) {
                sub_802890();
                if (iter == 0) {
                    sub_802890();
                }
                sub_595230((char*)iter + 0x18);
                sub_595230((char*)iter + 0x28);
                if (*(char*)((char*)iter + 0x38) != 0) {
                    sub_55A8F0(*(void**)((char*)iter + 0x10), 0);
                }
                sub_4AED00(&list, iter, 0);
            }
            iter = *(void**)iter;
        } while (iter != end);
    }

    if (b != 0) {
        RefCounted* rc = (RefCounted*)b;
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            rc->Release();
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
            rc->Release();
        }
    }
    return true;
}
