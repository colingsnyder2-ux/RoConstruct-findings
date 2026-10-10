// from server: 51% by colin
struct VHttpRequest_source_stream_buffer {
    int put(int);
};

extern "C" void __stdcall sub_54B740(void*, void*, int, int);

int VHttpRequest_source_stream_buffer::put(int value)
{
    if ((*(unsigned int*)((char*)this + 0x58) >> 3) & 1) {
        if (*(int*)(*(int*)((char*)this + 0x24)) == 0) {
            (*(void(__thiscall**)(void*))(*(int*)this + 0x58))(this);
        }
    }

    if (value == -1)
        return 0;

    if ((*(unsigned int*)((char*)this + 0x58) >> 3) & 1) {
        int* p24 = *(int**)((char*)this + 0x24);
        int* p34 = *(int**)((char*)this + 0x34);
        int a = *p24;
        int b = *p34;
        int end = a + b;
        if (a == end) {
            int* p14 = *(int**)((char*)this + 0x14);
            int c = *p14;
            int d = *p24;
            int diff = d - c;
            if (diff > 0) {
                sub_54B740((char*)this + 0x40, *(void**)((char*)this + 0x48), c, diff);
            }
            p24 = *(int**)((char*)this + 0x24);
            a = *p24;
            end = a + b;
            if (a == end)
                return -1;
        }
        *(unsigned char*)a = (unsigned char)value;
        *(int*)(*(int**)((char*)this + 0x34)) -= 1;
        *(int*)(*(int**)((char*)this + 0x24)) += 1;
        return value;
    }

    sub_54B740((char*)this + 0x40, *(void**)((char*)this + 0x48), (int)&value, 1);
    return 0;
}
