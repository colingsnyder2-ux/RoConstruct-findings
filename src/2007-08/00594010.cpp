// from server: 92% by colin
// roc 2007-08 00594010  unit: RBX::VResizeTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594010
//
// 00594010  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594013  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594019  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059401f  85c0                 test eax, eax
// 00594021  7416                 je 0x594039
// 00594023  50                   push eax
// 00594024  e869d30900           call 0x631392
// 00594029  83c404               add esp, 4
// 0059402c  50                   push eax
// 0059402d  b9c84b8a00           mov ecx, 0x8a4bc8
// 00594032  ff1508e77700         call dword ptr [0x77e708]
// 00594038  c3                   ret 
// 00594039  32c0                 xor al, al
// 0059403b  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct Sub {
    char pad[0x318];
    type_info* field318;
};

struct Mid {
    char pad[0x188];
    Sub* field188;
};

struct Outer {
    char pad[0xc];
    Mid* fieldC;
    bool f();
};

extern "C" void* __cdecl sub_631392(void*);
struct CallObject {
};
extern "C" bool (__thiscall *sub_77e708)(CallObject*, void*);

bool Outer::f() {
    Mid* m = fieldC;
    Sub* s = m->field188;
    type_info* t = s->field318;
    if (t) {
        void* r = sub_631392(t);
        return sub_77e708((CallObject*)0x8a4bc8, r);
    }
    return false;
}
