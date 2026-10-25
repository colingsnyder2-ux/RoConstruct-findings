// from server: 100% by tester
// roc 2010-06 00500b70  unit: Exposer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00500b70
//
// 00500b70  8b01                 mov eax, dword ptr [ecx]
// 00500b72  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00500b75  6860c9a100           push 0xa1c960
// 00500b7a  ffd2                 call edx
// 00500b7c  c3                   ret 

struct Exposer {
    void f();
};

extern char g_8c7f60;

void Exposer::f() {
    void (__thiscall *fn)(Exposer *, char *);
    fn = *(void (__thiscall **)(Exposer *, char *))(*(char **)this + 0x4c);
    fn(this, &g_8c7f60);
}
