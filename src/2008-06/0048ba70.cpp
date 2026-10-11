// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Placeholder {
    char pad0[0x10];
    int* begin;
    int* end;
    int* unk18;
    int* unk1c;
    void insert(int* pos, int* first, int* last);
    void insert_helper(int* val, int* a, int* b);
};

void Placeholder::insert(int* pos, int* first, int* last) {
    int* saved = unk1c;
    int count = (end - begin) >> 2;
    int i = 0;
    unk1c = (int*)&saved;
    if (count > 0) {
        while (i < count) {
            int* p = begin + i;
            int* val = (int*)p[0];
            int* a = first;
            int* b = last;
            if (b != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
            }
            this->insert_helper(val, a, b);
            i++;
        }
    }
    unk1c = saved;
    if (last != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)last + 4), -1) == 1) {
            (*(void (__thiscall**)(void*))(*(int*)last + 4))(last);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)last + 8), -1) == 1) {
            (*(void (__thiscall**)(void*))(*(int*)last + 8))(last);
        }
    }
}
