// from server: 50% by colin
struct StreamBuffer {
    int read(void* dst, int count);
};

extern "C" void __stdcall sub_54E090(void* dst, void* src);
extern "C" void __stdcall sub_630B9E(void* a, void* b);

int __fastcall sub_550920(StreamBuffer* self, int, int arg)
{
    char b0, b1, b2, b3;
    int r;

    r = self->read(&b0, 1);
    if (r != 1) goto fail0;
    if (b0 == 0xFF || b0 == 0xFE) goto fail0;

    r = self->read(&b1, 1);
    if (r != 1) goto fail1;
    if (b1 == 0xFF || b1 == 0xFE) goto fail1;

    r = self->read(&b2, 1);
    if (r != 1) goto fail2;
    if (b2 == 0xFF || b2 == 0xFE) goto fail2;

    r = self->read(&b3, 1);
    if (r != 1) goto fail3;
    if (b3 == 0xFF || b3 == 0xFE) goto fail3;

    return ((int)b3 << 24) | ((int)b2 << 16) | ((int)b1 << 8) | (int)b0;

fail3:
    sub_54E090(&b0, (void*)arg);
    sub_630B9E(&b0, (void*)0x85A414);
fail2:
    sub_54E090(&b0, (void*)arg);
    sub_630B9E(&b0, (void*)0x85A414);
fail1:
    sub_54E090(&b0, (void*)arg);
    sub_630B9E(&b0, (void*)0x85A414);
fail0:
    sub_54E090(&b0, (void*)arg);
    sub_630B9E(&b0, (void*)0x85A414);
    return 0;
}
