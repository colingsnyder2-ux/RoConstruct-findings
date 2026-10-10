// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SharedPtr {
    void* ptr;
    void* controlBlock;
};

struct Mouse {
    char pad[0x1b0];
    void* field_1b0;
    SharedPtr cacheInputObject(const SharedPtr& inputObject);
};

extern "C" void __fastcall sub_59D0A0(void* self, SharedPtr* out);
extern "C" void __fastcall sub_5D4350(SharedPtr* out);
extern "C" void __fastcall sub_402A60(void* self, void** other);

SharedPtr Mouse::cacheInputObject(const SharedPtr& inputObject)
{
    SharedPtr result;
    result.ptr = 0;
    result.controlBlock = 0;

    SharedPtr temp;
    temp.ptr = 0;
    temp.controlBlock = 0;

    if (field_1b0 != 0) {
        sub_59D0A0(field_1b0, &temp);
    } else {
        sub_5D4350(&temp);
    }

    result.ptr = temp.ptr;
    temp.ptr = 0;
    sub_402A60(&result.controlBlock, &temp.controlBlock);

    if (temp.controlBlock != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)temp.controlBlock + 4), -1) == 1) {
            void** vtbl = *(void***)temp.controlBlock;
            ((void(__thiscall*)(void*))vtbl[1])(temp.controlBlock);
            if (_InterlockedExchangeAdd((volatile long*)((char*)temp.controlBlock + 8), -1) == 1) {
                void** vtbl2 = *(void***)temp.controlBlock;
                ((void(__thiscall*)(void*))vtbl2[2])(temp.controlBlock);
            }
        }
    }

    return result;
}
