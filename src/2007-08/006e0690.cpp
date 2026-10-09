// from server: 73% by colin
// roc 2007-08 006e0690  unit: CXTPDockingPaneAutoHidePanel  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0690
//
// 006e0690  8b542404             mov edx, dword ptr [esp + 4]
// 006e0694  33c0                 xor eax, eax
// 006e0696  8902                 mov dword ptr [edx], eax
// 006e0698  894204               mov dword ptr [edx + 4], eax
// 006e069b  894208               mov dword ptr [edx + 8], eax
// 006e069e  89420c               mov dword ptr [edx + 0xc], eax
// 006e06a1  894210               mov dword ptr [edx + 0x10], eax
// 006e06a4  894214               mov dword ptr [edx + 0x14], eax
// 006e06a7  894218               mov dword ptr [edx + 0x18], eax
// 006e06aa  89421c               mov dword ptr [edx + 0x1c], eax
// 006e06ad  894220               mov dword ptr [edx + 0x20], eax
// 006e06b0  894224               mov dword ptr [edx + 0x24], eax
// 006e06b3  83791804             cmp dword ptr [ecx + 0x18], 4
// 006e06b7  7525                 jne 0x6e06de
// 006e06b9  e882feffff           call 0x6e0540
// 006e06be  83b8e800000000       cmp dword ptr [eax + 0xe8], 0
// 006e06c5  7517                 jne 0x6e06de
// 006e06c7  e874feffff           call 0x6e0540
// 006e06cc  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 006e06d2  894a18               mov dword ptr [edx + 0x18], ecx
// 006e06d5  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 006e06db  89421c               mov dword ptr [edx + 0x1c], eax
// 006e06de  b8007d0000           mov eax, 0x7d00
// 006e06e3  8bc8                 mov ecx, eax
// 006e06e5  894220               mov dword ptr [edx + 0x20], eax
// 006e06e8  894a24               mov dword ptr [edx + 0x24], ecx
// 006e06eb  c20400               ret 4

struct CXTPDockingPaneAutoHidePanel {
    void f(void* out);
};

void CXTPDockingPaneAutoHidePanel::f(void* out)
{
    unsigned int* p = (unsigned int*)out;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;

    if (*(unsigned int*)((char*)this + 0x18) == 4) {
        extern void* __stdcall sub_006e0540();
        void* r = sub_006e0540();
        if (*(unsigned int*)((char*)r + 0xe8) == 0) {
            void* r2 = sub_006e0540();
            p[6] = *(unsigned int*)((char*)r2 + 0xc0);
            p[7] = *(unsigned int*)((char*)r2 + 0xc4);
        }
    }

    p[8] = 0x7d00;
    p[9] = 0x7d00;
}
