// from server: 40% by colin
struct PropertyDescriptor {
    int m_value;
    int m_getter;
    int m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    int getset;
    void checkFlags();
    void update();
};

extern "C" int __stdcall type_info_equal(const void*, const void*);
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

extern void* g_type_info_string;
extern void* g_type_info_vector3;
extern void* g_type_info_bool;

extern float getFloatValue(int*);
extern double getDoubleValue(int*);
extern bool getBoolValue(int*);

extern void* g_vtable_787198;
extern void* g_type_info_8827ec;
extern void* g_type_info_8999a8;
extern void* g_type_info_8827e0;

void TypedPropertyDescriptor::update() {
    void* ti = *(void**)this;
    void* type = *(void**)((char*)ti + 8);
    if (type_info_equal(type, g_type_info_8827ec)) {
        float f = getFloatValue(&this->m_value);
        int i = (int)f;
        void* p = operator_new(8);
        if (p) {
            *(void**)p = g_vtable_787198;
            *(int*)((char*)p + 4) = i;
        } else {
            p = 0;
        }
        int old = this->m_value;
        this->m_value = (int)p;
        if (old) {
            void** vt = *(void***)old;
            void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
            dtor((void*)old, 1);
        }
        this->m_value = (int)getFloatValue(&this->m_value);
    }
    ti = *(void**)this;
    type = *(void**)((char*)ti + 8);
    if (type_info_equal(type, g_type_info_8999a8)) {
        double d = getDoubleValue(&this->m_value);
        int i = (int)d;
        void* p = operator_new(8);
        if (p) {
            *(void**)p = g_vtable_787198;
            *(int*)((char*)p + 4) = i;
        } else {
            p = 0;
        }
        int old = this->m_value;
        this->m_value = (int)p;
        if (old) {
            void** vt = *(void***)old;
            void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
            dtor((void*)old, 1);
        }
        this->m_value = (int)getDoubleValue(&this->m_value);
    }
    ti = *(void**)this;
    type = *(void**)((char*)ti + 8);
    if (type_info_equal(type, g_type_info_8827e0)) {
        bool b = getBoolValue(&this->m_value);
        int i = b ? 1 : 0;
        void* p = operator_new(8);
        if (p) {
            *(void**)p = g_vtable_787198;
            *(int*)((char*)p + 4) = i;
        } else {
            p = 0;
        }
        int old = this->m_value;
        this->m_value = (int)p;
        if (old) {
            void** vt = *(void***)old;
            void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
            dtor((void*)old, 1);
        }
        this->m_value = (int)getBoolValue(&this->m_value);
    }
    this->checkFlags();
}
