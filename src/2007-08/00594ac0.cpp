// from server: 93% by colin
// roc 2007-08 00594ac0  unit: RBX::VLeftMotorTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594ac0
//
// 00594ac0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594ac3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594ac9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594acf  85c0                 test eax, eax
// 00594ad1  7416                 je 0x594ae9
// 00594ad3  50                   push eax
// 00594ad4  e8b9c80900           call 0x631392
// 00594ad9  83c404               add esp, 4
// 00594adc  50                   push eax
// 00594add  b96c518a00           mov ecx, 0x8a516c
// 00594ae2  ff1508e77700         call dword ptr [0x77e708]
// 00594ae8  c3                   ret 
// 00594ae9  32c0                 xor al, al
// 00594aeb  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct SubObject {
    char pad[0x318];
    type_info* field318;
};

struct Object {
    char pad[0x188];
    SubObject* field188;
};

struct VLeftMotorTool {
    char pad[0xc];
    Object* field0c;
    bool isEnabled() const;
};

extern "C" type_info* __cdecl func_00631392(type_info*);
extern "C" bool __stdcall func_0077e708(type_info*, type_info*);
extern type_info G_func_008a516c;

bool VLeftMotorTool::isEnabled() const
{
    type_info* t = field0c->field188->field318;
    if (t) {
        type_info* r = func_00631392(t);
        return r->operator==(G_func_008a516c);
    }
    return false;
}
