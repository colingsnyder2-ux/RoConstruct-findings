// from server: 55% by colin
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    char pad2[0xfc - 0xb8 - 4];
    void* field_fc;
    void OnSomething();
};

extern "C" void __stdcall sub_62FE2A();
extern "C" void __stdcall sub_6321F0();
extern "C" void __stdcall sub_648580();
extern "C" void __stdcall sub_6485E0();
extern "C" void __stdcall sub_648600();
extern "C" void __stdcall sub_648730();
extern "C" void __stdcall sub_6496A0();
extern "C" void __stdcall sub_64C9A0();
extern "C" void __stdcall sub_64D8F0();
extern "C" void __stdcall sub_64D9B0();
extern "C" void __stdcall sub_6743D0();
extern "C" void __stdcall sub_6F0D80();
extern "C" void __stdcall sub_6F2080();
extern "C" void __stdcall sub_6F21A0();
extern "C" void __stdcall sub_6F2CA0();

void CXTPCustomizeSheet::OnSomething()
{
    void* p = field_b8;
    int* esi = *(int**)((char*)p + 0x58);
    if (esi == 0)
        return;

    int eax;
    if (esi[0x90/4] != 0)
        goto do_call;
    if (esi[0x88/4] > 0)
        goto do_call;
    {
        int* ecx = *(int**)((char*)esi + 0x158);
        if (ecx != 0) {
            if (ecx[0x2c/4] > 0)
                goto do_call;
            eax = ecx[0x28/4];
        } else {
            eax = esi[0x84/4];
        }
        if (eax == 0)
            return;
    }

do_call:
    {
        int* edx = *(int**)esi;
        edx = *(int**)((char*)edx + 0xcc);
        int local10;
        void* local10p = &local10;
        typedef void (__thiscall *Fn)(void*, void*);
        ((Fn)edx)(esi, local10p);

        int eax2;
        if (esi[0x90/4] != 0)
            goto after;
        if (esi[0x88/4] > 0)
            goto after;
        {
            int* ecx = *(int**)((char*)esi + 0x158);
            if (ecx != 0) {
                if (ecx[0x2c/4] > 0)
                    goto after;
                eax2 = ecx[0x28/4];
            } else {
                eax2 = esi[0x84/4];
            }
        }
after:
        {
            int ecx2 = local10;
            void* p2 = field_b8;
            int r = ((int (__thiscall*)(void*, int, int))sub_6321F0)(p2, eax2, ecx2);
            int edi = ((int (__thiscall*)(int))sub_64D9B0)(r);
            char buf[0x20];
            ((void (__thiscall*)(char*, int, void*))sub_6F2CA0)(buf, 1, this);
            int flag = 0;
            if (edi != 0) {
                int e = ((int (__thiscall*)(int))sub_648730)(edi);
                ((void (__thiscall*)(char*, int))sub_6F21A0)(buf, e);
            } else {
                int edx2 = local10;
                int eax3 = eax2;
                ((void (__thiscall*)(char*, int, int))sub_6F0D80)(buf, eax3, edx2);
            }
            int r2 = ((int (__thiscall*)(char*))sub_62FE2A)(buf);
            if (r2 != 1)
                goto cleanup2;

            char buf2[0x10];
            ((void (__thiscall*)(char*))sub_648580)(buf2);
            ((void (__thiscall*)(char*, char*))sub_6F2080)(buf, buf2);
            flag = 1;
            int r3 = ((int (__thiscall*)(char*))sub_648600)(buf2);
            if (r3 != 0)
                goto cleanup1;

            {
                char tmp[0x10];
                if (esi[0x90/4] == 0) {
                    ((void (__thiscall*)(char*, char*))sub_6485E0)(tmp, buf2);
                    void* p3 = field_b8;
                    int r4 = ((int (__thiscall*)(void*))sub_6321F0)(p3);
                    int r5 = ((int (__thiscall*)(int))sub_64D8F0)(r4);
                    esi[0x90/4] = r5;
                } else {
                    ((void (__thiscall*)(char*, char*))sub_6485E0)(tmp, buf2);
                    ((void (__thiscall*)(int))sub_64C9A0)(edi);
                }
                int* ecx3 = *(int**)((char*)esi + 0xfc);
                int* edx3 = *(int**)ecx3;
                int eax4 = *(int*)((char*)edx3 + 0x17c);
                ((void (__thiscall*)(int*))eax4)(ecx3);
            }

cleanup1:
            flag = 0;
            ((void (__thiscall*)(char*))sub_6496A0)(buf2);
cleanup2:
            ((void (__thiscall*)(char*))sub_6743D0)(buf);
        }
    }
}
