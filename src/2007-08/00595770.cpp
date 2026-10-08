// from server: 92% by colin
// roc 2007-08 00595770  unit: RBX::VRocketTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595770
//
// 00595770  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595773  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595779  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059577f  85c0                 test eax, eax
// 00595781  7416                 je 0x595799
// 00595783  50                   push eax
// 00595784  e809bc0900           call 0x631392
// 00595789  83c404               add esp, 4
// 0059578c  50                   push eax
// 0059578d  b9f0598a00           mov ecx, 0x8a59f0
// 00595792  ff1508e77700         call dword ptr [0x77e708]
// 00595798  c3                   ret 
// 00595799  32c0                 xor al, al
// 0059579b  c3                   ret 

struct Inner {
    char pad[0x318];
    void* field318;
};

struct Mid {
    char pad[0x188];
    Inner* field188;
};

struct Outer {
    char pad[0xc];
    Mid* fieldc;
    bool method();
};

extern "C" void* __cdecl func_00631392(void*);
extern "C" void* __stdcall func_0077e708(void*, void*);

bool Outer::method()
{
    Mid* m = this->fieldc;
    Inner* i = m->field188;
    void* p = i->field318;
    if (p != 0) {
        void* q = func_00631392(p);
        func_0077e708((void*)0x8a59f0, q);
        return true;
    }
    return false;
}
