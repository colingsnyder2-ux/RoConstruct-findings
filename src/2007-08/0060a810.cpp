// from server: 70% by colin
// roc 2007-08 0060a810  unit: RBX::WeldJoint  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a810
//
// 0060a810  8b4108               mov eax, dword ptr [ecx + 8]
// 0060a813  83ec30               sub esp, 0x30
// 0060a816  39442438             cmp dword ptr [esp + 0x38], eax
// 0060a81a  56                   push esi
// 0060a81b  57                   push edi
// 0060a81c  8d7928               lea edi, [ecx + 0x28]
// 0060a81f  7403                 je 0x60a824
// 0060a821  8d7958               lea edi, [ecx + 0x58]
// 0060a824  39442444             cmp dword ptr [esp + 0x44], eax
// 0060a828  7505                 jne 0x60a82f
// 0060a82a  83c128               add ecx, 0x28
// 0060a82d  eb03                 jmp 0x60a832
// 0060a82f  83c158               add ecx, 0x58
// 0060a832  8d442408             lea eax, [esp + 8]
// 0060a836  50                   push eax
// 0060a837  e874a8e6ff           call 0x4750b0
// 0060a83c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0060a840  50                   push eax
// 0060a841  56                   push esi
// 0060a842  8bcf                 mov ecx, edi
// 0060a844  e8b789e6ff           call 0x473200
// 0060a849  5f                   pop edi
// 0060a84a  8bc6                 mov eax, esi
// 0060a84c  5e                   pop esi
// 0060a84d  83c430               add esp, 0x30
// 0060a850  c20c00               ret 0xc

struct Vec3 {
    int x, y, z;
};

extern "C" void __stdcall sub_4750B0(void* out, void* in);
extern "C" void __stdcall sub_473200(void* self, void* a, void* b);

struct WeldJoint {
    char pad[8];
    int field8;
    char pad2[0x28 - 0xc];
    int field28;
    char pad3[0x58 - 0x2c];
    int field58;
    int method(int a, int b, int c);
};

int WeldJoint::method(int a, int b, int c) {
    int* p;
    if (a == field8) {
        p = (int*)((char*)this + 0x28);
    } else {
        p = (int*)((char*)this + 0x58);
    }
    int* q;
    if (b == field8) {
        q = (int*)((char*)this + 0x28);
    } else {
        q = (int*)((char*)this + 0x58);
    }
    Vec3 v;
    sub_4750B0(&v, q);
    sub_473200(p, &v, (void*)c);
    return c;
}
