// from server: 75% by colin
// roc 2007-08 006844b0  unit: RBX::PAVSoundChannel::?$sp_counted_impl_pd  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006844b0
//
// 006844b0  56                   push esi
// 006844b1  57                   push edi
// 006844b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006844b6  85ff                 test edi, edi
// 006844b8  8bf1                 mov esi, ecx
// 006844ba  7414                 je 0x6844d0
// 006844bc  8d4668               lea eax, [esi + 0x68]
// 006844bf  85c0                 test eax, eax
// 006844c1  7406                 je 0x6844c9
// 006844c3  83782000             cmp dword ptr [eax + 0x20], 0
// 006844c7  7507                 jne 0x6844d0
// 006844c9  e812f8ffff           call 0x683ce0
// 006844ce  eb1c                 jmp 0x6844ec
// 006844d0  8d4e68               lea ecx, [esi + 0x68]
// 006844d3  85c9                 test ecx, ecx
// 006844d5  7415                 je 0x6844ec
// 006844d7  83792000             cmp dword ptr [ecx + 0x20], 0
// 006844db  740f                 je 0x6844ec
// 006844dd  8bc7                 mov eax, edi
// 006844df  f7d8                 neg eax
// 006844e1  1bc0                 sbb eax, eax
// 006844e3  83e005               and eax, 5
// 006844e6  50                   push eax
// 006844e7  e85ebafaff           call 0x62ff4a
// 006844ec  8bce                 mov ecx, esi
// 006844ee  897e64               mov dword ptr [esi + 0x64], edi
// 006844f1  e8eaf6ffff           call 0x683be0
// 006844f6  8bce                 mov ecx, esi
// 006844f8  e843f8ffff           call 0x683d40
// 006844fd  5f                   pop edi
// 006844fe  5e                   pop esi
// 006844ff  c20400               ret 4

struct SoundChannel {
    char pad[0x64];
    int field_64;
    char pad2[0x20];
    int field_88;
    void sub_683ce0();
    void sub_683be0();
    void sub_683d40();
    void func(int);
};

extern "C" void __stdcall sub_62ff4a(int);

void SoundChannel::func(int arg) {
    if (arg != 0) {
        char* p = (char*)this + 0x68;
        if (p != 0 && *(int*)(p + 0x20) != 0) {
            goto label_d0;
        }
        sub_683ce0();
        goto label_ec;
    }
label_d0:
    {
        char* p = (char*)this + 0x68;
        if (p != 0 && *(int*)(p + 0x20) != 0) {
            int v = arg;
            v = -v;
            v = (v < 0) ? -1 : 0;
            v = v & 5;
            sub_62ff4a(v);
        }
    }
label_ec:
    field_64 = arg;
    sub_683be0();
    sub_683d40();
}
