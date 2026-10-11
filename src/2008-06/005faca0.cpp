// from server: 27% by colin
// roc 2008-06 005faca0  unit: UString_sink::?$stream_buffer  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faca0

extern "C" void __cdecl G3D_alignedFree(void* p);
extern "C" void __cdecl sub_6a067a(void* p);
extern "C" void __cdecl sub_5fa970(void* p);

struct UString_sink_stream_buffer {
    void* vtable;      // +0x00
    int   field_04;    // +0x04
    void* field_08;    // +0x08
    int   field_0c;    // +0x0c
    void* field_10;    // +0x10
    void* field_14;    // +0x14
    int   field_18;    // +0x18
    int   field_1c;    // +0x1c
    void* field_20;    // +0x20

    void dtor();
};

extern int g_97b5b8;

void UString_sink_stream_buffer::dtor()
{
    this->vtable = (void*)0x84105c;
    g_97b5b8--;

    void* p10 = this->field_10;
    if (p10 != 0) {
        sub_5fa970(p10);
        sub_6a067a(p10);
    }

    void* p20 = this->field_20;
    if (p20 != 0) {
        void** vt = *(void***)p20;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(p20, 1);
    }

    G3D_alignedFree(this->field_14);
    this->field_14 = 0;
    this->field_18 = 0;
    this->field_1c = 0;

    void* p08 = this->field_08;
    if (p08 != 0) {
        void** vt = *(void***)p08;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(p08, 1);
    }
}
