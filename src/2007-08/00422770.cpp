// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long ref1;
    long ref2;
};

struct Inner {
    void* vptr;
    long ref1;
    long ref2;
};

struct Sub {
    char pad[0xc0];
    void* field_c0;
};

struct Node {
    char pad0[0xc];
    Sub* sub;
};

struct TreeCtrl {
    char pad0[0x30];
    void* field_30;
};

struct S {
    char pad0[0xc];
    Node* node;
    bool method();
};

struct Iter {
    void* first;
    void* second;
};

struct Holder {
    void* ptr;
};

extern "C" void __cdecl sub_40D550(void*);
extern "C" void __cdecl sub_4178F0(void*, void*);
extern "C" int __cdecl sub_41F6F0(void*);
extern "C" void* __cdecl sub_442C60(void*, void*, int);
extern "C" void __cdecl sub_444B70(void*);
extern "C" void __cdecl sub_5595A0(void*);

bool S::method()
{
    void* local24 = 0;
    void* local28 = 0;
    void* local2c = 0;
    void* local30 = 0;
    void* local34 = 0;
    void* local38 = 0;

    void* vt = *(void**)this->node->sub;
    void* (__thiscall *fn)(void*, void*) = *(void* (__thiscall**)(void*, void*))((char*)vt + 0x14c);
    void* result = fn(this->node->sub, &local24);

    void* obj = *(void**)result;
    void* obj2 = *(void**)((char*)result + 4);

    local38 = 0;
    local34 = &local24;

    if (obj2 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)obj2 + 4), 1);
    }

    sub_40D550(&local30);

    void* p = local28;
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void* v = *(void**)p;
            void (__thiscall *f)(void*) = *(void (__thiscall**)(void*))((char*)v + 4);
            f(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void* v2 = *(void**)p;
                void (__thiscall *f2)(void*) = *(void (__thiscall**)(void*))((char*)v2 + 8);
                f2(p);
            }
        }
    }

    Node* n = this->node;
    Sub* s = n->sub;

    Iter it;
    sub_4178F0((char*)s + 0xc0, &it);

    void* first = it.first;
    if (first == 0) {
        void* second = it.second;
        if (second != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)second + 4), -1) == 1) {
                void* v = *(void**)second;
                void (__thiscall *f)(void*) = *(void (__thiscall**)(void*))((char*)v + 4);
                f(second);
                if (_InterlockedExchangeAdd((volatile long*)((char*)second + 8), -1) == 1) {
                    void* v2 = *(void**)second;
                    void (__thiscall *f2)(void*) = *(void (__thiscall**)(void*))((char*)v2 + 8);
                    f2(second);
                }
            }
        }
        sub_5595A0(&local2c);
        return false;
    }

    void* end = *(void**)((char*)first + 8);
    if (*(unsigned*)((char*)first + 4) > (unsigned)end) {
        _invalid_parameter_noinfo();
    }
    void* cur = *(void**)((char*)first + 4);
    if ((unsigned)cur > *(unsigned*)((char*)first + 8)) {
        _invalid_parameter_noinfo();
    }

    while (cur != end) {
        Holder h;
        sub_444B70(&h);

        if ((unsigned)cur >= *(unsigned*)((char*)first + 8)) {
            _invalid_parameter_noinfo();
        }

        void* v = *(void**)cur;
        void* vf = *(void**)((char*)v + 0xc);
        void* r = sub_442C60(vf, h.ptr, 1);
        if (r != 0) {
            if (sub_41F6F0(r) >= 0) {
                void* second = it.second;
                if (second != 0) {
                    if (_InterlockedExchangeAdd((volatile long*)((char*)second + 4), -1) == 1) {
                        void* v2 = *(void**)second;
                        void (__thiscall *f)(void*) = *(void (__thiscall**)(void*))((char*)v2 + 4);
                        f(second);
                        if (_InterlockedExchangeAdd((volatile long*)((char*)second + 8), -1) == 1) {
                            void* v3 = *(void**)second;
                            void (__thiscall *f2)(void*) = *(void (__thiscall**)(void*))((char*)v3 + 8);
                            f2(second);
                        }
                    }
                }
                void* second2 = it.second;
                if (second2 != 0) {
                    if (_InterlockedExchangeAdd((volatile long*)((char*)second2 + 4), -1) == 1) {
                        void* v2 = *(void**)second2;
                        void (__thiscall *f)(void*) = *(void (__thiscall**)(void*))((char*)v2 + 4);
                        f(second2);
                        if (_InterlockedExchangeAdd((volatile long*)((char*)second2 + 8), -1) == 1) {
                            void* v3 = *(void**)second2;
                            void (__thiscall *f2)(void*) = *(void (__thiscall**)(void*))((char*)v3 + 8);
                            f2(second2);
                        }
                    }
                }
                sub_5595A0(&local2c);
                return true;
            }
        }

        void* second = it.second;
        if (second != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)second + 4), -1) == 1) {
                void* v2 = *(void**)second;
                void (__thiscall *f)(void*) = *(void (__thiscall**)(void*))((char*)v2 + 4);
                f(second);
                if (_InterlockedExchangeAdd((volatile long*)((char*)second + 8), -1) == 1) {
                    void* v3 = *(void**)second;
                    void (__thiscall *f2)(void*) = *(void (__thiscall**)(void*))((char*)v3 + 8);
                    f2(second);
                }
            }
        }

        if ((unsigned)cur >= *(unsigned*)((char*)first + 8)) {
            _invalid_parameter_noinfo();
        }
        cur = (char*)cur + 8;
    }

    void* second = it.second;
    if (second != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)second + 4), -1) == 1) {
            void* v2 = *(void**)second;
            void (__thiscall *f)(void*) = *(void (__thiscall**)(void*))((char*)v2 + 4);
            f(second);
            if (_InterlockedExchangeAdd((volatile long*)((char*)second + 8), -1) == 1) {
                void* v3 = *(void**)second;
                void (__thiscall *f2)(void*) = *(void (__thiscall**)(void*))((char*)v3 + 8);
                f2(second);
            }
        }
    }

    sub_5595A0(&local2c);
    return false;
}
