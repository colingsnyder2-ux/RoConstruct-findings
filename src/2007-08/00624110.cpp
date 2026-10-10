// from server: 72% by colin
struct ArrowButton {
    unsigned short kind;
    int value;
};

void __stdcall incref_facet(void* p);

ArrowButton* __cdecl construct(ArrowButton* self, int* src) {
    self->kind = 0x48;
    self->value = *src;
    incref_facet(0);
    return self;
}
