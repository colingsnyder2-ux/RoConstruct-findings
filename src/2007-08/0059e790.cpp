// from server: 51% by colin
struct RBX_BaseClass {
    void* vtable;
};

struct RBX_BackpackItem : RBX_BaseClass {
    char pad[0xbc - 4];
    void* field_bc;
    char pad2[0x158 - 0xbc - 4];
    char field_158;
};

struct RBX_HopperBin : RBX_BackpackItem {
};

struct RBX_Name {
    void* ptr;
};

struct RBX_String {
    char data[0x1c];
};

extern "C" {
    void* __stdcall sub_42a4e0(void*);
    void* __stdcall sub_48e0d0(void*);
    void* __stdcall sub_564b50(void*);
    void* __stdcall sub_59b0b0(void*);
    void* __stdcall sub_59dae0(void*, void*);
    void* __stdcall MSVCP80_77e644(void*, const char*, void*);
    void* __stdcall MSVCP80_77e69c(void*, void*);
    void* __stdcall MSVCP80_77e6ac(void*);
}

void RBX_HopperBin_ctor(RBX_HopperBin* self) {
    void* esi;
    if (self->field_bc) {
        esi = sub_42a4e0(self->field_bc);
    } else {
        esi = self;
    }
    RBX_String str;
    sub_59dae0(&str, &self->field_158);
    void* name = sub_59b0b0(&str);
    RBX_String str2;
    MSVCP80_77e644(&str2, "Tool", name);
    MSVCP80_77e6ac(&str);
    RBX_String str3;
    MSVCP80_77e69c(&str3, &str2);
    void* result = sub_564b50((char*)esi + 0x14c);
    void* vtable = *(void**)result;
    void* fn = *(void**)((char*)vtable + 8);
    typedef bool (__stdcall *FnPtr)(void*);
    bool b = ((FnPtr)fn)(result);
    if (b) {
        void* obj = sub_48e0d0(self);
        if (obj) {
            void* val = *(void**)((char*)obj + 0x310);
            void* vtable2 = *(void**)result;
            void* fn2 = *(void**)((char*)vtable2 + 0x10);
            typedef void (__stdcall *FnPtr2)(void*, void*);
            ((FnPtr2)fn2)(result, val);
        }
    }
    MSVCP80_77e6ac(&str2);
}
