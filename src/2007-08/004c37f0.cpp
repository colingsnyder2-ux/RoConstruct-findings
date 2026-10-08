// from server: 63% by colin
// roc 2007-08 004c37f0  unit: RakPeer  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c37f0
//
// 004c37f0  56                   push esi
// 004c37f1  8b742408             mov esi, dword ptr [esp + 8]
// 004c37f5  c6460501             mov byte ptr [esi + 5], 1
// 004c37f9  8a4604               mov al, byte ptr [esi + 4]
// 004c37fc  84c0                 test al, al
// 004c37fe  7521                 jne 0x4c3821
// 004c3800  8bce                 mov ecx, esi
// 004c3802  e839ebffff           call 0x4c2340
// 004c3807  8b8610070000         mov eax, dword ptr [esi + 0x710]
// 004c380d  85c0                 test eax, eax
// 004c380f  7c09                 jl 0x4c381a
// 004c3811  50                   push eax
// 004c3812  e8596e0000           call 0x4ca670
// 004c3817  83c404               add esp, 4
// 004c381a  8a4e04               mov cl, byte ptr [esi + 4]
// 004c381d  84c9                 test cl, cl
// 004c381f  74df                 je 0x4c3800
// 004c3821  33c0                 xor eax, eax
// 004c3823  884605               mov byte ptr [esi + 5], al
// 004c3826  5e                   pop esi
// 004c3827  c20400               ret 4

struct RakPeer {
    char pad0[4];
    char field4;
    char field5;
    char pad6[0x710 - 6];
    int field710;
};

extern void func_004c2340(RakPeer* self);
extern void func_004ca670(int value);

void RakPeer_004c37f0(RakPeer* self)
{
    self->field5 = 1;
    while (self->field4 == 0) {
        func_004c2340(self);
        if (self->field710 >= 0) {
            func_004ca670(self->field710);
        }
    }
    self->field5 = 0;
}
