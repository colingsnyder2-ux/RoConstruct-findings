// from server: 55% by colin
struct VCEditCXTMaskEditT {
    char pad0[0x20];
    void* field20;
    char pad24[0x68];
    char field8c;
    char pad8d[0xf];
    void* field9c;
    void* fielda0;
    char padA4[0xc];
    int fieldb0;
    int OnKeyDown(unsigned int, unsigned int, unsigned int);
};

extern "C" void* __stdcall GetParent(void*);
extern "C" short __stdcall GetKeyState(int);
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

extern "C" void* __stdcall sub_6301C0(void*);
extern "C" void __stdcall sub_630016(void*, void*);
extern "C" void* __stdcall sub_697CE0(int);
extern "C" int __stdcall sub_6F5E80(void*);
extern "C" int __stdcall sub_6F8700(void*, unsigned int, unsigned int, unsigned int);

int VCEditCXTMaskEditT::OnKeyDown(unsigned int a1, unsigned int a2, unsigned int a3)
{
    void* ecx = this->fielda0;
    if (ecx == 0)
        return 0;

    if (a1 == 9) {
        void* p = this->field9c;
        if (p != 0) {
            void* hwnd = GetParent(*(void**)((char*)p + 0x20));
            void* obj = sub_6301C0(hwnd);
            void* vtable = *(void**)obj;
            short st = GetKeyState(0x10);
            int flag = (st >= 0) ? 1 : 0;
            void* fn = *(void**)((char*)vtable + 0x148);
            typedef void (__thiscall *Fn)(void*, int, int);
            ((Fn)fn)(obj, 1, flag);
        }
        return 0;
    }

    if (a1 == 0x1b) {
        this->fieldb0 = 1;
        void* r = (void*)GetKeyState(0);
        sub_630016(this, r);
        return 0;
    }

    if (a1 == 0xd)
        return 0;

    if (a1 == 0x73) {
        void* obj = sub_697CE0(0x65);
        int r = sub_6F5E80(obj);
        if (r != 0) {
            void* p = this->fielda0;
            void* vtable = *(void**)p;
            void* fn = *(void**)((char*)vtable + 0xd0);
            typedef void (__thiscall *Fn)(void*, int);
            ((Fn)fn)(p, r);
        }
        return sub_6F8700(this, a1, a2, a3);
    }

    if (a1 == 0x28 || a1 == 0x26) {
        void* p = this->fielda0;
        void* vtable = *(void**)p;
        void* fn = *(void**)((char*)vtable + 0x58);
        typedef int (__thiscall *Fn)(void*);
        int r = ((Fn)fn)(p);
        if (r == 0) {
            void* vt2 = *(void**)this;
            void* fn2 = *(void**)((char*)vt2 + 0x168);
            int arg = (a1 == 0x28) ? 1 : -1;
            typedef int (__thiscall *Fn2)(void*, int, int);
            int r2 = ((Fn2)fn2)(this, arg, 0);
            if (r2 != 0) {
                SendMessageA(this->field20, 0xb1, 0, -1);
                SendMessageA(this->field20, 0xb7, 0, 0);
            }
        }
        return sub_6F8700(this, a1, a2, a3);
    }

    return sub_6F8700(this, a1, a2, a3);
}
