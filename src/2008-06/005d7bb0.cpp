// from server: 60% by tester
struct GetSetImpl {
    int (__stdcall *get)(void*, void*);
    int (__stdcall *set)(void*, void*);
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int Invoke(void* a, void* b);
};

int GetSetImpl::Invoke(void* a, void* b)
{
    int* obj = (int*)a;
    if (obj != 0)
        obj = (int*)((char*)obj - 0x14);
    else
        obj = 0;
    int idx = this->field_20;
    int* base = (int*)((char*)obj + 0x150);
    int* slot = (int*)((char*)base + idx);
    int val = *slot + this->field_1c;
    int (__stdcall *fn)(void*, void*) = (int (__stdcall *)(void*, void*))this->field_18;
    return fn((void*)((char*)obj + 0x150 + val), b);
}
