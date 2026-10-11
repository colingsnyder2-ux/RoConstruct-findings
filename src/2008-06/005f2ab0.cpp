// from server: 61% by colin
extern "C" void* __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);

struct UString_sink_stream_buffer {
    int get();
};

int UString_sink_stream_buffer::get()
{
    if (*(int*)(*(char**)((char*)this + 0x20)) == 0) {
        void* p = *(void**)((char*)this);
        void (*fn)(void*) = *(void (**)(void*))((char*)p + 0x54);
        fn(this);
    }

    char* cur = *(char**)((char*)this + 0x20);
    int a = *(int*)cur;
    int* b = *(int**)((char*)this + 0x30);
    int c = *b;
    int end = c + a;
    if ((unsigned int)a < (unsigned int)end) {
        char* p = *(char**)((char*)this + 0x20);
        return (unsigned char)*p;
    }

    char* p = *(char**)((char*)this + 0x20);
    int eax = *(int*)p;
    int* d = *(int**)((char*)this + 0x10);
    int ecx = eax - *d;
    int* ebx = (int*)((char*)this + 0x54);
    int* src;
    if (*ebx < ecx) {
        src = &ecx;
    } else {
        src = ebx;
    }
    int edi = *src;
    if (edi != 0) {
        memmove_s((void*)edi, (unsigned int)(eax - edi), (void*)edi, (unsigned int)(*(int*)((char*)this + 0x4c) - edi + *ebx));
    }

    int ecx2 = *(int*)((char*)this + 0x4c);
    int edx2 = *ebx;
    int eax2 = ecx2 + edx2;
    int* edx3 = *(int**)((char*)this + 0x10);
    int ecx3 = eax2 - edi;
    *edx3 = ecx3;
    int* ecx4 = *(int**)((char*)this + 0x20);
    *ecx4 = eax2;
    int edx4 = eax2 - eax2;
    int* eax3 = *(int**)((char*)this + 0x30);
    *eax3 = edx4;
    int ebx2 = *ebx;
    int ecx5 = *(int*)((char*)this + 0x50);
    int edx5 = *(int*)((char*)this + 0x4c);
    int eax4 = *(int*)((char*)this + 0x48);
    ecx5 -= ebx2;
    edx5 += ebx2;
    void* esi = (char*)this + 0x40;
    ((void (*)(void*, int, int, int))0x5f29e0)(esi, eax4, edx5, ecx5);
    return 0;
}
