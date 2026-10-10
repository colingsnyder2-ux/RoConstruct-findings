// from server: 39% by colin
struct Lighting {
    char pad0[4];
    int count;
    int capacity;
    char pad1[0x50];
    void* data;
    void insert(void* value);
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __cdecl sub_457DD0(void*);
extern "C" void __cdecl sub_4F7D10(void*, void*);
extern "C" void __cdecl sub_4F7D70(void*, void*);
extern "C" void __cdecl sub_4F8BF0(void*, int, int);

void Lighting::insert(void* value)
{
    if (count < capacity) {
        void* p = (char*)data + count * 0x44;
        sub_4F7D10(p, value);
        count++;
        return;
    }
    if ((unsigned int)value >= (unsigned int)data &&
        (unsigned int)value < (unsigned int)data + capacity * 0x44) {
        void* tmp;
        sub_4F7D10(&tmp, value);
        insert(&tmp);
        if (tmp) {
            int* ref = (int*)((char*)tmp + 4);
            if (InterlockedDecrement(ref) == 0) {
                sub_457DD0(tmp);
                if (tmp) {
                    void** vt = *(void***)tmp;
                    ((void (__thiscall*)(void*, int))vt[0])(tmp, 1);
                }
            }
        }
        return;
    }
    sub_4F8BF0(this, count + 1, 0);
    void* p = (char*)data + count * 0x44 - 0x44;
    sub_4F7D70(p, value);
}
