// from server: 65% by colin
// roc 2007-08 00639fd0  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639fd0
//
// 00639fd0  8bc1                 mov eax, ecx
// 00639fd2  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 00639fd8  85c9                 test ecx, ecx
// 00639fda  7405                 je 0x639fe1
// 00639fdc  e9df9a0000           jmp 0x643ac0
// 00639fe1  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 00639fe7  85c9                 test ecx, ecx
// 00639fe9  7410                 je 0x639ffb
// 00639feb  e890040400           call 0x67a480
// 00639ff0  85c0                 test eax, eax
// 00639ff2  7407                 je 0x639ffb
// 00639ff4  8bc8                 mov ecx, eax
// 00639ff6  e9f581ffff           jmp 0x6321f0
// 00639ffb  e9d03f0100           jmp 0x64dfd0

struct CRobloxControlColorSelector {
    char pad[0xf4];
    void* field_f4;
    void* field_f8;
    void* field_fc;
    void* method_643ac0();
    void* method_6321f0();
    void* method_64dfd0();
};

extern void* __fastcall func_0067a480(void*);

void* __fastcall CRobloxControlColorSelector_method(CRobloxControlColorSelector* self)
{
    if (self->field_fc != 0) {
        return self->method_643ac0();
    }
    if (self->field_f4 != 0) {
        void* r = func_0067a480(self->field_f4);
        if (r != 0) {
            return ((CRobloxControlColorSelector*)r)->method_6321f0();
        }
    }
    return self->method_64dfd0();
}
