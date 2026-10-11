// from server: 71% by colin
// roc 2008-06 005b6370  unit: RBX::PartTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6370
//
// 005b6370  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005b6373  85c0                 test eax, eax
// 005b6375  7414                 je 0x5b638b
// 005b6377  8b542404             mov edx, dword ptr [esp + 4]
// 005b637b  8d88cc010000         lea ecx, [eax + 0x1cc]
// 005b6381  8b01                 mov eax, dword ptr [ecx]
// 005b6383  8b4010               mov eax, dword ptr [eax + 0x10]
// 005b6386  6a00                 push 0
// 005b6388  52                   push edx
// 005b6389  ffd0                 call eax
// 005b638b  c20400               ret 4

struct PartTool {
    void method(int);
};

void PartTool::method(int arg) {
    char* p = *(char**)((char*)this + 0x18);
    if (p) {
        char* q = p + 0x1cc;
        void* vtbl = *(void**)q;
        void (*fn)(void*, int, int) = *(void (**)(void*, int, int))((char*)vtbl + 0x10);
        fn(q, arg, 0);
    }
}
