// from server: 40% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct JointsService {
    void removeJointInstance(void*);
};

struct AIFleeController {
    void* vptr0;
    void* vptr1;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void destroy();
};

void AIFleeController::destroy()
{
    this->vptr0 = (void*)0x83a0c8;
    this->vptr1 = (void*)0x83a0bc;
    if (this->field10) {
        ((JointsService*)((char*)this->field10 + 0x130))->removeJointInstance(&this->fieldC);
    }
    if (this->field1C) {
        volatile long* p = (volatile long*)((char*)this->field1C + 8);
        if (_InterlockedExchangeAdd(p, -1) == 1) {
            void** vt = *(void***)this->field1C;
            ((void(__thiscall*)(void*))vt[2])(this->field1C);
        }
    }
    if (this->field14) {
        volatile long* p = (volatile long*)((char*)this->field14 + 4);
        if (_InterlockedExchangeAdd(p, -1) == 1) {
            void** vt = *(void***)this->field14;
            ((void(__thiscall*)(void*))vt[1])(this->field14);
        }
        volatile long* p2 = (volatile long*)((char*)this->field14 + 8);
        if (_InterlockedExchangeAdd(p2, -1) == 1) {
            void** vt = *(void***)this->field14;
            ((void(__thiscall*)(void*))vt[2])(this->field14);
        }
    }
    this->vptr0 = (void*)0x81e1e0;
}
