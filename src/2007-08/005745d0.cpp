// from server: 77% by colin
// roc 2007-08 005745d0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005745d0
//
// 005745d0  8bc1                 mov eax, ecx
// 005745d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005745d6  85c9                 test ecx, ecx
// 005745d8  7405                 je 0x5745df
// 005745da  83c1fc               add ecx, -4
// 005745dd  eb02                 jmp 0x5745e1
// 005745df  33c9                 xor ecx, ecx
// 005745e1  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 005745e7  56                   push esi
// 005745e8  8b7010               mov esi, dword ptr [eax + 0x10]
// 005745eb  8b1432               mov edx, dword ptr [edx + esi]
// 005745ee  03500c               add edx, dword ptr [eax + 0xc]
// 005745f1  8b4008               mov eax, dword ptr [eax + 8]
// 005745f4  8d8c0aec000000       lea ecx, [edx + ecx + 0xec]
// 005745fb  ffd0                 call eax
// 005745fd  d900                 fld dword ptr [eax]
// 005745ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574603  d919                 fstp dword ptr [ecx]
// 00574605  5e                   pop esi
// 00574606  d94004               fld dword ptr [eax + 4]
// 00574609  d95904               fstp dword ptr [ecx + 4]
// 0057460c  d94008               fld dword ptr [eax + 8]
// 0057460f  8bc1                 mov eax, ecx
// 00574611  d95908               fstp dword ptr [ecx + 8]
// 00574614  c20800               ret 8

struct PartInstance {
    char pad[8];
    int field8;
    int fieldC;
    int field10;
};

struct GetSetImpl {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char pad14[0xec - 0x14];
    int fieldEC;
};

struct S {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char pad14[0xec - 0x14];
    int fieldEC;
    float* getValue(PartInstance* part, float* out);
};

float* S::getValue(PartInstance* part, float* out) {
    GetSetImpl* impl;
    if (part != 0) {
        impl = (GetSetImpl*)((char*)part - 4);
    } else {
        impl = 0;
    }
    int offset = impl->fieldEC;
    int idx = this->field10;
    int base = *(int*)(offset + idx);
    base += this->fieldC;
    float* (__thiscall *fn)(void*) = *(float* (__thiscall **)(void*))((char*)this + 8);
    float* result = fn((char*)impl + base + 0xec);
    out[0] = result[0];
    out[1] = result[1];
    out[2] = result[2];
    return out;
}
