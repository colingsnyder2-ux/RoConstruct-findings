// from server: 57% by colin
// roc 2007-08 00541f60  unit: RBX::VInstance::?$NonFactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541f60

struct VInstance {
    char pad[0xbc];
    void* field_bc;
    void* field_c0;

    void someMethod();
};

struct Container {
    void* begin;
    void* end;
};

extern "C" void __stdcall invalid_parameter_noinfo();

void* __fastcall sub_487c10(VInstance* self);
void __fastcall sub_541630(void* self, void* arg);

void VInstance::someMethod()
{
    if (sub_487c10(this) != 0) {
        void (__stdcall *fn)() = invalid_parameter_noinfo;
        for (;;) {
            Container* c = (Container*)field_c0;
            void* b = field_bc;
            if (c->begin != 0) {
                if (((char*)c->end - (char*)c->begin) >> 3 != 0) {
                    goto do_call;
                }
            }
            fn();
        do_call:
            sub_541630(*(void**)c->begin, b);
            if (sub_487c10(this) == 0)
                break;
        }
    }
}
