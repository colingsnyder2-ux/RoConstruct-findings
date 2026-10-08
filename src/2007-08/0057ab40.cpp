// from server: 63% by colin
// roc 2007-08 0057ab40  unit: RBX::Workspace  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ab40
//
// 0057ab40  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0057ab46  8b5004               mov edx, dword ptr [eax + 4]
// 0057ab49  c6813803000000       mov byte ptr [ecx + 0x338], 0
// 0057ab50  81c128020000         add ecx, 0x228
// 0057ab56  ffd2                 call edx
// 0057ab58  8bc8                 mov ecx, eax
// 0057ab5a  e971ee0100           jmp 0x5999d0

struct Workspace {
    char pad[0x228];
    void* field_228;
    char pad2[0x338 - 0x22c];
    bool field_338;
    void* getMouseCommand();
};

void* __stdcall sub_5999d0(void*);

void* Workspace::getMouseCommand() {
    void* p = field_228;
    void* (__stdcall *fn)(void*) = *(void* (__stdcall **)(void*))((char*)p + 4);
    field_338 = false;
    void* r = fn((char*)this + 0x228);
    return sub_5999d0(r);
}
