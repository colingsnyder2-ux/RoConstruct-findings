// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXString {
    char pad[0x1c];
};

struct Descriptor {
    char pad0[4];
    RBXString name;
};

struct Parameter {
    char pad0[4];
    RBXString name;
};

struct Signature {
    char pad0[0x18];
    void* argsBegin;
    void* argsEnd;
};

struct EventDescriptor {
    char pad0[4];
    RBXString name;
    char pad1[4];
    Descriptor* owner;
    char pad2[0x10];
    Signature* signature;
};

struct Visitor {
    void (__cdecl *function)(int*, RBXString*, Parameter*&);
    int* count;
    RBXString* text;
    void operator()(Parameter*& parameter) { function(count, text, parameter); }
};

struct CDeclarationView {
    void func(void* item);
};

extern "C" void* __cdecl sub_6A17C6(int, void*, void*, int, void*);
extern "C" void __cdecl sub_434020(int, void*, void*);
extern "C" void* __cdecl sub_445020(void*, void*);
extern "C" void* __cdecl sub_443B00(void*, void*);
extern "C" void* __cdecl sub_443AB0(void*, void*);
extern "C" void* __cdecl sub_443B50(void*, void*);
extern "C" void* __cdecl sub_443210(void*, void*, int);
extern "C" void __cdecl sub_600660(void*);
extern "C" void* __cdecl sub_509B10(void*, const char*, void*, void*);
extern "C" void __cdecl sub_435630(void*, void*, void*, void*, void*, void*);

extern "C" void* (__stdcall *p_802460)(void*);
extern "C" void* (__stdcall *p_80240C)(void*, const char*);
extern "C" void* (__stdcall *p_802448)(void*, const char*);
extern "C" void* (__stdcall *p_80244C)(void*, const char*);
extern "C" void* (__stdcall *p_802450)(void*, const RBXString*);
extern "C" void* (__stdcall *p_802464)(void*);
extern "C" void* (__stdcall *p_802468)(void*);

extern char str_event[];
extern char str_colon[];
extern char str_paren[];
extern char str_comma[];
extern char str_event2[];

void CDeclarationView::func(void* item)
{
    if (item == 0) {
        sub_434020(0, 0, 0);
        return;
    }

    RBXString decl;
    p_802460(&decl);

    void* ed = sub_6A17C6(0, str_event, (void*)0x928fe8, 0, item);
    void* result = 0;

    if (ed != 0) {
        EventDescriptor* e = (EventDescriptor*)ed;
        p_80240C(&decl, (const char*)((char*)e->name.pad + 0x1c + 4));
        p_802448(&decl, str_colon);
        p_802450(&decl, (const RBXString*)((char*)e->name.pad + 4));
        p_802448(&decl, str_paren);

        Signature* sig = e->signature;
        int count = 0;
        Visitor v;
        v.function = 0;
        v.count = &count;
        v.text = &decl;
        sub_435630(&v, sig->argsBegin, sig->argsEnd, &decl, &count, 0);

        p_802448(&decl, str_paren);

        void* tmp = sub_445020(&tmp, e->name.pad);
        void* obj = *(void**)tmp;
        result = sub_443B00(obj, e);
    } else {
        void* ed2 = sub_6A17C6(0, str_event2, (void*)0x928fe8, 0, item);
        if (ed2 != 0) {
            EventDescriptor* e = (EventDescriptor*)ed2;
            p_80240C(&decl, (const char*)((char*)e->name.pad + 0x1c + 4));
            p_802448(&decl, str_colon);
            p_802450(&decl, (const RBXString*)((char*)e->name.pad + 4));

            void* tmp = sub_445020(&tmp, e->name.pad);
            void* obj = *(void**)tmp;
            result = sub_443AB0(obj, e);
        } else {
            void* ed3 = sub_6A17C6(0, (void*)0x92cbfc, (void*)0x928fe8, 0, item);
            if (ed3 != 0) {
                EventDescriptor* e = (EventDescriptor*)ed3;
                p_80244C(&decl, str_event);
                p_802450(&decl, (const RBXString*)((char*)e->name.pad + 4));
                p_802448(&decl, str_paren);

                Signature* sig = e->signature;
                int count = 0;
                Visitor v;
                v.function = 0;
                v.count = &count;
                v.text = &decl;
                sub_435630(&v, sig->argsBegin, sig->argsEnd, &decl, &count, 0);

                p_802448(&decl, str_paren);

                void* tmp = sub_445020(&tmp, e->name.pad);
                void* obj = *(void**)tmp;
                result = sub_443B50(obj, e);
            } else {
                void* ed4 = sub_6A17C6(0, (void*)0x92f3f8, (void*)0x928fe8, 0, item);
                if (ed4 != 0) {
                    EventDescriptor* e = (EventDescriptor*)ed4;
                    void* nameStr = p_802464((char*)e->name.pad + 4);
                    void* tmp = sub_509B10(&tmp, str_comma, e->name.pad, nameStr);
                    p_80240C(&decl, (const char*)tmp);
                    p_802468(&tmp);
                }
            }
        }
    }

    void* declStr = p_802464(&decl);
    sub_434020(0, result, declStr);
    p_802468(&decl);
}
