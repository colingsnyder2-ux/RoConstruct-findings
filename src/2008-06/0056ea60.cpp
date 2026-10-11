// from server: 38% by colin
struct VVector3 {};

struct PropDesc {
    void* vtable;
    void* field4;
    void __cdecl setValue(int type, void* value);
};

extern "C" int __stdcall type_info_equal(void* a, void* b);

extern void* __cdecl func_0056cbc0();
extern void* __cdecl func_006a0920(int size);
extern float __cdecl func_00415ff0(void* p);
extern double __cdecl func_00416080(void* p);
extern char __cdecl func_00415f60(void* p);
extern void __cdecl func_0056d410();

extern void* g_802878;
extern void* g_8106cc;
extern void* g_929644;
extern void* g_92bedc;
extern void* g_92bee8;

void PropDesc::setValue(int type, void* value)
{
    void* (*typeCheck)(void*, void*) = (void* (*)(void*, void*))g_802878;
    void* p;

    if (typeCheck(g_92bedc, *(void**)((char*)this->vtable + 8))) {
        float f = func_00415ff0(&this->field4);
        int iv = (int)f;
        p = func_006a0920(8);
        if (p) {
            *(void**)p = g_8106cc;
            *(int*)((char*)p + 4) = iv;
        } else {
            p = 0;
        }
        void* old = this->field4;
        if (&this->field4 != &this->field4) {
            old = this->field4;
        }
        this->field4 = p;
        if (old) {
            void** vt = *(void***)old;
            void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
            dtor(old, 1);
        }
        this->vtable = func_0056cbc0();
    }

    if (typeCheck(g_92bee8, *(void**)((char*)this->vtable + 8))) {
        double d = func_00416080(&this->field4);
        int iv = (int)d;
        p = func_006a0920(8);
        if (p) {
            *(void**)p = g_8106cc;
            *(int*)((char*)p + 4) = iv;
        } else {
            p = 0;
        }
        void* old = this->field4;
        if (&this->field4 != &this->field4) {
            old = this->field4;
        }
        this->field4 = p;
        if (old) {
            void** vt = *(void***)old;
            void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
            dtor(old, 1);
        }
        this->vtable = func_0056cbc0();
    }

    if (typeCheck(g_929644, *(void**)((char*)this->vtable + 8))) {
        char b = func_00415f60(&this->field4);
        int iv = b != 0;
        p = func_006a0920(8);
        if (p) {
            *(void**)p = g_8106cc;
            *(int*)((char*)p + 4) = iv;
        } else {
            p = 0;
        }
        void* old = this->field4;
        if (&this->field4 != &this->field4) {
            old = this->field4;
        }
        this->field4 = p;
        if (old) {
            void** vt = *(void***)old;
            void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
            dtor(old, 1);
        }
        this->vtable = func_0056cbc0();
    }

    func_0056d410();
}
