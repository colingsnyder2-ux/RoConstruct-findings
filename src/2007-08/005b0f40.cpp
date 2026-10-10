// from server: 64% by colin
struct Joint {
    char pad[0xf8];
    void* m_rigid;
    char pad2[0xc0];
    void* m_soft;
};

struct IControl {
    virtual void Prepare(Joint*);
    virtual float Speed(Joint*, float);
};

struct AJoint : Joint {
    char pad3[0x0c];
    IControl* m_icontrol;

    void setRigid(void* p);
};

extern "C" void __stdcall sub_541960(void*);
extern "C" void* __stdcall sub_418690();
extern "C" char sub_5707A0(void*, void*);
extern "C" void* __stdcall sub_48E0D0(void*);
extern "C" void* __stdcall sub_57D530(void*);
extern "C" void sub_5AA3A0(void*, void*);
extern "C" void sub_5A9F00(void*, void*);

void AJoint::setRigid(void* p) {
    sub_541960(p);
    void* esi = m_rigid;
    void* ebx;
    if (*(void**)((char*)esi + 4) == 0) {
        ebx = 0;
    } else {
        void* ecx = *(void**)((char*)esi + 4);
        void** edx = *(void***)ecx;
        int (*fn)(void*) = (int (*)(void*))edx[1];
        int r = fn(ecx);
        if (r == 8) {
            ecx = *(void**)((char*)esi + 4);
            esi = *(void**)((char*)ecx + 4);
        } else {
            esi = *(void**)((char*)esi + 4);
        }
        ebx = *(void**)((char*)esi + 0xc);
    }
    void* eax = m_soft;
    void* esi2;
    if (eax != 0) {
        esi2 = *(void**)((char*)eax + 0xc);
        void* r = sub_418690();
        char c = sub_5707A0(esi2, r);
        if (c != 0) {
            void* r2 = sub_48E0D0(this);
            if (r2 != 0) {
                esi2 = *(void**)((char*)r2 + 0x27c);
            } else {
                esi2 = 0;
            }
        } else {
            esi2 = sub_57D530(this);
        }
    } else {
        esi2 = sub_57D530(this);
    }
    if (ebx != esi2) {
        if (ebx != 0) {
            sub_5AA3A0(ebx, m_rigid);
        }
        if (esi2 != 0) {
            sub_5A9F00(esi2, m_rigid);
        }
    }
}
