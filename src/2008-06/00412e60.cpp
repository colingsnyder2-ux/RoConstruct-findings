// from server: 62% by colin
struct CChildFrame
{
    void func_00412e60(int* param);
};

extern "C" int __stdcall IsZoomed(void*);
extern "C" void __cdecl func_006a0c68();
extern "C" int __cdecl func_006a0974();
extern "C" int __cdecl func_00412d50(int*);
extern "C" int __cdecl func_00445250(int*);

void CChildFrame::func_00412e60(int* param)
{
    func_006a0c68();
    int eax = func_006a0974();
    int* p = param;
    if (eax != 0)
    {
        if (*(char*)(eax + 0xf8) != 0)
        {
            int* q = *(int**)(eax + 0xec);
            if (*(int*)((char*)q + 0x84) == 0)
            {
                *(int*)((char*)p + 8) += 0x28;
                *(int*)((char*)p + 0xc) += 0x28;
                *(int*)((char*)p + 0x20) += 0x28;
                *(int*)((char*)p + 0x24) += 0x28;
            }
        }
    }
    if (IsZoomed(*(void**)((char*)this + 0x20)) == 0)
    {
        int local;
        func_00412d50(&local);
        func_00445250(&local);
        short a = *(short*)((char*)&local + 0);
        short b = *(short*)((char*)&local + 2);
        int x = a;
        int y = b;
        int zero1 = 0;
        int zero2 = 0;
        int out1 = 0;
        int out2 = 0;
        void (__stdcall *fn)(void*, int*, int) = *(void (__stdcall**)(void*, int*, int))((*(int**)this)[0x70/4]);
        fn(this, &out1, 0);
        *(int*)((char*)p + 0x20) = out1 - zero1;
        *(int*)((char*)p + 0x24) = out2 - zero2;
    }
}
