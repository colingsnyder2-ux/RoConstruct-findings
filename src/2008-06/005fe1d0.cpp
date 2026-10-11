// from server: 69% by colin
struct Tool {
    char pad[0x104];
    int field_104;
    void method();
};

extern void* __cdecl G1_func_0049ac80();
extern int __cdecl G1_func_005d9a20(void*);
extern void* __cdecl G1_func_005fdf00(void*);
extern void* __cdecl G1_func_0048c470(void*);
extern void __cdecl G1_func_0055a8f0(void*, void*);

void Tool::method()
{
    void* esi = G1_func_0049ac80();
    if (esi) {
        void* edi = *(void**)((char*)esi + 0x170);
        if (edi) {
            if (G1_func_005d9a20(edi)) {
                void* eax = G1_func_005fdf00(edi);
                if (eax) {
                    void** vtbl = *(void***)eax;
                    typedef bool (__thiscall *Fn)(void*);
                    Fn fn = (Fn)vtbl[0x8c/4];
                    if (!fn(eax)) {
                        goto skip;
                    }
                }
            }
        }
        {
            int edi2 = this->field_104;
            void* eax2 = G1_func_0048c470(esi);
            if (edi2 != (int)eax2) {
                void* eax3 = G1_func_0048c470(esi);
                G1_func_0055a8f0(this, eax3);
            }
        }
    }
skip:
    ;
}
