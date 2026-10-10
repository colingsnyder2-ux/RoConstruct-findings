// from server: 89% by colin
struct VClient {
    char pad[0x1d9c];
    void* field_1d9c;
    void* field_1da0;
    bool method(void* arg);
};

void* __stdcall sub_605550(void* self, void** out1, void** out2);
void __stdcall sub_77e6d8();

bool VClient::method(void* arg) {
    void* local1;
    void* local2;
    void* ebx = field_1da0;
    void* esi = &field_1d9c;
    void* edi = sub_605550(esi, &local2, &local1);
    void* eax = *(void**)edi;
    if (eax == 0 || eax != esi) {
        sub_77e6d8();
    }
    return *(void**)((char*)edi + 4) != ebx;
}
