// from server: 94% by colin
// roc 2007-08 00595370  unit: RBX::VGrabTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595370
//
// 00595370  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595373  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595379  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059537f  85c0                 test eax, eax
// 00595381  7416                 je 0x595399
// 00595383  50                   push eax
// 00595384  e809c00900           call 0x631392
// 00595389  83c404               add esp, 4
// 0059538c  50                   push eax
// 0059538d  b9c4578a00           mov ecx, 0x8a57c4
// 00595392  ff1508e77700         call dword ptr [0x77e708]
// 00595398  c3                   ret 
// 00595399  32c0                 xor al, al
// 0059539b  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct SubObject {
    char pad[0x318];
    void* field318;
};

struct MidObject {
    char pad[0x188];
    SubObject* field188;
};

struct Outer {
    char pad[0xc];
    MidObject* field0c;

    bool isSelected() const;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" void* __stdcall sub_77e708(void*, void*);

extern type_info typeinfo_8a57c4;

bool Outer::isSelected() const {
    MidObject* m = field0c;
    SubObject* s = m->field188;
    void* p = s->field318;
    if (p) {
        void* q = sub_631392(p);
        return typeinfo_8a57c4 == *(type_info*)q;
    }
    return false;
}
