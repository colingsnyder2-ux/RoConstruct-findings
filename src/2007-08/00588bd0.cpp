// from server: 21% by colin
struct SoundChannel {
    void func_00588bd0(int* a, int* b);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void __cdecl func_00587ae0();

void SoundChannel::func_00588bd0(int* a, int* b)
{
    int* ebx;
    int* esi;
    int* edi;

    esi = *(int**)((char*)this + 4);
    ebx = *(int**)esi;

    while (1) {
        if (esi != 0 && esi != (int*)this) {
            _invalid_parameter_noinfo();
        }

        edi = *(int**)((char*)this + 4);
        if (ebx == edi) {
            break;
        }

        (*a)++;

        if (esi == 0) {
            _invalid_parameter_noinfo();
        }

        if (ebx == *(int**)((char*)esi + 4)) {
            _invalid_parameter_noinfo();
        }

        {
            int* ecx = *(int**)((char*)ebx + 0x2c);
            if (*(int**)((char*)ecx + 8) == 0) {
                (*b)++;
            }
        }

        func_00587ae0();

        ebx = *(int**)((char*)esi);
        esi = *(int**)((char*)this + 4);
    }
}
