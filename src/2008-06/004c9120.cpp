// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCounted {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedPtr {
    RefCounted* ptr;
    RefCounted* ctrl;
};

struct PartInstance;
struct ModelInstance;
struct Replicator;

struct Nugget {
    SharedPtr part;
    int lastUpdate;
    double lag;
    SharedPtr history;
};

struct NuggetList {
    void* head;
    int count;
};

struct InterpolatingPhysicsReceiver {
    void* vtable;
    Replicator* replicator;
    NuggetList nuggets;
    SharedPtr job;
    int connection;
    void receive(int id, int timeStamp, ModelInstance* noLagModel);
};

extern "C" void __cdecl finish(const char*, int);
extern "C" void* __cdecl getGlobal();
extern "C" int __cdecl sub_4a8b60(int, void*, void*);
extern "C" void* __cdecl sub_4c7530(void*, void*);
extern "C" int __cdecl sub_4c72b0(void*);
extern "C" void* __cdecl sub_4c7a10(void*, void*);
extern "C" void __cdecl sub_4c8150(void*, int, int, int);
extern "C" void __cdecl sub_4c8da0(void*, int, int, int, int);
extern "C" void __cdecl sub_4c8ef0(void*, void*, void*);
extern "C" void __cdecl sub_456e80(void*);
extern "C" void __cdecl sub_4af950(void*);
extern "C" int __cdecl sub_5995f0(void*, void*);
extern "C" void* __cdecl sub_5e7570(void*);
extern "C" int __cdecl sub_5e60e0(void*);
extern "C" void* __cdecl sub_5a8440(void*, void*);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, const char*, int, const char*);
extern "C" void __cdecl sub_802468(void*);

void InterpolatingPhysicsReceiver::receive(int id, int timeStamp, ModelInstance* noLagModel)
{
    Nugget* nugget = 0;
    void* iter = 0;
    SharedPtr found;
    found.ptr = 0;
    found.ctrl = 0;

    void* result = 0;
    if (sub_4a8b60(id, &found, &iter)) {
        if (found.ptr) {
            void* hist = sub_4c7530((char*)found.ptr + 0xe4, &result);
            SharedPtr tmp;
            tmp.ptr = *(RefCounted**)hist;
            tmp.ctrl = *(RefCounted**)((char*)hist + 4);
            if (tmp.ctrl != found.ctrl) {
                if (tmp.ctrl) {
                    _InterlockedExchangeAdd(&tmp.ctrl->strong, 1);
                }
                if (found.ctrl) {
                    if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
                        found.ctrl->dispose();
                        if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                            found.ctrl->destroy();
                        }
                    }
                }
                found.ctrl = tmp.ctrl;
            }
            if (tmp.ptr) {
                if (_InterlockedExchangeAdd(&tmp.ptr->strong, -1) == 1) {
                    tmp.ptr->dispose();
                    if (_InterlockedExchangeAdd(&tmp.ptr->weak, -1) == 1) {
                        tmp.ptr->destroy();
                    }
                }
            }
        }
    } else {
        void* g = getGlobal();
        if (*(char*)((char*)g + 0x130)) {
            void* str = sub_5a8440(&result, &id);
            void* s2 = sub_569620(&found);
            const char* cstr;
            if (*(int*)((char*)str + 0x18) < 0x10) {
                cstr = (const char*)str + 4;
            } else {
                cstr = *(const char**)((char*)str + 4);
            }
            sub_5693a0(*(void**)s2, "Physics-in of unidentified %s", 2, cstr);
            if (found.ctrl) {
                if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
                    found.ctrl->dispose();
                    if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                        found.ctrl->destroy();
                    }
                }
            }
            sub_802468(&result);
        }
    }

    if (found.ptr) {
        SharedPtr a;
        a.ptr = found.ptr;
        a.ctrl = found.ctrl;
        if (found.ctrl) {
            _InterlockedExchangeAdd(&found.ctrl->strong, 1);
        }
        if (!sub_5995f0(&a, &found)) {
            void* g = getGlobal();
            if (*(char*)((char*)g + 0x130)) {
                void* str = sub_5a8440(&result, &id);
                void* s2 = sub_569620(&found);
                const char* cstr;
                if (*(int*)((char*)str + 0x18) < 0x10) {
                    cstr = (const char*)str + 4;
                } else {
                    cstr = *(const char**)((char*)str + 4);
                }
                sub_5693a0(*(void**)s2, "Physics-in of part not in workspace %s", 1, cstr);
                if (found.ctrl) {
                    if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
                        found.ctrl->dispose();
                        if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                            found.ctrl->destroy();
                        }
                    }
                }
                sub_802468(&result);
            }
            if (found.ctrl) {
                if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
                    found.ctrl->dispose();
                    if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                        found.ctrl->destroy();
                    }
                }
            }
            found.ptr = 0;
            found.ctrl = 0;
        } else {
            void* asm_ = sub_5e7570((char*)found.ptr + 0x228);
            if (!asm_) {
                void* g = getGlobal();
                if (*(char*)((char*)g + 0x130)) {
                    void* str = sub_5a8440(&result, &id);
                    void* s2 = sub_569620(&found);
                    const char* cstr;
                    if (*(int*)((char*)str + 0x18) < 0x10) {
                        cstr = (const char*)str + 4;
                    } else {
                        cstr = *(const char**)((char*)str + 4);
                    }
                    sub_5693a0(*(void**)s2, "Physics-in of primitive with no assembly %s", 1, cstr);
                    if (found.ctrl) {
                        if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
                            found.ctrl->dispose();
                            if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                                found.ctrl->destroy();
                            }
                        }
                    }
                    sub_802468(&result);
                }
                sub_456e80(&found);
            } else {
                void* asm2 = sub_5e7570((char*)found.ptr + 0x228);
                if (sub_5e60e0(asm2)) {
                    void* g = getGlobal();
                    if (*(char*)((char*)g + 0x130)) {
                        void* str = sub_5a8440(&result, &id);
                        void* s2 = sub_569620(&found);
                        const char* cstr;
                        if (*(int*)((char*)str + 0x18) < 0x10) {
                            cstr = (const char*)str + 4;
                        } else {
                            cstr = *(const char**)((char*)str + 4);
                        }
                        sub_5693a0(*(void**)s2, "Physics-in of anchored assembly %s", 1, cstr);
                        if (found.ctrl) {
                            if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
                                found.ctrl->dispose();
                                if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                                    found.ctrl->destroy();
                                }
                            }
                        }
                        sub_802468(&result);
                    }
                    sub_456e80(&found);
                }
            }
        }
    }

    if (nugget) {
        sub_4c72b0(nugget);
        int idx = *(int*)((char*)nugget + 4);
        if (idx != timeStamp) {
            sub_4c8da0(nugget, id, timeStamp, (int)noLagModel, 0);
        } else {
            void* tmp2 = 0;
            sub_4c7a10(&tmp2, &found);
            sub_4c8150(&tmp2, id, timeStamp, (int)noLagModel);
            if (found.ptr) {
                sub_4c8ef0(nugget, &tmp2, &found);
            }
            sub_4af950(&tmp2);
        }
    }

    if (found.ctrl) {
        if (_InterlockedExchangeAdd(&found.ctrl->strong, -1) == 1) {
            found.ctrl->dispose();
            if (_InterlockedExchangeAdd(&found.ctrl->weak, -1) == 1) {
                found.ctrl->destroy();
            }
        }
    }
}
